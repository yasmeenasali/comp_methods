#include <stdio.h>
#include <stdlib.h>

int main()
{
  double sum = 0; 
  int length = 0;
  float number;
  while (fscanf(stdin, "%f", &number) == 1){
    sum += number;
    length += 1;
  }
  float avg = sum / length; 
  printf("Average is %f", avg);
  return 0;
}

