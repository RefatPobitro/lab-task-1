#include <iostream>
using namespace std;
int main(){
  string input;
 cout<<"enter a value"<<endl;
 cin>> input;

 for(int i=0; 1<input.length(); i++){
    if (input [i]<'0' || input [i]< '9'){
        cout<<"not numeric"<<endl;
        return 0;
    }
 }
   cout<<" numeric constract"<<endl;
   return 0;





















}
