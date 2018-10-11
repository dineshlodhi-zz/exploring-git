#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool compareFun(int a, int b) {
return a < b;
}
void sortArr(vector<int> &v, int a[], int n) {
  sort(a, a+n, compareFun);
  sort(v.begin(), v.end(), compareFun);
}

int main() {
int a[10] = {11,2,43,56,12,9,123,43,60,12};
vector<int> v ;

for(int i =0; i < 10; i++) {
v.push_back(a[i]);
}
cout << "\n\n\nArray Elements before sorting: ";
for(int i=0; i<10; i++) {
cout<<" "<< a[i];
}

cout<<endl;
cout <<"Vector elements before sorting: ";

 for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
    cout << ' ' << *it;

cout<<endl;
sortArr(v, a, 10);
cout << "Array Elements after sorting: ";
for(int i=0; i<10; i++) {
cout<<" "<< a[i];
}

cout <<"\nVector elements after sorting: ";

 for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
    cout << ' ' << *it;

cout<<"\n\n\n";

return 0;
}
