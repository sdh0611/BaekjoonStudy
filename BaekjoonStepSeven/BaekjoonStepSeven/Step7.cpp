//#include <iostream>
//#include <string>
//
////7단계 다이얼 문제
//
//int GetTime(char ch)
//{
//	int time = 2;
//
//	switch (ch)
//	{
//	case 'A':
//	case 'B':
//	case 'C':
//		time += 1;
//		break;
//	case 'D':
//	case 'E':
//	case 'F':
//		time += 2;
//		break;
//	case 'G':
//	case 'H':
//	case 'I':
//		time += 3;
//		break;
//	case 'J':
//	case 'K':
//	case 'L':
//		time += 4;
//		break;
//	case 'M':
//	case 'N':
//	case 'O':
//		time += 5;
//		break;
//	case 'P':
//	case 'Q':
//	case 'R':
//	case 'S':
//		time += 6;
//		break;
//	case 'T':
//	case 'U':
//	case 'V':
//		time += 7;
//		break;
//	case 'W':
//	case 'X':
//	case 'Y':
//	case 'Z':
//		time += 8;
//		break;
//
//	}
//
//	return time;
//}
//
//int main()
//{
//	using namespace std;
//
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	string inputString;
//	cin >> inputString;
//
//	int totalTime = 0;
//
//	for (const auto& ch : inputString)
//	{
//		totalTime += GetTime(ch);
//	}
//
//	cout << totalTime << "\n";
//
//	return 0;
//}