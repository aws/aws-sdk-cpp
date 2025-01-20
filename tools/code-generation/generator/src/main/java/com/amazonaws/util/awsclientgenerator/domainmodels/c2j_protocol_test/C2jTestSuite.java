/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jMetadata;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jShape;
import lombok.Data;

import java.util.List;
import java.util.Map;

@Data
public class C2jTestSuite {
    private String name;
    private String serviceToUse;
    public enum TestSuiteType {
        INPUT,
        OUTPUT
    }
    TestSuiteType type; // only can be present.
    private List<C2jInputTestSuite> inputTestSuites;
    private List<C2jOutputTestSuite> outputTestSuites;
}
