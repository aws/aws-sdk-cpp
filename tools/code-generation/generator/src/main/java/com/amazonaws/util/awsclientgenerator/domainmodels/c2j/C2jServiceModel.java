/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ClientContextParams;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTests;
import lombok.Data;

import java.util.Map;

@Data
public class C2jServiceModel {
    String version;
    C2jMetadata metadata;
    String documentation;
    Map<String, C2jShape> shapes;
    Map<String, C2jOperation> operations;
    String serviceName;
    String endpointRules;
    EndpointTests endpointTests;
    ClientContextParams clientContextParams;
}
