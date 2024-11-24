#include<stdio.h>
void main()
{ int min,max,arr[5];
printf("Enter 5 numbers: ");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}

min=arr[0];
max=arr[0];
for(int j=1;j<5;j++){
   if(min>=arr[j]){
       min=arr[j];
   }
    if(max<=arr[j]){
       max=arr[j];
   }
}
printf("min value in array is: ");
printf("%d \n",min);
printf("max value in array is: ");
printf("%d ",max);
 printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
}
