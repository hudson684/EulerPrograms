#include <iostream>

using namespace std;


//sum all multiples of 3 and 5 below a chosen maximum
int Eu_3_and_5(int max) {
	int count = 0;
	for (int i = 0; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			count += i;
		}
	}
	return count;
}


//sum all even fibbinachi numbers below a certain maximum
int Eu_Even_Fib(int max) {
	int sum = 0;
	int previous = 1;
	int current = 2;
	while (current < max) {
		if (current % 2 == 0) {
			sum += current;
		}
		int temp = current + previous;
		previous = current;
		current = temp;
	}
	return sum;
}


//find the largest prime factor of a given number
int Eu_Max_Prime_Factor(int num) {
	int largestPrime = 1;





	return largestPrime;
}



int main()
{
	int answer = Eu_Even_Fib(4000000);
	cout << answer << endl;
}