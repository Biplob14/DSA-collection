#include <bits/stdc++.h>
using namespace std;

int is_balanced(char input[]){
    char stack[100], last_char;
    int top = 0, i, len;
    len = strlen(input);

    for(i = 0; i < len; i++){
        if(input[i] == '('){
            stack[top] = '(';
            top++;
           } else if(input[i] == ')') {
                if(top == 0) {
                    //stack empty
                    return 0;
                }
                top--;

                last_char = stack[top];
                if(last_char != '(')
                    return 0;
           }
    }
    if(top == 0)
        return 1;

    return 0;
}


int main()
{
    char input[100];
    scanf("%s", input);
    if(is_balanced(input))
        printf("%s is balanced\n", input);
    else
        printf("%s is not balanced\n", input);

    return 0;
}
