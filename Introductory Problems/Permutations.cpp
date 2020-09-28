#include "bits/stdc++.h"
//PRAY :ORZ FENCING: orz orz orz orz orz 
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    long long n; cin>>n; 
    if(n<4&&n!=1){cout << "NO SOLUTION" << endl; return 0;}
    elif(n==1){cout << 1 << endl; return 0;}
     for(int i=1;i<=n;i++){
    	if( i>1 && i%2==0){
    		cout << i << " ";
    	}
    }
    for(int i=1;i<=n;i++){
    	if(i==1 || (i!=2 && i%2!=0)){
    		cout << i << " ";
    	}
    }

    cout << endl;
    return 0;
}
//TASKKILL /F /IM main.exe
/*
10:58 PM
9/28/2020
*/
//===============================================================//
/*
print all evens
then all odds ez 
cuz if swapped 
sneaky case 4 will gib 1 (3 2) 4  
AND 1 was a case which will give 1 thats not my fault 
saarang orz
*/
//===============================================================//
