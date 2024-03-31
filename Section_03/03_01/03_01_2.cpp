// Chapter 03. 흐름 제어
// 01. 분기

#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	// switch ~ case문
	switch (number)
	{
	case 0:
		cout << "정수 0 입니다." << endl;
		break;
	case 1:
		cout << "정수 1 입니다." << endl;
		break;
	default:
		cout << "정수 2 입니다." << endl;
		break; // 마지막은 생략 가능
	}

	return 0;
}