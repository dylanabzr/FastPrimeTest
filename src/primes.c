#include <math.h>

short int isPrime(unsigned long long int num){
    unsigned long long int sqrtnum = ceil(sqrt(num));
    for (int i = 3; i <= sqrtnum + 3; i += 2){
	    if (i == 3) {
        if (num%2 == 0 && num != 2)
          return 0;
      }else {
          if ((num%i == 0 && num != i) || (num == 1))
            return 0;
          else if (i >= sqrtnum)
            return 1;
	}
    }
  return 1;
}
