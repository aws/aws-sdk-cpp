/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.Map;

@Data
public class Metadata {
    private String apiVersion;
    private String concatAPIVersion;
    private String endpointPrefix;
    private String globalEndpoint;
    private String jsonVersion;
    private String namespace;
    private String serviceFullName;
    private String signatureVersion;
    private String signingName;
    private String targetPrefix;
    private String protocol;
    private String projectName;
    private String classNamePrefix;
    private String acceptHeader;
    private String timestampFormat;
    private Map<String, String> additionalHeaders;
    private boolean standalone;
    private boolean apigateway;
    private String serviceId;

    // For Host Prefix Injection
    private boolean hasEndpointTrait;

    // For Cellular Request Routing
    private boolean hasEndpointDiscoveryTrait;
    private boolean requireEndpointDiscovery;
    private String endpointOperationName;

    // For Pre-signed URL Generation
    private boolean hasPreSignedUrl;
}
