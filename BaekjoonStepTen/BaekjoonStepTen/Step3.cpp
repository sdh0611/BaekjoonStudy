//#include <iostream>
//
////10단계 소수 구하기
////192ms 나옴.. 더 줄여보자
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
//	int min, max;
//	cin >> min >> max;
//
//	for (int i = min; i <= max; ++i)
//	{
//		if (JudgePrimeNumber(i))
//		{
//			cout << i << "\n";
//		}
//	}
//
//
//	return 0;
//}