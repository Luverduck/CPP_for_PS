// Chapter 04. �޸�
// 03. ���ڿ� ��

#include <iostream>

using namespace std;

// ���ڿ� ũ�� ���� (���� ����)
const int kMaxStr = 100;

bool IsEqual(const char* str1, const char* str2)
{
	for (int i = 0; i < kMaxStr; i++)
	{
		// Ư�������� ��� ��� ���ڰ� ���� �� �����Ƿ� ������ �����Ͽ� ��� ��
		cout << int(str1[i]) << " " << int(str2[i]) << endl;

		// ���ڿ��� i��° ��Ұ� �ٸ� ���
		if (str1[i] != str2[i])
			return false;
		
		// ���ڿ� ���� ����
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
		// TO DO : �Է¹��� ���ڿ��� str1�� ���� ��� ���� Ż��
		char str2[kMaxStr];
		cin >> str2;

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