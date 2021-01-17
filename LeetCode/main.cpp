#include <iostream>
#include "vector"
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp=0;
        vector<int> indexReturn;
        indexReturn.assign(2,0);
        for(int i=0 ;i<nums.size();i++){
            indexReturn.at(0)=i;
            for(int j=i+1;j<nums.size();j++){
                if((nums.at(i)+nums.at(j)) == target){
                    indexReturn.at(1)=j;
                    return indexReturn;
                } else{

                }
            }
        }
        return indexReturn;
    }
};

int main() {
    Solution s;
    vector<int > test;
    test.push_back(2);
    test.push_back(7);
    test.push_back(11);
    test.push_back(15);
    vector<int> result = s.twoSum(test,9);
    for(int i=0;i<result.size();i++){
        cout << result[i]<< endl;
    }
    return 0;
}
