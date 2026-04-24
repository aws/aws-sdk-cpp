/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;
import java.util.List;

@Data
public class C2jHttpChecksum {
    private boolean requestChecksumRequired;
    private String requestAlgorithmMember;
    private String requestValidationModeMember;
    private List<String> responseAlgorithms;
}