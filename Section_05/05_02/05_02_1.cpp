// Chapter 05. 구조 만들기
// 02. 클래스
/*
	클래스 (Class)
	함수를 멤버로 가질 수 있는 구조체
	class 키워드를 사용하여 선언
*/

#include <iostream>

using namespace std;

// 클래스의 정의
class Person
{
	// 멤버 변수에 대한 접근 제한자
private:
	// 멤버 변수
	int m_age;
	double m_height;
	double m_weight;
	// 멤버 함수에 대한 접근 제한자
public:
	// 멤버 함수
	void Print()
	{
		cout << m_age << endl;
		cout << m_height << endl;
		cout << m_weight << endl;
	};
	// 기본 생성자
	Person();
	// 오버로딩된 생성자
	Person(int age, double height, double weight);
	// 소멸자
	~Person();
};

// 기본 생성자
Person::Person()
{
	m_age = 0;
	m_height = 0.0;
	m_weight = 0.0;
};

// 오버로딩된 생성자
Person::Person(int age, double height, double weight)
{
	m_age = age;
	m_height = height;
	m_weight = weight;
}

// 소멸자
Person::~Person()
{
	cout << "~Person()" << endl;
}

int main()
{
	// 클래스의 인스턴스화 (객체 생성)
	Person* person = new Person(33, 175, 70);

	// 객체 소멸
	delete person;

	return 0;
}