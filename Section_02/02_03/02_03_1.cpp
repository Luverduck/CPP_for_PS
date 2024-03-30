// Chapter 02. 기본 개념들
// 03. 배열
/*
	배열 (Array)
	동일한 자료형의 데이터가 연속적으로 나열된 형태의 자료 구조
	- 배열은 연속된 메모리 공간에 할당된다.
	- 배열의 요소는 index로 접근할 수 있다.
*/

#include <iostream>

using namespace std;

int main()
{
	// 배열의 선언
	int arr[3];
	// 배열의 초기화
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	// 배열의 선언 및 초기화
	int my_arr[3] = { 1, 2, 3 };

	// 인덱스로 배열의 요소 접근
	cout << my_arr[0] << " "
		<< my_arr[1] << " "
		<< my_arr[2] << " " << endl;

	return 0;
}