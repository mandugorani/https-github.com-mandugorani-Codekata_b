#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size()== 1) {
        return {-1};
    }
vector<int> sort_arr= arr;
sort(sort_arr.begin(), sort_arr.end());
    int smallest= sort_arr[0];
    
    for (auto i=arr.begin();
        i !=arr.end();
        ++i) {
        if (*i == smallest) {
            arr.erase(i);
            break;
        }
    }
return arr;
}