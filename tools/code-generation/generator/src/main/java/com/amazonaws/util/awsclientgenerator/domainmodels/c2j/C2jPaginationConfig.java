/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;
import java.util.List;
import java.util.Map;

@Data
public class C2jPaginationConfig {
    Map<String, PaginatorDefinition> pagination;

    @Data
    public static class PaginatorDefinition {
        Object input_token;  // String or List<String>
        Object output_token; // String or List<String>
        String limit_key;
        Object result_key;   // String or List<String>
        String more_results;
    }
}
