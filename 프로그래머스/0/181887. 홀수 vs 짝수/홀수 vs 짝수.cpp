#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int oddsum=0;
    int evensum=0;

    for(int i = 0; i<num_list.size(); i++){
        if (i%2 !=0) {
        oddsum+= num_list[i];
        }else{
            evensum+= num_list[i];
        }
    }
    if (oddsum>=evensum){
    return oddsum;
}else{
    return evensum;
}
}