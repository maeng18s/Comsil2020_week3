#include "Str.h"
#include<iostream>
#include<cstring>

using namespace std;

Str::Str(int leng)
{
	if(leng<=0){
	
		cout<<"String Length Error!"<<endl;
		len=0;
		return;
	
	}

	else
		leng=len;


}
Str::Str(const char *neyong)
{

	if(neyong==NULL){
		cout<<"Error"<<endl;
		len=0;
		str=new char[len+1];
		str[0]='\0';
		return;
	
	}
	else{
	
		len=strlen(neyong);
		str=new char[len+1];
		strcpy(str,neyong);
	}


}

Str::~Str()
{
	//할당한 str배열 소멸하는 소멸자
	delete[]str;

}


int Str::length(void){
	//str 길이 return 
	return len;

}

char *Str::contents(void){

	//str 내용 return 
	return str;
}

int Str::compare(class Str& a){

	//(a class의 str , str )의 strcmp
	return strcmp(str,a.contents());
}

int Str::compare(const char *a){

	//(char *a,str)의 strcmp
	return strcmp(str,a);

}

void Str::operator=(const char *a){

	delete[] str;

	if(a==NULL){
	
		len=0;
		str=new char[len+1];
		str[0]='\0';
	}
	else{
	
		len=strlen(a);
		str=new char[len+1];
		strcpy(str,a);
	}

} 
void Str::operator=(class Str& a){
	
	delete[] str;
	if(a.contents()==NULL){
		len=0;
		str=new char[len+1];
		str[0]='\0';
	
	}
	else{
	
		len=strlen(a.contents());
		str=new char[len+1];
		strcpy(str,a.contents());
	
	}


}
