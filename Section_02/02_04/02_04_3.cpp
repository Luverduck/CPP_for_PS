// Chapter 02. �⺻ �����
// 04. �ܼ� �����
/*
	cin ��ü
	- ǥ�� �Է� ��Ʈ�� ��ü

	��Ʈ�� ���� ������ >> (Stream Extraction Operator)
	- ���� ��Ʈ�� ��ü���� ���� �а� ������� ������ ����

	cout ��ü
	- ǥ�� ��� ��Ʈ�� ��ü

	��Ʈ�� ���� ������ << (Stream Insertion Operator)
	- ������ �ǿ����ڸ� ���� ��Ʈ�� ��ü�� ����
*/

#include <iostream>

using namespace std;

int main()
{
	char user_input[100];
	int number = -1;

	cout << "���ϴ� ������ �Է����ּ���." << endl;
	cout << "�Է� : ";

	// cin�� �̿��� �Է�
	cin >> user_input;
	cin >> number;
	// cin�� �Է� ����
	// "�Է�1 �Է�2"�� �Է��� ��� cout���� "�Է�1 0"�� ����Ѵ�.
	// ù ��° ���ڿ� '�Է�1'�� ���ڿ� ���� user_input�� ���������
	// �� ��° ���ڿ� '�Է�2'�� int�� ������ ������ �� �����Ƿ� 'false'�� ��Ÿ���� '0'�� ��� �����Ѵ�.

	// cout�� �̿��� ���
	cout << "�޾Ƹ� : " << user_input << " " << number << endl;

	return 0;
}