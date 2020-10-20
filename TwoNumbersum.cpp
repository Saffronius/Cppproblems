#include <vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  
	vector<int> op;
	sort(array.begin(),array.end());
	int a;//complement
	for(auto& element : array)
	{
		a=targetSum-element;
		if(binary_search(array.begin(),array.end(),a))
		{ op.push_back(element);
		  op.push_back(a);
		  break;
		}
	}
	
  return op;
}
