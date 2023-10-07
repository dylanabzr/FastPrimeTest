#include <math.h>

char isPrime(unsigned long long int num){
  if (!(num%2) && num < 2) return 0;
  if (num == 2) return 1;
  unsigned long long int sqrtnum = sqrt(num);
  for (int i = 3; i <= sqrtnum; i += 2){
    if (!(num%i)) return 0;
  }
  return 1;
}
