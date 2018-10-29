//#include <iostream>
//#include <string>
//#include <vector>
//
////7단계 알파벳 반복 출력 문제
//
//
//int main()
//{
//	using namespace std;
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int caseNumber;
//	vector<string> stringList;
//
//	cin >> caseNumber;
//
//	for (; caseNumber > 0; --caseNumber)
//	{
//		int repeatNumber;
//		string inputString,
//				newString;
//
//		cin >> repeatNumber;
//		cin >> inputString;
//		for (auto& ch : inputString)
//		{
//			for (int i = 0; i < repeatNumber; ++i)
//			{
//				newString += ch;
//			}
//		}
//		stringList.emplace_back(newString);
//	}
//
//	for (auto& str : stringList)
//	{
//		cout << str << "\n";
//	}
//
//
//	return 0;
//}