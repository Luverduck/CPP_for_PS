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

	cout << "���ϴ� ������ �Է����ּ���." << endl;
	cout << "�Է� : ";

	// cin�� �̿��� �Է�
	cin >> user_input;

	// cin�� ignore �Լ�
	// �Է� ���ۿ��� Ư�� ���̸�ŭ ���ڸ� ������ ���߿� ������ ���ڸ� ���� ��� ������ �����Ѵ�.
	
	// �Է� ��Ʈ������ 100���� ���ڸ� ������, ���߿� ���� ���� \n�� ������ ������ �����Ѵ�.
	cin.ignore(100, '\n');
	// �Է� ������ �� �� ���� �ϳ��� �а� ������.
	// cin.ignore();
	// ��Ʈ���� �ִ� ũ�⸸ŭ ���ڸ� �а� ������ ���
	// cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// cout�� �̿��� ���
	cout << "�޾Ƹ� : " << user_input << endl;

	return 0;
}