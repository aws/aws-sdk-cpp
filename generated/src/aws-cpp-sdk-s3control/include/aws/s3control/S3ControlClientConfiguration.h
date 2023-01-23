/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/auth/signer/AWSAuthV4Signer.h>


namespace Aws
{
    namespace S3Control
    {
        struct AWS_S3CONTROL_API S3ControlClientConfiguration : public Aws::Client::GenericClientConfiguration</*EndpointDiscoverySupported*/true>
        {
            using BaseClientConfigClass = Aws::Client::GenericClientConfiguration</*EndpointDiscoverySupported*/true>;

            S3ControlClientConfiguration();

            /**
            * Create a configuration based on settings in the aws configuration file for the given profile name.
            * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
            */
            S3ControlClientConfiguration(const char* profileName);

            /**
            * Create a configuration with a predefined smart defaults
            * @param useSmartDefaults, required to differentiate c-tors
            * @param defaultMode, default mode to use
            */
            S3ControlClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy");

            /**
            * Converting constructors for compatibility with a legacy code
            */
            S3ControlClientConfiguration(const Client::ClientConfiguration& config);
            bool useArnRegion = false;
            Client::AWSAuthV4Signer::PayloadSigningPolicy payloadSigningPolicy = Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent;
        private:
            void LoadS3ControlSpecificConfig(const Aws::String& profileName);
        };
    }
}
