#include <iostream> 
using namespace std; 
  
int main() 
{ 
  int x;
  char a;
  float b;
  cout<<"Enter anything";
  cin>>x;
  cin>>a;
  cin>>b;
  try
  {
   if(x==0)
      throw x;
   if(x>0)
      throw a;
   else
      throw b;
  }
  catch(int x)
  {
   cout<<"Catch for integer"<<endl;
  }
  catch(char x)
  {
   cout<<"Catch for character"<<endl;
  }
  catch(float x)
  {
   cout<<"Catch for float"<<endl;
  }
} 