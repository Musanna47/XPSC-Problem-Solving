class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long long sum = 0;
        for (int i = 0; i < K; i++) {
            sum += Arr[i];
        }
        long long ans = sum;
        for (int i = 0, j = K; j < N; i++, j++) {
            sum -= Arr[i];
            sum += Arr[j];
            ans = max(ans, sum);
        }
        return ans;
    }
};