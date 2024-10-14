package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;

public class SmithyCodegenPlugin implements SmithyBuildPlugin {

@Override
public String getName() {
    return "cpp-codegen-smoke-tests-plugin"; // Return the name of your plugin
}

@Override
    public void execute(PluginContext context){
        
        //todo: put in exception block
        System.out.println(String.format("Executing SmithyCodegenPlugin...", context.getFileManifest().getBaseDir().toString()));
        //code placeholder
    }   
}