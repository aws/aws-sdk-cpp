/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import com.fasterxml.jackson.databind.JsonNode;
import lombok.Data;

@Data
public class C2jInputTestCase {
    /**
     * A test case id.
     */
    private String id;
    /**
     * A test case description.
     */
    private String description;
    /**
     * This corresponds to the JSON object that would define an operation in the service's JSON model.
     * Valid keys include http, input, endpoint, and name.
     */
    private C2jGiven given;
    /**
     * The input parameters a user would provide.
     */
    private JsonNode params;

    /**
     * The expected serialized HTTP request.
     */
    private C2jInputSerialized serialized;
}
