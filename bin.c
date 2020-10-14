#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N_bin = 10; 
  int min_value = 0, max_value = 1;
  int bin_index;
  float number;
  
  int bins[N_bin];  
  int i;
  for (i = 0; i < N_bin; i++){
    bins[i] = 0;
  }

  while (fscanf(stdin, "%f", &number) == 1){
    bin_index = (int)floor((number - min_value)/(max_value - min_value) * N_bin); 
    bins[bin_index] += 1;
  }

  for (i = 0; i < N_bin; i++){
    printf("%d\n", bins[i]);
  }
  return 0;
}

