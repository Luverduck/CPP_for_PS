// Chapter 03. �帧 ����
// 02. �ݺ�
/*
	for��
	���ǽ��� true�� ���ȸ� ���๮�� �ݺ�

	for( [�ʱ��] ; [���ǽ�] ; [������] ){
		[���๮]
	};
*/

#include <iostream>

using namespace std;

int main()
{
	// ���ڿ��� ���
	char my_str[] = "Hello\0, World!"; // ���� �߰��� �� ���� ����

	// i) sizeof �����ڸ� ����ϴ� ���
	for (int i = 0; i < sizeof(my_str); i++)
	{
		if (my_str[i] == '\0')
			break;

		cout << my_str[i];
	}

	cout << endl;

	// ii) sizeof �����ڸ� ������� �ʴ� ���
	for (int i = 0; i < my_str[i] != '\0'; i++)
	{
		cout << my_str[i];
	}

	return 0;
}