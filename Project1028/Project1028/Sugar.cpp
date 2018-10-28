#include <iostream>
#include <vector>

//2�ܰ� ��������

int main() {

	using namespace std;

	//��� ������ �Ϻ��ϰ� ���� �� �ִ� ������ ������ �����ϱ� ���� int�� vector
	vector<int>	totalBagNumberList;
	int totalWeight = 0,					//���� �� ����
		fiveBagNumber = 0,				//5kg ���� ����
		threeBagNumber = 0,			//3kg ���� ����
		leastTotalBagNumber = 0;		//�ּ� ���� ����

	cin >> totalWeight;

	//���� ������ ������ �����ϱ� ���� ����
	int remainWeight = totalWeight;

	//���������� ���ϴ� ��ƾ
	//5kg¥�� ������ �ϳ��� �ٿ������鼭 ����Ѵ�.
	for(fiveBagNumber = remainWeight / 5; fiveBagNumber >= 0; --fiveBagNumber)
	{
		remainWeight = remainWeight - (fiveBagNumber * 5);

		threeBagNumber = remainWeight / 3;
		remainWeight = remainWeight - (threeBagNumber * 3);

		if (remainWeight == 0)
		{
			totalBagNumberList.emplace_back(threeBagNumber + fiveBagNumber);
		}

		remainWeight = totalWeight;
		
	}

	//vector�� ��������� N kg�� ������ �������� �� �� ���� ���̹Ƿ�
	//�ּ� ���������� -1�� �ʱ�ȭ��.
	if (totalBagNumberList.empty())
	{
		leastTotalBagNumber = -1;
	}
	else
	{
		//vector�� ���鼭 �ּ� �������� ���
		for (auto it = totalBagNumberList.cbegin(); it != totalBagNumberList.cend(); ++it)
		{
			if (it == totalBagNumberList.cbegin())
			{
				leastTotalBagNumber = (*it);
			}
			else
			{
				if (leastTotalBagNumber > (*it))
				{
					leastTotalBagNumber = (*it);
				}
			}
		}
	}

	cout << leastTotalBagNumber << endl;

	return 0;
}