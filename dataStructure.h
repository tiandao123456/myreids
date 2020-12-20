#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

//�ַ���
class StringKV
{
public:
	// m[key] �������ͷ��㣨��ָ���һ����㣩������������ĵ�һ�����
	map<string, string> m;
	int type = 0;

	string getVal(string key) { return m[key]; }
	void setVal(string key, string val) { m[key] = val; };
};


// ����
struct ListNode
{
	string val;
	ListNode* next;
};

// �б�
class ListKV
{
public:
	map<string, ListNode*> m;
	int type = 1;

	//void listLPush(ListNode* &L, string val);
	//void listRPush(ListNode* &L, string val);
	//void printList(ListNode* L);

	void listLPush(string key, string val);
	void listRPush(string key, string val);
	void printList(string key);
	ListNode* getVal(string key) { return m[key]; };
};