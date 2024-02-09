#include <stdio.h>
#define S 100
void test(int arr[S][4], int n){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 1)
                cnt += 1;
        }
        if(cnt == 0)
            printf("HIT\n");
        else
            printf("MISS\n");
    }
}
int main(void) {
	int n;
	scanf("%d",&n);
	int arr[n][4];
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < 4; j++)
	        scanf("%d", &arr[i][j]);
	}
	test(arr, n);
}