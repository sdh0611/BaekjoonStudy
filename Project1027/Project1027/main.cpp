#include <iostream>
#include <cstring>
#include <vector>

int main()
{
	using namespace std;

	//getline���� �Է¹޴� ��� ���๮�ڵ� ���Խ�Ű�� ������ �������� ���ڿ� ���� ������ 100 + 2
	char input[102];
	vector<char*> inputVector;

	//EOF�� ���� �� ���� �Է¹���
	while (cin.getline(input, 101)) {
		inputVector.push_back(new char[102]);
		strncpy(inputVector.back(), input, 102);
	}

	//��¸鼭 vector���� �� �޸𸮵� ����
	for (auto& it : inputVector)
	{
		cout << it << endl;
		delete it;
	}

	inputVector.clear();

	return 0;
}