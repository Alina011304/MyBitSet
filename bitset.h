#ifndef BITSET
#define BITSET
#include <iostream>
#include <vector>

class BitSet{
	private:
		std::vector<char> bits;
		size_t m_size;

	public:
		BitSet();
		BitSet(size_t size);
		BitSet(const BitSet& other);
		~BitSet();
		void Set(size_t pos, bool bit);
		void reset(size_t pos);
		void flip(size_t pos);
		bool test(size_t pos) const;
		size_t count() const;
		size_t size() const;
		void print()const;
};
#endif
