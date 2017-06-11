//use of new and delete operators ::\

#include <iostream>
//#include <conio.h>
using namespace std;

int main()
{
	int *arr;
	int size;
	
	cout << "enter the size of the array :" <<"\n";
	cin >> size;
 
    cout << "Creating an array of size " << size << "\n";
    arr = new int[size] ;

    cout << "\n Dynamic allocation of memory for array is successful :";
    delete arr;
    
   int *p=NULL;
   if(p)
   	cout << "allocation failed \n ";


    return 0;
  //  getch();  
}