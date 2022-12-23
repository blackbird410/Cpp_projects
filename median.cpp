#include <numeric>
#include <iostream>
#include <vector>
#include <algorithm>

#define LOG(x) std::cout << x <<endl;

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> AB;
	AB.reserve( nums1.size() + nums2.size() ); // preallocate memory
	AB.insert( AB.end(), nums1.begin(), nums1.end() );
	AB.insert( AB.end(), nums2.begin(), nums2.end() );

	int j = AB.size();
	sort(AB.begin(), AB.end());

	if (j % 2 == 0)
	{
		double c = ((double)AB[j/2 - 1] + (double)AB[j/2]) / 2;
		return c;
	}

	return AB[j/2];
}

int main()
{
	vector<int> a = {1, 2};
	vector<int> b = {4, 5, 6};
	
	LOG(findMedianSortedArrays(a, b));
}

