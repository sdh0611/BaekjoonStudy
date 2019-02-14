//#include <iostream>
//#include <list>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//template <typename T>
//class Stack
//{
//public:
//	void Push(T value)
//	{
//		container.push_back(value);
//	}
//
//	void Pop(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.back();
//			container.pop_back();
//		}
//
//	}
//
//	size_t Size()
//	{
//		return container.size();
//	}
//
//	bool IsEmpty()
//	{
//		return container.empty();
//	}
//
//	void Top(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.back();
//		}
//	}
//
//private:
//	std::vector<T> container;
//
//};
//
//template <typename T>
//class Queue
//{
//public:
//	void Push(T value)
//	{
//		container.push_back(value);
//	}
//
//	void Pop(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.front();
//			container.pop_front();
//		}
//
//	}
//
//	size_t Size()
//	{
//		return container.size();
//	}
//
//	bool IsEmpty()
//	{
//		return container.empty();
//	}
//
//	void Front(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.front();
//		}
//	}
//
//	void Back(T& value)
//	{
//		if (!IsEmpty())
//		{
//			value = container.back();
//		}
//	}
//
//	void PrintElement()
//	{
//		for (const auto& element : container)
//		{
//			cout << element << " ";
//		}
//		puts("");
//	}
//
//	bool CheckValueExist(T value)
//	{
//		for (const auto& element : container)
//		{
//			if (element == value)
//			{
//				return true;
//			}
//		}
//
//		return false;
//	}
//
//private:
//	std::list<T> container;
//
//};
//
//void DFS(const vector<vector<bool>>& graph, int start)
//{
//	Stack<int> vertexStack;
//	const size_t size = graph.size();
//	vector<bool> vertexvisited(size, false);
//
//	vertexStack.Push(start);
//	cout << start + 1 << " ";
//
//	int vertex = -1;
//
//	while (!vertexStack.IsEmpty())
//	{
//		vertexStack.Top(vertex);
//		vertexvisited[vertex] = true;
//		int index;
//		for (index = 0; index < size; ++index)
//		{
//			if (graph[vertex][index] && !vertexvisited[index])
//			{
//				cout << index + 1 << " ";
//				vertexStack.Push(index);
//				break;
//			}
//		}
//
//		if (index == size)
//		{
//			vertexStack.Pop(vertex);
//		}
//
//	}
//	cout << "\n";
//}
//
//void BFS(const vector<vector<bool>>& graph, int start)
//{
//	Queue<int> vertexQueue;
//	const size_t size = graph.size();
//	vector<bool> vertexVisited(size, false);
//
//	vertexQueue.Push(start);
//	vertexVisited[start] = true;
//
//	while (!vertexQueue.IsEmpty())
//	{
//		int vertex = 0;
//		vertexQueue.Pop(vertex);
//		cout << vertex + 1 << " ";
//
//		for (int index = 0; index < size; ++index)
//		{
//			if (graph[vertex][index] && !vertexVisited[index])
//			{
//				vertexQueue.Push(index);
//				vertexVisited[index] = true;
//			}
//		}
//	}
//	cout << "\n";
//
//}
//
//int main()
//{
//	cin.sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int vertexNumber, lineNumber, start;
//	cin >> vertexNumber >> lineNumber >> start;
//
//	vector<vector<bool>> graph;
//	for (int i = 0; i < vertexNumber; ++i)
//	{
//		vector<bool> element(vertexNumber, false);
//		graph.emplace_back(element);
//	}
//
//	int startVertex, endVertex;
//	for (int i = 0; i < lineNumber; ++i)
//	{
//		cin >> startVertex >> endVertex;
//		graph[startVertex - 1][endVertex - 1] = true;
//		graph[endVertex - 1][startVertex - 1] = true;
//	}
//
//	DFS(graph, start - 1);
//	BFS(graph, start - 1);
//
//	return  0;
//}