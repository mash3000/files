#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 	ofstream file;
	file.open("abc.txt");
	file <<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
   	file.close();
 
   return 0;
}
