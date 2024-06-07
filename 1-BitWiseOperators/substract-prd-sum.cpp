#include "iostream"
using namespace std;

int main(){
    int n=234;

    int prd=1;
    int sum=0;

    while (n!=0){
        prd= n%10 * (prd);
        sum= n%10 + (sum);

        n/=10;
    }

    cout<<prd-sum;
}