#include <iostream>
#include <string>
#include "pmd.h"

using namespace std;

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        cout << "argc != 4" << endl;
        exit(0);
    }
    
    string mode = argv[1];
    string input = argv[2];
    string output = argv[3];

    int ret;
    if (mode.find("c") != string::npos)
    {
        ret = ppmd_compress(input.c_str(), output.c_str());
    } else if (mode.find("d") != string::npos)
    {
        ret = ppmd_decompress(input.c_str(), output.c_str());
    }
    
    cout << "ret = " << ret << endl;
    return 0;
}