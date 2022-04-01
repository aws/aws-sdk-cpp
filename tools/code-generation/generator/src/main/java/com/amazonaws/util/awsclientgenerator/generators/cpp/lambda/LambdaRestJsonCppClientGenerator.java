/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.lambda;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import com.google.common.collect.Sets;

import java.util.Set;

public class LambdaRestJsonCppClientGenerator extends JsonCppClientGenerator {

    public LambdaRestJsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    protected Set<String> getOperationsToRemove() {
        //InvokeAsync collides with our Async client generation.
        //It is deprecated, so we're just not going to generate it
        return Sets.newHashSet("InvokeAsync");
    }

    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        serviceModel.getShapes().remove("InvokeAsyncRequest");
        serviceModel.getShapes().remove("InvokeAsyncResult");

        return super.generateSourceFiles(serviceModel);
    }
}
