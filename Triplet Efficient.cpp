#include<iostream>
using namespace std;
bool ispair(int arr[],int n,int x,int si){
	int i=si,j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==x){
			return true;
		}
		else if(arr[i]+arr[j]>x){
			j--;
		}
		else{
			i++;
			
		}
	}
	return false;
}
bool triplet(int arr[],int n,int x){
	for(int i=0;i<n-1;i++){
		if(ispair(arr,n,x-arr[i],i+1)){
			return true;
		}
	
	}
	return false;
}
int main(){
	int a[]={2,5,10,15,28};
	int n=5;
	int x=33;
	bool result=triplet(a,n,x);
	if(result){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
}
