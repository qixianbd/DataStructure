/*
 * SkipList_Test.cc
 *
 *  Created on: 2014年11月7日
 *      Author: qmwx
 */

#include "SkipList.h"



#ifdef SKIPLIST_TEST

int main()
{
	SkipList<int> sl;
	for(int i = 0; i < 20; i++){
		sl.insert(i);
	}
	sl.print(std::cerr);


	return 0;
}
#endif

