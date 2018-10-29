//#include <iostream>
//#include <string>
//#include <set>
//
////7단계 그룹단어 문제
//
//int main()
//{
//	using namespace std;
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int caseNumber;
//	cin >> caseNumber;
//
//	set<char> apearedCharSet;
//	int wordCnt = 0;
//
//	for (; caseNumber > 0; --caseNumber)
//	{
//		string inputString;
//		cin >> inputString;
//		auto it = inputString.cbegin();
//		for (; it != inputString.cend(); ++it)
//		{
//			if (it == inputString.cbegin())
//			{
//				apearedCharSet.insert(*it);
//			}
//			else
//			{
//				if (*it != *(it - 1))
//				{
//					if (apearedCharSet.find(*it) != apearedCharSet.cend())
//					{
//						break;
//					}
//					else
//					{
//						apearedCharSet.insert(*it);
//					}
//
//				}
//
//			}
//
//		}
//
//		if (it == inputString.cend())
//		{
//			++wordCnt;
//		}
//		
//		apearedCharSet.clear();
//	}
//
//	cout << wordCnt << "\n";
//
//	return 0;
//}