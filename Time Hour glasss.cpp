#include<stdio.h>
main(){
	int n=6,i,j,k;
	int arr[n][n];
	printf("Enter the elements in %d X %d Matrix\n",n,n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n\n");
	}
	int s=-100,sum;
	for(i=0;i<n-2;i++){
		for(j=0;j<n-2;j++){
		sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
		if(sum>s){
		s=sum;}
		sum=0;
		}
	}
	printf("Maximum Sum=%d",s);

	
	
	
	
	
	
}
