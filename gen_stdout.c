#include <stdio.h>
#include <stdlib.h>

#include "ran3.c"

//global var
long idum = -3;

float getRan(float func(long *)) {
  return func(&idum);
  }

void gen_rand(int num)
{
  int i;
  //FILE *fp = fopen("stored_nums.bin","wb");
  float ran3(long *idum);
  
  for (i = 0; i < num; i++) { 
    //using the rand() function from stdlib
    //int rand(void);
    //double val = rand()/(double)RAND_MAX; //specify RAND_MAX with rand() % RAND_MAX 

    //using paolo's ran3.c script 
    double val = getRan(ran3);

    // formatted output (human readable) 
    //printf("%d\n", val); //printing ascii to stdout
    fprintf(stdout, "%f\n", val); //as above, explicitly specify output stream as stdout

    // binary output (much faster, not readable) 
    //fwrite(&val, sizeof(val), 1, stdout); //write to stdout in binary  
    //fwrite(&val, sizeof(val), 1, fp); //write to file in binary 
  } 
}

int main()    
{
  int num = 1000;
  gen_rand(num); 
  return 0;
}
