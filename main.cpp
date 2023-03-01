#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
 
int main() {
    int a=1,b=2;
    cin>>a>>b;
    if(a>b){
        cout<<"Больше";
    }else if(a==b)
        cout<<"Равно";
    if(a<=b){
        cout<<"Меньше";
    }
}
