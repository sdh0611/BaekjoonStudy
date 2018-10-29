//#include <iostream>
//
////5단계 한수 구하기 문제
//
//bool Function(int number)
//{
//	//100 미만은 전부 한수이므로 true
//	if (number < 100)
//	{
//		return true;
//	}
//
//	int preNumber;					//이전 자릿수를 저장하기 위한 변수
//	int difference = 0,				//현재의 공차
//		preDifferrence = 0;		//이전 공차
//	
//	
//	for (int temp = number; temp > 0; temp /= 10)
//	{
//		if (temp == number)												//첫 계산인 경우
//		{
//			preNumber = temp % 10;									//preNumber만 초기화
//		}
//		else
//		{
//			if (number / 10 == temp)									//두번 째 계산인 경우
//			{
//				preDifferrence = preNumber - temp % 10;			//이전 공차 값과 preNumber값을 초기화해줌.
//				preNumber = temp % 10;
//			}
//			else																//여기서 부터 본격적인 한수 비교 프로세스
//			{
//				difference = preNumber - temp % 10;				//현재 공차 계산
//				if (preDifferrence != difference)						//이전 공차와 현재 공차가 다를 경우 한수가 아니므로 false 리턴
//				{
//					return false;
//				}
//				preNumber = temp % 10;
//				preDifferrence = difference;
//			}
//		}
//
//	}
//
//	return true;
//}
//
//
//int main()
//{
//	using namespace std;
//
//	int input, 
//		cnt = 0;
//
//	cin >> input;
//
//	for (int i = 1; i <= input; ++i)
//	{
//		if (Function(i))
//		{
//			++cnt;
//		}
//
//	}
//
//	cout << cnt << "\n";
//
//	return 0;
//}