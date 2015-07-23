//============================================================================
// Name        : TapeEquilibrium.cpp
// Author      : g00s
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int tapeEquilibrium(int A[], int N){
	long rightSum = 0, leftSum = 0;
	long runSumRight[N], runSumLeft[N];
	int i ;
	int diff = 2147483647;

	for(i = 0; i < N; i++){
		rightSum += A[N-i];
		leftSum += A[i];

		runSumRight[N-1] = rightSum;
		runSumLeft[i] = leftSum;
	}
	for(i = 0; i < N-1; i++){
		int temp_diff = abs(runSumLeft[i] - runSumRight[i+1]);
		if(temp_diff < diff)
			diff = temp_diff;

	}
	return diff;

}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
