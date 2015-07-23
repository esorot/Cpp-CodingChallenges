//============================================================================
// Name        : FiveHunDivisors.cpp
// Author      : g00s
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <bitset>
#include <math.h>
using namespace std;

typedef long long ll;

ll calcDivisors(ll n){
	ll numberOfDivisors = 0;
	ll limit = (ll)sqrt((double)n);
	for(int i =  1; i <= limit; i++){
		if(n%i==0){
			if(i!=n/i)
				numberOfDivisors += 2;
			else
				numberOfDivisors++;
		}
	}


	return numberOfDivisors;
}

int main() {

	ll divisors = 1;
	ll triangle = 1;
	for(int i = 1; divisors < 500 ; i++){
		triangle = (i*(i+1))>>1;
		divisors = calcDivisors(triangle);

	}

	cout << "Triangle: " << triangle <<" Divisors:" << divisors << endl;

	return 0;
}
