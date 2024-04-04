// Chapter 05. 구조 만들기
// 01. 구조체
/*
	구조체 (Structure)
	여러 자료형의 데이터 오브젝트가 연속적으로 나열된 형태의 자료형
	- 구조체의 멤버 변수들은 연속된 메모리 공간에 할당된다.
*/

#include <iostream>

using namespace std;

// 구조체의 정의
/*
	struct [태그명]
	{
		[멤버 자료형] [멤버 이름];
		[멤버 자료형] [멤버 이름];
		...
		[멤버 자료형] [멤버 이름];
	};
*/
struct Person
{
	float height;
	float weight;
	int age;
};

int main()
{
	// 구조체 변수의 선언
	// - 선언과 동시에 초기화
	struct Person p1 = { 188.0, 75.0, 55 };
	// - 선언과 초기화 분리
	struct Person p2;
	p2.height = 180.0;
	p2.weight = 70.0;
	p2.age = 58;

	return 0;
}