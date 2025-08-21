/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Error;
import com.google.common.base.CaseFormat;
import com.google.common.collect.ImmutableSet;

import java.util.Collection;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

public class ErrorFormatter {

    static private final Set<String> CORE_ERROR_CONSTANTS = ImmutableSet.of(
            "INCOMPLETE_SIGNATURE",
            "INTERNAL_FAILURE",
            "INVALID_ACTION",
            "INVALID_CLIENT_TOKEN_ID",
            "INVALID_PARAMETER_COMBINATION",
            "INVALID_QUERY_PARAMETER",
            "INVALID_PARAMETER_VALUE",
            "MISSING_ACTION",
            "MISSING_AUTHENTICATION_TOKEN",
            "MISSING_PARAMETER",
            "OPT_IN_REQUIRED",
            "REQUEST_EXPIRED",
            "SERVICE_UNAVAILABLE",
            "THROTTLING",
            "VALIDATION",
            "ACCESS_DENIED",
            "RESOURCE_NOT_FOUND",
            "UNRECOGNIZED_CLIENT",
            "MALFORMED_QUERY_STRING",
            "SLOW_DOWN",
            "REQUEST_TIME_TOO_SKEWED",
            "INVALID_SIGNATURE",
            "SIGNATURE_DOES_NOT_MATCH",
            "INVALID_ACCESS_KEY_ID",
            "REQUEST_TIMEOUT",
            "NETWORK_CONNECTION"
    );

    public List<String> formatErrorConstNames(Collection<Error> errors) {
        return errors.stream().map(error -> formatErrorConstName(error.getName()))
                .filter(name -> !CORE_ERROR_CONSTANTS.contains(name))
                .sorted()
                .collect(Collectors.toList());
    }

    public static String formatErrorConstName(String errorName) {
        String upper = CaseFormat.UPPER_CAMEL.to(CaseFormat.UPPER_UNDERSCORE, errorName.replaceAll("\\.", "_"));
        if (upper.endsWith("_ERROR")) {
            upper = upper.substring(0, upper.length() - "_ERROR".length());
        }
        if (upper.endsWith("_EXCEPTION")) {
            upper = upper.substring(0, upper.length() - "_EXCEPTION".length());
        }
        return upper;
    }
}
