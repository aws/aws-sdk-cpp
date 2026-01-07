/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.bedrock;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import org.apache.commons.lang3.tuple.Pair;
import org.apache.velocity.VelocityContext;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class BedrockRestJsonCppClientGenerator extends JsonCppClientGenerator {

    public BedrockRestJsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        return Stream.concat(generateBedrockIdentityResolverFiles(serviceModel).stream(),
                        Arrays.stream(super.generateSourceFiles(serviceModel)))
                .toArray(SdkFileEntry[]::new);
    }

    private List<SdkFileEntry> generateBedrockIdentityResolverFiles(final ServiceModel serviceModel) {
        final String projectName = serviceModel.getMetadata().getProjectName();
        final String vmFilePrefixFormat = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/bedrock/%s";
        final String includePath = String.format("include/aws/%s/", projectName);
        final VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        context.put("serviceModel", serviceModel);
        context.put("metadata", serviceModel.getMetadata());

        if (serviceModel.isUseSmithyClient())
        {
            return Stream.of(Pair.of(includePath + serviceModel.getMetadata().getClassNamePrefix() + "AwsBearerTokenIdentityResolver.h", String.format(vmFilePrefixFormat, "BedrockAwsBearerTokenIdentityResolver.vm")))
                    .map(codeGenPair -> makeFile(velocityEngine.getTemplate(codeGenPair.getValue()),
                            context,
                            codeGenPair.getKey(),
                            true))
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }
}
