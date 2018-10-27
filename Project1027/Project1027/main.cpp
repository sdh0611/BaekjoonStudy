#include <iostream>
#include <cstring>
#include <vector>

int main()
{
	using namespace std;

	//getline으로 입력받는 경우 개행문자도 포함시키기 때문에 문제상의 문자열 길이 제한인 100 + 2
	char input[102];
	vector<char*> inputVector;

	//EOF를 받을 때 까지 입력받음
	while (cin.getline(input, 101)) {
		inputVector.push_back(new char[102]);
		strncpy(inputVector.back(), input, 102);
	}

	//출력면서 vector내의 힙 메모리들 정리
	for (auto& it : inputVector)
	{
		cout << it << endl;
		delete it;
	}

	inputVector.clear();

	return 0;
}