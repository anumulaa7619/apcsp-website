#include <stdio.h>
#include <math.h>
#include <string.h>

float aoc(float r) {
  float area = (M_PI * r * r);
  return area;
}
float aot(float h, float b){
  float area = (0.5*(h * b));
  return area;
}
float mo(float b, float o){
  int c = 1;
  int count = 0;
  float a = b;
  float d;
  float m = o;
  while (c == 1){
    a = a - m;
    if ( a >= 0 ){
      count++;
    } else{
      c = 0;
    }
  }
  d = b - (count * o);
  printf("%f", d);
  return d;
}

int main(int argc, char* argv[]){
  
  
  
  char arg1[10];
  int found = sscanf(argv[1], "%s", arg1);
  
  
  float arg2;
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1){
    printf("first arg is not a valid number\n");
    return 1;
  }

  
  float arg4;
  if (argc > 4){
  found = sscanf(argv[4], "%f", &arg4);
  }
  //if (found != 1)
  //{
    //printf("second arg is not a valid input\n");
    //return 1;
  //}
  
  

  char add[10] = "+";
  char minus[10] = "-";
  char mul[10] = "x";
  char div[10] = "/";
  char fact[10] = "fact";
  char mod[10] = "%";
  float ans;





  if (strcmp(arg1, "s") == 0){
    char arg3[50];
    found = sscanf(argv[3], "%s", arg3);
    if (strcmp(arg3, add) == 0){
      ans = arg2 + arg4;
      printf("%f\n", ans);
    } else if (strcmp(arg3, minus) == 0){
      ans = arg2 - arg4;
      printf("%f\n", ans);
    } else if (strcmp(arg3, mul) == 0){
      ans = arg2 * arg4;
      printf("%f\n", ans);
    } else if (strcmp(arg3, div) == 0){
      ans = arg2 / arg4;
      printf("%f\n", ans);
    } else if (strcmp(arg3, fact) == 0){
      ans = 1;
      for (int i = arg2; i > 1; i = i -1){
        ans = ans * i;
      }
      printf("%f\n", ans);
    } else if (strcmp(arg3, "mod") == 0){
      mo(arg2, arg4);
    } else{
      printf("Invalid Operation");
    }
  } else if (strcmp(arg1, "aoc") == 0){
    ans = aoc(arg2);
    printf("%f", ans);
  } else if (strcmp(arg1, "aot") == 0){
    float arg3;
    sscanf(argv[3], "%f", &arg3);
    ans = aot(arg2, arg3);
    printf("%f", ans);
  } else {
    printf("Invalid Calc Type");
  }








  //if (strcmp(arg3, "area of circle") == 0){
    //ans = aoc(arg1);
    //printf("%f", ans);
  //} else if (strcmp(arg3, "area of triangle") == 0){
    //ans = aot(arg1, arg3);
   // printf("%f", ans);
  //} 
  //else if (strcmp(arg3, add) == 0){
  //  ans = arg1 + arg3;
  //  printf("%f\n", ans);
  //} else if (strcmp(arg3, minus) == 0){
  //    ans = arg1 - arg3;
  //    printf("%f\n", ans);
  //} else if (strcmp(arg3, mul) == 0){
  //  ans = arg1 * arg3;
  //   printf("%f\n", ans);
  //} else if (strcmp(arg3, div) == 0){
  //    ans = arg1 / arg3;
  //    printf("%f\n", ans);
  //} else if (strcmp(arg3, fact) == 0){
  //   printf("test");
  //    found = sscanf(argv[1], "%d", &arg1);
  //} else{
  //  printf("Invalid Operation");
  //}
  //if (found == 1){
  //  ans = 1;
  //  for (float i = 0; i < arg1 - 1; i++){
  //    int count = arg1; 
  //    ans = ans * count;
  //   count = count - 1;
  //    printf("%f", ans);
  //  } 
  //} else{
  //    printf("Invalid Operation, enter an integer to use factorial function");
  //  } 
  
  
}
