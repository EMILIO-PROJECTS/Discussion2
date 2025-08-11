#include <iostream>
#include <math.h>

using namespace std;


int main() {

    system("cls");


    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {     // i = 148, number = 148
        int number = i;
        bool print = true;

        while (number > 0) {     // number = 148
            int tail = number % 10;

            if (tail == 0) {
                    print = false;
                    break;
                } 
                else {
                    if (i % tail != 0) {
                        print = false;
                        break;
                }
            }

            number = number / 10;
        }
        
        if (print == true) {
            cout << i << " ";
        }
    }

    cout << endl;

}