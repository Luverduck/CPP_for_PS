// Chapter 02. 기본 개념들
// 01. 기본 구조

// iostream이라는 헤더 파일을 포함 (include)
#include <iostream>

// namespace로 std의 사용을 선언
// - 함수를 찾지 못할 경우 함수 앞에 'std::'를 붙여서 찾도록 하기 위함
using namespace std;

// main 함수
int main()
{
	// cout : 문자열 출력 객체 (character output)
	// << : 스트림 삽입 연산자 (stream insertion operator)
	// endl : cout을 전달받아 개행문자(\n)와 함께 문자열을 출력한 후 출력 버퍼를 비우는 함수 (end line)
	cout << "Hello, World!" << endl;

	return 0;
}