#include <iostream>
using namespace std;

int Prime(int n){
if(n<=1){
    return false;
}
for (int i = 2; i * i <= n; i++){
    if(n%i==0){
        return false;
    }
}
return true;
}
int main(){
    Prime(5) ? cout << "true\n" : cout << "false\n";
    return 0;
}