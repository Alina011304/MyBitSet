#include <iostream>
#include"bitset.h"


int main()
{
	BitSet b(32);
	b.Set(4,true);
	b.Set(7,true);
	b.Set(15,true);
	b.Set(21,true);

	b.print();
	b.flip(4);
	b.print();
	std::cout<<b.count()<<std::endl;
	b.reset(4);
	b.print();
	std::cout<<b.size()<<std::endl;
	return 0;


}
