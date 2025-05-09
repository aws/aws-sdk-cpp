/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test;

import lombok.Data;

@Data
public class C2jGiven {
    @Data
    public class C2jGivenHttp {
        private String method;
        private String requestUri;
    }

    @Data
    public class C2jGivenInput {
        private String shape;
        private String locationName;
    }

    @Data
    public class C2jGivenOutput {
        private String shape;
    }

    @Data
    public class C2jGivenEndpoint {
        private String hostPrefix;
    }

    private String name;
    private C2jGivenHttp http;
    private C2jGivenInput input;
    private C2jGivenOutput output;
    private C2jGivenEndpoint endpoint;
}
