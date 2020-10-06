#include<iostream>
#include<stdlib.h>
#include "Array.h"

using namespace std;

Array::Array(int size){

	//생성자
	if(size<0){
		cout<<"Size Error"<<endl;
		return;
	
	}
	else{
		data= new int[size];
		len=size;
	
	}

}
Array::~Array()
{
	//소멸자
	delete(data);

}

int Array::length() const
{
	//길이 반환
	return len;

}
int &Array::operator[](int i){

	static int temp;

	if(i<len &&i>=0)
		return data[i];
	else{
		cout<<"Array bound Error!"<<endl;
		return temp;
	
	}


}
int Array::operator[](int i)const{


	if(i<len &&i>=0)
		return data[i];
	else{
		cout<<"Array bound Error!"<<endl;
		return 0;
	
	}

}

void Array::print()
{
	cout <<" [";
	for(int i=0;i<len;i++)
		cout<<data[i]<<" ";
	cout<<"]"<<endl;

}

