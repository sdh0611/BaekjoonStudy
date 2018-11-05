#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

//9단계 단어사전

using namespace std;


int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int testCase;
	cin >> testCase;
	list<string> wordList;

	string input;
	for (; testCase > 0; --testCase)
	{
		cin >> input;
		if (input.length() > 50)
			return 0;
		wordList.push_back(input);
	}

	auto compareWord = [](const string& word1, const string& word2)->bool
	{
		if (word1.length() == word2.length())
		{
			return word1.compare(word2) < 0;
			
		}
		
		return word1.length() < word2.length();

	};	

	wordList.sort(compareWord);
	wordList.unique();

	for (const auto& it : wordList)
	{
		cout << it << "\n";
	}



}