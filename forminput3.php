<!DOCTYPE html>
<html>
  <head>
    <title>Form Input 2</title>
    <link href="calc.css" rel="stylesheet" type="text/css"/>
    <link href="https://fonts.googleapis.com/css?family=Lato:900|Philosopher|Spectral+SC" rel="stylesheet">
  </head>


  <body>

    <h1 class="center hff" id="PH">Final Project - Calculator</h1>
    <p>By Arjun Anumula & Trevor Cai</p>
    <b class="center hff" id="PH">To compute basic arithmetic, enter the following symbols:</b>
    <p>Add  (+)</p>
    <p>Subtract (-)</p>
    <p>Multiply (*)</p>
    <p>Divide (/)</p>
    <p>Exponent (^)</p>
    <p>Modulus, or remainder when divided (%)</p>
    <br>
    <b>To compute more advanced operations on a single number, leave the second argument blank</b>
    <p>Factorial (!)</p>
    

    <br>
    

    <?php
       // define variables and set to empty values
       $arg1 = $arg2 = $arg3 = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $arg3 = test_input($_POST["arg3"]);
	 $arg2 = test_input($_POST["arg2"]);
         
         //May have to modify this line to include another argument
         exec("/usr/lib/cgi-bin/sp1a/Calculator " . $arg1 . " " . $arg3 . " " . $arg2, $output, $retc); 
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Arg1: <input type="text" name="arg1">
      Operation: <input type="text" name="arg3">
      Arg2: <input type="text" name="arg2">
      <br>
      <br>
      <input type="submit" value="Go!">
    </form>

    <?php
       // only display if return code is numeric - i.e. exec has been called
       if (is_numeric($retc)) {
         echo "<h2>Your Input:</h2>";
         echo $arg1;
         echo "<br>";
         echo $arg3;
         echo "<br>";
         echo $arg2;
         echo "<br>";
       
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
         echo "<h2>Program Return Code:</h2>";
         echo $retc;
       }hi
    ?>
    
  </body>
</html>
