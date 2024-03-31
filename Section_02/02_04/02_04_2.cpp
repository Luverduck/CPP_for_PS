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

	cout << "원하는 문장을 입력해주세요." << endl;
	cout << "입력 : ";

	// cin의 getLine 함수
	// 입력 버퍼에서 공백을 포함한 값을 읽고 변수에 저장한다.
	// - 스트림에서 값을 읽을 때 개행 문자 '\n'를 만나면 입력을 중단한다. (한 줄 입력)
	cin.getline(user_input, sizeof(user_input));

	// cout을 이용한 출력
	cout << "메아리 : " << user_input << endl;

	return 0;
}