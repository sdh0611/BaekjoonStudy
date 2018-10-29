//#include <iostream>
//#include <vector>
//#include <set>
//
////5단계 Self Number 문제
//
////최대 숫자
//const int gMaxNumber = 10000;
//
////함수 정의
//int Function(int number)
//{
//	int sum = 0;
//
//	for (int result = number; result > 0; result /= 10)
//	{
//		sum += result % 10;
//	}
//
//	return sum + number;
//}
//
//
//int main()
//{
//	using namespace std;
//
//	//Self Number가 아닌 수들을 저장하는 set 컨테이너
//	set<int> notSelfNumberSet;
//	
//	//set에 1부터 10000사이의 수로 만들어지는 Self Number가 아닌 수들을 set에 저장
//	for (int i = 1; i <= gMaxNumber; ++i)
//	{
//		notSelfNumberSet.emplace(Function(i));
//	}
//
//	//set에 속한 값에 아니면 Self Number이므로 출력
//	for (int i = 1; i <= gMaxNumber; ++i)
//	{
//		if(notSelfNumberSet.find(i) == notSelfNumberSet.end())
//		{
//			cout << i << "\n";
//		}
//	}
//
//
//	return 0;
//}