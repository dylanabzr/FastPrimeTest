#include <stdio.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int main(void) {
    int i;
    unsigned long long int num = 2305843009213693951ULL;
    unsigned long long int sqrtnum;
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
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[%lf seconds to execute]\n", execution_time);
}
