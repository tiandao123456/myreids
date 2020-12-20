#include "dataStructure.h"
#include <iostream>

using namespace std;

// 对 key 对应的链表头插一个结点
void ListKV::listLPush(string key, string val)
{
	// 如果 m[key] 为空，即 m[key] 不存在
	// 则创建一个 m[key] 头结点
	if (m[key] == nullptr)
	{
		m[key] = new ListNode();
	}

	ListNode* p = new ListNode();
	p->val = val;

	// 如果 m[key] 仅有头结点，而无数据结点
	if (m[key]->next == nullptr)
	{
		p->next = nullptr;
	}
	else
	{
		p->next = m[key]->next;
	}
	// 将头结点指向插入的结点，完成结点头插操作
	m[key]->next = p;
}

// 对 key 对应的链表尾插一个结点
void ListKV::listRPush(string key, string val)
{
	// 如果 m[key] 为空，即 m[key] 不存在
	// 则创建一个 m[key] 头结点
	if (m[key] == nullptr)
	{
		m[key] = new ListNode();
	}

	ListNode* p = new ListNode();
	p->val = val;
	p->next = nullptr;
	if (m[key]->next == nullptr)
	{
		m[key]->next = p;
	}
	else
	{
		ListNode* tmp = m[key]->next;
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
		}
		tmp->next = p;
	}
}

// 从头开始输出所有结点的值
void ListKV::printList(string key)
{
	if (m[key] != nullptr && m[key]->next != nullptr)
	{
		ListNode* p = m[key]->next;
		while (p != nullptr)
		{
			cout << p->val << endl;
			p = p->next;
		}
	}
}
