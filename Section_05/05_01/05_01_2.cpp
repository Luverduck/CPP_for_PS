// Chapter 05. 구조 만들기
// 01. 구조체
/*
	구조체 (Structure)
	여러 자료형의 데이터 오브젝트가 연속적으로 나열된 형태의 자료형
	- 구조체의 멤버 변수들은 연속된 메모리 공간에 할당된다.
*/

#include <iostream>

using namespace std;

struct MyStruct
{
	// 구조체의 멤버 변수
	int first;
	int second;

	// 구조체의 멤버 함수
	int Sum()
	{
		return first + second;
	}
};

int main()
{
	// 구조체 변수의 선언
	MyStruct var_struct;
	var_struct.first = 1;
	var_struct.second = 2;
	// 구조체 변수를 통한 멤버 함수 접근
	cout << var_struct.Sum() << endl;

	// 구조체 포인터의 선언
	MyStruct* ptr_struct = new MyStruct;
	ptr_struct->first = 3;
	ptr_struct->second = 4;
	// 구조체 포인터를 통한 멤버 함수 접근
	cout << ptr_struct->Sum() << endl;
	// [결과] 7

	return 0;
}