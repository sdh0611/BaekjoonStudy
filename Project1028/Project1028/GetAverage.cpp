#include <iostream>
#include <vector>

//4단계 평균이상 비율 구하기

int main()
{
	using namespace std;

	//출력을 위한 cout 포맷 세팅.
	//소수점 이하 3자리로 고정함.
	cout.setf(ios::fixed);	
	cout.precision(3);			

	vector<int> scoreList;							//각 케이스별 학생들의 점수를 저장하기 위한 vector
	vector<float> aboveAverageRatio;		//각 케이스별로 평균을 넘는 학생의 비율을 저장하기 위한 vector
	int caseNumber;								//case 개수

	cin >> caseNumber;

	for (; caseNumber > 0; --caseNumber)
	{
		int studentNumber;			//케이스 별 학생의 수
		cin >> studentNumber;		
		for (int i = 0; i < studentNumber; ++i)
		{
			int score;
			cin >> score;
			scoreList.push_back(score);
		}

		//케이스별 학생들의 점수 합산
		int totalScore = 0;
		for (auto& it : scoreList)
		{
			totalScore += it;
		}

		//평균 및 평균 초과 학생비율 산출
		int averageScore = totalScore / studentNumber;
		int aboveAvgStudentNumber = 0;
		for (auto& it : scoreList)
		{
			if (it > averageScore)
			{
				++aboveAvgStudentNumber;
			}
		}
		aboveAverageRatio.emplace_back(((float)aboveAvgStudentNumber / (float)studentNumber) * 100.f);
		
		//scoreList clear
		scoreList.clear();
	}

	//비율 출력
	for (auto& it : aboveAverageRatio)
	{
		cout << it << "%\n";
	}

	return 0;
}