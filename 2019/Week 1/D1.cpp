#include<bits/stdc++.h>
#include<set>

using namespace std;

void expand( string str, int low, int high, auto &vector, auto &ver ){
	int  a = 0, b = 0, i = 0;

	while (low >= 0 && high < str.length() && str[low] == str[high]){
		a = low;
		b = high;
		low--;
		high++;
		
		if( ver[ str.substr( a, b - a + 1 ) ] == false  ){

			vector.push_back(str.substr( a, b - a + 1 ));
			ver[ str.substr( a, b - a + 1 ) ] = true;
				
		}
 
	}
 
}


int main(){
  string str;
  vector <string> myset; 
  map <string,bool> ver;

  cin >> str;

 	for (int i = 0; i < str.length(); i++){ 
		expand(str, i, i, myset, ver);
    	expand(str, i, i+1, myset, ver);				
	}
	
	cout << myset.size()  << " "  << "-";

	for (int k = 1; k <= str.length(); k++){
  	 	 for (vector<string>::iterator it = myset.begin(); it != myset.end(); ++it){
   			   if (((string) *it).length() == k){
					  cout << ' ' << "\"" + *it + "\"";
				  }
      				  
			}
	}
  cout << endl;
  
  return 0;
}
