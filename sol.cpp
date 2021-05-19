#include <bits/stdc++.h>
using namespace std;
 
int solve (vector<int>a, int k, int p) {
	int n = a.size();
 
	int idx = 0;
	vector<int>idxes;
	idxes.push_back(p);
 
	while (k>0) {
		if (k%2==1) {
			int curSize = idxes.size();
			int num = pow(2, idx);
			for (int i=0 ; i<curSize ; i++) {
				idxes.push_back(idxes[i]+num);
			}
		}
        idx++;
		k /= 2;
	}
 
	int ans = a[p];
	for (int i=1 ; i<idxes.size() ; i++) {
		ans ^= a[idxes[i]];
	}
 
	return ans;
}
 
int main()
{
 
    int n,p,k;
    cin>>n>>k>>p;
    vector <int> arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int  ans=solve(arr,k,p);
    cout << "ans2 is " << ans << endl;
}
