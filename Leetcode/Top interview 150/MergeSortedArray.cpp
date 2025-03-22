#include<iostream>
#include<vector>


using namespace std;




void merge(vector<int> &nums1, vector<int> &nums2, int m, int n){

    int nV = (m + n) - 1 ;

    

    int p1 = m - 1;
    int p2 = n - 1;



    // for (int i = nV; i >=0; i--){
          
    //     if(p2 >= 0){
    //         if(nums1[p1] < nums2[p2]){
    //             nums1[i] = nums2[p2--];
    //         }else{
    //             nums1[i] = nums1[p1--];
    //         }
    //     }
     
    // }

    while (p2>=0 & p1>=0)
    {
        cout<<p1<<" "<<p2<<endl;
        if(nums1[p1] < nums2[p2]){
            nums1[nV] = nums2[p2--];
        }else{
            nums1[nV] = nums1[p1--];
        }

        nV--;
    }
    
    while(p2>=0){
        nums1[nV] = nums2[p2--];
        nV--;
    }

    



}


int main(int argc, char const *argv[])
{
    // Arrays 

    vector<int> v1 = {4,5,6,0,0,0};
     
    int m = 3;
    
    vector<int> v2 = {1,2,3};

    int n = 3;


    
    merge(v1, v2, m, n);

    for (int i = 0; i < m+n; i++)
    {
        cout<<"["<<v1[i]<<"]";
    }
    

    return 0;
}
