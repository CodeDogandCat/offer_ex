//#include "stdc++.h"
////������6����β��ͷ��ӡ����
////��Ŀ������һ�������ͷ��㣬��β��ͷ��������ӡ��ÿ���ڵ��ֵ
//
//void printListReversingly_iterative(ListNode * pHead) {
//	if (!pHead)
//		return;
//	stack<ListNode*> nodes;
//	ListNode* pNode = pHead;
//	while (pNode!=nullptr) {
//		nodes.push(pNode);
//		pNode = pNode->m_pNext;
//	}
//	while (!nodes.empty()) {
//		int val = nodes.top()->m_nValue;
//		cout << val << endl;
//		nodes.pop();
//	}
//}
//void printListReversingly_recursive(ListNode* pHead) {
//	if (pHead) {
//		if (pHead->m_pNext) {
//			printListReversingly_recursive(pHead->m_pNext);
//		}
//		cout << pHead->m_nValue << endl;
//	}
//}
//
//// == == == == == == == == == == ���Դ��� == == == == == == == == == ==
//void Test(ListNode* pHead)
//{
//	PrintList(pHead);
//	printListReversingly_iterative(pHead);
//	printf("\n");
//	printListReversingly_recursive(pHead);
//}
//
//// 1->2->3->4->5
//void Test1()
//{
//	printf("\nTest1 begins.\n");
//
//	ListNode* pNode1 = CreateListNode(1);
//	ListNode* pNode2 = CreateListNode(2);
//	ListNode* pNode3 = CreateListNode(3);
//	ListNode* pNode4 = CreateListNode(4);
//	ListNode* pNode5 = CreateListNode(5);
//
//	ConnectListNodes(pNode1, pNode2);
//	ConnectListNodes(pNode2, pNode3);
//	ConnectListNodes(pNode3, pNode4);
//	ConnectListNodes(pNode4, pNode5);
//
//	Test(pNode1);
//
//	DestroyList(pNode1);
//}
//
//// ֻ��һ����������: 1
//void Test2()
//{
//	printf("\nTest2 begins.\n");
//
//	ListNode* pNode1 = CreateListNode(1);
//
//	Test(pNode1);
//
//	DestroyList(pNode1);
//}
//
//// ������
//void Test3()
//{
//	printf("\nTest3 begins.\n");
//
//	Test(nullptr);
//}
//
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test2();
//	Test3();
//	system("pause");
//	return 0;
//}

 