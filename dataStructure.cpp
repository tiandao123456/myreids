#include "dataStructure.h"
#include <iostream>

using namespace std;

// �� key ��Ӧ������ͷ��һ�����
void ListKV::listLPush(string key, string val)
{
	// ��� m[key] Ϊ�գ��� m[key] ������
	// �򴴽�һ�� m[key] ͷ���
	if (m[key] == nullptr)
	{
		m[key] = new ListNode();
	}

	ListNode* p = new ListNode();
	p->val = val;

	// ��� m[key] ����ͷ��㣬�������ݽ��
	if (m[key]->next == nullptr)
	{
		p->next = nullptr;
	}
	else
	{
		p->next = m[key]->next;
	}
	// ��ͷ���ָ�����Ľ�㣬��ɽ��ͷ�����
	m[key]->next = p;
}

// �� key ��Ӧ������β��һ�����
void ListKV::listRPush(string key, string val)
{
	// ��� m[key] Ϊ�գ��� m[key] ������
	// �򴴽�һ�� m[key] ͷ���
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

// ��ͷ��ʼ������н���ֵ
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
