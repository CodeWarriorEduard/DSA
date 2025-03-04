#include<iostream>
#include<vector>

using namespace std;

// Sorted

// vector<int> twoSum(vector<int> &nums, int target){


//     vector<int> results;

//     int low = 0, high = 1;


//     while(low < high){

//         int sum = nums[low] + nums[high];

//         cout<<"Low"<<nums[low]<<" High "<<nums[high]<<"\n";

//         if(sum == target){
//             cout<<sum<<"\n";
//             results.push_back(low);
//             results.push_back(high);
//             return results;
//         }

//         if(sum < target){
//             low++;
//         }
//         if(sum > target){
//             high--;
//         }
        
      
        
       
       

//     }

//     return results;

// }

// Usando fuerza bruta / brute force

vector<int> twoSum(vector<int> &nums, int target){

    vector<int> results;

    for (int i = 0; i < nums.size(); i++)
    {
       for(int j = i + 1; j<nums.size(); j++){
            if(nums[i]+nums[j] == target){
                return {i,j};
            }
       }
    }
    

    return {};

}


int main(int argc, char const *argv[])
{
    vector<int> r = {3,2,4};

    vector<int> indexes = twoSum(r, 6);

    for (int i = 0; i < indexes.size(); i++)
    {
        cout<<indexes[i]<<"\n";
    }
    


    return 0;
}
