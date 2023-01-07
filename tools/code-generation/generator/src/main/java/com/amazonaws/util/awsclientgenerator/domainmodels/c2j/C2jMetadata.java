/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;

@Data
public class C2jMetadata {
    private String apiVersion;
    private String endpointPrefix;
    private String globalEndpoint;
    private String jsonVersion;
    private String serviceAbbreviation;
    private String serviceFullName;
    private String signatureVersion;
    private String signingName;
    private String targetPrefix;
    private String protocol;
    private String clientProjectName;
    private String clientClassNamePrefix;
    private String uid;
    private String timestampFormat;
    private String serviceId;
    private C2jAwsQueryCompatible awsQueryCompatible;
}