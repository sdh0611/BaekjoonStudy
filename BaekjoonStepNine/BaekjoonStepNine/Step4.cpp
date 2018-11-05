//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <thread>
//
////9단계 4번 통계학 문제
//// -> 직접 퀵소트 구현 및 쓰레드까지 사용했으나 부질없는 짓이었다..
//
//using namespace std;
//
//
////template<typename T>
////inline void Swap(T& a, T& b)
////{
////	T temp = a;
////	a = b;
////	b = temp;
////}
////
////template<typename T>
////void QuickSort(int left, int right, vector<T>& numberList)
////{
////	int leftHold = left;
////	int rightHold = right;
////	T pivot = numberList[right];
////
////	while (leftHold < rightHold)
////	{
////		while (numberList[leftHold] <= pivot && leftHold < right) ++leftHold;
////		while (numberList[rightHold] >= pivot && rightHold > left) --rightHold;
////
////		if (leftHold < rightHold)
////		{
////			Swap<T>(numberList[leftHold], numberList[rightHold]);
////		}
////		
////	}
////
////	Swap<T>(numberList[leftHold], numberList[right]);
////
////	if (right - left + 1 > 2)
////	{
////		if (leftHold < right)
////		{
////			QuickSort(leftHold + 1, right, numberList);
////		}
////		if (rightHold > left)
////		{
////			QuickSort(left, rightHold, numberList);
////		}
////	
////	}
////
////}
////
////template<typename T>
////void Merge(int left, int mid, int right, vector<T>& numberList)
////{
////	int leftHold = left;
////	int rightHold = mid + 1;
////	vector<T> sortedList;
////
////	while (leftHold <= mid && rightHold <= right)
////	{
////		if (numberList[leftHold] < numberList[rightHold])
////		{
////			sortedList.push_back(numberList[leftHold++]);
////		}
////		else
////		{
////			sortedList.push_back(numberList[rightHold++]);
////		}
////
////	}
////
////	for (; leftHold <= mid; ++leftHold)
////	{
////		sortedList.push_back(numberList[leftHold]);
////	}
////
////	for (; rightHold <= right; ++rightHold)
////	{
////		sortedList.push_back(numberList[rightHold]);
////	}
////
////	int index = left;
////	for (const auto& number : sortedList)
////	{
////		numberList[index++] = number;
////	}
////
////
////}
////template<typename T>
////void Sorting(vector<T>& numberList)
////{
////	size_t listSize = numberList.size();
////
////
////	if (listSize >= 10000) {
////		thread quick1(QuickSort<T>, 0, listSize / 4, ref(numberList));
////		thread quick2(QuickSort<T>, listSize / 4 + 1, listSize / 2, ref(numberList));
////		thread quick3(QuickSort<T>, listSize / 2 + 1, listSize * (3.f / 4.f), ref(numberList));
////		thread quick4(QuickSort<T>, listSize * (3.f / 4.f) + 1, listSize - 1, ref(numberList));
////
////		if (quick1.joinable()) quick1.join();
////		if (quick2.joinable()) quick2.join();
////		if (quick3.joinable()) quick3.join();
////		if (quick4.joinable()) quick4.join();
////
////		Merge(0, listSize / 4, listSize / 2, numberList);
////		Merge(listSize / 2 + 1, listSize * (3.f / 4.f), listSize - 1, numberList);
////		Merge(0, listSize / 2, listSize - 1, numberList);
////	}
////	else
////	{
////		QuickSort(0, listSize - 1, numberList);
////	}
////
////}
//
//
//int GetMidian(vector<int>& numberList)
//{
//	return numberList[numberList.size() / 2];
//}
//
//int GetMode(vector<int>& countingList)
//{
//	int cnt = 0;
//	int max = countingList[0];
//	size_t listSize = countingList.size();
//
//	vector<int> modeList;
//	for (const auto& count : countingList)
//	{
//		if (max < count)
//		{
//			max = count;
//		}
//	}
//
//	for(int i=0; i < listSize; ++i)
//	{
//		if (max == countingList[i])
//		{
//			modeList.push_back(i);
//			++cnt;
//		}
//	}
//
//	//Sorting(modeList);
//	int result;
//	if (cnt > 1)
//	{
//		sort(modeList.begin(), modeList.end());
//		result = modeList[1];
//	}
//	else
//	{
//		result = modeList[0];
//	}
//	
//
//	return result;
//
//}
//
//int GetRange(vector<int>& numberList)
//{
//	return numberList[numberList.size() - 1] - numberList[0];
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	vector<int> numberList;
//	vector<int> countingList(8001);
//
//	int testCase;
//	cin >> testCase;
//	cout << fixed;
//	cout.precision(0);
//
//	int input;
//	float sum = 0;
//	for (; testCase > 0; --testCase)
//	{
//		cin >> input;
//		sum += input;
//		++countingList[input+4000];
//		numberList.push_back(input);
//	}
//
//	//Sorting(numberList);
//	sort(numberList.begin(), numberList.end());
//
//	cout << sum / (float)numberList.size() << "\n";
//	cout << GetMidian(numberList) << "\n";
//	cout << GetMode(countingList) - 4000 << "\n";
//	cout << GetRange(numberList) << "\n";
//
//	return 0;
//}