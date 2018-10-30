//#include <iostream>
//
////8단계 ACM호텔 문제
//
//using namespace std;
//
//int GetRoomNumber(int width, int height, int guestNumber)
//{
//	int roomNumber = 101;
//	int hotelRoom = 0,
//		hotelFloor = 0;
//
//	hotelFloor = guestNumber % height;	
//	if (hotelFloor == 0)
//	{
//		hotelFloor = height;
//		hotelRoom = (guestNumber / height);
//	}
//	else
//	{
//		hotelRoom = (guestNumber / height) + 1;
//	}
//
//	roomNumber = hotelFloor * 100 + hotelRoom;
//
//	return roomNumber;
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int caseNumber;
//	cin >> caseNumber;
//
//	int hotelWidth,			//호텔의 너비. 사실상의 방 개수
//		hotelHeight,			//호텔 높이
//		guestNumber;		//몇 번째 손님인가
//
//	for (; caseNumber > 0; --caseNumber)
//	{
//		cin >> hotelHeight;
//		cin >> hotelWidth;
//		cin >> guestNumber;
//
//		cout << GetRoomNumber(hotelWidth, hotelHeight, guestNumber) << "\n";
//	}
//
//
//	return 0;
//}