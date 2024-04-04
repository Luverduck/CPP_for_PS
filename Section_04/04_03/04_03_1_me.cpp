// Chapter 04. �޸�
// 03. ���ڿ� ��

#include <iostream>

using namespace std;

// ���ڿ� ũ�� ���� (���� ����)
const int kMaxStr = 100;

bool IsEqual(const char* str1, const char* str2)
{
	// str1�� str2�� ���̸� �� �� ����.

	// 1) ���� ��
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
	
	// 2) ���ڿ��� ��� ��
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
		// TO DO : �Է¹��� ���ڿ��� str1�� ���� ��� ���� Ż��
		char str2[kMaxStr];
		cin.getline(str2, sizeof(str2) / sizeof(char));

		if (IsEqual(str1, str2))
		{
			cout << "�Է��� �����մϴ�." << endl;
			break;
		}
		else {
			cout << "�Է��� ����մϴ�." << endl;
		}
	};

	return 0;
}