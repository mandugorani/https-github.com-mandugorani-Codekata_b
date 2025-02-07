#include <vector>
#include <cmath>
using namespace std;

bool sosu(int num){
    if (num <2)
        return false;
    for (int i=2;
        i<=sqrt(num);
        i++){
        if (num %i == 0)
            return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int count =0;
    int n= nums.size();
    
    for (int i=0; 
         i<n;
         i++){
        for (int j=i+1;
            j<n;
            j++){
            for(int k=j+1;
               k<n;
               k++){
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sosu(sum))
                    count++;
            }
        }
    }
    return count;
}