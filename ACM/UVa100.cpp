//============================================================================
// Name        : Collatz3nplus1.cpp
// Author      : Theodore Rose
// Version     :
// Copyright   : Copyrighted under MIT 
// Description : UVa100 - The 3n + 1 problem
//               Time limit: 3.000 seconds
//============================================================================

#include <iostream>
using namespace std;

int collatz(int n){
	if(n == 1)
		return 1;
	if(n % 2 == 0)
		return 1 + collatz(n/2);
	else
		return 1 + collatz(n*3 + 1);
}

int main() {

	int i, j;
	while(cin >> i >> j){
		int start ;
		int end;
		if(i > j){
			start = i;
			end = j;
		}
		else{
			start = j;
			end = i;
		}
		int maxValue = 0;
		for(int k = start; k < end; k++){
			maxValue = max(maxValue,collatz(k));
		}

		cout << i << " " << j << " " << maxValue << endl;



	}


	return 0;
}
