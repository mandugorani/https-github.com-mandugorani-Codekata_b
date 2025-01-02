#include <vector>
using namespace std;

int solution(vector<int> numbers) {
    bool has0 = false, 
    has1 = false, 
    has2 = false, 
    has3 = false, 
    has4 = false,
    has5 = false, 
    has6 = false, 
    has7 = false, 
    has8 = false, 
    has9 = false;
    int sum = 0;
    
for(int num : numbers){
    if(num == 0)
        has0 = true;
    if(num == 1) 
        has1 = true;
    if(num == 2) 
        has2 = true;
    if(num == 3) 
        has3 = true;
    if(num == 4) 
        has4 = true;
    if(num == 5) 
        has5 = true;
    if(num == 6) 
        has6 = true;
    if(num == 7) 
        has7 = true;
    if(num == 8) 
        has8 = true;
    if(num == 9) 
        has9 = true;
    }
    if(!has0) 
        sum += 0;
    if(!has1) 
        sum += 1;
    if(!has2) 
        sum += 2;
    if(!has3) 
        sum += 3;
    if(!has4) 
        sum += 4;
    if(!has5) 
        sum += 5;
    if(!has6) 
        sum += 6;
    if(!has7) 
        sum += 7;
    if(!has8) 
        sum += 8;
    if(!has9) 
        sum += 9;
    
    return sum;
}