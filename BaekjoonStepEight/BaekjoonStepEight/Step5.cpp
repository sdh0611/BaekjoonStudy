//#include <iostream>
//
////8단계 부녀회장 문제 : 재귀 활용
//
//using namespace std;
//
//int GetNumberOfPeople(int floor, int room)
//{
//	if (floor == 0)
//	{
//		return room;
//	}
//
//	if (floor == 1)
//	{
//		return room * (room + 1) * 0.5;
//	}
//	else {
//		int result = 0;
//		for (int i = 0; i < room; ++i)
//		{
//			result += GetNumberOfPeople(floor - 1, i + 1);
//		}
//		return result;
//	}
//
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int caseNumber;
//	cin >> caseNumber;
//
//	int floor,
//		room;
//	for (; caseNumber > 0; --caseNumber)
//	{
//		cin >> floor;
//		cin >> room;
//		cout << GetNumberOfPeople(floor, room) << "\n";
//	}
//
//
//
//	return 0;
//}