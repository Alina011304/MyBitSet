#include "bitset.h"
#include <iostream>

BitSet:: BitSet():m_size(0){}

BitSet::BitSet(size_t size): m_size(size){

	bits.resize((size+7)/8,0);
}
BitSet::BitSet(const BitSet& other): m_size(other.m_size),bits(other.bits){}
BitSet::~BitSet(){}

void BitSet::Set(size_t pos,bool bit)
{
	size_t a = pos/ 8;
	size_t b = pos%8;
	if(bit)
	{
		bits[a] |= (1<<b);
	}
	else
	{
		bits[a] &= ~(1<<b);
	}
}
void BitSet::reset(size_t pos)
{
	Set(pos,false);
}
void BitSet::flip(size_t pos)
{
	size_t a = pos/ 8;
        size_t b = pos%8;
	bits[a] ^= (1<<b);
}
bool BitSet::test (size_t pos)const
{
	size_t a = pos/ 8;
        size_t b = pos%8;
	return (bits[a] & (1<<b))!= 0;
}
size_t BitSet::count()const
{	
	size_t countt = 0;
	for(int i =0; i< m_size;i++)
	{
		if(test(i))
		{
			countt++;
		}
	}
	return countt;
}
size_t BitSet::size()const
{
	return m_size;
}
void BitSet::print()const
{
	for(int i =0; i < m_size; i++)
	{
		std::cout<<test(i);
	}
	std::cout<<std::endl;
}

