#include<iostream>
#include<vector>

using namespace std;

vector<int> invert(vector<int> &arr){
    

    // Usando two pointers

    int left = 0, right = arr.size() - 1;

    while(left < right){

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        

        left++;
        right--;

    }



    cout<<"\n";
    

    return arr;

}


int main(int argc, char const *argv[])
{
    vector<int> v = {1,2,3,4,5,6,7,8};

    vector<int> re = invert(v);

    for (int i = 0; i <re.size(); i++)
    {
        cout<<re[i]<<" ";
    }

    cout<<"\n";
    

    return 0;
}



