#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n,s,countn = 0;
    cin>>m>>n>>s;
    bool flag1 = false;
    vector<string> p(m);
    for(int i = 1; i <= m; i++)
    {
    	string temp;
        bool flag2 = true;
        cin>>temp;
        if(i == s)
        {
            flag1 = true;
            for(int i = 0; i < countn; i++)
                if(temp == p[i]) {flag2 = false;break;}
            if(flag2)
            {
                s += n;
		        p[countn] = temp;
                countn++;
                cout<<temp<<"\n";
            }
            else s++;
        }
    }
    if(!flag1) cout<<"Keep going..."<<endl;
}
