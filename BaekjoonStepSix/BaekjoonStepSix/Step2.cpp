//#include <iostream>
//
////6단계 사용된 숫자 개수 구하기
//
//int main()
//{
//	using namespace std;
//	
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int mult = 1;
//
//	for (int i = 0; i < 3; ++i)
//	{
//		int input;
//
//		cin >> input;
//		mult *= input;
//	}
//	
//	for (int i = 0; i < 10; ++i)
//	{
//		int cnt = 0;
//		for (int temp = mult; temp > 0; temp /= 10)
//		{
//			if (temp % 10 == i)
//			{
//				++cnt;
//			}
//		}
//		cout << cnt << "\n";
//
//	}
//	
//
//	return 0;
//}