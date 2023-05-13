# FastPrimeTest
Code made to get the highest speed possible calculating big prime numbers. The biggest problem of the code is the number limit to 64 bits longer, i tried everything but nothing was possible to get the number bigger. If you can help improve the code speed or the number limit, please, do a pull request.

The code was compiled using "gcc primes.c -o primes -O3 -lm" line.

To test the speed of the code i used the Marsenne prime 2305843009213693951 that is 0x1fffffffffffffff or 2⁶¹- 1, the biggest prime i could find that did not break the 64 bits barrier.

OBS: That kinda obvious but i'll say it anyway, if you have a better CPU the code will get faster. The test of the CodeSpeed.png was made on a 8th generation i5 with 6 cores and 12 threads (the specific model i don't have idea cause i made this test in the university computer)
