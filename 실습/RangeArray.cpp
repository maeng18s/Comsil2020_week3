#include<iostream>
#include "RangeArray.h"

using namespace std;

RangeArray::RangeArray(int l, int h):Array(h-l+1)
{
	low=l;
	high=h;

}
RangeArray::~RangeArray()
{
	//소몋자
}
int RangeArray::baseValue()
{
	return low;
}

int RangeArray::endValue()
{

	return high;
}

int& RangeArray::operator[](int i)
{
	return Array::operator[](i-low);
}

int RangeArray::operator[](int i)const
{
	return Array::operator[](i-low);

}
