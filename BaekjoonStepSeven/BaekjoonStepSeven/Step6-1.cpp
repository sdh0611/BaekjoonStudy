//#include <iostream>
//#include <cmath>
//
////7단계 상수문제 다른 해답
//
//
//int main()
//{
//	using namespace std;
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int firstNumber,
//		secondNumber;
//
//	cin >> firstNumber;
//	cin >> secondNumber;
//	
//	int firstReverse = 0,
//		secondReverse = 0;
//
//	for (int i = 0; i < 3; ++i)
//	{
//		firstReverse += ( (firstNumber%10) * pow(10.f, (2 - i)) );
//		secondReverse += ((secondNumber % 10) * pow(10.f, (2 - i)));
//		
//		firstNumber /= 10;
//		secondNumber /= 10;
//	}
//
//	if (firstReverse > secondReverse)
//	{
//		cout << firstReverse << "\n";
//	}
//	else
//	{
//		cout << secondReverse << "\n";
//	}
//
//
//	return 0;
//}