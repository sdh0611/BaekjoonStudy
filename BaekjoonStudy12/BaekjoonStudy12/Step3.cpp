#include <iostream>
#include <list>

using namespace std;

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
//	void PrintElement()
//	{
//		for (const auto& element : container)
//		{
//			cout << element << " ";
//		}
//		cout << "\n";
//	}
//
//	bool CheckValueExist(T value)
//	{
//		for (const auto& element : container)
//		{
//			if (element == value)
//			{
//				return true;
//			}
//		}
//
//		return false;
//	}
//
//	void Sort(bool IsDesc  = false)
//	{
//		if (IsDesc)
//		{
//			container.sort();
//		}
//		else
//		{
//			container.sort();
//		}
//	}
//
//	void Clear()
//	{
//		if (!IsEmpty())
//		{
//			container.clear();
//		}
//	}
//
//private:
//	std::list<T> container;
//
//};

struct Node
{
	Node(int newIndex, int newOrder)
		: index(newIndex), order(newOrder)
	{
	}

	int index;
	int order;
};

bool SortDescending(Node first, Node second)
{
	return first.order > second.order;
}

int main()
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);

	int testcase;
	cin >> testcase;

	list<Node> docuList;
	for (int i = 0; i < testcase; ++i)
	{
		int docuNum, searchDocu;
		cin >> docuNum >> searchDocu;

		int order;
		for (int j = 0; j < docuNum; ++j)
		{
			cin >> order;
			Node node(j, order);
			docuList.push_back(node);
		}
		docuList.sort(SortDescending);
		
		for (const auto& docu : docuList)
		{
			cout << docu.index << " ";
		}
		puts("");

		int index = 1;
		for (const auto& docu : docuList)
		{
			if (docu.index == searchDocu)
			{
				cout << index << "\n";
				break;
			}
			else
			{
				++index;
			}
		}
		docuList.clear();
	}

	return  0;
}