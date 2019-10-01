//https://leetcode.com/problems/3sum/

class Solution {
public:
	vector<vector<int>> threeSum( vector<int>& nums ) {
		sort( nums.begin(), nums.end() );

		set< vector<int>> result;
		int l, r, sum;
		size_t size = nums.size();
		for( int i=0; i<size; ++i ) {
			if( nums[i] <= 0 ) {
				l = i + 1;
				r = size - 1;
				while( l < r ) {
					sum = nums[l] + nums[r] + nums[i];
					if( sum == 0 ) {
						result.insert( { nums[i], nums[l], nums[r] } );
						l++;
						r--;
					} else if( sum < 0 ) {
						l++;
					} else {
						r--;
					}
				}
			}
		}
		vector<vector<int>> arr;
		for( auto res : result ) arr.push_back( res );
		return arr;
	}

	Solution(){
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
	}
};