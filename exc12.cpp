#include<iostream>
#include<ctime>
#include<algorithm>
#include<iterator>
#include<cstdlib>
#include<map>
#include<vector>
#include<random>
#include<functional>
#include<numeric>
#include<cmath>
#include<list>
#include<set>
using namespace std;
vector<int> v2;
vector<int> v;
int  M, p;
long long int N;
int main(){
    cout << "How many values will be set randomly? N: ";
    cin >> N;
    cout << "Set a range of drawing from 0 to M. M: ";
    cin >> M;
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> dis(0, M);
    for (int s = 0; s<N; ++s){
       v. push_back(dis(gen));
    }
    for(auto i: v){
        for (int j = 2; j<=sqrt(i);j++){
		p = 0;
		if (i % j == 0){
			p = 1;
		 	break;
		}
	 }
	 if ((p == 0) && (i > 1)) v2.push_back(i);
    }	
    set<int> k(v2.begin(), v2.end()); 
    cout<<"primary digits: ";
    for(auto it: k) cout << it << " ";
  
return 0;
}
