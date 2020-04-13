#include <iostream>
#include <cstdlib>
using namespace std;

string block(int a, int b)
{
    string result = "";

    for(int i = 0; i < a; i++){
        int j = 0;
        while(j < b){
            result += "X.";
            j++;
        }
        result += '\n';
    }
    return result;
}

int main(int argc, char *argv[])
{
    int r;
    int c;
    cout << "Enter number of rows and columns:" << endl;
    cin >> r >> c;
    cout << block(r,c);
    return 0;
}

