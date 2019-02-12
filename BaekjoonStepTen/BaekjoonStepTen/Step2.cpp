//#include <iostream>
//#include <vector>
//
////10단계 소수
//
//
//using namespace std;
//
//const int gMaxInput = 10000;
//
//bool JudgePrimeNumber(int number)
//{
//	if (number < 2)
//		return false;
//
//	for (int i = 2; i < number; ++i)
//	{
//		if (number % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int min, max;
//	cin >> min;
//	cin >> max;
//
//	int primeMin = -1;
//	int sum = 0;
//
//	for (int i = min; i <= max; ++i)
//	{
//		if (JudgePrimeNumber(i))
//		{
//			sum += i;
//			if (primeMin < 0)
//			{
//				primeMin = i;
//			}
//			else
//			{
//				if (primeMin > i)
//				{
//					primeMin = i;
//				}
//
//			}
//
//		}
//
//	}
//
//	if (sum)
//	{
//		cout << sum << "\n";
//	}
//	cout << primeMin << "\n";
//
//	return 0;
//}