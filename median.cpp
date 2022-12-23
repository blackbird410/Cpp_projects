#include <numeric>
#include <iostream>
#include <vector>

#define LOG(x) std::cout << x <<endl;

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> AB;
	AB.reserve( nums1.size() + nums2.size() ); // preallocate memory
	AB.insert( AB.end(), nums1.begin(), nums1.end() );
	AB.insert( AB.end(), nums2.begin(), nums2.end() );

	for (int i=0; i < AB.size(); i++)
	{
		LOG(AB[i]);
	}

	return std::accumulate(AB.begin(), AB.end(), 0);
}

int main()
{
	vector<int> a = {1, 2, 3};
	vector<int> b = {4, 5, 6};
	
	LOG(findMedianSortedArrays(a, b));
}

