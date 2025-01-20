/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import lombok.Data;

import java.util.Map;

@Data
public class C2jOutputResponse {
    Integer status_code;
    private Map<String, String> headers;
    private String body;
}
