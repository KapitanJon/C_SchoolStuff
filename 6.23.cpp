#include <iostream>
using namespace std;

void SwapValues(int& userVal1, int& userVal2){
    int temp;
    temp =   userVal1;
    userVal1 = userVal2;
    userVal2 = temp;

}

int main() {
   int a;
   int b;

   cin >> a;
   cin >> b;

   SwapValues(a,b);

   cout << a << ' ' << b << endl;

   return 0;
}
