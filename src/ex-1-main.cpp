// cpp2.cpp
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#define GP2_PRIME_UPPER_LIMIT 1000000
using namespace std;

bool is_prime(const unsigned n) {
	switch (n) {
	case 0:
	case 1: return false;
	case 2:
	case 3: return true;
	}

	if (n % 2 == 0) return false;
	if (n % 3 == 0) return false;

	if (n % 6 != 1 && n % 6 != 5) return false;
	for (unsigned i = 5; i*i <= n; i += 6) {
		if (n%i == 0) return false;
		if (n % (i + 2) == 0) return false; 
	}
	return true;
}

int nth_prime(int a, int d, int n) {

	int current = a;
	int count = 0;

	do {
		if (is_prime(current))++count;
		if (count == n)return current;
		current += d;

	} while (current <= GP2_PRIME_UPPER_LIMIT);

	return -1;
}

int main()
{
	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cout << nth_prime(179, 10, 203) << std::endl;
	std::cout << nth_prime(271, 37, 39) << std::endl;
	std::cout << nth_prime(103, 230, 1) << std::endl;
	std::cout << nth_prime(27, 104, 185) << std::endl;
	std::cout << nth_prime(253, 50, 85) << std::endl;
	cin.get();
	return 0;
}