#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CharStack
{
public:
	void Push(char value)
	{
		container.push_back(value);
	}

	bool Pop()
	{
		if (container.empty())
		{
			return false;
		}
		else
		{
			//cout << container.back() << "\n";
			container.pop_back();
			return true;
		}
	}

	size_t GetSize()
	{
		return container.size();
	}

	bool IsEmpty()
	{
		return container.empty();
	}

	char Top()
	{
		return container.back();
	}

private:
	vector<char> container;
};

bool CheckBracket(const string& input)
{
	CharStack bracketStack;

	for (const auto& element : input)
	{
		if (element == '(')
		{
			bracketStack.Push(element);
		}
		else if (element == ')')
		{
			if (!bracketStack.Pop())
			{
				return false;
			}
		}
	}

	return bracketStack.IsEmpty();

}

int CalBracket(const string& inputString)
{
	CharStack stack;
	int total = 1;
	int value = 1;
	size_t length = inputString.length();


	for (int index = 0; index < length; ++index)
	{
		switch (inputString[index])
		{
		case '(':
			stack.Push(inputString[index]);
			break;
		case '[':
			stack.Push(inputString[index]);
			break;
		case ')':
			stack.Pop();
			break;
		case ']':
			stack.Pop();
			break;
		}

	}

	return total;
}

int main()
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);

	int testcase;
	cin >> testcase;
	cin.ignore();
	

	string inputString;
	getline(cin, inputString);

	if (CheckBracket(inputString))
	{
		cout << CalBracket(inputString) << "\n";
	}



}