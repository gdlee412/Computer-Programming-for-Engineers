/* File I/O steps
* 1. Include file i/o library
* 2. Declare Streams
* 3. Connect file to stream object
* 4. Check connection fail
* 5. Read / write file
* 6. Close file
*/

#include <iostream>
//file io library
#include <fstream>
//for exit code
#include <cstdlib>
using namespace std;

//ifstream == input file stream -> this is a class
//ofstream == output file stream -> this is a class

int main()
{
    ifstream inStream;
    ofstream outStream;

    inStream.open("input.txt");
    //check for file connection errors
    if(inStream.fail())
    {
        cout << "File open failed" << endl;
        exit(1);
    }

    //ios::app -> from iostream library: used to append to a file (if file DNE, it will be created)
    outStream.open("output.txt", ios::app);

    /*Filename at declaration
    ifstream inStream("input.txt");
    ofstream outStream("output.txt");
    */

   int first, second, third;
    inStream >> first >> second >> third;
    outStream << "The sum of the first 3\n"
                << "numbers in infile.txt\n"
                << "is " << (first + second + third) << endl;
    
    inStream.close();
    outStream.close();

    return 0;
}