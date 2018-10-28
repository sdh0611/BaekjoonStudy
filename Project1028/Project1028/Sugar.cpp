#include <iostream>
#include <vector>

//2단계 설탕문제

int main() {

	using namespace std;

	//모든 설탕을 완벽하게 담을 수 있는 봉지의 개수를 저장하기 위한 int형 vector
	vector<int>	totalBagNumberList;
	int totalWeight = 0,					//설탕 총 무게
		fiveBagNumber = 0,				//5kg 봉지 개수
		threeBagNumber = 0,			//3kg 봉지 개수
		leastTotalBagNumber = 0;		//최소 봉지 개수

	cin >> totalWeight;

	//남은 설탕의 개수를 저장하기 위한 변수
	int remainWeight = totalWeight;

	//봉지개수를 구하는 루틴
	//5kg짜리 봉지를 하나씩 줄여나가면서 계산한다.
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

	//vector가 비어있으면 N kg을 나누어 떨어지게 할 수 없는 것이므로
	//최소 봉지개수를 -1로 초기화함.
	if (totalBagNumberList.empty())
	{
		leastTotalBagNumber = -1;
	}
	else
	{
		//vector를 돌면서 최소 봉지개수 계산
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