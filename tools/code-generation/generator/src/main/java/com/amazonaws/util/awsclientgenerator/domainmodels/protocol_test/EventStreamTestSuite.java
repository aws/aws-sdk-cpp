/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test;

import lombok.Data;

import java.util.List;

/**
 * The event stream protocol test cases of a single operation.
 */
@Data
public class EventStreamTestSuite {
    private String name;
    private List<EventStreamTestCase> cases;
}
