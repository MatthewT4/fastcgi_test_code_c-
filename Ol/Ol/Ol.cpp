#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    while (n < 500) {
        int Count = 1,
            Size = 1;
        while (Count < n) {
            Size++;
            Count += Size;
        }
        int s = Size;
        int fin;
        if (s - (Count - n) > 9){
            fin = (s - (Count - n)) / 10;
            s++;
        }
        else {
            fin = (s - (Count - n));
        }
        cout << n<< " - "<< fin << "  Count: " << Count << " Size: " << Size << endl;
        n++;
    }
    return 0;
}
