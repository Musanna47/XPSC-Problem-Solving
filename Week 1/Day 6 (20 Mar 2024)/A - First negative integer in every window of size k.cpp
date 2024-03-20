

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    vector<long long> ans;
    queue<long long> q;
    for (int i = 0; i < K; i++) {
        if (A[i] < 0)
            q.push(i);
    }
    if (!q.empty()) {
        ans.push_back(A[q.front()]);
    } else {
        ans.push_back(0);
    }
    for (int i = 0, j = K; j < N; i++, j++) {
        if (!q.empty() && q.front() == i) {
            q.pop();
        }
        if (A[j] < 0)
            q.push(j);
        if (!q.empty()) {
            ans.push_back(A[q.front()]);
        } else {
            ans.push_back(0);
        }
    }
    return ans;
 }