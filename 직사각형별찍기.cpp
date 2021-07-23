#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int a;
    int b;
    string answer;
    cin >> a >> b;
    //cout << a + b << endl;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout << "*" ;
        }
        printf("\n");
    }
    return 0;
}