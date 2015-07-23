//============================================================================
// Name        : Mult3and5.cpp
// Author      : g00s
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sumI(int range){
	return (range*(range+1))/2;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int range = 1000;

	int sum = sumI(range/3)*3;

	sum += sumI((range-1)/5)*5;

	cout << sum << endl;

	int over_lap = 0;
	for(int i = 5; i < range; i+=5){
		if(i%3==0 && i%5 == 0)
			over_lap +=i;
	}
	cout << sum-over_lap << endl;

	return 0;
}
