#include <iostream>

using namespace std;

int nt(int x)
{
	
 int y;
 
 if(x>0)
 {
	 
	 y = 1;
	 
 }else
 {
	 
	 if(x<0)
	 {
		 
		 y = -1;
		 

	 }else
	 {
		 
		 y = 0;
		 
	 }
	 
 }
	
 return y;
}

int main()
{
    int x;
    cin >> x;
    cout << nt(x);
    return 0;       
}