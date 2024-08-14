
//primary task 


#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t ;
    cin>>t ;

    while(t--){
       int a;
       cin>>a ;


       //convert int to string 
       string s = to_string(a);
       
       if(s.length() > 2){
        
           if(s[0] == '1' && s[1] == '0'){  //possibility 
           
                  if(s[2] == '0'){  //leading zero 
                     cout<<"No"<<endl;
                  }
                  else {
                    string remain = "";
                    for(int i = 2 ; i < s.length() ; i++){
                        remain += s[i];
                    }


                    int convert = stoi(remain);
                    if(convert >= 2 ){
                        cout<<"yes"<<endl;
                    }
                    else {
                        cout<<"No"<<endl;
                    }
                  }
            }
       }

       else {
         
         cout<<"No"<<endl;
       }


       
    }
    

    return 0;
}