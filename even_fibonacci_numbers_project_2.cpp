#include <iostream>
#include <vector>
using namespace std;

void Print (const vector<int>& v){
  //vector<int> v;
  for (int i=0; i<v.size();i++){
    cout << v[i] << endl;
  }
}

vector<int> fibonacciArray(int maxNumber){
	int currentNumber = 2;
	int nextNumber = 0;
	vector<int> arr;
	//Seed first 2 numbers of the sequence.
	arr.push_back(0);
	arr.push_back(1);

	while(nextNumber < maxNumber){
		nextNumber = arr[currentNumber - 2] + arr[currentNumber - 1];
		if (nextNumber < maxNumber){
			arr.push_back(nextNumber);
		}
		currentNumber++;
	}

	return arr;
}

int sumEvenNumbers(const vector<int>& inputArray){
	int result = 0;
	for (int i = 0; i < inputArray.size(); i++){
		if (inputArray[i] % 2 == 0) {
			result += inputArray[i];
		}
	}	
	return result;
}

int main(){
  	cout << "Project Euler Even Fibonacci Numbers" << endl;
  	cout << "Please enter a the max number value of the number in the Fibonacci Sequence: ";
  	int maxNumber;
  	cin >> maxNumber;
  	cout << "Get Fibonacci Sequence up to " << maxNumber << endl;
  	vector<int> fibArray = fibonacciArray(maxNumber);
  	Print(fibArray);	
	int result = sumEvenNumbers(fibArray);
	cout << "Sum of Even Numbers in the sequence are: " << result << endl; 	
	return 0;
}
