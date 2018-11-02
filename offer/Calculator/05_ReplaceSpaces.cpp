//#include "stdc++.h"
////面试题5：替换空格
////题目：请实现一个函数，吧字符串中的每个空格替换成“%20”,例如输入“We are happy.”则输出“We%20are%20happy.”。


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
//	//这里的length比实际的长度（包括\0）少1，所以直接赋值个下标指针 正好
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
//// ====================测试代码====================
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
//// 空格在句子中间
//void Test1()
//{
//	const int length = 14;
//
//	char str[length] = "hello world";
//	Test("Test1", str, length, "hello%20world");
//}
//
//// 空格在句子开头
//void Test2()
//{
//	const int length = 100;
//
//	char str[length] = " helloworld";
//	Test("Test2", str, length, "%20helloworld");
//}
//
//// 空格在句子末尾
//void Test3()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld ";
//	Test("Test3", str, length, "helloworld%20");
//}
//
//// 连续有两个空格
//void Test4()
//{
//	const int length = 100;
//
//	char str[length] = "hello  world";
//	Test("Test4", str, length, "hello%20%20world");
//}
//
//// 传入nullptr
//void Test5()
//{
//	Test("Test5", nullptr, 0, nullptr);
//}
//
//// 传入内容为空的字符串
//void Test6()
//{
//	const int length = 100;
//
//	char str[length] = "";
//	Test("Test6", str, length, "");
//}
//
////传入内容为一个空格的字符串
//void Test7()
//{
//	const int length = 100;
//
//	char str[length] = " ";
//	Test("Test7", str, length, "%20");
//}
//
//// 传入的字符串没有空格
//void Test8()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld";
//	Test("Test8", str, length, "helloworld");
//}
//
//// 传入的字符串全是空格
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