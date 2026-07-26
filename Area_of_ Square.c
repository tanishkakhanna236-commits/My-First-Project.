#include <stdio.h>
int main(){
  printf("the program started\n");                       //start of program
  int r = 0;                                           //taking input
  float area = 0;
  printf("enter the value of r:");                     //used for printing output
  scanf("%d", &r);                                     //storing the value to memory location
  area = r*r;                                          //applying formula
  printf("the area of square: %f", area);              
  return 0;}

OUTPUT
the program started
enter the value of r:66
the area of square: 4356.000000
