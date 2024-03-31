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
	// 배열의 출력
	int my_arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	for (int i = 0; i < sizeof(my_arr) / sizeof(int); i++)
	{
		cout << my_arr[i] << " ";
	}

	return 0;
}