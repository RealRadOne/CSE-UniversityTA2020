class Okay
{
private:
    int x, y;
public:
    Okay(int x1, int y1) { x = x1; y = y1; }
  
 Okay(const Okay &p2)
{x = p2.x; y = p2.y;}
  
    int getX()        	{  return x; }
    int getY()        	{  return y; }
};
int main()
{
 Okay p1(10, 15); // Normal constructor
 Okay p2 = p1; // Copy constructor
  
    // Accessing values assigned 
  cout << "p1.x ="<< p1.getX() 
       << "p1.y ="<< p1.getY();
  cout <<"np2.x="<<p2.getX()
       <<"p2.y ="<<p2.getY();
  
    return 0;
}
