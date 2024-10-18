package com.amazonaws.util.awsclientsmithygenerator.generators;
import lombok.Data;
import java.util.Optional;
import software.amazon.smithy.aws.smoketests.model.AwsVendorParams;
import software.amazon.smithy.aws.smoketests.model.S3VendorParams;
@Data
public final class ClientConfiguration {
    Optional<AwsVendorParams> awsParams;
    Optional<S3VendorParams> s3Params;
};