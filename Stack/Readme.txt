struct stack{
    int size; //
    int top;
    int *s; //pointer to an array will create dynamically
};
operations--> 
1. 
push(stack *st, int x)
{
    if(st-->top==size-1)
    {
        print "stack overflow"
    }else{
        st-->top++;
        st-->s[st-->top]=x;
    }
}
2. 
pop(stack *st)
{
    int x=-1;
    if(st-->top==-1){
        print "stack underflow"
    }else{
        x=st-->s[st-->top];
        st-->top--;
    }
    return x;
}
3. 
finding the position of first element 
peek(stack st,  int pos){
    int x=-1;
    if(top-pos+1<0){
        print "invalid position";
    }else{
        x=st.s[st.top-pos+1];
    }

    return x;
}
4. int stackTop(stack st){
    if(st.Top==-1)
    return -1;
    else
    return st.s[st.top]
}
5. int isEmpty(stack st){
if(st.Top==-1)
return 1;
else
return 0;
}
6. int isFull(stack st){
    if(st.Top==st.size-1)
    return 1;
    else
    return 0;
}