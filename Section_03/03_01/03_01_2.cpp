// Chapter 03. �帧 ����
// 01. �б�

#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	// switch ~ case��
	switch (number)
	{
	case 0:
		cout << "���� 0 �Դϴ�." << endl;
		break;
	case 1:
		cout << "���� 1 �Դϴ�." << endl;
		break;
	default:
		cout << "���� 2 �Դϴ�." << endl;
		break; // �������� ���� ����
	}

	return 0;
}