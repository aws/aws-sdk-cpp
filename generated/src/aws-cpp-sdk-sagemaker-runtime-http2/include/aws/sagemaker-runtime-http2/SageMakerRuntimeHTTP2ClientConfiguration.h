/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
struct AWS_SAGEMAKERRUNTIMEHTTP2_API SageMakerRuntimeHTTP2ClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  SageMakerRuntimeHTTP2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  SageMakerRuntimeHTTP2ClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  SageMakerRuntimeHTTP2ClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit SageMakerRuntimeHTTP2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

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

 private:
  void LoadSageMakerRuntimeHTTP2SpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::Client::ServiceClientOptions GetServiceClientOptions(
    const SageMakerRuntimeHTTP2ClientConfiguration& config);
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws