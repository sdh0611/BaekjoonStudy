#include <iostream>

//10´Ü°è °ñµå¹ÙÈåÀÇ ÃßÃø

using namespace std;

bool JudgePrime(int number)
{
	for (int i = 2; i*i <= number; ++i)
	{
		if (number % i == 0)
		{
			return false;
		}	
	}

	return true;
}

void GetPartition(int number)
{
	struct PrimePair
	{
		PrimePair()
			:first(0), second(0)
		{
		}

		PrimePair(int newFirst, int newSecond)
			:first(newFirst), second(newSecond)
		{
		}

		int first;
		int second;
	};

	PrimePair partition;
	int sub = 100000;

	for (int i = 2; i <= number / 2; ++i)
	{
		if (JudgePrime(i))
		{
			if (JudgePrime(number - i))
			{
				if (sub > (number - i) - i)
				{
					partition.first = i;
					partition.second = number - i;
				}
			}

		}

	}

	cout << partition.first << " " << partition.second << "\n";

}


int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int testCase = 0;
	cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		int number;
		cin >> number;
		GetPartition(number);
	}


	return 0;
}