// Chapter 04. �޸�
// 01. ������
/*
	������ (pointer)
	�޸��� �ּҸ� ������ �� �ִ� �ڷ���
*/

#include <iostream>

using namespace std;

int main()
{
	// �迭�� ������
	int my_arr[] = { 23, 28, 56, 69, 74 };

	// �������� ��� ������ �̿��� �迭�� ��� ����
	cout << *(my_arr + 2) << endl; // [���] 56

	cout << endl;

	// ���ڿ��� ������
	char my_str[] = "Hello, World!";

	// �������� ��� ������ �̿��� ���ڿ��� ��� ����
	cout << *(my_str + 7) << endl; // [���] W

	return 0;
}