//#include <iostream>
//
////8�ܰ� �м�ã�� ����
//
//using namespace std;
//
//void GetPosition(int number)
//{
//	int posX = 1,
//		posY = 1,
//		diagnal = 1;
//
//	for (int i = 0; i < number-1; ++i)
//	{
//		//Ȧ����° �밢���� ���
//		if (diagnal % 2)
//		{
//			if (posY == diagnal)
//			{
//				++diagnal;
//				++posY;
//			}
//			else
//			{
//				if (posX > 1)
//				{
//					--posX;
//				}
//				++posY;
//			}
//			
//
//		}
//		else //¦����° �밢���� ���
//		{
//			if (posX == diagnal)
//			{
//				++diagnal;
//				++posX;
//			}
//			else
//			{
//				if (posY > 1)
//				{
//					--posY;
//				}
//				++posX;
//
//			}
//		
//
//		}
//
//	}
//	
//	cout << posX << "/" << posY << "\n";
//
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int inputNumber;
//	cin >> inputNumber;
//
//	GetPosition(inputNumber);
//
//
//	return 0;
//}