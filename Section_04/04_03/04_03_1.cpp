// Chapter 04. 메모리
// 03. 문자열 비교

#include <iostream>

using namespace std;

// 문자열 크기 고정 (전역 변수)
const int kMaxStr = 100;

bool IsEqual(const char* str1, const char* str2)
{
	for (int i = 0; i < kMaxStr; i++)
	{
		// 특수문자일 경우 출력 글자가 깨질 수 있으므로 정수로 변경하여 출력 비교
		cout << int(str1[i]) << " " << int(str2[i]) << endl;

		// 문자열의 i번째 요소가 다를 경우
		if (str1[i] != str2[i])
			return false;
		
		// 문자열 종료 조건
		if (str1[i] == '\0')
			return true;
	}

	return true;
};

int main()
{
	const char str1[kMaxStr] = "stop";

	while (1)
	{
		// TO DO : 입력받은 문자열이 str1과 같을 경우 루프 탈출
		char str2[kMaxStr];
		cin >> str2;

		if (IsEqual(str1, str2))
		{
			cout << "입력을 종료합니다." << endl;
			break;
		}
		else {
			cout << "입력을 계속합니다." << endl;
		}
	};

	return 0;
}