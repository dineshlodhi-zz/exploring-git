#include <iostream>
using namespace std;


void printBinStringsHelper(int n, char p[], int pi){
if(pi == n){
for(int i =0; i<pi; i++){
cout<<p[i];
}
cout <<", ";
return;
}

for(int i=0; i<16; i++){
if(i>9)
p[pi] = i - 10 + 'A';
else
p[pi] = i + '0';
printBinStringsHelper(n,p,pi+1);
}

}

void printBinString(int n){

char p[n];
printBinStringsHelper(n, p , 0);

}


int main(){
int n;
cout <<"Enter a number to generate bin strings. " << endl;
cin>>n; 
printBinString(n);
cout<<endl; // line break after printing all patterns.
return 0;
}

