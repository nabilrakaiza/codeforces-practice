#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

struct Node {
    int data;
    long long childCount;
    Node* left;
    Node* right;
    Node* parent;

    Node(int val) {
        data = val;
        childCount = 0;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};

long long countChildren(Node* node) {
    if (node == nullptr) return 0;
    long long result = 1 + countChildren(node->left) + countChildren(node->right);
    node->childCount = result;
    return result;
}

const long long MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<long long> arr(n + 1);
    unordered_map<int, Node*> nodeMap;

    Node* root;
    Node* curr;

    root = new Node(0);
    root->left = new Node(1);
    curr = root->left;
    curr->parent = root;

    nodeMap[0] = root;
    nodeMap[1] = curr;

    for (int i = 2; i<=n; i++) {
        nodeMap[i] = new Node(i);
    }

    for (int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;

        if (l == 0 && r == 0) continue;

        curr = nodeMap[i];
        curr->left = nodeMap[l];
        curr->right = nodeMap[r];
        curr->left->parent = curr;
        curr->right->parent = curr;

        nodeMap[l] = curr->left;
        nodeMap[r] = curr->right;
    }

    countChildren(nodeMap[0]);

    queue<pair<int, long long>> q;
    q.push({1, 0});

    while (!q.empty()) {
        pair<int, long long> p = q.front();
        Node* node = nodeMap[p.first];

        if (node->left && node->right){
            int l = node->left->data;
            int r = node->right->data;
            q.push({l, p.second + 2*node->childCount - 1});
            q.push({r, p.second + 2*node->childCount - 1});
        }
        
        arr[p.first] = (p.second + 2*node->childCount - 1) % MOD;
        q.pop();
    }

    for (int i = 1; i<=n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}