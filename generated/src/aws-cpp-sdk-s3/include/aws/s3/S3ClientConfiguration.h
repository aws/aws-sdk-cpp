/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/auth/signer/AWSAuthV4Signer.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/s3/S3ExpressIdentityProvider.h>
#include <aws/s3/S3_EXPORTS.h>

namespace Aws {
namespace S3 {
enum class US_EAST_1_REGIONAL_ENDPOINT_OPTION {
  NOT_SET,
  LEGACY,   // stands for using global endpoint for us-east-1,
  REGIONAL  // stands for using regional endpoint for us-east-1
};

struct AWS_S3_API S3ClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  S3ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  S3ClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  S3ClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit S3ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

  bool useVirtualAddressing = true;
  US_EAST_1_REGIONAL_ENDPOINT_OPTION useUSEast1RegionalEndPointOption = US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET;
  bool disableMultiRegionAccessPoints = false;
  bool useArnRegion = false;
  Client::AWSAuthV4Signer::PayloadSigningPolicy payloadSigningPolicy = Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent;
  bool disableS3ExpressAuth = false;
  using IdentityProviderSupplier = std::function<std::shared_ptr<S3ExpressIdentityProvider>(const S3Client&)>;
  IdentityProviderSupplier identityProviderSupplier = [](const S3Client& client) -> std::shared_ptr<S3ExpressIdentityProvider> {
    return Aws::MakeShared<DefaultS3ExpressIdentityProvider>("S3ClientConfiguration", client);
  };

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
   * Enable host prefix injection.
   * For services whose endpoint is injectable. e.g. servicediscovery, you can modify the http host's prefix so as to add "data-" prefix for
   * DiscoverInstances request. Default to true, enabled. You can disable it for testing purpose.
   */
  bool enableHostPrefixInjection = true;

  /**
   * Request checksum calculation and response checksum validation settings.
   */
  Aws::Client::ChecksumConfig checksumConfig;

  /**
   * When set to true, the SDK will NOT add "Expect: 100-Continue" header to any HTTP request,
   * including streaming operations.
   *
   * By default (false), the SDK automatically adds "Expect: 100-Continue" only to streaming
   * requests (operations with streaming input bodies). This allows the server to reject the
   * request before the client sends a potentially large payload, saving bandwidth on failures.
   * Non-streaming requests never receive the Expect header regardless of this setting.
   *
   * Set to true if you are going through a proxy or middleware that does not correctly
   * handle the Expect: 100-Continue mechanism.
   */
  bool disableExpectHeader = false;

  /**
   * Control HTTP client chunking implementation mode.
   * Default is set automatically: CLIENT_IMPLEMENTATION for custom clients, DEFAULT for AWS clients.
   */
  Aws::Client::HttpClientChunkedMode httpClientChunkedMode = Aws::Client::HttpClientChunkedMode::CLIENT_IMPLEMENTATION;

  /**
   * Buffer size in bytes that will be used to content encode
   * bodies using aws-chunked. Changing this is useful when you
   * want to minimize memory use while uploading. Size MUST
   * be greater than 8KB otherwise the service may reject the request.
   *
   * Defaults to 64KiB.
   *
   * https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-streaming.html
   */
  size_t awsChunkedBufferSize = Aws::Client::DEFAULT_AWS_CHUNKED_BUFFER_SIZE;

  /**
   * List of AWS regions for SigV4a multi-region signing.
   */
  Aws::Vector<Aws::String> sigV4aSigningRegionSet;

 private:
  void LoadS3SpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_S3_API Aws::Client::ServiceClientOptions GetServiceClientOptions(const S3ClientConfiguration& config);
}  // namespace S3
}  // namespace Aws