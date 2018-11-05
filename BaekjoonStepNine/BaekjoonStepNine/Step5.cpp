//#include <iostream>
//#include <vector>
//#include <algorithm>
//
////9단계 소트인사이드
//
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	long long input;
//	cin >> input;
//
//	vector<long long> numberList;
//	for (; input > 0; input /= 10)
//	{
//		numberList.emplace_back(input % 10);
//	}
//
//	sort(numberList.begin(), numberList.end(), greater<long long>());
//
//	for (const auto& number : numberList)
//	{
//		cout << number;
//	}
//
//	puts("");
//
//	return 0;
//}