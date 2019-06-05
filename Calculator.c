
#include <stdio.h>
#include <math.h>

float areaOfCircle(float r) 
{
  float area = (M_PI * r * r);
  return area;
}

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
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1)
  {
    printf("second arg is not a valid input\n");
    return 1;
  }
  
  char arg3;
  found = sscanf(argv[3], "%c", &arg3);
  if (found != 1)
  {
    printf("operation is not defined, enter a valid operation\n");
    return 1;
  }
  
  //for (float r = arg1; r <= arg2; r++)          //Interates through the in$
  //{
  //      float compute = areaOfCircle(r);
  //      printf("A circle of r = %f is has area = %f\n", r, compute);
  //}
  
  if (char arg3 == "+")
  {
    float sum = arg1 + arg2;
    printf("%f\n", sum);
  }
  
  if (char arg3 == "-")
  {
    float diff = arg1 - arg2;
    printf("%f\n", diff);
  }
  
  if (char arg3 == "*")
  {
    float prod = arg1 * arg2;
    printf("%f\n", prod);
  }
  
  if (char arg3 == "-")
  {
    float quot = arg1 / arg2;
    printf("%f\n", quot);
  }
  
  
  
  
}
