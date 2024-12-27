bool solution(int x) {
    int sum=0, num=x;
    while(num){sum+=num%10; num/=10;}
    if (x%sum==0){;
    return true;
                 }else{
        return false;
    }
    }
        