int* greaterElement(int arr[], int n) {

    int *ans = new int[n];
    
    vector<int> sorted(arr, arr + n);
    sort(sorted.begin(), sorted.end());

    for(int i = 0; i < n; i++) {
        auto it = upper_bound(sorted.begin(), sorted.end(), arr[i]);

        if(it == sorted.end())
            ans[i] = -10000000;
        else
            ans[i] = *it;
    }

    return ans;
}