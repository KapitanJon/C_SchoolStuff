#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   float myFloat;

   myFloat = 78.7243;

   cout << scientific << setprecision(3) << myFloat;

   return 0;
}
