// Chapter 03. 흐름 제어
// 01. 분기

#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	// 삼항 연산자
	cout << (number % 2 == 0 ? "짝수입니다." : "홀수입니다.") << endl;

	return 0;
}