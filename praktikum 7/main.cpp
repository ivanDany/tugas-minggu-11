#include <iostream>

using namespace std;

int main()
{
    int i, j, n;
    n=0;

    for(i=1; i<=5; i++){
        for(j=5; j>=5-n; j--){
            cout << j << "\t";
        }
        n=n+1;
        cout << "\n";
    }
    return 0;
}
