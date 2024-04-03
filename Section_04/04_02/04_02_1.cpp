// Chapter 04. 메모리
// 02. 함수

#include <iostream>

using namespace std;

// 함수 원형 (function prototype)
// 함수를 호출할 때 필요한 정보만을 나타내는 표현식
int Add(int a, int b);

// 함수의 인수로 주소값을 전달하는 경우
void Add(int a, int b, int* ptr_sum);

int main()
{
	int a = 1;
	int b = 2;
	int sum;

	Add(a, b, &sum);

	cout << "sum = " << sum << endl;

	return 0;
}

// 함수 정의 (function definition)
// 함수 원형의 구체적인 내용을 나타내는 표현식
int Add(int a, int b)
{
	return a + b;
}

// 함수의 인수로 주소값을 전달하는 경우
void Add(int a, int b, int* ptr_sum)
{
	// a와 b를 더한 값을 result가 가리키는 메모리에 저장
	*ptr_sum = a + b;
};