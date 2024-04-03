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
	// 변수
	int a = 10;

	// 포인터 (pointer)
	// 메모리의 주소를 저장할 수 있는 자료형
	int* a_ptr;
	
	// 널 포인터 (null pointer)
	// 포인터 변수가 가리키는 대상이 없음(null)으로 초기화
	a_ptr = nullptr;

	// 주소 연산자 &
	// 변수에 할당된 메모리 공간의 시작 주소를 반환
	a_ptr = &a;      // &[변수명]

	// 간접 참조 연산자 *
	// 메모리 주소를 참조하여 변수에 할당된 메모리 공간에 접근
	int a_val = *a_ptr;  // *[포인터명]

	// 포인터의 주소 크기
	// 포인터의 주소 크기는 빌드 환경에만 의존한다. (포인터가 가리키는 자료형과 상관이 없다)
	cout << (sizeof(int*) == sizeof(double*)) << endl; // [결과] 1 (true)

	return 0;
}