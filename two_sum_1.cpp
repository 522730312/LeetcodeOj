#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
	vector<int> two_sum(vector<int>& nums, int target){
		map<int, int> hash;
		vector<int> result;
		for(int i=0;i<nums.size();i++){
			int numberTofind = target-nums[i];
			if(hash.find(numberTofind) != hash.end()){
				result.push_back(hash[numberTofind]);
				result.push_back(hash[i]);
				return result;
			}
		hash[nums[i]]=i;
		}
		return result;
	}

};


int main(){

std::cout<<"hello world"<<std::endl;
vector<int> nums;
for (int i=0;i<10;i++){nums.push_back(i);}
	Solution* sou = new Solution();

	vector<int> re=sou->two_sum(nums, 9);
	cout<<re[0]<<endl;
	cout<<re[1]<<endl;


}
