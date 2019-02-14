//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class CharStack
//{
//public:
//	void Push(char value)
//	{
//		container.push_back(value);
//	}
//
//	bool Pop()
//	{
//		if (container.empty())
//		{
//			return false;
//		}
//		else
//		{
//			//cout << container.back() << "\n";
//			container.pop_back();
//			return true;
//		}
//	}
//
//	size_t GetSize()
//	{
//		return container.size();
//	}
//
//	bool IsEmpty()
//	{
//		return container.empty();
//	}
//
//	char Top()
//	{
//		return container.back();
//	}
//
//private:
//	vector<char> container;
//};
//
//bool CheckBracket(const string& input)
//{
//	CharStack bracketStack;
//
//	for (const auto& element : input)
//	{
//		if (element == '(')
//		{
//			bracketStack.Push(element);
//		}
//		else if (element == ')')
//		{
//			if (!bracketStack.Pop())
//			{
//				return false;
//			}
//		}
//	}
//
//	return bracketStack.IsEmpty();
//	
//}
//
//
//int main()
//{
//	cin.sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int testcase;
//	cin >> testcase;
//	cin.ignore();
//
//	vector<string> strList;
//	string inputString;
//	for (int i = 0; i < testcase; ++i)
//	{
//		getline(cin, inputString);
//		strList.push_back(inputString);
//	}
//
//	for (const auto& input : strList)
//	{
//		if (CheckBracket(input))
//		{
//			cout << "YES\n";
//		}
//		else
//		{
//			cout << "NO\n";
//		}
//	}
//
//}