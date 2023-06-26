/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

@Data
public class Http {
    private static final Pattern URI_PARAM_PATTERN = Pattern.compile(".*\\{[\\w\\d-]+\\+?\\}");

    private String method;
    private String requestUri;
    private String responseCode;

    public List<String> getRequestUriParts() {
        if (requestUri != null) {
            return Arrays.asList(requestUri.split("\\{[\\w\\d-]+\\+?\\}"));
        } else {
            return new ArrayList<String>();
        }
    }

    public List<String> getRequestParameters() {
        List<String> paramList = new LinkedList<>();
        if (requestUri == null) {
            return paramList;
        }

        String[] parts = requestUri.split("/|\\?|&");
        for (String part : parts) {
            Matcher matcher = URI_PARAM_PATTERN.matcher(part);

            if (matcher.matches()) {
               paramList.add(part.substring(part.indexOf("{") + 1, part.indexOf("}")));
            }
        }

        return paramList;
    }

    public List<String> splitUriPartIntoPathAndQuery(String requestUri) {
        String[] pathAndQuery = requestUri.split("\\?", -1);
        if (pathAndQuery.length != 2) {
            throw new IllegalArgumentException("Unexpected number of question marks in the request URI, one and only one is expected.");
        }
        pathAndQuery[1] = "?" + pathAndQuery[1];
        return Arrays.asList(pathAndQuery);
    }
}
