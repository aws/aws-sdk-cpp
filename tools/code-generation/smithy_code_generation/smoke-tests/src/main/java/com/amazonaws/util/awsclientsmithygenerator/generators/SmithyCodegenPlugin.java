package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.transform.ModelTransformer;

class SmithyCodegenPlugin implements SmithyBuildPlugin {

@Override
public String getName() {
    return "cpp-smithy-smoke-tests-codegen"; // Return the name of your plugin
}
@Override
    public void execute(PluginContext context){

        try{
            SmithyParser parser = new SmithyParser(context.getModel(), context.getSources());
            parser.GenerateTests();
        }
        catch(Exception e){
            System.out.println(e.toString());
        }
        
    }
}