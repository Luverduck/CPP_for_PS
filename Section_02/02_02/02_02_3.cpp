// Chapter 02. �⺻ �����
// 02. �ڷ���
/*
	����
	- ������ ������ �� �ݵ�� �ڷ����� �����ؾ� �Ѵ�.
	- �� �� ������ ������ �ڷ����� �ٲ� �� ����.
	- ������ ���������� �޸𸮸� ������ �ִ�.

	�ڷ���
	- ������ ����Ǵ� �������� ����
*/

#include <iostream>

using namespace std;

int main()
{
	// ���� �ڷ���
	// - <iostream> ����� ���ǵǾ������� ��(true)�� ����(false)�� ��Ÿ����.
	bool is_good = true;
	cout << "is_good : " << is_good << endl;
	is_good = false;
	cout << "is_good : " << is_good << endl << endl;

	// boolalpha �Լ�
	// - ���� �ڷ����� ���� true / false�� ����Ѵ�.
	// - ��Ʈ���� ����� boolalpha�� noboolalpha �Լ��� ���� �������� �ʴ� �̻� ��� �����ȴ�.
	bool boolalpha = true;
	cout << boolalpha << "boolean : " << boolalpha << endl;
	cout << noboolalpha << "boolean : " << boolalpha << endl;

	// ���� ������ (Logical Operator)
	// &&	: A�� B ��ΰ� ���� ���� ���� ��ȯ (AND ����)
	// ||	: A�� B �� �� �ϳ��� ���� �� ���� ��ȯ (OR ����)
	// !	: A�� ���� �� ������, ������ �� ���� ��ȯ (NOT ����)
	cout << "true && true = " << (true && true) << endl;
	cout << "true || false = " << (true || false) << endl << endl;

	// ���� ������ (Relational Operator)
	// <	: ������ �ǿ����ڰ� �������� �ǿ����ں��� ������ 1, �׷��� ������ 0�� ��ȯ
	// <=	: ������ �ǿ����ڰ� �������� �ǿ����ں��� �۰ų� ������ 1, �׷��� ������ 0�� ��ȯ
	// >	: ������ �ǿ����ڰ� �������� �ǿ����ں��� ũ�� 1, �׷��� ������ 0�� ��ȯ
	// >=	: ������ �ǿ����ڰ� �������� �ǿ����ں��� ũ�ų� ������ 1, �׷��� ������ 0�� ��ȯ
	// ==	: ������ �ǿ����ڰ� �������� �ǿ����ڿ� ������ 1, �׷��� ������ 0�� ��ȯ
	// !=	: ������ �ǿ����ڰ� �������� �ǿ����ڿ� ���� ������ 1, �׷��� ������ 0�� ��ȯ
	cout << (1 > 3) << endl;
	cout << (3 == 3) << endl;
	cout << (153 >= 3) << endl;
	cout << ('a' != 'c') << endl;
	cout << ('a' != 'a') << endl;

	return 0;
}