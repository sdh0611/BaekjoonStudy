//#include <iostream>
//#include <string>
//
////6단계 1차원 배열 사용하기
//
//int main()
//{
//	using namespace std;
//
//	string inputString;
//	int cnt = 0;
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	getline(cin, inputString);
//
//	//기존에 index값을 이용한 임의접근을 통해 비교했었으나, 시간이 오래걸려서 반복자로 직접 접근하도록 변경함.
//	for (auto it = inputString.cbegin(); it != inputString.cend(); ++it)
//	{
//		if (it == inputString.cbegin())
//		{
//			if ((*it) != ' ')
//			{
//				++cnt;
//			}
//
//		}
//		else
//		{
//			if ((*--it) == ' ')
//			{
//				++cnt;
//			}
//			++it;
//
//		}
//
//	}
//
//	cout << cnt << "\n";
//	
//	return 0;
//}