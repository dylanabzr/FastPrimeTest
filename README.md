# FastPrimeTest
Code made to get the highest speed possible calculating big prime numbers. The biggest problem of the code is the number limit to 64 bits longer, i've tried everything but nothing was possible to get the number bigger. If you can help improve the code speed or the number size limit, please, do a pull request.

![Screenshot from 2023-05-13 06-41-56](https://github.com/dylanabzr/FastPrimeTest/assets/128552152/95bb012b-3c50-4f35-9038-7c655e1d1b22)

The code was compiled using "gcc primes.c -o primes -O3 -lm /usr/include/limits.h" line.

To test the speed of the code i used the Marsenne prime 2305843009213693951 that is 0x1fffffffffffffff or 2⁶¹- 1, the biggest prime i could find that did not break the 64 bits barrier.

The current highest speed i got to calculate if 2⁶¹-1 is whether prime or not:

![CodeSpeed](https://github.com/dylanabzr/FastPrimeTest/blob/main/test.jpeg)

OBS: That's kinda obvious but i'll say it anyway. If you have a better CPU the code will run faster. That test was made on a Ryzen 5 4600G
