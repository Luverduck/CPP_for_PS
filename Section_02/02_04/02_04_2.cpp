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

	// cin�� getLine �Լ�
	// �Է� ���ۿ��� ������ ������ ���� �а� ������ �����Ѵ�.
	// - ��Ʈ������ ���� ���� �� ���� ���� '\n'�� ������ �Է��� �ߴ��Ѵ�. (�� �� �Է�)
	cin.getline(user_input, sizeof(user_input));

	// cout�� �̿��� ���
	cout << "�޾Ƹ� : " << user_input << endl;

	return 0;
}