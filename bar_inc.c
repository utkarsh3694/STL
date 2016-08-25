


#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define SIZE 5

char S[SIZE];
int k, top=-1;

void push(char elem)
{
    S[++top]=elem;
}

char pop()
{
    return (S[top--]);
}

char precedence(char elem)
{
    switch(elem)
    {

    case '#':
        return 0;
    case ')':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    case '^':
    case '$':
        return 4;
    }
}

void main()
{

    char infix[50], pref[50], ch, elem;
    int i=0, k=0;
    printf("Enter the infix expression:  ");
    scanf("%s", infix);
    //printf("\nhere..");
    //printf("%s",infix);
    push('#');
    strrev(infix);
    printf("%s",infix);
    ch=infix[i++];
    while(ch!='\0')
    {
        if(ch==')')
            push(ch);
        else if(isalnum(ch))
            pref[k++]=ch;
        else if(ch=='(')
        {
            while(S[top]!=')')
            {
                pref[k++]=pop();
            }
            elem=pop();
        }
        else
        {
            while(precedence(S[top])> precedence(ch))
            {
                pref[k++]=pop();
            }
            push(ch);
        }
        ch=infix[i++];
    }

while(S[top]!='#')
    pref[k++]=pop();
pref[k]='\0';
strrev(pref);
strrev(infix);
printf("\n The prefix expression of given infix expression %s is : %s", infix, pref);

}


