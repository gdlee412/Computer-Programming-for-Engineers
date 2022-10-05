#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream inStream;
    ofstream outStream;

    inStream.open("input.txt");
    if(inStream.fail())
    {
        cout << "File open failed" << endl;
        exit(1);
    }
    outStream.open("output.txt");
    if(outStream.fail())
    {
        cout << "Output file open failed" << endl;
        exit(1);
    }
   
   char next;
   inStream.get(next);
   while(!inStream.eof())
   {
    cout << next;
    outStream << next;
    inStream.get(next);
   }
   //can also use:
   /*
   instream returns boolean value
   while(inStream >> next)
   {
    cout << next;
   }
   */
    inStream.close();
    outStream.close();

    return 0;
}