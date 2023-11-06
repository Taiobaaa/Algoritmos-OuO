#include <iostream>

using namespace std;

float nt(float *x, float *y)
{
	
	float z;
	
      if(x > y)
	  {
		  
		  z = x;
		  
	  }else
	  {
		  
		   if(x < y)
	  {
		  
		  z = y;
		  
	  }else
	  {
		  
		  z = 0;
		  // 0 -> são iguais
		  
	  }
		  
	  }

      	
 	 return z;
}

int main()
{
    float x;
    float y;
    cin >> x >> y;
    cout << nt(x,y);
    return 0;       
}