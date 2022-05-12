/******************************************************************************
Pattern: Breaking down

Let’s discuss a question, Power of 3. We want to return true if 
the number given is a power of 3

*******************************************************************************/
bool isPowerOfThree(int n)
{
 if(n<=0)return false;
 if(n%3==0) 
 return isPowerOfThree(n/3);
 if(n==1)return true; 
 return false;
}

/*
//  Power of 2

def isPowerOfTwo(self, n: int):
 if n==0:
 return False
 if n==1:
 return True
 if n%2!=0:
 return False
 return isPowerOfTwo(n//2)
*/