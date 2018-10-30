//#include <iostream>
//#include <cmath>
////8단계 카잉달력 문제 -> 최소공배수 활용
//
//using namespace std;
//
//int GetGcd(int value1, int value2) {
//
//	while (value2)
//	{
//		int remain = value1 % value2;
//		value1 = value2;
//		value2 = remain;
//	}
//
//	return value1;
//
//}
//
//int GetLcm(int value1, int value2)
//{
//	return value1 * value2 / GetGcd(value1, value2);
//}
//
//int CalDate(int m, int n , int x, int y)
//{
//
//	if (x == 1 && y == 1)
//	{
//		return 1;
//	}
//
//	int result = -1;
//	int curX = x;
//	int curY = x;
//
//	int cnt = x;
//	for (int i = 0; ; ++i)
//	{
//		(curY % n == 0) ? curY = n : curY %= n;
//
//		if (curY == y)
//		{
//			result = cnt;
//			break;
//		}
//
//		if (cnt > GetLcm(m, n))
//		{
//			break;
//		}
//
//		curY += m;
//		cnt += m;
//
//	}
//	return result;
//}
//
//int main()
//{
//	int testCase;
//	scanf("%d", &testCase);
//
//	int m,	 n, x, y;
//
//	for (; testCase > 0; --testCase)
//	{
//		scanf("%d %d %d %d", &m, &n, &x, &y);
//
//		printf("%d\n", CalDate(m, n, x, y));
//	}
//
//	return 0;
//}