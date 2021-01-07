#include <iostream>
//#include <vector>
 
using namespace std;
 
int main () {
    string str;
    cin >> str;
    int finalBig {1};
    int iterateBig {1};
    for (int i {0}; i < str.size() ; i++){
        if (str[i]== str[i-1]) iterateBig++;
        else{ 
            if(finalBig < iterateBig) finalBig = iterateBig;
            iterateBig = 1;
        }
    }
    if(finalBig > iterateBig) cout << finalBig << endl;
    else cout << iterateBig << endl;
    return 0;
}
/*
2020-07-12
22:45:56
*/
