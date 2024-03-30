// Chapter 02. 기본 개념들
// 02. 자료형
/*
	변수
	- 변수를 정의할 때 반드시 자료형을 지정해야 한다.
	- 한 번 결정된 변수의 자료형은 바꿀 수 없다.
	- 변수는 내부적으로 메모리를 가지고 있다.

	자료형
	- 변수에 저장되는 데이터의 형태
*/

#include <iostream>

using namespace std;

int main()
{
	// 변수의 영역 (scope)
	int i = 123;

	{
		int i = 456;
		cout << i << endl;
	}

	cout << i << endl;

	return 0;
}