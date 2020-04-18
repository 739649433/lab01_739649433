#include <iostream>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[])
{
    if (argc != 5){
        cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
        cerr << " Prints smallest of the four numbers" << endl;
        exit(1);
    } 

    if ((atoi(argv[1])) <= (atoi(argv[2])) && (atoi(argv[1])) <= (atoi(argv[3])) && (atoi(argv[1])) <= (atoi(argv[4])))
    {
        cout << (atoi(argv[1])) << endl;
        exit(1);
    }

    if ((atoi(argv[2])) <= (atoi(argv[1])) && (atoi(argv[2])) <= (atoi(argv[3])) && (atoi(argv[2])) <= (atoi(argv[4])))
    {
        cout << (atoi(argv[2])) << endl;
        exit(1);
    }

    if ((atoi(argv[3])) <= (atoi(argv[2])) && (atoi(argv[3])) <= (atoi(argv[1])) && (atoi(argv[3])) <= (atoi(argv[4])))
    {
        cout << (atoi(argv[3])) << endl;
        exit(1);
    }

    if ((atoi(argv[4])) <= (atoi(argv[2])) && (atoi(argv[4])) <= (atoi(argv[3])) && (atoi(argv[4])) <= (atoi(argv[1])))
    {
        cout << (atoi(argv[4])) << endl;
        exit(1);
    }
    


    return 0;
}



