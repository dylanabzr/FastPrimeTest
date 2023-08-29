build:
	gcc ./src/*.c -o primes -lm
run:
	./primes
clean:
	rm primes
