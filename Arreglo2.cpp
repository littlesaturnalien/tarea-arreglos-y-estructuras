#include <iostream>
using namespace std;

int main(){
    float nums[6];
    nums[0]={};
    nums[1]=95.75;
    nums[2]={};
    nums[3]=87.91;
    nums[4]={};
    nums[5]=85.72;

    for(int i = 0; i < 6; i++){
        if(nums[i]==0){
            cout << "[]";
        }
        else{
            cout << "[ " << nums[i] << " ]";
        }
        cout << " ";
    }
    return 0;
}