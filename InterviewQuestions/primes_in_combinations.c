#include<stdio.h>
#include<math.h>

int count(int n){
    int cnt = 0;
    while(n > 0){
        n /= 10;
        cnt++;
    }
    return cnt;
}

void separation(int num, int arr[]){
    int idx = 0;
    while(num > 0){
        arr[idx++] = num % 10;
        num /= 10;
    }
}

void reverse(int arr[], int cnt){
    int start = 0, end = cnt - 1;
    while(start < end){
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }
}

void combination(int arr[], int cnt, int num[]){
    int idx = 0;
    for(int i = 0; i < cnt; i++){
        int val = 0;
        for(int j = i; j < cnt; j++){
            val = val * 10 + arr[j];
            num[idx++] = val;
        }
    }
}

int isprime(int num){
    if(num<2) return 0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int cnt = count(num);

    int arr[cnt];
    separation(num, arr);
    reverse(arr, cnt);

    int total = cnt * (cnt + 1) / 2;
    int arrc[total];


    combination(arr, cnt, arrc);

    printf("Combinations\n");
    for(int i = 0; i < total; i++){
        printf("%d ", arrc[i]);
    }
    printf("\nPrimes in combinations\n");
    for(int i=0;i<total;i++){
        if(isprime(arrc[i])) printf("%d ",arrc[i]);
    }
    return 0;
}
