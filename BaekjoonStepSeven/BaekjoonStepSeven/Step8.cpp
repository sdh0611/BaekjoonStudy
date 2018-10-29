#include <iostream>
#include <string>
#include <vector>

//7�ܰ� ũ�ξ�Ƽ�� ���ĺ� ����

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	//ũ�ξ�Ƽ�� ���ĺ� ���� ����
	vector<string> patternList;
	patternList.emplace_back("c=");
	patternList.emplace_back("c-");
	patternList.emplace_back("dz=");
	patternList.emplace_back("d-");
	patternList.emplace_back("lj");
	patternList.emplace_back("nj");
	patternList.emplace_back("s=");
	patternList.emplace_back("z=");

	string inputString;
	cin >> inputString;

	int wordCnt = 0;

	for (const auto& pattern : patternList)
	{
		size_t patternLength = pattern.length();
		for (int i = 0; i < inputString.length() - patternLength + 1; ++i)
		{
			if (pattern == inputString.substr(i, patternLength))
			{
				++i;
				++wordCnt;
			}

		}

	}

	cout << inputString.length() - wordCnt << "\n";

	return 0;
}