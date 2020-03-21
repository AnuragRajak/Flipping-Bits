//============================================================================
// Name        : Flipping.cpp
// Author      : Anurag Rajak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstdio>
using namespace std;

int main()
{
	int t;
      int n;
      scanf("%d",&t);
      while(t--)
      {

    	  scanf("%u",&n);
    	  printf("%u",(~n));

      }
	return 0;

}
