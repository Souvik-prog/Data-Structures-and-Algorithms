#include <iostream>
#include <map>
using namespace std;

int main(){

	int arr[] = {11, 5, 6, 8, 2};

	int item, result, i = 0;

	map<int, int> nums;

	for(int x: arr){
		nums[x] = 1;
	}

	for(pair< int, int > item : nums){
		cout<< item.first<< endl;
		if(i++ == 2)
			result = item.first;
	}

	cout<< "kth largest element : "<< result;
	return 0;
}