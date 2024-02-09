import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int j = 0; j<t; j++){
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    for(int i = 0; i < n; i++){ 
		        arr[i] = sc.nextInt();
		    }
		    int ans = myFun(arr,n);
		    System.out.println(ans);
		}
		
		
	}
	static int myFun(int[] a,int n) {
	    Arrays.sort(a);
	    int ans = 0;
	    int temp[] = new int[n];
	    temp[n-1]=a[n-1];
	    for(int i=1;i<n;i++) {
	        temp[n-1-i] = temp[n-i]+a[n-i];
	    }
	    for(int i=0;i<n;i++) {
	        if(temp[i]>=0) {
	            ans++;
	        }
	    }
	    return ans;
	}
}
