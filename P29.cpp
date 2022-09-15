#include <iostream>
using namespace std;


int sum(int x, int y, int z = 0, int w = 0) 
{
return (x + y + z + w);
}


int main()
{

cout << sum(1, 1) << endl;
cout << sum(1, 1, 5) << endl;
cout << sum(1, 1, 5, 3) << endl;
return 0;
}
