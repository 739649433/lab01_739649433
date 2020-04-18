#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
    cin >> n;

    if(n == -1){
        exit(1);
    }
    while (n != -1)
    {
    
    
    
    

    double pi = 0;
    int i = 0;

    while (i < (n+1))
    {
        pi += 4*((pow(-1,i))/(2*i+1));
        i++;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3); 
    
    

    if(n == 0){
        cout << "The approximate value of pi using " << (n+1) << " term is: " << pi << endl;
        
    }

    if (n != 0){
        cout << "The approximate value of pi using " << (n+1) << " terms is: " << pi << endl;
    }

    cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
    cin >> n;
    }
    return 0;
}
