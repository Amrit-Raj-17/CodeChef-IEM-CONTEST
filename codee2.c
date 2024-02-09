// Buzz and Nector problem
#include <stdio.h>
#include <math.h>
void hour(int arr[], int n, int t){
    int ans = 1;
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    while(ans <= max){
        int c_time = 0;
        for(int i = 0; i < n; i++)
            c_time += (arr[i]- 1)/ans + 1;
        if (c_time <= t){
            printf("%d\n", ans);
            ans = max + 1;
        }
        else
            ans++;
    }
}
int main(){
	int n, t;
	scanf("%d%d", &n, &t);
	int arr[n];
	for(int i = 0; i < n; i++)
	    scanf("%d", &arr[i]);
	hour(arr, n, t);
}
