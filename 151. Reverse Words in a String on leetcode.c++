class Solution {
public:

    string reverse1(string test){
        int i=0; 
        int j=test.length()-1;
        while(i<j){
            swap(test[i],test[j]);
            i++;
            j--;
        }
        return test;
    }

    string trim1(string test){
        for(int i=0; i<test.length()-1; i++){
            if(test[i]==' ' && test[i+1]==' '){
                test.erase(i,1);
            }
        }
        return test;
    }


    string reverseWords(string s) {
        map<int,string> order;
        string test;
        string result="";
        trim1(s);
        reverse(s.begin(),s.end());
        for(int i=0; i<=s.length(); i++){
            if(iswalnum(s[i])){
                test+=s[i];
            }          
            else{
                if(!test.empty())
                order[i]=reverse1(test);
                test.clear();
            }
        }

        for(auto k:order){
            result+=k.second+' ';
        }

        if(result[result.size()-1]==' '){
            result.erase(result.size()-1,1);
        }

       

        return result;
    }
};