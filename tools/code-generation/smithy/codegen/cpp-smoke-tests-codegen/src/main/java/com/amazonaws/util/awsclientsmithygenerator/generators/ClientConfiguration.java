/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;
import software.amazon.smithy.aws.smoketests.model.AwsVendorParams;
import software.amazon.smithy.aws.smoketests.model.S3VendorParams;

public final class ClientConfiguration {
    private final AwsVendorParams awsParams;
    private final S3VendorParams s3Params;

    public ClientConfiguration(AwsVendorParams awsParams) {
        this.awsParams = awsParams;
        this.s3Params = null;
    }

    public ClientConfiguration(S3VendorParams s3Params) {
        this.awsParams = null;
        this.s3Params = s3Params;
    }

    public AwsVendorParams getAwsParams() {
        return awsParams; 
    }

    public S3VendorParams getS3Params() {
        return s3Params; 
    }

    public boolean hasAwsParams() {
        return awsParams != null;
    }

    public boolean hasS3Params() {
        return s3Params != null;
    }
}