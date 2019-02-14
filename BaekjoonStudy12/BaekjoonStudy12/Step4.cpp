#include <iostream>
#include <list>
#include <vector>

using namespace std;

template <typename T>
class Queue
{
public:
	void Push(T value)
	{
		container.push_back(value);
	}

	void Pop(T& value)
	{
		if (!IsEmpty())
		{
			value = container.front();
			container.pop_front();
		}

	}

	size_t Size()
	{
		return container.size();
	}

	bool IsEmpty()
	{
		return container.empty();
	}

	void Front(T& value)
	{
		if (!IsEmpty())
		{
			value = container.front();
		}
	}

	void Back(T& value)
	{
		if (!IsEmpty())
		{
			value = container.back();
		}
	}

	void PrintElement()
	{
		for (const auto& element : container)
		{
			cout << element << " ";
		}
		cout << "\n";
	}

	bool CheckValueExist(T value)
	{
		for (const auto& element : container)
		{
			if (element == value)
			{
				return true;
			}
		}

		return false;
	}

	void Clear()
	{
		if (!IsEmpty())
		{
			container.clear();
		}
	}

private:
	std::list<T> container;

};


int main()
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);

	Queue<int> queue;
	vector<int> arr;
	
	int n, m;
	cin >> n >> m;
	
	while (!arr.empty())
	{

	}

	return 0;
}