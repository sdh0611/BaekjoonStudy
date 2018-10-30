#include <iostream>
#include <cmath>
//8단계 카잉달력 문제
//	->다른 방식으로 접근해 보았으나, 5연속 틀려서 보류..

using namespace std;

int CalDate(int m, int n, int x, int y)
{

	if (x == 1 && y == 1)
	{
		return 1;
	}

	int result = -1;
	int curX = 1;
	int curY = 1;

	for(int i = 0; ; )
	{
		if (x < y) {
			curY += m;
			((curY % n) == 0) ? curY = n : curY %= n;
			++i;

			if (curX == 1 && curY == 1)
				break;

			if (labs(x - y) == labs(curX - curY))
			{
				result = m * i + x;
				return result;
			}

		}
		else
		{
			curX += n;
			((curX % m) == 0) ? curX = m : curX %= m;
			++i;

			if (curX == 1 && curY == 1)
				break;

			if (labs(x - y) == labs(curX - curY))
			{
				result = n * i + y;
				return result;
			}


		}
	}

	return result;
}

int main()
{
	int testCase;
	scanf("%d", &testCase);

	int m, n, x, y;

	for (; testCase > 0; --testCase)
	{
		scanf("%d %d %d %d", &m, &n, &x, &y);

		printf("%d\n", CalDate(m, n, x, y));
	}

	return 0;
}