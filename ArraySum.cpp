#include <bits/stdc++.h> 

string replaceSpaces(string &str){

    // Write your code here.

   int n= str.length();

 

   string ans= "";

 

   for(int i=0;i<n;i++){

       if(str[i]== ' '){

           ans.push_back('@');

           ans.push_back('4');

           ans.push_back('0');

       }

       else{

        ans.push_back(str[i]);

       }

 

   }

   return ans;

}