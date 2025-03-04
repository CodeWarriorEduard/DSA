#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int v[5] = {10, 2, 5 , 10,4};
    int n = sizeof(v)/sizeof(v[0]); 

    cout<<n;
    int key = v[0];
    for (int i = 0; i < n; i++)
    {
        // [2][1][8]
        // [2][1][8]
        // [][][]
        key = v[i];
        int j = i - 1;
        while (j>0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<"["<<v[i]<<"]";
    }
    

    return 0;
}

