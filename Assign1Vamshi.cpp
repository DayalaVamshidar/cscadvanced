#include<iostream>
#include<array>
using namespace std;


void entry(int array_length, int nums[]){
	for (int i=0;i<array_length;i++){
		cin>>nums[i];
	}
}


void matchtarget(int array_length, int nums[], int target){
	for(int j=0;j<(array_length-1);j++){
		for(int k=j+1;k<array_length;k++){
			if(nums[j]+nums[k]==target){
				cout<<j<<" ";
				cout<<k;
				cout<<endl;
			}
		}
	}
}

int main(){
	int array_length;
	int nums[104];
	int target;
	cout<<"Enter the length of array";
	cin>>array_length;
	entry(array_length, nums);
	cout<<"Enter target";
	cin>>target;
	matchtarget(array_length,nums,target);
}

	
	

	