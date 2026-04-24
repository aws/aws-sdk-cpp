/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.glacier;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;

import java.util.HashMap;
import java.util.Map;

public class GlacierRestJsonCppClientGenerator extends JsonCppClientGenerator {

    public GlacierRestJsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        Map<String, String> customHeaders = new HashMap<>();
        customHeaders.put("x-amz-glacier-version", serviceModel.getMetadata().getApiVersion());
        serviceModel.getMetadata().setAdditionalHeaders(customHeaders);

        return super.generateSourceFiles(serviceModel);
    }
}
