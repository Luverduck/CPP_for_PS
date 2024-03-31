// Chapter 02. 기본 개념들
// 04. 콘솔 입출력
/*
	cin 객체
	- 표준 입력 스트림 객체

	스트림 추출 연산자 >> (Stream Extraction Operator)
	- 왼쪽 스트림 객체에서 값을 읽고 순서대로 변수에 저장

	cout 객체
	- 표준 출력 스트림 객체

	스트림 삽입 연산자 << (Stream Insertion Operator)
	- 오른쪽 피연산자를 왼쪽 스트림 객체에 삽입
*/

#include <iostream>

using namespace std;

int main()
{
	char user_input[100];
	int number = -1;

	cout << "원하는 문장을 입력해주세요." << endl;
	cout << "입력 : ";

	// cin을 이용한 입력
	cin >> user_input;
	cin >> number;
	// cin의 입력 실패
	// "입력1 입력2"를 입력할 경우 cout에서 "입력1 0"을 출력한다.
	// 첫 번째 문자열 '입력1'은 문자열 변수 user_input에 저장되지만
	// 두 번째 문자열 '입력2'는 int형 변수에 저장할 수 없으므로 'false'를 나타내는 '0'을 대신 저장한다.

	// cout을 이용한 출력
	cout << "메아리 : " << user_input << " " << number << endl;

	return 0;
}