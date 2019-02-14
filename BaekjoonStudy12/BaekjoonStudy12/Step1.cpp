//#include <iostream>
//#include <list>
//#include <string>
//
//using namespace std;
//
//
//template <typename T>
//class Queue
//{
//public:
//	void Push(T value)
//	{
//		container.push_back(value);
//	}
//
//	void Pop(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.front();
//			container.pop_front();
//		}
//
//	}
//
//	size_t Size()
//	{
//		return container.size();
//	}
//
//	bool IsEmpty()
//	{
//		return container.empty();
//	}
//
//	void Front(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.front();
//		}
//	}
//
//	void Back(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.back();
//		}
//	}
//
//private:
//	std::list<T> container;
//
//};
//
//
//void Function(const string&  command, Queue<int>& queue)
//{
//	if (command == "push")
//	{
//		int value;
//		cin >> value;
//		queue.Push(value);
//	}
//	else if (command == "pop")
//	{
//		int value = -1;
//		queue.Pop(value);
//		cout << value << "\n";
//	}
//	else if (command == "size")
//	{
//		cout << queue.Size() << "\n";
//	}
//	else if (command == "front")
//	{
//		int value = -1;
//		queue.Front(value);
//		cout << value << "\n";
//	}
//	else if (command == "back")
//	{
//		int value = -1;
//		queue.Back(value);
//		cout << value << "\n";
//	}
//	else if (command == "empty")
//	{
//		if (queue.IsEmpty())
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
//
//int main()
//{
//	cin.sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int testcase;
//	cin >> testcase;
//	
//	string command;
//	Queue<int> queue;
//
//	for (int i = 0; i < testcase; ++i)
//	{
//		cin >> command;
//		Function(command, queue);
//	}
//
//	return  0;
//}