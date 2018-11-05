//#include <iostream>
//#include <vector>
//#include	<list>
////9단계 1, 2, 3번 정렬문제
//
//using namespace std;
//
//template<typename T>
//inline void Swap(T& a, T& b)
//{
//	T temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//
////백준 제출용 CountingSort
//void CountingSort(int testCase)
//{
//	static vector<int> countingList(10001);
//
//	int input;
//	for (; testCase > 0; --testCase)
//	{
//		cin >> input;
//		++countingList[input];
//	}
//
//	int number = 0;
//
//	for (const auto& count : countingList)
//	{
//		for (int i = 0; i < count; ++i)
//		{
//			cout << number << "\n";
//		}
//		++number;
//	}
//	
//}
//
//
////class Sort {
////
////public:
////	Sort()
////	{
////
////	}
////	~Sort() 
////	{
////
////	}
////
////public:
////	template<typename T>
////	void BubbleSort(vector<T>& numberList)
////	{
////		T temp;
////		size_t listSize = numberList.size();
////
////		for (int i = 0; i < listSize; ++i)
////		{
////			for (int j = i + 1; j < listSize; ++j)
////			{
////				if (numberList[i] > numberList[j])
////				{
////					temp = numberList[i];
////					numberList[i] = numberList[j];
////					numberList[j] = temp;
////				}
////
////			}
////
////		}
////
////
////	}
////
////	template<typename T>
////	void SelectionSort(vector<T>& numberList)
////	{
////		T temp;
////		size_t listSize = numberList.size();
////
////		{
////			T min;
////			for (int i = 0; i < listSize - 1; ++i)
////			{
////				min = i;
////				for (int index = i + 1; index < listSize; ++index)
////				{
////					if (numberList[min] > numberList[index])
////					{
////						min = index;
////					}
////				}
////				temp = numberList[i];
////				numberList[i] = numberList[min];
////				numberList[min] = temp;
////			}
////
////		}
////
////	}
////
////	template<typename T>
////	void InertionSort(vector<T>& numberList)
////	{
////		T temp;
////		size_t listSize = numberList.size();
////
////
////		for (int i = 1; i < listSize; ++i)
////		{
////			temp = numberList[i];
////			int index;
////			for (index = i - 1; index >= 0; --index)
////			{
////				if (temp < numberList[index])
////				{
////					numberList[index + 1] = numberList[index];
////				}
////				else
////				{
////					break;
////				}
////			}
////			numberList[index + 1] = temp;
////
////		}
////
////	}
////
////	template<typename T>
////	void RadixSort(vector<T>& numberList)
////	{
////		//가장 큰 수 검출
////		T max = numberList[0];
////		for (const auto& it : numberList)
////		{
////			if (it > max)
////			{
////				max = it;
////			}
////		}
////		
////		//가장 큰 수의 자릿수 검출
////		int maxRadix = 0;
////		for (; max > 0; max /= 10)
////		{
////			++maxRadix;
////		}
////
////		vector<vector<int>> bucket(10, vector<int>(0));
////
////		for (int i = 0; i < maxRadix; ++i)
////		{
////			for (const auto& number : numberList)
////			{
////				bucket[GetRadix(i+1, number)].push_back(number);
////			}
////
////			auto it = numberList.begin();
////			
////			for (auto& bucketList : bucket)
////			{
////				for(const auto& number : bucketList)
////				{
////					(*it) = number;
////					if (it != numberList.end())
////						++it;
////				}
////				bucketList.clear();
////			}
////
////		}
////
////		template<typename T>
////		void CountingSort(vector<T>& numberList)
////		{
////			static vector<T> countingList(10001);
////			vector<T> sortedList;
////
////			for (const auto& number : numberList)
////			{
////				++countingList[number];
////			}
////
////			//for (auto it = countingList.begin() + 1; it != countingList.end(); ++it)
////			//{
////			//	(*it) += (*(it - 1));
////			//}
////
////			int number = 0;
////
////			for (const auto& count : countingList)
////			{
////				for (int i = 0; i < count; ++i)
////				{
////					sortedList.push_back(number);
////				}
////
////				++number;
////			}
////
////			swap(sortedList, numberList);
////
////			countingList.clear();
////		}
////
////
////	}
////
////	template<typename T>
////	void MergeSort(vector<T>& numberList)
////	{
////		vector<T> sortedList(numberList.size());
////		MergeSort(0, numberList.size() - 1, numberList, sortedList);
////	}
////
////	template<typename T>
////	void QuickSort(vector<T>& numberList)
////	{
////		QuickSort(0, numberList.size() - 1, numberList);
////	}
////
////
////private:
////	template<typename T>
////	T GetRadix(int radix, T number)
////	{
////		T result = 0;
////
////		for (int i = 1; i < radix; ++i)
////		{
////			number /= 10;
////		}
////
////		result = number % 10;
////
////		return result;
////	}
////
////
////	template<typename T>
////	void MergeSort(int left, int right, vector<T>& numberList, vector<T>& sortedList)
////	{
////		if (left < right) 
////		{
////			int mid = (left + right) / 2;
////
////			MergeSort(left, mid, numberList, sortedList);
////			MergeSort(mid + 1, right, numberList, sortedList);
////			Merge(left, mid, right, numberList, sortedList);
////		}
////
////
////	}
////	
////	template<typename T>
////	void Merge(int left, int mid, int right, vector<T>& numberList, vector<T>& sortedList)
////	{
////		int leftHold = left;
////		int rightHold = mid + 1;
////		int index = left;
////
////		while (leftHold <= mid && rightHold <= right)
////		{
////			if (numberList[leftHold] < numberList[rightHold])
////			{
////				sortedList[index++] = numberList[leftHold++];
////			}
////			else
////			{
////				sortedList[index++] = numberList[rightHold++];
////			}
////		}
////
////		for (; leftHold <= mid; ++leftHold)
////		{
////			sortedList[index++] = numberList[leftHold];
////		}
////
////		for (; rightHold <= right; ++rightHold)
////		{
////			sortedList[index++] = numberList[rightHold];
////		}
////
////		for (int i = left; i <= right; ++i)
////		{
////			numberList[i] = sortedList[i];
////		}
////
////	}
////
////	template<typename T>
////	void QuickSort(int left, int right, vector<T>& numberList)
////	{
////		int leftHold = left;
////		int rightHold = right;
////		T pivot = numberList[right];
////
////		while (leftHold < rightHold)
////		{
////			while (numberList[leftHold] <= pivot && leftHold < right) ++leftHold;
////			while (numberList[rightHold] >= pivot && rightHold > left) --rightHold;
////
////			if (leftHold < rightHold)
////			{
////				Swap<T>(numberList[leftHold], numberList[rightHold]);
////			}
////
////		}
////
////		Swap<T>(numberList[leftHold], numberList[right]);
////
////		if (right - left + 1 > 2)
////		{
////			if (leftHold < right)
////			{
////				QuickSort(leftHold + 1, right, numberList);
////			}
////			if (rightHold > left)
////			{
////				QuickSort(left, rightHold, numberList);
////			}
////
////		}
////
////	}
////
////};
//
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int testCase;
//
//	cin >> testCase;
//
//	//CountingSort 외 정렬들
//	//vector<int> numberList;
//	//Sort sort;
//	//{
//	//	int inputNumber;
//	//	for (; testCase > 0; --testCase)
//	//	{
//	//		cin >> inputNumber;
//	//		numberList.push_back(inputNumber);
//	//	}
//
//	//}
//
//	//sort.MergeSort(numberList);
//	//for (const auto& it : numberList)
//	//{
//	//	cout << it << " ";
//	//}
//	//puts("");
//	
//	//CountingSort
//	CountingSort(testCase);
//
//
//
//	return 0;
//}