package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.transform.ModelTransformer;

class SmithyCodegenPlugin implements SmithyBuildPlugin {

String getName()
{
    return "cpp-smithy-smoke-tests-codegen";
}

@Override
    void execute(PluginContext context){
        // this is where the magic happens

        SmithyParser parser = new SmithyParser(context.getModel(), context.getSources());
        parser.GenerateTests();
        
    }
}