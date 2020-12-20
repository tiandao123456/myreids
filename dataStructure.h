#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

//字符串
class StringKV
{
public:
	// m[key] 是链表的头结点（它指向第一个结点），而不是链表的第一个结点
	map<string, string> m;
	int type = 0;

	string getVal(string key) { return m[key]; }
	void setVal(string key, string val) { m[key] = val; };
};


// 链表
struct ListNode
{
	string val;
	ListNode* next;
};

// 列表
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