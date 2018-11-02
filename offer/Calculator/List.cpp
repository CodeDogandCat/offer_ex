#include "stdc++.h"


ListNode* CreateListNode(int value) {
	ListNode* pNode = new ListNode();
	pNode->m_nValue = value;
	pNode->m_pNext = nullptr;
	return pNode;
}
void ConnectListNodes(ListNode* pCurrent, ListNode* pNext) {
	if (pCurrent==nullptr) {
		printf("Error to connect two nodes.\n");
		exit(1);
	}
	pCurrent->m_pNext = pNext;
}
void PrintListNode(ListNode* pNode) {
	if (pNode == nullptr) {
		printf("The node is nullptr.\n");
	}
	else {
		printf("The key in node is %d.\n", pNode->m_nValue);
	}
}
void PrintList(ListNode* pHead) {
	printf("PrintList starts.\n");

	ListNode* pNode = pHead;
	while (pNode != nullptr) {
		printf("%d\t", pNode->m_nValue);
		pNode = pNode->m_pNext;
	}
	printf("\nPrintList ends.\n");
}
void DestroyList(ListNode* pHead) {
	ListNode* pNode = pHead;
	while (pNode != nullptr) {
		pHead = pHead->m_pNext;
		delete pNode;
		pNode = pHead;
	}
}
void AddToTail(ListNode** pHead, int value) {
	ListNode* pNew = new ListNode();
	pNew->m_nValue = value;
	pNew->m_pNext = nullptr;

	if ((*pHead) == nullptr) {
		*pHead = pNew;
	}
	else {
		ListNode* pNode = *pHead;
		while (pNode->m_pNext != nullptr) {
			pNode = pNode->m_pNext;
		}
		pNode->m_pNext = pNew;
	}
}
//删除链表中之后按到的第一个含有某值的节点并删除该节点
void RemoveNode(ListNode** pHead, int value) {
	if (pHead == nullptr || (*pHead) == nullptr)
		return;
	ListNode* pToDeleted = nullptr;
	if ((*pHead)->m_nValue == value) {
		pToDeleted = (*pHead);
		(*pHead) = (*pHead)->m_pNext;
	}
	else {
		ListNode* pNode = *pHead;
		while (pNode->m_pNext != nullptr&&pNode->m_pNext->m_nValue != value) {
			pNode = pNode->m_pNext;
		}
		if (pNode->m_pNext != nullptr&&pNode->m_pNext->m_nValue == value) {
			pToDeleted = pNode->m_pNext;
			pNode->m_pNext = pNode->m_pNext->m_pNext;
		}
	}
	if (pToDeleted != nullptr) {
		delete pToDeleted;
		pToDeleted = nullptr;
	}
}