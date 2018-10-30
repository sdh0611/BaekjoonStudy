//#include <iostream>
//#include <vector>
//
////8단계 방번호 문제
//
//using namespace std;
//
//int Function(int number)
//{
//	if (number == 0)
//	{
//		return 1;
//	}
//
//	vector<int> usedNumberCntList(9, 0);
//
//	{
//		int index;
//		for (; number > 0; number /= 10)
//		{
//			index = number % 10;
//			if (index == 9)
//			{
//				index = 6;
//			}
//			++usedNumberCntList[index];
//		}
//	}
//
//	int maximum = 0;
//	for (int i = 0; i < usedNumberCntList.size(); ++i)
//	{
//		if (i != 6)
//		{
//			if (maximum < usedNumberCntList[i])
//			{
//				maximum = usedNumberCntList[i];
//			}
//		
//		}
//
//	}
//
//	{
//		int temp = (usedNumberCntList[6] / 2);
//		(usedNumberCntList[6] % 2) ? ++temp : temp;
//
//		if (maximum < temp)
//		{
//			maximum = temp;
//		}
//
//	}
//
//	return maximum;
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int roomNumber;
//	cin >> roomNumber;
//
//	cout << Function(roomNumber) << "\n";
//
//
//	return 0;
//}