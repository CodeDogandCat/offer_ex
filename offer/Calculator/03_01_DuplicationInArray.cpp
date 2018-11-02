////面试题3（-）:找出数组中重复的数字
////题目：在一个长度为n的数组里的所有的数组都在0到n-1的范围内，数组中某些数字是重复的，但是
////不知道有几个数字重复了，也不知道每个数字重复了几次，请找出数组中任意一个重复的数字，
////例如输入长度为7的数组{2,3,1,0,3,5,3}，那么对应的输出是重复的数字2或者3
//
//#include "stdc++.h"	
////参数
////	numbers: 一个整数数组
////	length: 数组的长度
////	duplication: （输出）数组中的一个重复的数字
////返回值：
////	true: 输入有效，并且数组中存在重复的数字
////	false: 输入无效，或者数组中没有重复的数字
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
//			//不相等，交换
//			int temp = numbers[i];
//			numbers[i] = numbers[temp];
//			numbers[temp] = temp;
//		}
//
//	}
//	return false;
//}	
////======================测试代码============================
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
//	//参数说明
//	//validArgument：输入是否合法
//	//expected:重复数字的集合
//	//expectedLength:重复数字的集合的长度
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
////重复的数字是数组中的最小的数字
//void test1() {
//	int numbers[] = { 2,1,3,1,4 };
//	int duplications[] = { 1 };
//	test("Test1", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), true);
//
//}
////重复的数字是数组中的最大的数字
//void test2() {
//	int numbers[] = { 2,4,3,1,4 };
//	int duplications[] = { 4 };
//	test("Test2", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), true);
//}
////数组存在多个重复的数字
//void test3() {
//	int numbers[] = { 2,4,2,1,4 };
//	int duplications[] = { 2,4 };
//	test("Test3", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), true);
//}
////没有重复的数字
//void test4() {
//	int numbers[] = { 2,1,4,3,0 };
//	int duplications[] = { -1 };
//	test("Test4", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), false);
//}
////没有重复的数字
//void test5() {
//	int numbers[] = { 2,1,3,5,4 };
//	int duplications[] = { -1 };
//	test("Test5", numbers, sizeof(numbers) / sizeof(int), duplications,
//		sizeof(duplications) / sizeof(int), false);
//}
////无效的输入
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
