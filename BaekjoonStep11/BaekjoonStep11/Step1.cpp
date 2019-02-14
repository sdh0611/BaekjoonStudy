//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class IntStack
//{
//public:
//	void Push(int value)
//	{
//		container.push_back(value);
//	}
//
//	void Pop()
//	{
//		if (container.empty())
//		{
//			cout << "-1\n";
//		}
//		else
//		{
//			cout << container.back() << "\n";
//			container.pop_back();
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
//	int Top()
//	{
//		if (container.empty())
//		{
//			return -1;
//		}
//		return container.back();
//	}
//
//private:
//	vector<int> container;
//};
//
//
//void Function(const string&  command, IntStack& stack)
//{
//	if (command == "push")
//	{
//		int value;
//		cin >> value;
//		stack.Push(value);
//	}
//	else if (command == "pop")
//	{
//		stack.Pop();
//	}
//	else if (command == "size")
//	{
//		cout << stack.GetSize() << "\n";
//	}
//	else if (command == "top")
//	{
//		cout << stack.Top() << "\n";
//	}
//	else if (command == "empty")
//	{
//		if (stack.IsEmpty())
//		{
//			cout << "1\n";
//		}
//		else
//		{
//			cout << "0\n";
//		}
//	}
//
//
//}
//
//int main()
//{
//
//	cin.sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int testcase;
//	cin >> testcase;
//
//	string command;
//	IntStack stack;
//
//	for (int i = 0; i < testcase; ++i)
//	{
//		cin >> command;
//		Function(command, stack);
//	}
//
//	return 0;
//}
//
////template<typename T>
////class Stack
////{
////public:
////	void Push(T value)
////	{
////		container.push_back(value);
////	}
////
////	void Pop()
////	{
////		if (container.empty())
////		{
////			cout << "-1\n";
////		}
////		else
////		{
////			cout << container.back() << "\n";
////			container.pop_back();
////		}
////	}
////
////	size_t GetSize()
////	{
////		return container.size();
////	}
////
////	bool IsEmpty()
////	{
////		return container.empty();
////	}
////
////	T Top()
////	{
////		return container.back();
////	}
////
////private:
////	//int maximum;
////	vector<T> container;
////};
////
////template<typename T>
////void Function(const string&  command, Stack<T>& stack)
////{
////	if (command == "push")
////	{
////		T value;
////		cin >> value;
////		stack.Push(value);
////	}
////	else if (command == "pop")
////	{
////		stack.Pop();
////	}
////	else if (command == "size")
////	{
////		cout << stack.GetSize() << "\n";
////	}
////	else if (command == "top")
////	{
////		cout << stack.Top() << "\n";
////	}
////	else if (command == "empty")
////	{
////		if (stack.IsEmpty())
////		{
////			cout << "1\n";
////		}
////		else
////		{
////			cout << "0\n";
////		}
////	}
////
////
////}
////
////int main()
////{
////
////	cin.sync_with_stdio(false);
////	cin.tie(NULL);
////
////	int testcase;
////	cin >> testcase;
////	
////	string command;
////	Stack<int> stack;
////
////	for(int i=0; i < testcase; ++i)
////	{ 
////		cin >> command;
////		Function(command, stack);
////	}
////	
////	return 0;
////}