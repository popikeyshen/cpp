
#include <stdio.h>
#include <iostream>

using namespace std;


class human
{
     public:
	int intelegent;
        int weight;

     human(int param1, int param2);
     ~human();

};

human::human(int param1, int param2)
{
	intelegent = param1;
	weight     = param2;
	std::cout<< "human created by constructor"  << std::endl; 
}

human::~human()
{
	std::cout<< "human deleted by destructor"  << std::endl; 
}


int main()
{

	human viacheslav(100, 57);

	int a;
	std::cout<< "sizeof=" << sizeof(viacheslav) << std::endl; 



	return 0;
}
