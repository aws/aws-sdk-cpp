package com.amazonaws.util.awsclientsmithygenerator.generators;
import java.util.ArrayList;
import java.util.Stack;
import java.util.List;
import java.util.Optional;
import lombok.Data;

//Helper class for c++ blocks
public class CppBlockWriter {

    public static String GetForLoopRangeInitializer(String variableName, String iterableExpr)
    {
        return String.format("for (auto %s in %s)", variableName, iterableExpr);
    }

    public static String GetContainerDeclaration(String containerType, String containerTemplateParam, String variableName)
    {
        return String.format("%s<%s> %s",containerType, containerTemplateParam,variableName );
    }

    //args  will always be even number
    public static String GetFunctionBlock(String returnType, String functionName, String... args)
    {   
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

    @Data
    public static class Block {
        private List<String> lines;
        private String linePrefix;
        public Block(String header, int indentLevel)
        {
            lines = new ArrayList<>();
            String linePrefix = " ".repeat(indentLevel);  
            if (!header.isEmpty() )
            {
                addCode(header + "\n{\n", indentLevel);
            }
            else
            {
                addCode("{\n", indentLevel);
            }
        }

        public void addCode(String code, int indentLevel)
        {
            String linePrefix = " ".repeat(indentLevel);
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
    
    public CppBlockWriter(String header, int level){
        indentLevel = level;
        blockStack = new Stack<>();
        codeBlock = new String("");
        openCodeBlock(header);
    }


    public CppBlockWriter(int level){
        indentLevel = level;
        blockStack = new Stack<>();
        codeBlock = new String("");
    }

    //opens a new block
    public CppBlockWriter openCodeBlock(String blockHead)
    {
        //add new block to stack
        //use its string builder to add "{"
        Block block = new Block(blockHead, indentLevel);
        blockStack.add(block);
        indentLevel++;
        return this;

    }
    //add code to current block
    public CppBlockWriter addCode(String code)
    {
        if (!blockStack.isEmpty()) {

            Block top = blockStack.peek();
            top.addCode(code, indentLevel);
        }
        return this;
    }

    //closes current block
    public CppBlockWriter closeCodeBlock()
    {

        //create string and close block with  "}"
        //pop block of stack
        //write to prior element
        //return the popped one if any
        if (!blockStack.isEmpty())
        {
            Block top = blockStack.peek();
            indentLevel--;
            top.addCode("}\n", indentLevel);
            List<String> codeLines = top.getCodeLines();
            blockStack.pop();
            
            if(blockStack.isEmpty())
            {
                codeBlock = String.join("\n", codeLines);
            }
            else
            {
                top = blockStack.peek();
                top.addCode(String.join("\n", codeLines), indentLevel);
            }
        }
        return this;
    }

    //closes all nested blocks to generate the string block
    String getCode(){
        //if blocks not closed close first
        while(blockStack.size() > 1)
        {
            closeCodeBlock();
        }

        return codeBlock;
    }

}
