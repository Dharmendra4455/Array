#include<stdio.h>
int insertnew(int arr[],int data,int n,int index){
	int i;
	if(index<n&&index>=0){
		for(i=n-1;i>=index;i--){
			arr[i+1]=arr[i];
		}
		arr[index]=data;
		printf(" Successfully Inserted New data\n");
		}
	if(index==n){	
		arr[index]=data;
		printf(" Successfully Inserted New data\n");
	}
		n++;
	
	
	if(index>n||index<0){
	printf("Please Select Valid Index No.s\n\n");
	printf("Insertion Fail!\n\n");
}
	return n;

}
void swap(int arr[],int index1,int index2,int n){
	int k;
	if(index1<=n && index2<=n && index1>=0 && index2>=0){
	k=arr[index1];
	arr[index1]=arr[index2];
	arr[index2]=k;
	printf("Swaping Successful\n\n");}
	else{
		printf("\n Invalid index Number\n\n");
		printf("Swaping fail!\n\n");
	}	
}
void replace(int arr[],int data,int index,int n){
	  if(index<=n && index>=0){
	    arr[index]=data;
	printf("Replacing of Data Successful Done.\n\n");
}
else{
		printf("\n Invalid index Number\n\n");
		printf("Replacing of data fail!\n\n");
	}	
}
int del(int arr[],int n,int index){
	int i;
	if(n>=0){
	for(i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	printf("Deletion of Data Successful Done.\n\n");
	}
	else{
       printf("Array is Empty");
      printf("Deletion of Data fail!.\n\n");
	}
	return n;
}
void search(int arr[],int n,int data){
	int i,count=0;
	for(i=0;i<n;i++){
		if(arr[i]==data){
			printf("\n%d found in array at Index %d\n\n",data,i);
			count=1;
			break;
		}}
		if(count==0)
		printf("\n%d not exist in array\n\n",data);
	printf("Searching of Data Successful Done.\n\n");
}
void ascending(int arr[],int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
			
		}
		
	}
	
}
void descending(int arr[],int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
				}	
		}	
	}
}
void Reverse(int arr[],int n){
	int i=0,k;
while(i<=n){
	k=arr[i];
	arr[i]=arr[n];
	arr[n]=k;
	n--;
	i++;
}
}
void min(int arr[],int n){
	int k=arr[0],i;
	for(i=1;i<n;i++){
		if(k>arr[i]){
			k=arr[i];
		}
	}
	printf("OUTPUT:-\n\n");
	printf("MINIMUM NUMBER: %d\n",k);
	printf("INDEX: %d\n",i);
}
void max(int arr[],int n){
	int k=arr[0],i;
	for(i=1;i<n;i++){
		if(k<arr[i]){
			k=arr[i];
		}
	}
	printf("OUTPUT:-\n\n");
	printf("MAXIMUM NUMBER: %d\n",k);
	printf("INDEX: %d\n",i);
}
void traverse(int arr[],int n){
	int i;
	printf("OUTPUT:-\n\n");
	for(i=0;i<n;i++)
	printf(" %d ",arr[i]);
}
main(){
int arr[100]={1,2,3,4,5,6,7,8,9,0},i,n=10,choice=1,data,index,press,index1,index2,chance=3;
while(choice !=0 && chance>0){
	printf("\n");
    printf("   * * * * * * * O P E R A T I O N S  O F  1-D  A R R A Y * * * * * * * * * *  \n\n");
    printf("                       Select the Operation        \n\n");
    printf("  . . . . . . . . . . . . . . . . . . . . . . . . . . .\n\n");
	printf("  .    Press 1 for Inserting new data                 .\n\n");
	printf("  .    Press 2 for  Updating data                     .\n\n");
	printf("  .    Press 3 for Deleting a data                    .\n\n");
	printf("  .    Press 4 for Searching a data                   .\n\n");
	printf("  .    Press 5 for Arrange in Ascending Order         .\n\n");
	printf("  .    Press 6 for Arrange in Descending Order        .\n\n");
	printf("  .    Press 7 for Reverse the Array                  .\n\n");
	printf("  .    Press 8 for Minimum Value of  Array            .\n\n");
	printf("  .    Press 9 for Maximum Value of  Array            .\n\n");
	printf("  .    Press 10 for Traversing the Array              .\n\n");
	printf("  . . . . . . . . . . . . . . . . . . . . . . . . . . .\n\n");
    printf("      Press 0 for Exit                                  MADE BY:DHARMENDRA PATEL\n");
   scanf("%d",&choice); 
   printf("................................................................................\n");
   switch(choice){
   	case 1:
   		printf("Enter new data");
   		scanf("%d",&data);
   		printf("Enter Index no.s for new data : ");
   		scanf("%d",&index);
   		n=insertnew(arr,data,n,index);
   		break;
   	case 2:{
	   
   		int tries=3;
   		while(tries>0){	
   		printf("Select one\n\n");
   		printf("Press 1 for Swaping Two data of Array\n\n");
   		printf("Press 2 for Replacing data of Array with New Data\n\n");
   		scanf("%d",&press);
   		if(press==1){
   			printf("Enter the Index of First Data:\n");
   			scanf("%d",&index1);
   			printf("Enter the Index of Second Data: \n");
   			scanf("%d",&index2);
   			swap(arr,index1,index2,n);
   			break;
		   }
		if(press==2){
   		printf("Enter Index for Replace data\n");
   		scanf("%d",&index);
   		printf("Enter new data\n");
   		scanf("%d",&data);
   		replace(arr,data,index,n);
   		break;
		   }
   		else{
   			tries-=1;
   		   if(tries>0)
		   printf("\nPlease Select a Valid Number\n\n");
		   else
		   printf("No more tries!!\n\n");}}
		printf("................................................................................\n");   
   		
   		break;}	
   	case 3:{
   		 int tries=3;
   		while(tries>0){
   		printf("Enter Index no.s for new data : \n\n");
   		scanf("%d",&index);
   			if(index<=n&&index>=0){
   		     n=del(arr,n,index);
   		     break;}
   		     else{tries--;
				if(tries>0)
		   printf("\nPlease Select a Valid Index Number\n\n");
		   else
		   printf("\nNo more tries!!\n\n");}}
		printf("................................................................................\n");
   		break;}
	case 4:
   		printf("Enter data for Search :\n");
   		scanf("%d",&data);
   		     search(arr,n,data);
		printf("................................................................................\n");
   		break;
   	case 5:{
   		ascending(arr,n);
   		printf("Output:-  ");
   		for(i=0;i<n;i++)
   		printf(" %d ",arr[i]);
   		printf("\n\n      Arranging Data in Ascending Order Successful Done.\n\n");
		printf("\n\n................................................................................\n");
        
   		break;
		 	   	
   }
    case 6:{
   		descending(arr,n);
   		printf("Output:-  ");
   		for(i=0;i<n;i++)
   		printf(" %d ",arr[i]);
   		printf("\n\n       Arranging Data in Descending Order Successful Done.\n\n");
		printf("\n\n................................................................................\n");
        
   		break;
}
    case 7:{
   		Reverse(arr,n-1);
   		printf("Output:-  ");
   		for(i=0;i<n;i++)
   		printf(" %d ",arr[i]);
   		printf("\n\n       Reverse of Array Successful Done.\n\n");
		printf("\n\n................................................................................\n");
   		break;
}
   case 8:{
   		min(arr,n);
   		printf("\n\n       Minimum Number Search Successful Done.\n\n");
		printf("................................................................................\n");
   		break;
}
    case 9:{
   		max(arr,n);
   		printf("\n\n       Maximum Number Search Successful Done.\n\n");
		printf("................................................................................\n");
   		break;
}
    case 10:{
   		traverse(arr,n);
   		printf("\n\n       Traversing of Array Successful Done.\n\n");
		printf("................................................................................\n");
   		break;
}
    default:{
    	if(chance>1&&choice!=0){
	  printf("Invalid Press!!\n\n");
	  printf("................................................................................\n");}
	  chance--;
	}  
   }
}
if(chance==0){
printf("No more tries\n\n");
printf("................................................................................\n");}
else
printf("       * * * * * * * * * * T H A N K Y O U  * * * * * * * * * * * * * * * * * *\n\n");
}
