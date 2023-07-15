#include <stdio.h>
#include <math.h>
#include <time.h>
#include <limits.h>
void IsPrime(unsigned long long int num){
    int i;
    unsigned long long int sqrtnum;
    sqrtnum = sqrt(num);
    sqrtnum = ceil(sqrtnum);
    for (i = 3; i <= sqrtnum + 3; i += 2){
	if (i == 3) {
        	if (num%2 == 0 && num != 2)  {
            		printf("%llu's not prime.\n", num);
            		break;
        	}
    }
    else {
            if ((num%i == 0 && num != i) || (num == 1)){
                printf("%llu's not prime.\n", num);
                break;
            }
            else if (i >= sqrtnum){
                printf("%llu's prime.\n", num);
                break;
            }
	}
    }
}
int main() {
    unsigned long long int num = 2305843009213693951ULL;
    clock_t start, end;
    double execution_time;
    start = clock();
    IsPrime(num);
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[%lf seconds to execute]\n", execution_time);
}
