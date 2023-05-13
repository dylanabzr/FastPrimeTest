#include <stdio.h>
#include <math.h>
#include <time.h>
#include <inttypes.h>

int main(void) {
    int i;
    uintmax_t num = 2305843009213693951;
    uintmax_t sqrtnum;
    clock_t start, end;
    double execution_time;
   //printf("Input a number to test if its prime or not: ");
   //if(scanf("%lld", &num)){};

    start = clock();
    sqrtnum = sqrt(num);
    sqrtnum = ceil(sqrtnum);
    for (i = 3; i <= sqrtnum + 3; i += 2)
    {
	if (i == 3) {
        	if (num%2 == 0 && num != 2)  {
            		printf("%ld's not prime.\n", num);
            		break;
        	}
	}
        else {
            if ((num%i == 0 && num != i) || (num == 1)){
                printf("%ld's not prime.\n", num);
                break;
            }
            else if (i >= sqrtnum){
                printf("%ld's prime.\n", num);
                break;
            }

        }
    }
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[%lf seconds to execute]\n", execution_time);
}
