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
	// �迭�� ���
	int my_arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	for (int i = 0; i < sizeof(my_arr) / sizeof(int); i++)
	{
		cout << my_arr[i] << " ";
	}

	return 0;
}