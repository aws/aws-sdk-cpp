/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;
import java.util.HashMap;
import java.util.List;

@Data
public class ClientContextParams extends HashMap<String, ClientContextParams.ClientContextParam> {
    @Data
    public static class ClientContextParam {
        String type;
        List<String> usages;
        String documentation;
    }
}