//#include <iostream>
//#include <string>
//
////6�ܰ� 1���� �迭 ����ϱ�
//
//int main()
//{
//	using namespace std;
//
//	string inputString;
//	int cnt = 0;
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	getline(cin, inputString);
//
//	//������ index���� �̿��� ���������� ���� ���߾�����, �ð��� �����ɷ��� �ݺ��ڷ� ���� �����ϵ��� ������.
//	for (auto it = inputString.cbegin(); it != inputString.cend(); ++it)
//	{
//		if (it == inputString.cbegin())
//		{
//			if ((*it) != ' ')
//			{
//				++cnt;
//			}
//
//		}
//		else
//		{
//			if ((*--it) == ' ')
//			{
//				++cnt;
//			}
//			++it;
//
//		}
//
//	}
//
//	cout << cnt << "\n";
//	
//	return 0;
//}