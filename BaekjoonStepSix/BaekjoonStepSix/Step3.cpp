//#include <iostream>
//#include <vector>
//#include <string>
//
////6단계 ox퀴즈 문제
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
//	cin.ignore(32767, '\n');
//	
//	vector<int> scoreList;
//	int totalScore;
//	int stack;
//
//	for (; caseNumber > 0; --caseNumber)
//	{
//		totalScore = 0;
//		stack = 0;
//
//		string inputString;
//		getline(cin, inputString);
//	
//		for (auto it = inputString.cbegin(); it != inputString.cend(); ++it)
//		{
//			if ((*it) == 'O')
//			{
//				totalScore = totalScore + ++stack;
//			}
//			else
//			{
//				stack = 0;
//			}
//
//		}
//		
//		scoreList.emplace_back(totalScore);
//		
//	}
//
//	for (auto& it : scoreList)
//	{
//		cout << it << "\n";
//	}
//
//	return 0;
//}