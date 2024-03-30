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
	// 문자열 (char의 배열)
	// 문자열이 저장될 때 문자열의 끝을 나타내는 널 문자(\0)가 함께 저장된다.
	// 문자열의 길이는 '실제 저장할 문자 + 1' 이다.
	//char name[13] = "Hello, World!";
	char name[14] = "Hello, World!";
	cout << name << " " << sizeof(name) << endl;

	// 문자열도 배열이므로 인덱스를 통한 접근 및 조작을 할 수 있다.
	name[10] = 'A';
	name[11] = 'B';
	name[12] = 'C';
	cout << name << endl;

	// cout은 문자열 출력 중 널 문자(\0)를 만나면 출력을 중지한다.
	name[2] = '\0';
	cout << name << endl;

	return 0;
}