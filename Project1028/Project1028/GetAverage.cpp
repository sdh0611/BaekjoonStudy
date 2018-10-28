#include <iostream>
#include <vector>

//4�ܰ� ����̻� ���� ���ϱ�

int main()
{
	using namespace std;

	//����� ���� cout ���� ����.
	//�Ҽ��� ���� 3�ڸ��� ������.
	cout.setf(ios::fixed);	
	cout.precision(3);			

	vector<int> scoreList;							//�� ���̽��� �л����� ������ �����ϱ� ���� vector
	vector<float> aboveAverageRatio;		//�� ���̽����� ����� �Ѵ� �л��� ������ �����ϱ� ���� vector
	int caseNumber;								//case ����

	cin >> caseNumber;

	for (; caseNumber > 0; --caseNumber)
	{
		int studentNumber;			//���̽� �� �л��� ��
		cin >> studentNumber;		
		for (int i = 0; i < studentNumber; ++i)
		{
			int score;
			cin >> score;
			scoreList.push_back(score);
		}

		//���̽��� �л����� ���� �ջ�
		int totalScore = 0;
		for (auto& it : scoreList)
		{
			totalScore += it;
		}

		//��� �� ��� �ʰ� �л����� ����
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

	//���� ���
	for (auto& it : aboveAverageRatio)
	{
		cout << it << "%\n";
	}

	return 0;
}