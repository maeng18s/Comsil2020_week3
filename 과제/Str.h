#include<iostream>
#include<cstring>

class Str
{
	private:
		char *str;	//string의 내용
		int len;
	public:
		Str(int leng);
		Str(const char *neyong);
		~Str();
		int length(void);
		char *contents(void);
		int compare(class Str& a);
		int compare(const char *a);
		void operator=(const char *a);
		void operator=(class Str& a);

};
