﻿/**
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
        struct AWS_S3CONTROL_API S3ControlClientConfiguration : public Aws::Client::GenericClientConfiguration
        {
            using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

            S3ControlClientConfiguration(const S3ControlClientConfiguration& other)
                : Aws::Client::GenericClientConfiguration(other),
                  accountId{other.accountId}
            {
            }

            S3ControlClientConfiguration(S3ControlClientConfiguration&& other) noexcept
                : Aws::Client::GenericClientConfiguration(std::move(other)),
                  accountId{std::move(other.accountId)}
            {
            }

            S3ControlClientConfiguration& operator=(const S3ControlClientConfiguration& other)
            {
                if (this == &other)
                    return *this;
                Aws::Client::GenericClientConfiguration::operator =(other);
                accountId = other.accountId;
                return *this;
            }

            S3ControlClientConfiguration& operator=(S3ControlClientConfiguration&& other) noexcept
            {
                if (this == &other)
                    return *this;
                Aws::Client::GenericClientConfiguration::operator =(std::move(other));
                accountId = std::move(other.accountId);
                return *this;
            }

            S3ControlClientConfiguration(const Client::ClientConfigurationInitValues &configuration = {});

            /**
            * Create a configuration based on settings in the aws configuration file for the given profile name.
            * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
            * @param profileName the aws profile name.
            * @param shouldDisableIMDS whether or not to disable IMDS calls.
            */
            S3ControlClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

            /**
            * Create a configuration with a predefined smart defaults
            * @param useSmartDefaults, required to differentiate c-tors
            * @param defaultMode, default mode to use
            * @param shouldDisableIMDS whether or not to disable IMDS calls.
            */
            S3ControlClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

            /**
            * Converting constructors for compatibility with a legacy code
            */
            S3ControlClientConfiguration(const Client::ClientConfiguration& config);
            bool useArnRegion = false;
            Client::AWSAuthV4Signer::PayloadSigningPolicy payloadSigningPolicy = Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent;
            /**
             * The Account ID used to send the request. This is an optional parameter that will be set automatically for operations that require it.
             */
            Aws::String accountId;
        private:
            void LoadS3ControlSpecificConfig(const Aws::String& profileName);
        };
    }
}