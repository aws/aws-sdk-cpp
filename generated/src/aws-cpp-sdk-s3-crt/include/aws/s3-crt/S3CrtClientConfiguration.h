/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/S3ExpressIdentityProvider.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/auth/signer/AWSAuthV4Signer.h>


namespace Aws
{
    namespace S3Crt
    {
        enum class US_EAST_1_REGIONAL_ENDPOINT_OPTION
        {
            NOT_SET,
            LEGACY,   //stands for using global endpoint for us-east-1,
            REGIONAL //stands for using regional endpoint for us-east-1
        };

        struct AWS_S3CRT_API S3CrtClientConfiguration : public Aws::Client::GenericClientConfiguration</*EndpointDiscoverySupported*/true>
        {
            using BaseClientConfigClass = Aws::Client::GenericClientConfiguration</*EndpointDiscoverySupported*/true>;

            S3CrtClientConfiguration(const Client::ClientConfigurationInitValues &configuration = {});

            /**
            * Create a configuration based on settings in the aws configuration file for the given profile name.
            * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
            * @param profileName the aws profile name.
            * @param shouldDisableIMDS whether or not to disable IMDS calls.
            */
            S3CrtClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

            /**
            * Create a configuration with a predefined smart defaults
            * @param useSmartDefaults, required to differentiate c-tors
            * @param defaultMode, default mode to use
            * @param shouldDisableIMDS whether or not to disable IMDS calls.
            */
            S3CrtClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

            /**
            * Converting constructors for compatibility with a legacy code
            */
            S3CrtClientConfiguration(const Client::ClientConfiguration& config,
                                     Client::AWSAuthV4Signer::PayloadSigningPolicy iPayloadSigningPolicy = Client::AWSAuthV4Signer::PayloadSigningPolicy::Never,
                                     bool iUseVirtualAddressing = true,
                                     US_EAST_1_REGIONAL_ENDPOINT_OPTION iUseUSEast1RegionalEndPointOption = US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET);

            bool useVirtualAddressing = true;
            US_EAST_1_REGIONAL_ENDPOINT_OPTION useUSEast1RegionalEndPointOption = US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET;
            bool disableMultiRegionAccessPoints = false;
            bool useArnRegion = false;
            Client::AWSAuthV4Signer::PayloadSigningPolicy payloadSigningPolicy = Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent;
            bool disableS3ExpressAuth = false;
            using IdentityProviderSupplier = std::function<std::shared_ptr<S3ExpressIdentityProvider> (const S3CrtClient &)>;
            IdentityProviderSupplier identityProviderSupplier = [](const S3CrtClient &client) -> std::shared_ptr<S3ExpressIdentityProvider> {
                return Aws::MakeShared<DefaultS3ExpressIdentityProvider>("S3CrtClientConfiguration", client);
            };
        private:
            void LoadS3CrtSpecificConfig(const Aws::String& profileName);
        };
    }
}
