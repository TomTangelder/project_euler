#include <iostream>
using namespace std;

bool isPalindrome(int n){
	//cout << "Checking if " << n << " is a palindrome" << endl;

	int rev = 0;
	int dig = 0;
	int temp = n;
	int remainder = 0;

	while(temp > 0){
		remainder = temp % 10;
		rev = rev * 10 + remainder;
		temp /= 10;

	}

	//cout << "Number " << (n == rev ? "IS" : "IS NOT") << " a palindrome" << endl;

	return (n == rev ? true : false);
}

int getLargestPalindrome(){
	int numToCheck = 0;
	int largestFound = -1;

	for (int i = 999; i >= 99; i--){
		for (int j = 999; j >= 1; j--){
			numToCheck = i * j;
			if (isPalindrome(numToCheck)){
				if (numToCheck > largestFound){
					largestFound = numToCheck;
				}
			}
		}
	}

	return largestFound;
}

int main(){
	cout << "Project Euler Largest Palindrom Product Project #4" << endl;

	int largestPalindrome = getLargestPalindrome();
	if (largestPalindrome != -1){
		cout << "Largest Palindrome Found: " << largestPalindrome << endl;
	}else {
		cout << "No Palindrom Found" << endl;
	}
}