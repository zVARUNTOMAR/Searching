//To find Element in an Given Array using a Linear Search
//Time Complexity :- O(n);
//No of Comparisons :- O(n);
//Code By --Varun Tomar
//Github:- https://github.com/zVARUNTOMAR

#include<stdio.h>

struct pair {
    int flag;
    int index;
};

struct pair findKey(int array[],int key,int size){
    
    struct pair answer;
    for(int i =0;i<size;i++){
        if(array[i]==key){
            answer.flag=1;
            answer.index=(i+1);
            return answer;
        }
    }
    
    answer.flag=0;
    answer.index=-1;
    
    return answer;
}

int main(){
    
    int array[] = {3,5,6,7,10,12,100};

    int key = 12;
    
    struct pair answer=findKey(array,key,7);
    
    if(answer.flag){
        printf("Element found\n");
        printf("Index of Key in An Array : %d",answer.index);
    }
    else{
        printf("Element not found");
    }
    
    return 0;
}