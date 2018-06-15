#include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
	int n1,n2,i,j,k;
	n1 = m-l + 1;
	n2 = r-m;
	int L[n1],R[n2];

	for(i=0;i<n1;i++)
		L[i] = arr[l+i];
	for(i=0;i<n2;i++)
		R[i] = arr[m+1 + i];

	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
			arr[k++] = L[i++];
		else
			arr[k++] = R[j++];
	}
	while(i<n1)
		arr[k++] = L[i++];
	while(j<n2)
		arr[k++] = R[j++];
}

void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m = l + (r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main(int argc, char const *argv[])
{
	int arr[] = {3,2,7,4,9,5,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"before\n";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	mergeSort(arr,0,size-1);
	cout<<"\nafter\n";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}