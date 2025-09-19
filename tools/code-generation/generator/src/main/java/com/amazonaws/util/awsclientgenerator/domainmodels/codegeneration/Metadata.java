/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import com.google.common.collect.ImmutableList;
import lombok.Data;
import org.apache.commons.lang3.StringUtils;

import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Objects;

@Data
public class Metadata {
    private static List<String> supportedProtocols = ImmutableList.of(
            "json",
            "rest-json",
            "rest-xml",
            "query",
            "ec2",
            "smithy-rpc-v2-cbor"
    );

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
    private List<String> protocols;
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

    private boolean awsQueryCompatible;

    // Priority-ordered list of auth types present on the service model
    private List<String> auth;

    public String findFirstSupportedProtocol() {
        // we use application-json for api-gateway
        if ("application-json".equals(protocol)) {
            return protocol;
        }

        if (Objects.isNull(protocols) || protocols.isEmpty()) {
            return protocol;
        }

        return protocols.stream().filter(supportedProtocols::contains)
                .min(Comparator.comparingInt(protocolName -> supportedProtocols.indexOf(protocolName)))
                .orElseThrow(() -> new RuntimeException(String.format("No supported protocol found for %s", serviceFullName)));
    }
}
