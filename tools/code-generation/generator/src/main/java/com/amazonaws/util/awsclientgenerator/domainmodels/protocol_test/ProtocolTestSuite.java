/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jMetadata;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jShape;
import lombok.Data;

import java.util.List;
import java.util.Map;

@Data
public class ProtocolTestSuite {
    /**
     *  A name for the test suite
     */
    private String name;
    /**
     *  A description of the tests
     */
    private String description;
    /**
     * The top level metadata that would correspond to the metadata key in the service's JSON model.
     */
    private C2jMetadata metadata;
    /**
     * A URL string the test cases must use when constructing the request's URL endpoint.
     */
    private String clientEndpoint;
    /**
     * A JSON object of C2jShapes. This would correspond to the top level C2jShapes key in the service's JSON model.
     */
    private Map<String, C2jShape> shapes;
    /**
     * a list of test cases
     */
    private List<ProtocolTestCase> cases;
}
