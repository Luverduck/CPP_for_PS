// Chapter 03. 흐름 제어
// 01. 분기

#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	// if ~ else if ~ else문
	if (number % 2 == 0)
		cout << "짝수 입니다." << endl;
	else
		cout << "홀수 입니다." << endl;

	return 0;
}