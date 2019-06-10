<!DOCTYPE html>
<html>
  <head>
    <title>Form Input 2</title>
    <link href="calc.css" rel="stylesheet" type="text/css"/>
    <link href="https://fonts.googleapis.com/css?family=Lato:900|Philosopher|Spectral+SC" rel="stylesheet">
  </head>


  <body>

    <h1 class="center hff" style="background: linear-gradient(141deg, #ED2828 0%, #ED5828 51%, #ED6A28 75%);" id="PH">Final Project - Calculator</h1>
    <p class="center hff" id="PH">By Arjun Anumula & Trevor Cai</p>
    <b class="center hff" id="PH">To compute the operations below, input the operation in the arg2 and your inputs in arg1 and arg3. Also enter "s" into the function box</b>
    <p>Add  (+)</p>
    <p>Subtract (-)</p>
    <p>Multiply (*)</p>
    <p>Divide (/)</p>
    <p>Factorial (!)</p>
    <p>Modulus, or remainder when divided (mod)</p>
    <br>
    <b class="center hff" id="PH">To compute more advanced operations, input a different phrase into the function box.</b>
    <p>Area of Circle: Function: aoc | arg1: radius </p>
    <p>Area of Triangle: Function: aot | arg1: width | arg2: height </p>
    

    <br>
    

    <?php
       // define variables and set to empty values
       $arg1 = $arg2 = $arg3 = $arg4 = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
	 $arg1 = test_input($_POST["arg1"]);
         $arg2 = test_input($_POST["arg2"]);
	 $arg3 = test_input($_POST["arg3"]);
	 $arg4 = test_input($_POST["arg4"]);
         
         //May have to modify this line to include another argument
         exec("/usr/lib/cgi-bin/sp1a/Calculator " . $arg1 . " " . $arg2 . " " . $arg3 . " " . $arg4, $output, $retc); 
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Function: <input type="text" name="arg1"><br><br><br>
      Arg1: <input type="text" name="arg2">
      Arg2: <input type="text" name="arg3">
      Arg3: <input type="text" name="arg4">
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
         echo $arg2;
         echo "<br>";
         echo $arg3;
         echo "<br>";
         echo $arg4;
         echo "<br>";
       
         echo "<h2>Ans:</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       }hi
    ?>
    
  </body>
</html>
