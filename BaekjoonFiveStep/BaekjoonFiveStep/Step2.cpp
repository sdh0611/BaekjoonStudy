//#include <iostream>
//
////5�ܰ� �Ѽ� ���ϱ� ����
//
//bool Function(int number)
//{
//	//100 �̸��� ���� �Ѽ��̹Ƿ� true
//	if (number < 100)
//	{
//		return true;
//	}
//
//	int preNumber;					//���� �ڸ����� �����ϱ� ���� ����
//	int difference = 0,				//������ ����
//		preDifferrence = 0;		//���� ����
//	
//	
//	for (int temp = number; temp > 0; temp /= 10)
//	{
//		if (temp == number)												//ù ����� ���
//		{
//			preNumber = temp % 10;									//preNumber�� �ʱ�ȭ
//		}
//		else
//		{
//			if (number / 10 == temp)									//�ι� ° ����� ���
//			{
//				preDifferrence = preNumber - temp % 10;			//���� ���� ���� preNumber���� �ʱ�ȭ����.
//				preNumber = temp % 10;
//			}
//			else																//���⼭ ���� �������� �Ѽ� �� ���μ���
//			{
//				difference = preNumber - temp % 10;				//���� ���� ���
//				if (preDifferrence != difference)						//���� ������ ���� ������ �ٸ� ��� �Ѽ��� �ƴϹǷ� false ����
//				{
//					return false;
//				}
//				preNumber = temp % 10;
//				preDifferrence = difference;
//			}
//		}
//
//	}
//
//	return true;
//}
//
//
//int main()
//{
//	using namespace std;
//
//	int input, 
//		cnt = 0;
//
//	cin >> input;
//
//	for (int i = 1; i <= input; ++i)
//	{
//		if (Function(i))
//		{
//			++cnt;
//		}
//
//	}
//
//	cout << cnt << "\n";
//
//	return 0;
//}