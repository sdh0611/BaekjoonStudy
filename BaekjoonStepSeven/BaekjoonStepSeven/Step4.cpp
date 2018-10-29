//#include <iostream>
//#include <string>
//
////7단계 가장 많이쓰인 알파벳 찾기 문제
//
//
//
//int main()
//{
//	using namespace std;
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	string inputString;
//	char mostUsedAlphabet;
//	int curCnt,
//		curMostCnt = 0,
//		preMostCnt = 0;
//
//	cin >> inputString;
//
//
//	for (char alpha = 'A'; alpha <= 'Z'; ++alpha)
//	{
//		curCnt = 0;
//		for (auto& ch : inputString)
//		{
//			if (ch == alpha || ch == alpha + 32)
//			{
//				++curCnt;
//			}
//		}
//
//		if (curCnt >= curMostCnt)
//		{
//			mostUsedAlphabet = alpha;
//			preMostCnt = curMostCnt;
//			curMostCnt = curCnt;
//		}
//
//	}
//
//	if (preMostCnt == curMostCnt)
//	{
//		mostUsedAlphabet = '?';
//	}
//
//	cout << mostUsedAlphabet << "\n";
//
//
//	return 0;
//}