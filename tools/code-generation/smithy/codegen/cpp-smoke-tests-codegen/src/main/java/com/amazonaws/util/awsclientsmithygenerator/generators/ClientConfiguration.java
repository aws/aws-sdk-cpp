/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;
import software.amazon.smithy.aws.smoketests.model.BaseAwsVendorParams;

public final class ClientConfiguration {
    
    private final BaseAwsVendorParams params;

    public ClientConfiguration(BaseAwsVendorParams params) {
        this.params = params;
    }

    public BaseAwsVendorParams getParams() {
        return params; 
    }
}