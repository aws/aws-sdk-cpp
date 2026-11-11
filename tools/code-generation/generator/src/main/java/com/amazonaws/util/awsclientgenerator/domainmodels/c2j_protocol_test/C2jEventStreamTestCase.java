/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import com.fasterxml.jackson.databind.JsonNode;
import lombok.Data;

import java.util.List;

/**
 * A single event stream protocol test case in the C2J JSON definition.
 */
@Data
public class C2jEventStreamTestCase {
    private String id;
    private String operationName;
    private C2jInputSerialized initialRequest;
    private JsonNode initialResponseParams;
    private C2jEventStreamInitialResponse initialResponse;
    private List<C2jEventStreamTestEvent> events;
}
