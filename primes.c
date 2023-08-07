#include <math.h>
#include <stdbool.h>

bool isPrime(unsigned long long int num){
    unsigned long long int sqrtnum = ceil(sqrt(num));
    for (int i = 3; i <= sqrtnum + 3; i += 2){
	    if (i == 3) {
        	if (num%2 == 0 && num != 2)  {
            		return false;}
      }else {
            if ((num%i == 0 && num != i) || (num == 1)){
                return false;}
            else if (i >= sqrtnum){
                return true;}
	}
    }
}

