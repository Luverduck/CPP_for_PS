// Chapter 05. ���� �����
// 02. Ŭ����
/*
	Ŭ���� (Class)
	�Լ��� ����� ���� �� �ִ� ����ü
	class Ű���带 ����Ͽ� ����
*/

#include <iostream>

using namespace std;

// Ŭ������ ����
class Person
{
	// ��� ������ ���� ���� ������
private:
	// ��� ����
	int m_age;
	double m_height;
	double m_weight;
	// ��� �Լ��� ���� ���� ������
public:
	// ��� �Լ�
	void Print()
	{
		cout << m_age << endl;
		cout << m_height << endl;
		cout << m_weight << endl;
	};
	// �⺻ ������
	Person();
	// �����ε��� ������
	Person(int age, double height, double weight);
	// �Ҹ���
	~Person();
};

// �⺻ ������
Person::Person()
{
	m_age = 0;
	m_height = 0.0;
	m_weight = 0.0;
};

// �����ε��� ������
Person::Person(int age, double height, double weight)
{
	m_age = age;
	m_height = height;
	m_weight = weight;
}

// �Ҹ���
Person::~Person()
{
	cout << "~Person()" << endl;
}

int main()
{
	// Ŭ������ �ν��Ͻ�ȭ (��ü ����)
	Person* person = new Person(33, 175, 70);

	// ��ü �Ҹ�
	delete person;

	return 0;
}