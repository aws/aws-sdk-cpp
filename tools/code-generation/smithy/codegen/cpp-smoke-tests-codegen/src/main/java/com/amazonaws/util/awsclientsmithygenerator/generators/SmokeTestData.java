/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import lombok.Data;
import java.util.List;
import java.util.Optional;
import java.util.Set;
import software.amazon.smithy.codegen.core.Symbol;
@Data
public final class SmokeTestData {
    public String testcaseName;
    public ClientConfiguration config;
    public String operationName;
    public String inputShapeName;
    public String outputShapeName;
    public List<String> testDataCodeBlock;
    public String requestBlock;
    public boolean expectSuccess;
    public Optional<String> errorShapeId;
    //capture auth scheme as that decides the client constructor
    public String auth;
    public Set<Symbol> symbols;
};
