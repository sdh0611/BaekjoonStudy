//#include <iostream>
//#include <vector>
//#include <set>
//
////5�ܰ� Self Number ����
//
////�ִ� ����
//const int gMaxNumber = 10000;
//
////�Լ� ����
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
//	//Self Number�� �ƴ� ������ �����ϴ� set �����̳�
//	set<int> notSelfNumberSet;
//	
//	//set�� 1���� 10000������ ���� ��������� Self Number�� �ƴ� ������ set�� ����
//	for (int i = 1; i <= gMaxNumber; ++i)
//	{
//		notSelfNumberSet.emplace(Function(i));
//	}
//
//	//set�� ���� ���� �ƴϸ� Self Number�̹Ƿ� ���
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