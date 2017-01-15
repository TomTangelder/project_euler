#include <iostream>
#include <math.h>
using namespace std;

signed long int getLargestPrimeFactor(signed long int n){

	while (n % 2 == 0){
		cout << 2 << " ";
		n = n / 2;
	}

	for (int i = 3; i <= sqrt(n); i += 2){
		while(n % i == 0){
			cout << i << " ";
			n = n / i;
		}	
	}
	if (n > 2){
		cout << n << endl;
	}
	
	return n;
}

int main(){
  	cout << "Project Euler Largest Prime Factor" << endl;
  	cout << "Please Enter Number to find the Largest Prime Factor of: ";
  	signed long int inputNumber;
  	cin >> inputNumber;
  	signed long int largestPrime = getLargestPrimeFactor(inputNumber);
  	cout << "The Largest Prime Factor is: " << largestPrime << endl;
}
