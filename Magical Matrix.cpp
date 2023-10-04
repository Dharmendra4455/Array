#include<stdio.h>
main(){int sr=0,sc=0,i,j,k,r,c;
	printf("Enter Rows and  Column Of Matrix");
	scanf("%d%d",&r,&c);
	if(r==c){
	
	int arr[r][c];
	printf("Insert The Value in Matrix:-\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("Matrix:-\n\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		
		printf(" %d ",arr[i][j]);}
		printf("\n\n");
	}
	
	//Diagonals
	int dl=0,dr=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		if(i==j){
			dr+=arr[i][j];
		}
		       //n-1==2 for n=3; r==c==n
		    if(i==(r-1)-j)
		     dl+=arr[i][j];
	}
}
if(dl!=dr){
printf("Not a Magical Matrix\n");
}

else{
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		  sc+=arr[i][j];
		  sr+=arr[j][i];
		  }
		  if(sc!=sr){
		  	printf("Not a Magical Matrix\n");
		  	break;
		  }
		  }
		  if(i==r)
		  printf("Magical Matrix\n");
	
}
}
else
printf("Rows and Column Must be Same for Square Matrix\n");
}
	

