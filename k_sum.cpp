# include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	vector<int> nums {2,7,11,15};
 	int target = 9;

 	map<int,int> s;

 	vector<int> v;

 	for (int i=0; i<nums.size(); i++)
 	{
 		int x = target - nums[i];

 		if (s.count(x) != 0)
 		{
 			//cout<< i<< " "<<s[x];
 			v.push_back(s[x]);
 			v.push_back(i);
 		}

 		s[nums[i]] = i;
 	}

 	/*for(pair<int,int> item: s){

		cout<< item.first<< "-"<< item.second<< endl; // O(n)
	}*/

	for (int j: v)
	{
		cout<< j<<" ";
	}
 }