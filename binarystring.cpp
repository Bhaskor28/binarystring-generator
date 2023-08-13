// Bhaskor Roy
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define sll signed long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define            pbk                pop_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void print(vector<int> &v){
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;

}


void bngen(int n,vector<int> &v,bool f){
    if(v.size()==n){
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
        cout<<endl;
        return ;
    }


   // if(f==0){
            v.pb(0);
            bngen(n,v,0);
            v.pop_back();
            v.pb(1);
            //cout<<1<<endl;
            bngen(n,v,1);
            v.pop_back();// this popback popout the parent node ....



   // }else{

   /*
    v.pb(1);
    bngen(n,v,0);
    v.pop_back();
    v.pb(0);
    bngen(n,v,1);
    v.pop_back();



    }
*/


}


int main(){
int n;
vector<int>v;
cin>>n;
bngen(n,v,0);


return 0;
}
