#include <iostream>
#include <vector>


//3´Ü°è ºü¸¥ µ¡¼À ¹®Á¦.

int main()
{
	using namespace std;

	int caseNumber;
	
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	cin >> caseNumber;
	
	int first, second;
	for (; caseNumber > 0; --caseNumber)
	{
		cin >> first >> second;
		cout << first + second << "\n"
	}


	return 0;
}