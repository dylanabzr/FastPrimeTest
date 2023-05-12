#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void) {
    int i;
    long long int num;
    long long int sqrtnum;
    clock_t start, end;
    double execution_time;
    printf("Digite um número inteiro para descobrir se ele é primo: ");
    if(scanf("%lld", &num)){};
    start = clock();
    if (num <0){
        num = num * -1;
    }
    sqrtnum = sqrt(num);
    sqrtnum = ceil(sqrtnum);
    for (i = 3; i <= sqrtnum + 3; i += 2)
    {
	if (i == 3) {
        	if (num%2 == 0 && num != 2)  {
            		printf("O número escolhido não é primo.\n");
            		break;
        	}
	}
        else {
            if ((num%i == 0 && num != i) || (num == 1)){
                printf("O número escolhido não é primo.\n");
                break;
            }
            else if (i >= sqrtnum){
                printf("O número escolhido é primo.\n");
                break;
            }

        }
    }
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[%lf segundos para executar]\n", execution_time);
}
