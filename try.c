#include<stdio.h>
void asc(int b[][5], int row, int n){
	b[row][5];
	int i,j,a;
	 for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (b[row][i] > b[row][j]) 
                {
 
                    a =  b[row][i];
                    b[row][i] = b[row][j];
                    b[row][j] = a;
 
                }
 
            }
 
        }
}
void dec(int b[][5], int row, int n){
	b[row][5];
	int i,j,a;
	 for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (b[row][i] < b[row][j]) 
                {
 
                    a =  b[row][i];
                    b[row][i] = b[row][j];
                    b[row][j] = a;
 
                }
 
            }
 
        }
}
int main(){
	int b[5][5]={{1,2,3,4,5},
				{6,7,8,9,10},
				{11,12,13,14,15},
				{16,17,18,19,20},
				{21,22,23,24,25}},a[25],count,i,j,m,flag; 

	 for (i = 0; i <5; ++i)
	 {	
	 	if(i%2 == 0) 
		 {
		 	flag=0;
		  }
		  else{
		  	flag=1;
		  }
	 	for(j=0;j<5;j++){
	 		if(flag){
	 			dec(&b,i,5);
			}
			else{
				asc(&b,i,5);
			}
	 	}
	 }
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",b[i][j]);	
		}
		printf("\n");
	}

}

