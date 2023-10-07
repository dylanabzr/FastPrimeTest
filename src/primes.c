#include <math.h>

char isPrime(unsigned long long int num){
  if (!(num%2) && num < 2) return 0;
  if (num == 2) return 1;
  unsigned long long int sqrtnum = sqrt(num);
  unsigned long long i = 5;
  int w = 2;
  int skip_values[23] = {1, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  int skip_index = 0;
  while(i<= sqrtnum){
    if (!(num%i)) return 0;
    i+= w;
    w = skip_values[skip_index];
    skip_index = (skip_index + 1)%23;
  }
  return 1;
}
