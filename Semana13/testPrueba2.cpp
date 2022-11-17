#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    ifstream source("source-file2.txt");
    ofstream destino("dest-file.txt");
    /*
    char x;
    while(source.get(x)) 
        destino << x;
    if (source.eof()) {
        cout << "[Eof reached]\n";
    } else {
        cout << "[error reading]\n";
    }
    */

   char x;
   while (source.eof()) {
        source >> x;
        destino >> x;
   }

    source.close();

    return 0;
}
