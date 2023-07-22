#include <stdio.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>

bool IsPrime(unsigned long long int num){
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
int main() {
    clock_t start, end;
    double execution_time;
    start = clock();
    printf("%s\n",IsPrime(2305843009213693951ULL)?"True":"False");
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[%lf seconds to execute]\n", execution_time);
}
