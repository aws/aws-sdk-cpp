package com.amazonaws.util.awsclientgenerator.transform;

import lombok.Data;
import java.util.Stack;
import software.amazon.smithy.utils.Pair;

@Data
public final class CppCodeGeneratorContext{

    private final StringBuilder cppCode;
    //tracking reference variable, bool = true means start of a scope
    private final Stack<Pair<String,Boolean> > varName;

    private Integer codeIndetation;

    public CppCodeGeneratorContext(){
        this.cppCode = new StringBuilder();
        this.varName = new Stack<>();
        this.codeIndetation = 0;
    }
    public String getIndentationPrefix()
    {
        StringBuilder sb = new StringBuilder();

        for(Integer i = 0; i < this.codeIndetation; ++i)
        {
            sb.append("\t");
        }
        return sb.toString();
    }

    public void AddVariableInScope(String var)
    {
        this.varName.push(Pair.of(var, false));
    }
 
    public void OpenVariableScope(String var)
    {
        this.varName.push(Pair.of(var, true));
        this.codeIndetation++;
    }
    public void CloseVariableScope()
    {
        Boolean scopeOpenFound = false;
        //pop stack till open found
        while(!this.varName.isEmpty())
        {
            scopeOpenFound = this.varName.peek().right;
            this.varName.pop();
            if(scopeOpenFound)
            {
                if(this.codeIndetation > 0)
                {
                    this.codeIndetation--;
                }
                break;
            }
        }

        if(!scopeOpenFound)
        {
            throw new RuntimeException("Trying to close scope when scope was never opened:");
        }
    }

    public boolean isStartOfNewScope(){
        return (
                this.getCppCode().length() > 2 &&
                this.getCppCode().substring(this.getCppCode().length() - 2).equals("{\n")
            );
    }

};