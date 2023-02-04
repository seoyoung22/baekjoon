#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer=0;
    int i = 0;
    n=n/2;
    for(i=0;i<n;i++){
        answer+=2*(i+1);
    }
    return answer;
}