//#include <cstdio>
//#include <vector>
//
////8단계 Fly me to the Alpha Centauri
////도움받고 풀음..
//
////using namespace std;
//
//long long CalMovement(long long start, long long end) {
//
//	long long distance = end - start;
//	if (distance == 1)
//	{
//		return 1;
//	}
//
//	long long remainMoveDistance = 0,
//		limitMoveDistance = 0,
//		moveCnt = 0;
//
//	for (long long i = 2; ; ++i)
//	{
//		if (i * i > distance)
//		{
//			limitMoveDistance = i - 1;
//			moveCnt = 2 * (i - 1) - 1;
//			break;
//		}
//	}
//
//	remainMoveDistance = distance - limitMoveDistance * limitMoveDistance;
//	long long remainMoveCnt = remainMoveDistance / limitMoveDistance;
//
//	if ( (long double)remainMoveDistance / (long double)limitMoveDistance > remainMoveCnt)
//	{
//		++remainMoveCnt;
//	}
//	
//	moveCnt += remainMoveCnt;
//
//	return moveCnt;
//}
//
//int main()
//{
//	long long caseNumber;
//	scanf("%lld", &caseNumber);
//	
//	long long start,
//					end;
//	for ( ; caseNumber > 0; --caseNumber)
//	{
//		scanf("%lld %lld", &start, &end);
//
//		printf("%lld\n", CalMovement(start, end));
//	}
//
//	return 0;
//}