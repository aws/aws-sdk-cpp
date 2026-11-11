/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import lombok.Data;

import java.util.List;

/**
 * The JSON definition of event stream protocol tests for C2J-based clients, as defined by the event stream protocol
 * tests SEP: a flat list of client test cases for every operation of the service under test.
 */
@Data
public class C2jEventStreamTestSuite {
    private List<C2jEventStreamTestCase> testCases;
}
