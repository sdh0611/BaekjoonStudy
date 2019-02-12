//#include <iostream>
//#include <vector>
//
////10단계 소수판별
//
//using namespace std;
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
//int GetPrimeNumberCount(vector<int>& numberList)
//{
//	int cnt = 0;
//	for(const auto& number : numberList)
//	{
//		if (JudgePrimeNumber(number))
//		{
//			++cnt;
//		}
//
//	}
//
//	return cnt;
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int testCase;
//	cin >> testCase;
//
//	vector<int> numberList;
//	int input;
//
//	for (; testCase > 0; --testCase)
//	{
//		cin >> input;
//		numberList.push_back(input);
//	}
//
//	cout << GetPrimeNumberCount(numberList) << "\n";
//
//	return 0;
//}