//#include "stdc++.h"
////������5���滻�ո�
////��Ŀ����ʵ��һ�����������ַ����е�ÿ���ո��滻�ɡ�%20��,�������롰We are happy.���������We%20are%20happy.����


//void  ReplaceBlank(char s[], int length) {
//	if (s == nullptr || length <= 0)
//		return;
//
//	int spaceCount = 0;
//	int i = 0;
//	while (s[i] != '\0') {
//		if (s[i] == ' ') {
//			++spaceCount;
//		}
//		++i;
//	}
//	//�����length��ʵ�ʵĳ��ȣ�����\0����1������ֱ�Ӹ�ֵ���±�ָ�� ����
//	int originLength = i;
//	int newLength = originLength + 2 * spaceCount;
//	int p_ori = originLength;
//	int p_new = newLength;
//	
//	if (length < newLength) {
//		printf(" length == newLength");
//		return;
//	}
//	while (p_ori >= 0 && p_ori < p_new) {
//		if (s[p_ori] == ' ') {
//			s[p_new--] = '0';
//			s[p_new--] = '2';
//			s[p_new--] = '%';
//		}
//		else {
//			cout << int(s[p_ori]) << endl;
//			s[p_new--] = s[p_ori];
//		}
//		--p_ori;
//	}
//
//}
//// ====================���Դ���====================
//void Test(char* testName, char str[], int length, char expected[])
//{
//	if (testName != nullptr)
//		printf("%s begins: ", testName);
//
//	ReplaceBlank(str, length);
//
//	if (expected == nullptr && str == nullptr)
//		printf("passed.\n");
//	else if (expected == nullptr && str != nullptr)
//		printf("failed.\n");
//	else if (strcmp(str, expected) == 0)
//		printf("passed.\n");
//	else
//		printf("failed.\n");
//}
//
//// �ո��ھ����м�
//void Test1()
//{
//	const int length = 14;
//
//	char str[length] = "hello world";
//	Test("Test1", str, length, "hello%20world");
//}
//
//// �ո��ھ��ӿ�ͷ
//void Test2()
//{
//	const int length = 100;
//
//	char str[length] = " helloworld";
//	Test("Test2", str, length, "%20helloworld");
//}
//
//// �ո��ھ���ĩβ
//void Test3()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld ";
//	Test("Test3", str, length, "helloworld%20");
//}
//
//// �����������ո�
//void Test4()
//{
//	const int length = 100;
//
//	char str[length] = "hello  world";
//	Test("Test4", str, length, "hello%20%20world");
//}
//
//// ����nullptr
//void Test5()
//{
//	Test("Test5", nullptr, 0, nullptr);
//}
//
//// ��������Ϊ�յ��ַ���
//void Test6()
//{
//	const int length = 100;
//
//	char str[length] = "";
//	Test("Test6", str, length, "");
//}
//
////��������Ϊһ���ո���ַ���
//void Test7()
//{
//	const int length = 100;
//
//	char str[length] = " ";
//	Test("Test7", str, length, "%20");
//}
//
//// ������ַ���û�пո�
//void Test8()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld";
//	Test("Test8", str, length, "helloworld");
//}
//
//// ������ַ���ȫ�ǿո�
//void Test9()
//{
//	const int length = 100;
//
//	char str[length] = "   ";
//	Test("Test9", str, length, "%20%20%20");
//}
//
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test2();
//	Test3();
//	Test4();
//	Test5();
//	Test6();
//	Test7();
//	Test8();
//	Test9();
//	system("pause");
//	return 0;
//}