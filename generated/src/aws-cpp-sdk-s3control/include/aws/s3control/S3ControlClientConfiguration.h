/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/auth/signer/AWSAuthV4Signer.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws {
namespace S3Control {
struct AWS_S3CONTROL_API S3ControlClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  S3ControlClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

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
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit S3ControlClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

  bool useArnRegion = false;
  Client::AWSAuthV4Signer::PayloadSigningPolicy payloadSigningPolicy = Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent;

  /**
   * Use FIPS endpoint in the endpoint calculation. Please check first that the service supports FIPS in a selected region.
   */
  bool useFIPS = false;

  /**
   * Use dual stack endpoint in the endpoint calculation. It is your responsibility to verify that the service supports ipv6 in the region
   * you select.
   */
  bool useDualStack = false;

  /**
   * The AWS account ID. Used for account-based endpoint routing. An AWS account ID has a format like 111122223333.
   * Account-based endpoint routing provides better request performance for some services.
   *
   * https://docs.aws.amazon.com/sdkref/latest/guide/feature-account-endpoints.html
   */
  Aws::String accountId;

  /**
   * Enable host prefix injection.
   * For services whose endpoint is injectable. e.g. servicediscovery, you can modify the http host's prefix so as to add "data-" prefix for
   * DiscoverInstances request. Default to true, enabled. You can disable it for testing purpose.
   */
  bool enableHostPrefixInjection = true;

 private:
  void LoadS3ControlSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_S3CONTROL_API Aws::Client::ServiceClientOptions GetServiceClientOptions(const S3ControlClientConfiguration& config);
}  // namespace S3Control
}  // namespace Aws