#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
int count1=0,
    count2=0,
    count3=0;
    
    int pattern1[]= {1,2,3,4,5};
    int size1= sizeof(pattern1) / sizeof(pattern1[0]);
        
    int pattern2[] = {2,1,2,3,2,4,2,5};
    int size2= sizeof(pattern2) / sizeof(pattern2[0]);
    
    int pattern3[] = {3,3,1,1,2,2,4,4,5,5};
    int size3= sizeof(pattern3) / sizeof(pattern3[0]);
    
    int n = answers.size();
    
    
    for (int i = 0; i < n; i++) {
        if (answers[i] == pattern1[i % size1]) {
            count1++;
        }
        if (answers[i] == pattern2[i % size2]) {
            count2++;
        }
        if (answers[i] == pattern3[i % size3]) {
            count3++;
        }
    }
    int maxCount = std::max(count1, std::max(count2, count3));
    std::vector<int> result;

    if (count1 == maxCount) {
        result.push_back(1);
    }
    if (count2 == maxCount) {
        result.push_back(2);
    }
    if (count3 == maxCount) {
        result.push_back(3);
    }

    return result;
}