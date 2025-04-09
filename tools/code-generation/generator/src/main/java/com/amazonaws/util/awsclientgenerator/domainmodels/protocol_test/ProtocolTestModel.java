/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jTestSuite;
import lombok.Data;

import java.util.List;

@Data
public class ProtocolTestModel {
    private String name;
    private String serviceToUse;
    public enum TestSuiteType {
        INPUT,
        OUTPUT
    }
    C2jTestSuite.TestSuiteType type;
    private List<ProtocolTestSuite> testSuites;
}
