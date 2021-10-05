#include <iostream>
#include <cstdlib>
using namespace std;

string HeadsOrTails(){
    int result = rand()%2;
    string select;
    if(result == 0){

    select = "heads";

    }

    if(result == 1){

     select = "tails";

    }
    return select;
    }

int main() {
    int tests,i;
    cin >>tests;


    srand(2);

    for(i = 0; i < tests; ++i){

    string final = HeadsOrTails();

    cout << final << endl;

    }


   return 0;
}
