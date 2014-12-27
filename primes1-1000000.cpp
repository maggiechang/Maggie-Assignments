#include <fstream>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	ofstream primes;
	primes.open ("primes.txt");
	bool primesList[1000000];
	fill_n(primesList, 1000000, true);

	int i, j = 2;
	for (i = 2; i < sqrt(1000000); i++) 
	{
		if (primesList[i] == true)
		{
			for (j = i*i; j < 1000000; j += i)
			{
				primesList[j] = false;
			}
		}
	}

	for (i = 2; i < 1000000; i++) 
	{
		if (primesList[i] == true) 
		{
			primes << "i\n" << ;
		}
	}
	primes.close();
	return 0;
} 
