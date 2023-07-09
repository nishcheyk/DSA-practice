//insertio sort
insertion(int *arr,int n){
	int i,j,temp;
	for(int i=1;i<n;i++)
	{
		j=i;  while (j>0&&arr[j-1]>arr[j])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}

	}
}



//selection sort
for(int i=0;i<n;i++){
	int min=i
	for (int j = i; j < n; j++)
	{
		if(arr[min>arr[j]]{
			min=j;
		}
		if(min!=i){
			swap(&arr[i],&arr[min]);
		}
	}


}













//quick sort

void quick sort (int *arr,int low,int high){
	int i=low;
	int j=high;
	int pivot= arr[i+j/2];

	while(i<=j){

		while(arri<=pivot){
			i++;
		}
		while(arri<pivot){
			j--;
		}
			if(i<j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
	}
while (j>low)
{
	quicksort(arr,low,j);
}
while (i<high){
	quicksort(arr,i,high);
}


}

int main(){
	quicksort(arr,0,n-1);
}