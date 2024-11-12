/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import java.util.ArrayList;
import java.util.Stack;
import java.util.List;
import lombok.Data;

/*
    Generic Helper class for C++ code blocks for scope management
    C++ code has blocks, for example function, loops, empty blocks.

    Variables defined in those blocks have their scope defined in them. 
    Blocks can be deeply nested.
    This class manages blocks, scope of variables in such blocks 
    along with indentation of code defined in those blocks. 

    One of the use cases:
    Code writer keeps adding blocks to say 5 levels, at the fifth level 
    if the writer wants to extract the code, all the nested blocks will be
    automaticallty closed in order of the stack making top level writer not
    worry about it.
*/
public class CppBlockWriter {

    //preset logic for some types of blocks
    public static String GetForLoopRangeInitializer(String variableName, String iterableExpr){
        return String.format("for (auto %s in %s)", variableName, iterableExpr);
    }

    public static String GetContainerDeclaration(String containerType, String containerTemplateParam, String variableName){
        return String.format("%s<%s> %s",containerType, containerTemplateParam,variableName );
    }

    //args  will always be even number Type followed by name
    public static String GetFunctionBlock(String returnType, String functionName, String... args){   
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < args.length - 1; i += 2)
        {
            sb.append(String.format("%s %s",args[i],args[i+1] ));
            if(i + 2 < args.length )
            {
                sb.append(", ");
            }
        }
        return String.format("%s %s(%s)", returnType, functionName, sb.toString());
    }
    

    public static String GetLambdaBlock(String returnType, String functionName, String... args){   
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < args.length - 1; i += 2)
        {
            sb.append(String.format("%s %s",args[i],args[i+1] ));
            if(i + 2 < args.length )
            {
                sb.append(", ");
            }
        }
        //functionName
        return String.format("auto %s = [&](%s) -> %s", functionName, sb.toString(), returnType);
    }

    @Data
    public static class Block {
        private List<String> lines;
        private String linePrefix;
        public Block(String header, int indentLevel)
        {
            lines = new ArrayList<>();
            if (!header.isEmpty() )
            {
                addCode(header + "\n{\n", indentLevel);
            }
            else
            {
                addCode("{\n", indentLevel);
            }
        }
        
        //Continue with current block
        public Block(int indentLevel)
        {
            lines = new ArrayList<>();
            addCode("\n", indentLevel);
        }

        public void addCode(String code, int indentLevel)
        {
            String linePrefix = new String(new char[indentLevel]).replace('\0', ' ');
            //split by line and add indent. make sure to skip escaped newlines
            String[] splitCode = code.split("(?<!\\\\)\\n");
            for (String line : splitCode) {
                lines.add(String.format("%s%s",linePrefix,line));
            }
        }


        public List<String> getCodeLines(){
            return lines;
        }
    }

    //A block can contain multiple blocks
    private Stack<Block> blockStack;
    private int indentLevel;
    private String codeBlock;
    private boolean isRootBlockNewScope;
    
    public CppBlockWriter(String header, int level){
        indentLevel = level;
        blockStack = new Stack<>();
        codeBlock = new String("");
        isRootBlockNewScope =true;
        openCodeBlock(header);
    }


    public CppBlockWriter(int level){
        indentLevel = level;
        blockStack = new Stack<>();
        codeBlock = new String("");
        isRootBlockNewScope =false;
        continueCodeBlock("");
    }

    //opens a new block
    public CppBlockWriter openCodeBlock(String blockHead){
        //add new block to stack
        //use its string builder to add "{"
        Block block = new Block(blockHead, indentLevel);
        blockStack.add(block);
        indentLevel++;
        return this;
    }

    public CppBlockWriter continueCodeBlock(String code){
        //add new block to stack
        //use its string builder to add "{"
        Block block = new Block(indentLevel);
        if(blockStack.empty())
        {
            blockStack.add(block);
        }
        
        //merge with last block
        blockStack.peek().addCode(code, indentLevel);
        
        return this;
    }


    //add code to current block
    public CppBlockWriter addCode(String code){
        if (!blockStack.isEmpty()) {

            Block top = blockStack.peek();
            top.addCode(code, indentLevel);
        }
        return this;
    }

    //closes current block
    public CppBlockWriter closeCodeBlock(){
        List<String> codeLines = new ArrayList<String>();
        //if root block is not a new scope and it is the root block, 
        //need not close scope then
        if(blockStack.size() == 1 && !isRootBlockNewScope)
        {
            Block top = blockStack.peek();
            top.addCode("\n", indentLevel);
            codeLines = top.getCodeLines();
            blockStack.pop();
        }
        //create string and close block with  "}"
        //pop block of stack
        //write to prior element
        //return the popped one if any
        else if (!blockStack.isEmpty())
        {
            Block top = blockStack.peek();
            indentLevel--;
            top.addCode("};\n", indentLevel);
            codeLines = top.getCodeLines();
            blockStack.pop();   
        }

        //after close merge with previous or update root code block
        if(blockStack.isEmpty())
        {
            codeBlock = codeBlock.concat(String.join("\n", codeLines));
        }
        else
        {
            Block top = blockStack.peek();
            top.addCode(String.join("\n", codeLines), indentLevel);
        }

        return this;
    }

    //closes all nested blocks to generate the string block
    String getCode(){
        //if blocks not closed close first
        while(!blockStack.isEmpty())
        {
            closeCodeBlock();
        }

        return codeBlock;
    }

}
