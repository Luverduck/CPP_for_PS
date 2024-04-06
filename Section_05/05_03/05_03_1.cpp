// Chapter 05. ���� �����
// 03. ���ڿ� Ŭ���� �����

#include <iostream>

using namespace std;

class MyString
{
private:
	// ���ڿ� ����
	int m_size = 0;
	// ���ڿ� ����
	char* m_str = nullptr;
public:
	// ������
	MyString(const char* init_str);
	// �Ҹ���
	~MyString();
	// ���ڿ� �迭�� ���� ������
	void Resize(int new_size);
	// ���ڿ� ��ġ��
	void Append(MyString* ptr_append_str);
	// ���ڿ� ���
	void Print();
};

// ������
MyString::MyString(const char* init_str)
{
	cout << "MyString(const char* init_str)" << endl;

	// 1. ���� �� Ȯ��
	m_size = 0;
	while (init_str[m_size] != '\0')
		m_size++;

	// 2. ���� ���� 0���� Ŭ �� �޸� �Ҵ�
	if (m_size > 0)
		m_str = new char[m_size];

	// 3. ���� ����
	for (int i = 0; i < m_size; i++)
		m_str[i] = init_str[i];
};

// �Ҹ���
MyString::~MyString()
{
	cout << "~MyString()" << endl;

	// ���� �� 0���� �ʱ�ȭ
	m_size = 0;

	// ���� �Ҵ��ߴ� �޸� ����
	if (m_str) // m_str != 0 (�޸� �ּҰ� �ִٸ�)
		delete[] m_str;
};

// ���ڿ� �迭 ����
void MyString::Resize(int n_size)
{
	// ���ο� ���ڿ� �迭 ����
	char* n_str = new char[n_size];

	// ���� ���ڿ� �迭�� ���ο� ���ڿ� �迭�� ����
	int copy_length = n_size < m_size ? n_size : m_size;
	for (int i = 0; i < copy_length; i++)
		n_str[i] = m_str[i];

	// ���� ���ڿ� �迭�� �޸� ����
	delete[] m_str;

	// ���ڿ� �迭 �缳��
	m_str = n_str;

	// ���ڿ� ���� �缳��
	m_size = n_size;
};

// ���ڿ� ��ġ��
void MyString::Append(MyString* ptr_append_str)
{
	// ��ġ�� �� ���ڿ��� ����
	int old_size = m_size;

	// ���ڿ� �迭 ���� (���ڿ� �迭 �� ���� ����)
	Resize(m_size + ptr_append_str->m_size);

	// ���ڿ� ����
	for (int i = old_size; i < m_size; i++)
	{
		m_str[i] = ptr_append_str->m_str[i - old_size];
	}
};

// ���ڿ� ��� �Լ�
void MyString::Print()
{
	for (int i = 0; i < m_size; i++)
		cout << m_str[i] << " ";

	cout << endl;
};

int main()
{
	// ���ڿ� ����
	MyString str1("ABCDE");
	MyString str2("123");
	
	// ��ġ�� �� ���ڿ� ���
	str1.Print();
	
	// ���ڿ� ��ġ��
	str1.Append(&str2);

	// ��ġ�� �� ���ڿ� ���
	str1.Print();

	return 0;
}