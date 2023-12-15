#include <iostream>
using namespace std;
int temp;
int main(){

    
    int x[] = {6, 4, 2, 1, 3, 5};
    int j = sizeof(x)/ sizeof(*x);

    cout << "x = ";
    for (int i = 0; i < j; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < j; i++){
        //sorting
        int stop = 0;
        for(int h = 0; h < j-1; h++){
            if (x[h] > x[h+1])
            {
                temp = x[h];
                x[h] = x[h+1];
                x[h+1] = temp;
                stop++;
            }
        }
            if (stop == 0)
            {
                break;
            }
        cout << endl;
        cout << "Tahap " << i + 1 << " : ";
        for (int a = 0;  a < j; a++){
            cout << x[a] << " ";
        } 
    }

    cout << endl;
    cout << "Hasil : ";
    for (int a = 0;  a < j; a++){
            cout << x[a] << " ";
    }
    
return 0;
}
