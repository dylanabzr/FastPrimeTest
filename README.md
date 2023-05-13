# FastPrimeTest
Code made to get the highest speed possible calculating big prime numbers. The biggest problem of the code is the number limit to 64 bits longer, i tried everything but nothing was possible to get the number bigger. If you can help improve the code speed or the number limit, please, do a pull request.

![Screenshot from 2023-05-13 06-41-56](https://github.com/dylanabzr/FastPrimeTest/assets/128552152/95bb012b-3c50-4f35-9038-7c655e1d1b22)

The code was compiled using "gcc primes.c -o primes -O3 -lm" line.

To test the speed of the code i used the Marsenne prime 2305843009213693951 that is 0x1fffffffffffffff or 2⁶¹- 1, the biggest prime i could find that did not break the 64 bits barrier.

The current highest speed i got to calculate if 2⁶¹-1 is whether prime or not:

![CodeSpeed](https://github.com/dylanabzr/FastPrimeTest/assets/128552152/a94b80ad-2e6d-457f-b15c-dc2e1d61d5b1)

OBS: That kinda obvious but i'll say it anyway, if you have a better CPU the code will get faster. That test was made on a 8th generation i5 with 6 cores and 12 threads (the specific model i don't have idea cause i made this test in the university computer that's way better than mine)
