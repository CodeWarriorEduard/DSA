#include<iostream>
#include<vector>

using namespace std;


vector<int> twoSum(vector<int> &v, int target){
    int low = 0;
    int high = v.size() - 1;
    vector<int> result;
    while(low < high){

        int sum = v[low] + v[high];

        if(sum == target){
            result.push_back(low);
            result.push_back(high);
            return result;
        }

        else if(sum < target){
            low++;
        }

        else{
            high--;
        }

    }

       
    return result;

}


int main(int argc, char const *argv[])
{
    vector<int> v = {8,7,2,15};


    vector<int> re = twoSum(v, 10);


    for (int i = 0; i < re.size(); i++)
    {
        cout<<re[i]<<" ";
    }
    

    return 0;
}
