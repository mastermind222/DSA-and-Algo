#include <iostream>
#include <vector>
using namespace std;
int findMajority(vector<int> &a) {
	int len = a.size(), majIndex = 0, cnt = 1;
	for(int i = 1; i < len; i++) {
		if(a[i] == a[majIndex])
			cnt++;
		else
			cnt--;
		if(cnt == 0) {
			majIndex = i;
			cnt = 1;
		}
	} 
	cnt = 0;
	for(int i = 0; i < len; i++) {
		if(a[i] == a[majIndex])
			cnt++;
	}
	if(2 * cnt > len)
		return a[majIndex];
	else
		return -1;
}
int main() {
    int n, majEle;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    majEle = findMajority(arr);
    cout << "The Majority element in the array is =" << majEle << "\n";
    return 0;
}
