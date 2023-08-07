#include <stdio.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>
#include "primes.h"

int main() {
    clock_t start, end;
    double execution_time;
    start = clock();
    printf("%s\n",isPrime(2305843009213693951ULL)?"True":"False");
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[%lf seconds to execute]\n", execution_time);
}
