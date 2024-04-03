// Chapter 04. 메모리
// 01. 포인터
/*
	포인터 (pointer)
	메모리의 주소를 저장할 수 있는 자료형
*/

#include <iostream>

using namespace std;

int main()
{
	// 배열과 포인터
	int my_arr[] = { 23, 28, 56, 69, 74 };

	// 포인터의 산술 연산을 이용한 배열의 요소 접근
	cout << *(my_arr + 2) << endl; // [결과] 56

	cout << endl;

	// 문자열과 포인터
	char my_str[] = "Hello, World!";

	// 포인터의 산술 연산을 이용한 문자열의 요소 접근
	cout << *(my_str + 7) << endl; // [결과] W

	return 0;
}