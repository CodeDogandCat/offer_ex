////������4�� ��ά�����еĲ���
////��Ŀ����һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
////���һ������������������һ����ά�����һ���������ж��������Ƿ�����и�����
//
//#include "stdc++.h"
//
////������
////	matrix: ��ά����
////	rows: ����
////	colums: ����
////	number: Ҫ�ҵ�����
////����ֵ��
////	true: �ҵ�
////	false: û�ҵ�
//
//bool Find(int* matrix, int rows, int columns, int number) {
//	bool res = false;
//	if (matrix != nullptr&&rows > 0 && columns > 0) {
//		//�����Ͻǵ�Ԫ�ؿ�ʼ��������󣬾��޳������У������С�����޳�������
//		int row = 0;
//		int column = columns - 1;
//		while (row < rows&&column >= 0) {
//			if(matrix[row*columns + column] == number) {
//				res = true;
//				break;
//			}
//			else if (matrix[row*columns + column] > number) {
//				--column;
//			}
//			else {
//				++row;
//			}
//			
//		
//		}
//	}
//	return res;
//
//}
////=================================���Դ���===============================
//void Test(char* testName, int* matrix, int rows, int columns, int number, bool expected) {
//	if (testName != nullptr)
//		printf("%s begins: ", testName);
//	bool res = Find(matrix, rows, columns, number);
//	if (res == expected) {
//		printf("Passed.\n");
//	}
//	else {
//		printf("Failed.\n");
//	}
//}
////Ҫ���ҵ�������������
//void Test1() {
//	int matrix[][4] = { { 1, 2, 8, 9 },{ 2, 4, 9, 12 },{ 4, 7, 10, 13 },{ 6, 8, 11, 15 } };
//	Test("Test1", (int*)matrix, 4, 4, 7, true);
//
//}
//// Ҫ���ҵ�������������
//void Test2()
//{
//	int matrix[][4] = { { 1, 2, 8, 9 },{ 2, 4, 9, 12 },{ 4, 7, 10, 13 },{ 6, 8, 11, 15 } };
//	Test("Test2", (int*)matrix, 4, 4, 5, false);
//}
//// Ҫ���ҵ�������������С������
//void Test3()
//{
//	int matrix[][4] = { { 1, 2, 8, 9 },{ 2, 4, 9, 12 },{ 4, 7, 10, 13 },{ 6, 8, 11, 15 } };
//	Test("Test3", (int*)matrix, 4, 4, 1, true);
//}
//// Ҫ���ҵ�������������������
//void Test4()
//{
//	int matrix[][4] = { { 1, 2, 8, 9 },{ 2, 4, 9, 12 },{ 4, 7, 10, 13 },{ 6, 8, 11, 15 } };
//	Test("Test4", (int*)matrix, 4, 4, 15, true);
//}
//// Ҫ���ҵ�������������С�����ֻ�С
//void Test5()
//{
//	int matrix[][4] = { { 1, 2, 8, 9 },{ 2, 4, 9, 12 },{ 4, 7, 10, 13 },{ 6, 8, 11, 15 } };
//	Test("Test5", (int*)matrix, 4, 4, 0, false);
//}
//// Ҫ���ҵ������������������ֻ���
//void Test6()
//{
//	int matrix[][4] = { { 1, 2, 8, 9 },{ 2, 4, 9, 12 },{ 4, 7, 10, 13 },{ 6, 8, 11, 15 } };
//	Test("Test6", (int*)matrix, 4, 4, 16, false);
//}
//// ³���Բ��ԣ������ָ��
//void Test7()
//{
//	Test("Test7", nullptr, 0, 0, 16, false);
//}
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test2();
//	Test3();
//	Test4();
//	Test5();
//	Test6();
//	Test7();
//	printf("size of char: %d", sizeof(char));
//	system("pause");
//	return 0;
//}