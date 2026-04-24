/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import lombok.Getter;
import software.amazon.smithy.aws.smoketests.model.BaseAwsVendorParams;

// This is a wrapper class for capturing all the information we need
// either directly or after processing from smithy model file
@Getter
public final class ClientConfiguration {
    
    private final BaseAwsVendorParams params;

    public ClientConfiguration(BaseAwsVendorParams params) {
        this.params = params;
    }

}