// Chapter 02. �⺻ �����
// 04. �ܼ� �����
/*
	ǥ�� ��� ��Ʈ�� ��ü cout (Console Output)
	������ �ǿ����ڸ� ���� ��Ʈ�� ��ü�� �����Ѵ�.
	- ��Ʈ�� ���� ������ << (Stream Insertion Operator)�� �Բ� ����Ѵ�.

	ǥ�� �Է� ��Ʈ�� ��ü cin (Console Input)
	���� ��Ʈ�� ��ü���� ���� �а� ������� ������ �����Ѵ�.
	- ��Ʈ������ ���� ���� �� �����̳� ���� ���� \n�� ������ �Է��� �ߴ��Ѵ�.
	- ��Ʈ�� ���� ������ '>>' (Stream Extraction Operator)�� �Բ� ����Ѵ�.
*/

#include <iostream>

using namespace std;

int main()
{
	char user_input[100];

	cout << "���ϴ� ������ �Է����ּ���." << endl;
	cout << "�Է� : ";

	// cin�� �̿��� �Է�
	// - �����̳� ���� ����(\n)�� ������ �Է��� �ߴ��Ѵ�.
	cin >> user_input;

	// cout�� �̿��� ���
	cout << "�޾Ƹ� : " << user_input << endl;

	return 0;
}