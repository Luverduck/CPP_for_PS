// Chapter 04. 메모리
// 03. 문자열 비교

#include <iostream>

using namespace std;

// 문자열 크기 고정 (전역 변수)
const int kMaxStr = 100;

bool IsEqual(const char* str1, const char* str2)
{
	// str1과 str2의 길이를 알 수 없다.

	// 1) 길이 비교
	int idx = 0;
	while (1)
	{
		if (str1[idx] == '\0' && str2[idx] == '\0')
		{
			break;
		}
		else if (str1[idx] == '\0' || str2[idx] == '\0')
		{
			return false;
		}
		++idx;
	}
	
	// 2) 문자열의 요소 비교
	for (int i = 0; i < idx; i++)
	{
		if (str1[i] != str2[i])
		{
			return false;
		}
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
		cin.getline(str2, sizeof(str2) / sizeof(char));

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