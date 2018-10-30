//#include <iostream>
//
////8단계 벌집문제
//
//using namespace std;
//
//int GetDistance(int number) 
//{
//	int distance = 0;
//
//	if (number == 1)
//		return 1;
//
//	for (int dis = 2; ; ++dis)
//	{
//		if (number <= 3*dis *(dis - 1) + 1)
//		{
//			distance = dis;
//			break;
//		}
//	}
//
//	return distance;
//}
//
//int main()
//{
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int roomNumber;
//
//	cin >> roomNumber;
//
//	cout << GetDistance(roomNumber) << "\n";
//
//
//	return 0;
//}