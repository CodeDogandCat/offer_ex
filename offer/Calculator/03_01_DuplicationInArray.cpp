////������3��-��:�ҳ��������ظ�������
////��Ŀ����һ������Ϊn������������е����鶼��0��n-1�ķ�Χ�ڣ�������ĳЩ�������ظ��ģ�����
////��֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Σ����ҳ�����������һ���ظ������֣�
////�������볤��Ϊ7������{2,3,1,0,3,5,3}����ô��Ӧ��������ظ�������2����3
//
//#include "stdc++.h"	
////����
////	numbers: һ����������
////	length: ����ĳ���
////	duplication: ������������е�һ���ظ�������
////����ֵ��
////	true: ������Ч�����������д����ظ�������
////	false: ������Ч������������û���ظ�������
//
//bool duplicate(int numbers[], int length, int* duplication) {
//	if (numbers == nullptr || length <= 0) 
//		return false;
//	for (int i = 0; i < length; ++i) {
//		if (numbers[i]<0 || numbers[i]>length - 1) 
//			return false;
//	}
//	for (int i = 0; i < length; ++i) {
//		while (numbers[i] != i) {
//			if (numbers[i] == numbers[numbers[i]]) {
//				*duplication = numbers[i];
//				return true;
//			}
//			//����ȣ�����
//			int temp = numbers[i];
//			numbers[i] = numbers[temp];
//			numbers[temp] = temp;
//		}
//
//	}
//	return false;
//}	
////======================���Դ���============================
//bool contains(int array[], int length, int number) {
//	for (int i = 0; i < length; ++i) {
//		if (array[i] == number) {
//			return true;
//		}
//
//	}
//	return false;
//}
//
//void test(char* testName, int numbers[], int lengthNumbers, int expected[],
//	int expectedLength, bool validArgument) {
//	//����˵��
//	//validArgument�������Ƿ�Ϸ�
//	//expected:�ظ����ֵļ���
//	//expectedLength:�ظ����ֵļ��ϵĳ���
//	int duplication;
//	bool validInput = duplicate(numbers, lengthNumbers, &duplication);
//
//	if (validArgument == validInput) {
//		if (validArgument) {
//			if (contains(expected, expectedLength, duplication))
//				printf("Passed.\n");
//			else
//				printf("Failed.\n");
//		}
//		else
//			printf("Passed.\n");
//	}
//	else
//		printf("Faild.\n");
//
//}
////�ظ��������������е���С������
//void test1() {
//	int numbers[] = { 2,1,3,1,4 };
//	int duplications[] = { 1 };
//	test("Test1", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), true);
//
//}
////�ظ��������������е���������
//void test2() {
//	int numbers[] = { 2,4,3,1,4 };
//	int duplications[] = { 4 };
//	test("Test2", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), true);
//}
////������ڶ���ظ�������
//void test3() {
//	int numbers[] = { 2,4,2,1,4 };
//	int duplications[] = { 2,4 };
//	test("Test3", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), true);
//}
////û���ظ�������
//void test4() {
//	int numbers[] = { 2,1,4,3,0 };
//	int duplications[] = { -1 };
//	test("Test4", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), false);
//}
////û���ظ�������
//void test5() {
//	int numbers[] = { 2,1,3,5,4 };
//	int duplications[] = { -1 };
//	test("Test5", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), false);
//}
////��Ч������
//void test6() {
//	int * numbers = nullptr;
//	int duplications[] = { -1 };
//	test("Test6", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), false);
//}
//
////int main(int argc, char*argv) {
////	test1();
////	test2();
////	test3();
////	test4();
////	test5();
////	test6();
////	system("pause");
////	return 0;
////}
