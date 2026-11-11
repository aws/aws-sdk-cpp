/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import com.fasterxml.jackson.databind.JsonNode;
import lombok.Data;

import java.util.Map;

/**
 * A transport-level event of an event stream protocol test case, sent either by the client (request) or by the
 * service (response).
 */
@Data
public class C2jEventStreamTestEvent {
    private String type;
    private Map<String, JsonNode> headers;
    private String body;
    private JsonNode params;
}
