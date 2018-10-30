#include <iostream>
#include <vector>

//9단계 1, 2, 3번 정렬문제

using namespace std;


class Sort {

public:
	Sort()
	{

	}
	~Sort() 
	{

	}

public:
	template<typename T>
	void BubbleSort(vector<T>& numberList)
	{
		T temp;
		size_t listSize = numberList.size();

		for (int i = 0; i < listSize; ++i)
		{
			for (int j = i + 1; j < listSize; ++j)
			{
				if (numberList[i] > numberList[j])
				{
					temp = numberList[i];
					numberList[i] = numberList[j];
					numberList[j] = temp;
				}

			}

		}


	}

	template<typename T>
	void SelectionSort(vector<T>& numberList)
	{
		T temp;
		size_t listSize = numberList.size();

		{
			T min;
			for (int i = 0; i < listSize - 1; ++i)
			{
				min = i;
				for (int index = i + 1; index < listSize; ++index)
				{
					if (numberList[min] > numberList[index])
					{
						min = index;
					}
				}
				temp = numberList[i];
				numberList[i] = numberList[min];
				numberList[min] = temp;
			}

		}

	}

	template<typename T>
	void InertionSort(vector<T>& numberList)
	{
		T temp;
		size_t listSize = numberList.size();


		for (int i = 1; i < listSize; ++i)
		{
			temp = numberList[i];
			int index;
			for (index = i - 1; index >= 0; --index)
			{
				if (temp < numberList[index])
				{
					numberList[index + 1] = numberList[index];
				}
				else
				{
					break;
				}
			}
			numberList[index + 1] = temp;

		}

	}

	template<typename T>
	void QuickSort(vector<T>& numberList)
	{



	}

	template<typename T>
	void MergeSort(vector<T>& numberList)
	{



	}


private:




};





int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	vector<int> numberList;
	Sort sort;
	int testCase;
	cin >> testCase;

	{
		int inputNumber;
		for (; testCase > 0; --testCase)
		{
			cin >> inputNumber;
			numberList.push_back(inputNumber);
		}

	}

	sort.SelectionSort<int>(numberList);

	for (const auto& it : numberList)
	{
		cout << it << " ";
	}
	puts("");

	return 0;
}