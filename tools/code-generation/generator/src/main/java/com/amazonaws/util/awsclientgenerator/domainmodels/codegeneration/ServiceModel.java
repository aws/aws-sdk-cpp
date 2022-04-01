/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.AccessLevel;
import lombok.Data;
import lombok.Getter;
import lombok.Setter;

import java.util.*;
import java.util.stream.Collectors;

@Data
public class ServiceModel {
    String version;
    String runtimeMajorVersion;
    String runtimeMajorVersionUpperBound;
    String runtimeMinorVersion;
    String namespace;
    String serviceName;
    Metadata metadata;
    String documentation;
    String licenseText;
    Map<String, Shape> shapes;
    Map<String, Operation> operations;
    boolean enableVirtualOperations;
    Collection<Error> serviceErrors;

    @Getter(AccessLevel.PRIVATE)
    @Setter(AccessLevel.PRIVATE)
    Set<String> inputShapes = new HashSet<>();

    @Getter(AccessLevel.PRIVATE)
    @Setter(AccessLevel.PRIVATE)
    Set<String> outputShapes = new HashSet<>();

    public boolean hasStreamingRequestShapes() {
        return shapes.values().parallelStream().anyMatch(shape -> shape.isRequest() && (shape.hasStreamMembers() || shape.hasEventStreamMembers()));
    }

    public Collection<Error> getNonCoreServiceErrors() {
        return serviceErrors.stream().filter(e -> !e.isCoreError()).collect(Collectors.toSet());
    }
}
