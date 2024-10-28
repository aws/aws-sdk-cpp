/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
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
        SmokeTestsParser smoketestParser = new SmokeTestsParser(context);
        smoketestParser.run();
    }   
}