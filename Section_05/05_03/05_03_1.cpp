// Chapter 05. 구조 만들기
// 03. 문자열 클래스 만들기

#include <iostream>

using namespace std;

class MyString
{
private:
	// 문자열 길이
	int m_size = 0;
	// 문자열 내용
	char* m_str = nullptr;
public:
	// 생성자
	MyString(const char* init_str);
	// 소멸자
	~MyString();
	// 문자열 배열의 길이 재조정
	void Resize(int new_size);
	// 문자열 합치기
	void Append(MyString* ptr_append_str);
	// 문자열 출력
	void Print();
};

// 생성자
MyString::MyString(const char* init_str)
{
	cout << "MyString(const char* init_str)" << endl;

	// 1. 글자 수 확인
	m_size = 0;
	while (init_str[m_size] != '\0')
		m_size++;

	// 2. 글자 수가 0보다 클 때 메모리 할당
	if (m_size > 0)
		m_str = new char[m_size];

	// 3. 글자 복사
	for (int i = 0; i < m_size; i++)
		m_str[i] = init_str[i];
};

// 소멸자
MyString::~MyString()
{
	cout << "~MyString()" << endl;

	// 글자 수 0으로 초기화
	m_size = 0;

	// 동적 할당했던 메모리 해제
	if (m_str) // m_str != 0 (메모리 주소가 있다면)
		delete[] m_str;
};

// 문자열 배열 변경
void MyString::Resize(int n_size)
{
	// 새로운 문자열 배열 생성
	char* n_str = new char[n_size];

	// 기존 문자열 배열을 새로운 문자열 배열에 복사
	int copy_length = n_size < m_size ? n_size : m_size;
	for (int i = 0; i < copy_length; i++)
		n_str[i] = m_str[i];

	// 기존 문자열 배열의 메모리 해제
	delete[] m_str;

	// 문자열 배열 재설정
	m_str = n_str;

	// 문자열 길이 재설정
	m_size = n_size;
};

// 문자열 합치기
void MyString::Append(MyString* ptr_append_str)
{
	// 합치기 전 문자열의 길이
	int old_size = m_size;

	// 문자열 배열 변경 (문자열 배열 및 길이 변경)
	Resize(m_size + ptr_append_str->m_size);

	// 문자열 복사
	for (int i = old_size; i < m_size; i++)
	{
		m_str[i] = ptr_append_str->m_str[i - old_size];
	}
};

// 문자열 출력 함수
void MyString::Print()
{
	for (int i = 0; i < m_size; i++)
		cout << m_str[i] << " ";

	cout << endl;
};

int main()
{
	// 문자열 생성
	MyString str1("ABCDE");
	MyString str2("123");
	
	// 합치기 전 문자열 출력
	str1.Print();
	
	// 문자열 합치기
	str1.Append(&str2);

	// 합치기 후 문자열 출력
	str1.Print();

	return 0;
}