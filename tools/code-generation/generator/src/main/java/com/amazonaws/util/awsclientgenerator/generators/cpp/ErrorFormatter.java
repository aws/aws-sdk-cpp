/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Error;
import com.google.common.base.CaseFormat;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

public class ErrorFormatter {

    public List<String> formatErrorConstNames(Collection<Error> errors) {
        List<String> formattedErrors = new ArrayList<>();
        for (Error error : errors) {
            formattedErrors.add(formatErrorConstName(error.getName()));
        }
        Collections.sort(formattedErrors);
        return formattedErrors;
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
