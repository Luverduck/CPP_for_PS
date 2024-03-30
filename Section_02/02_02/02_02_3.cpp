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
	// 논리 자료형
	// - <iostream> 헤더에 정의되어있으며 참(true)과 거짓(false)를 나타낸다.
	bool is_good = true;
	cout << "is_good : " << is_good << endl;
	is_good = false;
	cout << "is_good : " << is_good << endl << endl;

	// boolalpha 함수
	// - 논리 자료형을 문자 true / false로 출력한다.
	// - 스트림에 적용된 boolalpha는 noboolalpha 함수로 직접 변경하지 않는 이상 계속 유지된다.
	bool boolalpha = true;
	cout << boolalpha << "boolean : " << boolalpha << endl;
	cout << noboolalpha << "boolean : " << boolalpha << endl;

	// 논리 연산자 (Logical Operator)
	// &&	: A와 B 모두가 참일 때만 참을 반환 (AND 연산)
	// ||	: A와 B 둘 중 하나가 참일 때 참을 반환 (OR 연산)
	// !	: A가 참일 때 거짓을, 거짓일 때 참을 반환 (NOT 연산)
	cout << "true && true = " << (true && true) << endl;
	cout << "true || false = " << (true || false) << endl << endl;

	// 관계 연산자 (Relational Operator)
	// <	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 작으면 1, 그렇지 않으면 0을 반환
	// <=	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 작거나 같으면 1, 그렇지 않으면 0을 반환
	// >	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 크면 1, 그렇지 않으면 0을 반환
	// >=	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 크거나 같으면 1, 그렇지 않으면 0을 반환
	// ==	: 왼쪽의 피연산자가 오른쪽의 피연산자와 같으면 1, 그렇지 않으면 0을 반환
	// !=	: 왼쪽의 피연산자가 오른쪽의 피연산자와 같지 않으면 1, 그렇지 않으면 0을 반환
	cout << (1 > 3) << endl;
	cout << (3 == 3) << endl;
	cout << (153 >= 3) << endl;
	cout << ('a' != 'c') << endl;
	cout << ('a' != 'a') << endl;

	return 0;
}