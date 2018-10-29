//#include <iostream>
//#include <string>
//
//
////7단계 상수문제
//
//using namespace std;
//
//void ReverseString(string& str)
//{
//	string strResult;
//
//	for (auto it = str.rbegin(); it != str.rend(); ++it)
//	{
//		strResult.push_back(*it);
//	}
//
//	str = strResult;
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	string firstNumber,
//			secondNumber;
//	cin >> firstNumber;
//	cin >> secondNumber;
//	
//	ReverseString(firstNumber);
//	ReverseString(secondNumber);
//
//	if (stoi(firstNumber) > stoi(secondNumber))
//	{
//		cout << firstNumber << "\n";
//	}
//	else
//	{
//		cout << secondNumber << "\n";
//	}
//
//
//	return 0;
//}