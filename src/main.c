#include <stdio.h>
#include <time.h>
#include "../include/primes.h"

int main() {
    clock_t start, end;
    double execution_time;
    start = clock();
    printf("%s\n",isPrime(2305843009213693951ULL)?"Is prime":"Is not prime");
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[%lf seconds to execute]\n", execution_time);
}
