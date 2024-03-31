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

	// cin을 이용한 입력
	cin >> user_input;

	// cin의 ignore 함수
	// 입력 버퍼에서 특정 길이만큼 문자를 읽으며 도중에 지정한 문자를 읽을 경우 실행을 종료한다.
	
	// 입력 스트림에서 100개의 문자를 읽으며, 도중에 개행 문자 \n를 읽으면 실행을 종료한다.
	cin.ignore(100, '\n');
	// 입력 버퍼의 맨 앞 글자 하나를 읽고 버린다.
	// cin.ignore();
	// 스트림의 최대 크기만큼 문자를 읽고 버리는 경우
	// cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// cout을 이용한 출력
	cout << "메아리 : " << user_input << endl;

	return 0;
}