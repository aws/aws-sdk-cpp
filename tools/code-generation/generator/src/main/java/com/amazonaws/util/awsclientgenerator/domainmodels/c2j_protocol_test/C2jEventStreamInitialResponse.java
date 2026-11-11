/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import lombok.Data;

import java.util.Map;

/**
 * The transport-level initial HTTP response of an event stream protocol test case.
 */
@Data
public class C2jEventStreamInitialResponse {
    private Integer code;
    private Map<String, String> headers;
}
