/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jInputSerialized;
import com.fasterxml.jackson.databind.JsonNode;
import lombok.Data;

import java.util.List;
import java.util.Map;

/**
 * An event stream protocol test case ready for code generation: the mock response is pre-encoded into event stream
 * frames and the expected events are grouped by the event stream union member they deserialize into.
 */
@Data
public class EventStreamTestCase {

    /**
     * The expected deserialized events of one event stream union member, in the order they are received.
     */
    @Data
    public static class ExpectedEventGroup {
        private String memberName;
        private List<JsonNode> params;
    }

    private String id;
    private String operationName;
    private C2jInputSerialized initialRequest;
    private int responseStatusCode;
    private Map<String, String> responseHeaders;
    private String responseBody;
    private JsonNode initialResponseParams;
    private List<ExpectedEventGroup> expectedEventGroups;
}
