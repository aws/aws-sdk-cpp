package com.amazonaws.util.awsclientgenerator.transform;

import lombok.Data;

import java.text.MessageFormat;
import java.util.Stack;
import java.util.Optional;
import software.amazon.smithy.utils.Pair;

@Data
public final class OperationContextCppCodeGenerator{

    private final StringBuilder cppCode;
    //tracking reference variable, bool = true means start of a scope
    private final Stack<Pair<String,Boolean> > varName;

    private Integer codeIndetation;

    public OperationContextCppCodeGenerator(){
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

    public void addVariableInScope(String var)
    {
        if(!this.getVarName().isEmpty())
        {
            this.getCppCode().append(MessageFormat.format("{0}auto& {1} = {2}", this.getIndentationPrefix(), var, this.getVarName().peek().left));
        }
        else
        {
            this.getCppCode().append(MessageFormat.format("{0}auto& {1} = (*this)", this.getIndentationPrefix(),var));
        }
        this.varName.push(Pair.of(var, false));
    }
 
    public void rangeBasedForLoop(String varName)
    {
        this.getCppCode().append(MessageFormat.format("{2}for (auto& {0} : {1})\n", varName, this.getVarName().peek().left, this.getIndentationPrefix()) );
    }

    public void openVariableScope(String var)
    {
        this.getCppCode().append(this.getIndentationPrefix()).append("{\n");
        this.varName.push(Pair.of(var, true));
        this.codeIndetation++;
    }
    public void closeVariableScope()
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
        this.getCppCode().append(this.getIndentationPrefix()).append("}\n");
    }

    public boolean isStartOfNewScope(){
        return (
                this.getCppCode().length() > 2 &&
                this.getCppCode().substring(this.getCppCode().length() - 2).equals("{\n")
            );
    }

    public void addInScopeVariableToResult(Optional<String> accessorSuffix)
    {
        if(accessorSuffix.isPresent())
        {
            this.getCppCode().append(MessageFormat.format("{1}result.emplace_back({0}.{2});\n", this.getVarName().peek().left, this.getIndentationPrefix(),accessorSuffix.get()));
        }
        else
        {
            this.getCppCode().append(MessageFormat.format("{1}result.emplace_back({0});\n", this.getVarName().peek().left, this.getIndentationPrefix()));
        }
    }

};