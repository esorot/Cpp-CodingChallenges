//============================================================================
// Name        : LargestPalindromeProduct.cpp
// Author      : g00s
// Version     :
// Copyright   : Your copyright notice
// Description : Largest Palindrome Product in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool isPalindrome(int n){

	int palindrome = n;
	int reverse = 0;

	while(palindrome != 0){
		int remainder = palindrome % 10;
		reverse = reverse * 10 + remainder;
		palindrome /= 10;
	}

	return n == reverse;
}

int main() {

	int value  = 0;
	int tempI = 999;
	int tempJ = 999;
	for(int i = 999; i >= 100; i--){
		for(int j = 999; j >= 100; j--){
			int temp = i*j;
			if(isPalindrome(temp)){
				if(temp > value){
					tempI = i;
					tempJ = j;
					value = temp;
				}
			}
		}
	}




	return 0;
}
