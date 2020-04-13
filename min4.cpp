#include <iostream>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[])
{
    
    if ((atoi(argv[1])) <= (atoi(argv[2])) && (atoi(argv[1])) <= (atoi(argv[3])) && (atoi(argv[1])) <= (atoi(argv[4])))
    {
        cout << (atoi(argv[1])) << endl;
    }

    if ((atoi(argv[2])) <= (atoi(argv[1])) && (atoi(argv[2])) <= (atoi(argv[3])) && (atoi(argv[2])) <= (atoi(argv[4])))
    {
        cout << (atoi(argv[2])) << endl;
    }

    if ((atoi(argv[3])) <= (atoi(argv[2])) && (atoi(argv[3])) <= (atoi(argv[1])) && (atoi(argv[3])) <= (atoi(argv[4])))
    {
        cout << (atoi(argv[3])) << endl;
    }

    if ((atoi(argv[4])) <= (atoi(argv[2])) && (atoi(argv[4])) <= (atoi(argv[3])) && (atoi(argv[4])) <= (atoi(argv[1])))
    {
        cout << (atoi(argv[4])) << endl;
    }
    


    return 0;
}



