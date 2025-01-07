#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int size = arr1.size();
    int vsize = arr1[0].size();
    
    vector<vector<int>> answer(size, vector<int>(vsize, 0));
    for (int i=0;
        i < size;
        ++i) {
        for (int j=0;
        j < vsize;
             ++j) {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return answer;
}