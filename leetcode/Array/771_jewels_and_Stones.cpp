class Solution {
public:
	int numJewelsInStones(string J, string S) {
		unordered_set<char> validJewels;
		for(auto c : J) {
			validJewels.insert(c);
		}
		int res = 0;
		for(auto c : S) {
			if(validJewels.count(c)) {
				res++;
			}
		}
		return res;
	}

};