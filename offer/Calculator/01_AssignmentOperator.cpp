//#include "stdc++.h"
////������1����ֵ���������
////��Ŀ������Ϊ����CMyString����������΢���������Ӹ�ֵ���������
//class CMyString
//{
//public:
//	CMyString(char * pData = nullptr);
//	CMyString(const CMyString & str);
//	~CMyString(void);
//	CMyString & operator = (const CMyString&str);
//	void Print();
//private:
//	char* m_pData;
//};
//
//CMyString::CMyString(char * pData) {
//	if (pData == nullptr) {
//		m_pData = new char[1];
//		m_pData[0] = '\0';	
//	}
//	else {
//		int length = strlen(pData);
//		m_pData = new char[length + 1];
//		strcpy(m_pData, pData);
//	}
//}
//CMyString::CMyString(const CMyString & str) {
//	int length = strlen(str.m_pData);
//	m_pData = new char[length + 1];
//	strcpy(m_pData, str.m_pData);
//}
//CMyString::~CMyString() {
//	delete[] m_pData;
//}
//CMyString& CMyString::operator=(const CMyString & str) {
//	if (this == &str) 
//		return *this;
//
//	delete[]m_pData;
//	m_pData = nullptr;
//	
//	m_pData = new char[strlen(str.m_pData) + 1];
//	strcpy(m_pData, str.m_pData);
//
//	return *this;
//}
//void CMyString::Print() {
//	printf("%s", m_pData);
//}
//
////=====================���Դ���==========================
//void Test1() {
//	printf("Test1 begins:\n");
//	char* text = "hello world";
//	CMyString str1(text);
//	CMyString str2;
//	str2 = str1;
//	printf("The expected result is :%s.\n", text);
//	printf("The actual result is: ");
//	str2.Print();
//	printf(".\n");
//}
////��ֵ���Լ�
//void Test2() {
//	printf("Test2 begins:\n");
//	char * text = "Hello world";
//	CMyString str1(text);
//	str1 = str1;
//	printf("The expected result is: %s.\n", text);
//	printf("The actual result is: ");
//	str1.Print();
//	printf(".\n");
//
//}
////������ֵ
//void Test3() {
//	printf("Test3 begins:\n");
//	char *text = "Hello world";
//
//	CMyString str1(text);
//	CMyString str2, str3;
//	str3 = str2 = str1;
//
//	printf("The expected result is: %s.\n", text);
//	printf("The acutal result is: ");
//	str2.Print();
//	printf(".\n");
//
//	printf("The expected result is: %s.\n", text);
//	printf("The actual result is: ");
//	str3.Print();
//	printf(".\n");
//}
//
//int main(int argc, char* argv[]) {
//	Test1();
//	Test2();
//	Test3();
//	/*char * test = "hello world";
//	printf("the size of point is: %d\n", sizeof(test));
//	printf("the size of one char is: %d\n", sizeof(*test));
//	printf("the strlen of value is: %d\n", strlen(test));
//	printf("test is: %s\n", test);
//	while (*test != '\0') {
//		printf("curr char is: %c\n", *test);
//		++test;
//	}*/
//	system("pause");
//	return 0;
//}
//