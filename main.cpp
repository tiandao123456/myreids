#include <iostream>
#include "dataStructure.h"

using namespace std;

int main()
{
	ListKV listKV;

	listKV.listLPush("526", "yhb");
	listKV.listLPush("526", "zxa");
	listKV.listRPush("526", "lbw");
	listKV.listRPush("526", "wjj");
	listKV.printList("526");
	system("pause");
	return 0;
}