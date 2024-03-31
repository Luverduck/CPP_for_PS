// Chapter 03. 흐름 제어
// 02. 반복
/*
	for문
	조건식이 true일 동안만 실행문을 반복

	for( [초기식] ; [조건식] ; [증감식] ){
		[실행문]
	};
*/

#include <iostream>

using namespace std;

int main()
{
	// 문자열의 출력
	char my_str[] = "Hello\0, World!"; // 문자 중간에 널 문자 포함

	// i) sizeof 연산자를 사용하는 경우
	for (int i = 0; i < sizeof(my_str); i++)
	{
		if (my_str[i] == '\0')
			break;

		cout << my_str[i];
	}

	cout << endl;

	// ii) sizeof 연산자를 사용하지 않는 경우
	for (int i = 0; i < my_str[i] != '\0'; i++)
	{
		cout << my_str[i];
	}

	return 0;
}