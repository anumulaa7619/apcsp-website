
#include <stdio.h>
#include <math.h>
#include <string.h>

float areaOfCircle(float r) 
{
  float area = (M_PI * r * r);
  return area;
}

//hello
//This is an function defined before the int main which returns an area us$

int main(int argc, char* argv[])
{
  //first check to see if two args (3 including program name) were entered 
  if (argc != 4)
  {
    printf("%s : expected 2 args and an operation\n", argv[0]);
    return 1;
  }

  // at this point we know we have two args, let's check that they are floats
  float arg1;
  
  // ssscanf scans a string for a format - in this case an float (%f) and returns
  // the number of items found
  
  int found = sscanf(argv[1], "%f", &arg1);
  if (found != 1)
  {
    printf("first arg is not a valid number\n");
    return 1;
  }

  float arg2;
  found = sscanf(argv[3], "%f", &arg2);
  if (found != 1)
  {
    printf("second arg is not a valid input\n");
    return 1;
  }
  
  char arg3[50];
  found = sscanf(argv[2], "%s", &arg3);
  char add[10] = "+";
  char minus[10] = "-";
  char mul[10] = "*";
  char div[10] = "/";
  char fact[10] = "!";
  char mod[10] = "%";
  float ans;
  //for (float r = arg1; r <= arg2; r++)          //Interates through the in$
  //{
  //      float compute = areaOfCircle(r);
  //      printf("A circle of r = %f is has area = %f\n", r, compute);
  //}
  if (strcmp(arg3, add) == 0)
  {
    ans = arg1 + arg2;
    printf("%f\n", ans);
  }
  else if (strcmp(arg3, minus) == 0)
  {
    ans = arg1 - arg2;
    printf("%f\n", ans);
  }
  else if (strcmp(arg3, mul) == 0)
  {
    ans = arg1 * arg2;
    printf("%f\n", ans);
  }else if (strcmp(arg3, div) == 0)
  {
    ans = arg1 / arg2;
    printf("%f\n", ans);
  }
  else if (strcmp(arg3, fact) == 0)
  {
    if (ceilf(arg1) == arg1)
    {
      ans = 1;
      for (float i = arg1; i > 0; i=i-1)
      {
        ans = ans*i;
      }
      printf("%f\n", ans);
    }
    else
    {
      printf("Invalid Opperation, enter an integer to use factorial function");
    }
  }
      
  else
  {
    printf("Invalid Opperation");
  }
  
  
   
