// Segment tree (point update, range query) template
#include <bits/stdc++.h>
using namespace std;

struct SegTree {
    int n;
    vector<long long> st;
    SegTree(int _n): n(_n) { st.assign(4*n+4, 0); }
    void build(int p, int l, int r, const vector<long long>& a) {
        if (l==r) { st[p]=a[l]; return; }
        int m=(l+r)/2;
        build(p<<1,l,m,a); build(p<<1|1,m+1,r,a);
        st[p]=st[p<<1]+st[p<<1|1];
    }
    long long query(int p,int l,int r,int i,int j){
        if (i>r||j<l) return 0;
        if (i<=l&&r<=j) return st[p];
        int m=(l+r)/2;
        return query(p<<1,l,m,i,j)+query(p<<1|1,m+1,r,i,j);
    }
    void update(int p,int l,int r,int idx,long long val){
        if (l==r){ st[p]=val; return; }
        int m=(l+r)/2;
        if (idx<=m) update(p<<1,l,m,idx,val);
        else update(p<<1|1,m+1,r,idx,val);
        st[p]=st[p<<1]+st[p<<1|1];
    }
};
