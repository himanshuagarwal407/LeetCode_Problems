class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i=0; i<command.length(); i++)
        {
            if(command[i]=='G')     
                ans+="G";
            else if(command[i]=='(')
            {
                if(command[++i]==')')
                    ans+="o";
                else
                    ans+="al";
            }
            
        }
        return  ans;
    }
};