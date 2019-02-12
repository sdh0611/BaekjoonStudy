//#include <iostream>
//#include <vector>
//
////10단계 베르트랑 공준
//
//using namespace std;
//
//bool JudgePrimeNumber(int number)
//{
//	if (number < 2)
//		return false;
//
//	for (int i = 2; i*i <= number; ++i)
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
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int input;
//	int number = 0;
//	do
//	{
//		cin >> input;
//		if (input == 0)
//			break;
//
//		if (input == 1)
//		{
//			number = 1;
//		}
//		else
//		{
//			for (int i = input + 1; i <= input * 2; ++i)
//			{
//				if (JudgePrimeNumber(i))
//				{
//					++number;
//				}
//
//			}
//
//		}
//		cout << number << "\n";
//		number = 0;
//
//	} while (true);
//
//
//	return 0;
//}