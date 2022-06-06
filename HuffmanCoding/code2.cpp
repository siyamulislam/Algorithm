#include<iostream>
#include<map>

using namespace std;

int main()
{
    int i,j,k,a,b,n;
    char c;
    string s,t,ans;
    map <string, char> mymap;
    map <string, char> :: iterator it;

    cout << "Enter the no. different types of characters: ";
    cin >> n;

    for( i = 0; i < n; i++ ) {
        cout << "Enter the " << i+1 << " character and its code: ";
        cin >> c >> s;
        mymap[s] = c;
    }

    cout << "Enter the encoded string: ";
    cin >> s;

    t = "";
    ans = "";
    for( i = 0; i < s.size(); i++ ) {
        t += " ";
        t[t.size()-1] = s[i];
        it = mymap.find(t);
        if( it != mymap.end() ) {
            c = mymap[t];
            ans += " ";
            ans[ans.size()-1] = c;
            t = "";
        }
    }

    cout << ans << endl;

    return 0;
}

/*

Input
10
A 00
E 010
F 011
B 100
C 101
D 110
G 1110
H 11110
I 111110
J 111111
00100100001000100001111001000110

*/
