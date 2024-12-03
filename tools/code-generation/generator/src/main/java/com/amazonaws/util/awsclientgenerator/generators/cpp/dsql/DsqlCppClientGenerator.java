package com.amazonaws.util.awsclientgenerator.generators.cpp.dsql;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.CustomPresignedUtility;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;

public class DsqlCppClientGenerator extends JsonCppClientGenerator {
    public DsqlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        serviceModel.setPresigners(ImmutableList.of(
                CustomPresignedUtility.builder()
                        .functionName("GenerateDBConnectAuthToken")
                        .hostNameVarName("hostname")
                        .regionVarName("region")
                        .queryParams(ImmutableList.of(
                                CustomPresignedUtility.QueryParam.builder()
                                        .paramterName("Action")
                                        .hardcodedValue("DbConnect")
                                        .build()
                        ))
                        .possibleActions(ImmutableSet.of())
                        .build(),
                CustomPresignedUtility.builder()
                        .functionName("GenerateDBConnectAdminAuthToken")
                        .hostNameVarName("hostname")
                        .regionVarName("region")
                        .queryParams(ImmutableList.of(
                                CustomPresignedUtility.QueryParam.builder()
                                        .paramterName("Action")
                                        .hardcodedValue("DbConnectAdmin")
                                        .build()
                        ))
                        .possibleActions(ImmutableSet.of())
                        .build()));
        return super.generateSourceFiles(serviceModel);
    }
}
