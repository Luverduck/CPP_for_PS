// Chapter 03. 흐름 제어
// 02. 반복
/*
	while문
	조건식이 true일 동안만 실행문을 반복

	while ( [조건식] ) {
		[실행문];
	};
*/

#include <iostream>

using namespace std;

int main()
{
	// 문자열의 출력
	char my_str[] = "Hello, World!"; // 문자 중간에 널 문자 포함

	int i = 0;
	while (i < sizeof(my_str) && my_str[i] != '\0')
	{
		cout << my_str[i];
		i++;
	}

	return 0;
}