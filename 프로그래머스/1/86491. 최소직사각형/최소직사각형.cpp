#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_garo =0;
    int max_sero =0;
    
    for (const auto& size:sizes){
    int garo = max(size[0], size[1]);
    int sero = min(size[0], size[1]);
    
    max_garo = max(max_garo,garo);
    max_sero = max(max_sero,sero);
}
    return max_garo* max_sero;
}