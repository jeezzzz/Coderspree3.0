#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j;
        }
        for(int k=1;k<=2*(n-i);k++)
        {
            cout << " ";
        }
        for(int l=1;l<=i;l++)
        {
            cout << l;
        }
        cout << endl;
    }
}
