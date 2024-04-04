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
	// 구조체의 배열
	// - 구조체를 요소로 하는 배열을 선언할 수 있다.
	MyStruct arr_struct[10];

	// 구조체 배열의 모든 요소 초기화
	for (int i = 0; i < 10; i++)
	{
		arr_struct[i].first = i;
		arr_struct[i].second = i * 10;
	};

	// 구조체 배열의 각 요소에서 멤버 함수 호출
	for (int i = 0; i < 10; i++)
	{
		cout << arr_struct[i].Sum() << endl;
	};

	return 0;
}