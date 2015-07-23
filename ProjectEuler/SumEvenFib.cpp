//============================================================================
// Name        : SumEvenFib.cpp
// Author      : g00s
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int fib(int n){
	int a = 0, b = 1, c, i;
	if(n == 0)
		return a;
	for(i = 2; i <=n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main() {

	int MAX = 4*1e6;
	int sum = 0;
	int value = 0;
	for(int i  = 3; value < MAX; i++){
		 value = fib(i);

		if(value%2==0){

			sum += value;

		}

	}
	cout << sum << endl;
	getchar();
	return 0;
}
