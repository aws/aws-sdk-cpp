/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/S3ExpressIdentityProvider.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/auth/signer/AWSAuthV4Signer.h>
#include <aws/crt/io/Bootstrap.h>
#include <aws/crt/io/TlsOptions.h>
#include <aws/io/retry_strategy.h>


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

        struct AWS_S3CRT_API S3CrtClientConfiguration : public Aws::Client::GenericClientConfiguration
        {
            using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

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

            /* S3 CRT specifics */
            S3CrtClientConfiguration(const S3CrtClientConfiguration&) = default;
            S3CrtClientConfiguration& operator=(const S3CrtClientConfiguration&) = default;

            struct S3CrtConfigFactories
            {
                /**
                 * CRT retry strategy factory method.
                 * Default will try to match SDK Retry Stratgey (which defaults to DefaultRetryStrategy)
                 * Note: CRT retry strategy is not SDK retry strategy, retry algorithm and request counting are different.
                 */
                std::function<aws_retry_strategy*(const S3Crt::S3CrtClientConfiguration&)> retryStrategyCreateFn;

                static S3CrtConfigFactories defaultFactories;
            };

            S3CrtConfigFactories crtConfigFactories = S3CrtConfigFactories::defaultFactories;

            /** Client bootstrap used for common staples such as event loop group, host resolver, etc..
             *  If this is nullptr, SDK will create a default one for you.
             */
            std::shared_ptr<Aws::Crt::Io::ClientBootstrap> clientBootstrap;

            /** Size of parts the files will be downloaded or uploaded in. Useful for Put/GetObject APIs
             *  defaults to 8MB, if user set it to be less than 5MB, CRT will set it to 5MB.
             */
            size_t partSize = 8 * 1024 * 1024;

            /** TLS Options to be used for each connection.
             *  If scheme is Https and tlsConnectionOptions is null, SDK will create a default one for you.
             */
            std::shared_ptr<Aws::Crt::Io::TlsConnectionOptions> tlsConnectionOptions;

            /* Throughput target in Gbps that we are trying to reach. Normally it's the NIC's throughput */
            double throughputTargetGbps = 10.0;

            /** Control the maximum memory used by downloads.
             *  When set to a value > 0, the SDK uses flow control to bring the memory usage very close
             *  to the specified window. Without this cap, memory usage grows proportional to file size.
             */
            size_t downloadMemoryUsageWindow = 0;

            /**
             * How much memory S3 CRT implementation will use. This will be capped to SIZE_MAX (max platform value of size_t)
             */
            uint64_t memoryLimitBytes = 0;

            /* Callback and associated user data for when the client has completed its shutdown process. */
            std::function<void(void*)> clientShutdownCallback;
            void *shutdownCallbackUserData = nullptr;

            struct CrtRetryStrategyConfig
            {
                enum class CrtRetryStrategyType
                {
                    NOT_SET=0, /* Defaults to match SDK retry strategy. */
                    DEFAULT,
                    STANDARD,
                    EXPONENTIAL_BACKOFF,
                    NO_RETRY=-1,
                } crtRetryStrategyType = CrtRetryStrategyType::NOT_SET;

                struct ExponentialBackoffConfig
                {
                    /**
                     * EXPONENTIAL_BACKOFF strategy config
                     */
                    /* Maximum number of request retries. Specifying 0 here will fall back to the default set by aws-c-io. */
                    size_t maxRetries = 0;

                    /* Scale factor (in milliseconds) for the back-off value. */
                    uint32_t scaleFactorMs = 500;

                    /* Maximum delay between retries (in seconds). Specifying 0 here will fall back to the default set by aws-c-io. */
                    uint32_t maxBackoffSecs = 20;
                } config;
            } crtRetryStrategyConfig;

            /**
             * Optional.
             * The size threshold in bytes for when to use multipart uploads.
             * Uploads larger than this will use the multipart upload strategy.
             * Uploads smaller or equal to this will use a single HTTP request.
             * If set, this should be at least `partSize`.
             * If not set, the max of `partSize` and 5 MiB will be used.
             */
            size_t multipartUploadThreshold{0};

            /**
             * Optional.
             * THIS IS AN EXPERIMENTAL AND UNSTABLE API
             * This setting maps to CRT's network_interface_names_array config.
             */
            Aws::Vector<Aws::String> networkInterfaceNames;

            /**
             * Configuration on how to handle missing content length. By default the SDK attempts to seek the stream
             * to find the total length of the stream before streaming. CRT will fallback to multipart upload if there
             * is no content length, creating multipart uploads of partSize before knowing the stream has ended.
             */
            enum class CONTENT_LENGTH_CONFIGURATION {
              SEEK_STREAM,
              SKIP_CONTENT_LENGTH,
            } contentLengthConfiguration {CONTENT_LENGTH_CONFIGURATION::SEEK_STREAM};
            /* End of S3 CRT specifics */
        private:
            void LoadS3CrtSpecificConfig(const Aws::String& profileName);
        };
    }
}