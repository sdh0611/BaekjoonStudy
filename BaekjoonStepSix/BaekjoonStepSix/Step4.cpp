#include <iostream>

//6단계 평균구하기 문제

const int gNumberOfStudent = 5;

int main()
{
	using namespace std;

	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int input,
		totalScore = 0;


	for (int i = 0; i < gNumberOfStudent; ++i)
	{
		cin >> input;
		
		if (input < 40)
		{
			totalScore += 40;
		}
		else
		{
			totalScore += input;
		}

	}

	cout << totalScore / gNumberOfStudent << "\n";


	return 0;
}