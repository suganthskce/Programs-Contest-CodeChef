#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct list {
    long int data;
    struct list *next;
}*head=NULL,*tail=NULL;
void insert(int data) {
    struct list *new = malloc(sizeof(struct list));
    new ->next = NULL;
    new ->data = data;
    if(head == NULL && tail == NULL) {
        head = new;
        tail = new;
    } else {
        tail->next = new;
        tail = new;
    }
}
//Kadane’s Algorithm O(n) to find Maximun sum of subarray 
long int findMaxSumOfSubarray() {
    long int max_end = 0,max_so_far = 0;
    struct list *temp = head;
    while(temp!=NULL) {
        max_end += temp->data;
        if(max_end <0){
            max_end = 0;
        }   
        if(max_so_far < max_end) {
            max_so_far = max_end;
        }
        temp = temp->next;
    }
    return max_so_far;
}
void print(struct list *head) {
    if(head != NULL) {
        printf("%ld ",head->data);
        print(head->next);
    }
}
int main() {
    long int t;
    scanf("%ld",&t);
    while(t--) {
        long int n,k;
        scanf("%ld %ld",&n,&k);
        long int arr[n],i,j,maxVal = 0,key = 0,max = -999999;
        head = NULL;
        tail = NULL;
        for(i=0;i<n;i++) {
            scanf("%ld",&arr[i]);
            if(!key && arr[i]>=0)
                key = 1;
            if(!key && max < arr[i])
                max = arr[i];
        }
        if(key)
        for(i=0;i<k;i++) {
            for(j=0;j<n;j++)
                insert(arr[j]);
        }
        //printf("--------\n");
        //print(head);
        //printf("--------\n");
        if(!key)
            printf("%ld\n",max);
        else
            printf("%ld\n",findMaxSumOfSubarray());
    }   
    return 0;
}
