// Chapter 03. �帧 ����
// 02. �ݺ�
/*
	while��
	���ǽ��� true�� ���ȸ� ���๮�� �ݺ�

	while ( [���ǽ�] ) {
		[���๮];
	};
*/

#include <iostream>

using namespace std;

int main()
{
	// ���ڿ��� ���
	char my_str[] = "Hello, World!"; // ���� �߰��� �� ���� ����

	int i = 0;
	while (i < sizeof(my_str) && my_str[i] != '\0')
	{
		cout << my_str[i];
		i++;
	}

	return 0;
}