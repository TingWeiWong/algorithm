'''
int checkBalance(string code){
    /*
     return -1 if all parentheses are closed ( ) { }
     return length of the string if not
     */
    stack<char> parens;
    for (int i = 0; i < code.length(); i++){
        if (code[i] == '(' || code[i] == '{'){
            parens.push(code[i]);
        }else if (code[i] == ')' || code[i] == '}'){
            if (parens.empty()){
                return i;
            }
            else{
                char top = parens.top();
                if (top != '(' || top != '{'){
                    return i;
                }
            }
        }
    }
    if (parens.empty()){
        return -1;
    }
    else{
        return int(code.length());
    }
}
'''
import sys
def checkBalance(string):
    # return -1 if all parentheses are closed () {} 
    # return the length of string otherwise
    
