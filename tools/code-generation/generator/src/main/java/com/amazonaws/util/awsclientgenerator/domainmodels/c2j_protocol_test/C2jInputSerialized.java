/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import lombok.Data;

import java.util.List;
import java.util.Map;

@Data
public class C2jInputSerialized {
    /**
     * The HTTP method.
     */
    private String method;
    /**
     * The HTTP body as a string.
     */
    private String body;
    /**
     * The uri path and querystring of the request.
     */
    private String uri;
    /**
     * The URL host of the request.
     */
    private String host;
    /**
     * Any HTTP headers for the HTTP request.
     */
    private Map<String, String> headers;
    /**
     * A list of header names that must not exist in the HTTP Request.
     */
    private List<String> forbidHeaders;
    /**
     * A list of header names that must exist in the HTTP Request.
     */
    private List<String> requireHeaders;
}
