//#include <iostream>
//
////10�ܰ� �Ҽ� ���ϱ�
////192ms ����.. �� �ٿ�����
//
//using namespace std;
//
//bool JudgePrimeNumber(int number)
//{
//	if (number < 2)
//		return false;
//
//	for (int i = 2; i*i <= number; ++i)
//	{
//		if (number % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int min, max;
//	cin >> min >> max;
//
//	for (int i = min; i <= max; ++i)
//	{
//		if (JudgePrimeNumber(i))
//		{
//			cout << i << "\n";
//		}
//	}
//
//
//	return 0;
//}