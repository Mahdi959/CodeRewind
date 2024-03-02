#include <iostream>
/**************************************************************************************************
*
*   File name :
*
*   This program  YOU FILL IN HERE
*
*
*   Programmer:  		YOUR NAME HERE with contributions from B.J. Streller
*
*   Date Written:		in the past
*
*   Date Last Revised:
*
***************************************************************************************************/




int main () {
	// Declarations & Definitions
	int a = 5;

	int* **p = new int**;
	*p = new int*;
	**p = &a;

	int*** q;

	int** r = new int*;
	*r = new int;
	**r = 10;

	int *t = new int;
	*t = 20;

	// Step 2 - Print Values for variables here
	// TODO  you need to add code here to print
    std::cout<<"a  "<<a<<std::endl;
    std::cout<<"p  "<<p<<std::endl;
    std::cout<<"*p  "<<*p<<std::endl;
    std::cout<<"**p  "<<**p<<std::endl;
    std::cout<<"***p  "<<***p<<std::endl;
   
    std::cout<<"r  "<<r<<std::endl;
    std::cout<<"*r  "<<*r<<std::endl;
    std::cout<<"**r  "<<**r<<std::endl;
    std::cout<<"*t  "<<*t<<std::endl;
   
	// Process
	q = &r;
	delete *r;
	*r = t;

	// Step 3 - Print Values for variables here as well
	// TODO  you need to add code here to print
    std::cout<<"a  "<<a<<std::endl;
    std::cout<<"p  "<<p<<std::endl;
    std::cout<<"*p  "<<*p<<std::endl;
    std::cout<<"**p  "<<**p<<std::endl;
    std::cout<<"***p  "<<***p<<std::endl;
   
    std::cout<<"r  "<<r<<std::endl;
    std::cout<<"*r  "<<*r<<std::endl;
    std::cout<<"**r  "<<**r<<std::endl;
    std::cout<<"*t  "<<*t<<std::endl;

	// Step 4 - Clean up - free all memory that isn't automatically freed
	// TODO  you need to add code here to free memory 



    delete *p;
    delete p;
    delete *r;
    delete r;
   


return 0;

}






