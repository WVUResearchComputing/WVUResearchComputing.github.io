#include <stdio.h>
#include <stdlib.h>

void sieve(unsigned char *, int);
   
int main(int argc, char *argv[])
{
  /* Declaring variables */
  unsigned char *array;
  int n;

  /* Reading command line arguments */
  if ( argc != 2 ) /* argc should be 2 for correct execution */
    {
      /* We print argv[0] assuming it is the program name */
      printf( "usage: %s max_number\n", argv[0] );
    }
  else
    {
      n=atoi(argv[1]);
      array =(unsigned char *)malloc((n+1)*sizeof(unsigned char));
      printf(" Sieve for prime numbers up to %d\n", n);
      sieve(array,n);
    }
  return 0;
}

void sieve(unsigned char *a, int n)
{
  int i=0, j=0, counter=0;

  for(i=2; i<=n; i++) {
    a[i] = 1;
  }

  for(i=2; i<=n; i++) {
    if(a[i] == 1) {
      for(j=i; j<= (int)(n/i + 1); j++) {
        if ((i*j)<=n) a[(i*j)] = 0;
      }
    }
  }
      
  if (n<=1000) {
      for(i=2; i<=n; i++) {
        if(a[i] == 1)
          printf("%d ", i);
      }
      printf("\n\n");
  }
  else {
      for(i=2; i<=n; i++) {
        if(a[i] == 1)
          counter+=1;
      }
      printf(" Total number of primes: %d \n", counter);
  }
}

