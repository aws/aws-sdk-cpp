/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;

import java.util.List;

@Data
public class C2jRequestCompression {
    private List<String> encodings;
}