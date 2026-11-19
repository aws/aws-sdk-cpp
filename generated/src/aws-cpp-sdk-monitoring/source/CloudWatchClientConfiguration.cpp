/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/RequestCompression.h>
#include <aws/monitoring/CloudWatchClientConfiguration.h>
#include <smithy/client/features/RequestCompressionInterceptor.h>

namespace Aws {
namespace CloudWatch {

void CloudWatchClientConfiguration::LoadCloudWatchSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudWatchSpecificConfig(this->profileName);
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudWatchSpecificConfig(Aws::String(inputProfileName));
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudWatchSpecificConfig(this->profileName);
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudWatchSpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> CloudWatchClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "CloudWatchClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  interceptors.push_back(
      Aws::MakeShared<smithy::client::features::RequestCompressionInterceptor>(TAG, requestCompressionConfig, request.httpClient));
  return interceptors;
}

}  // namespace CloudWatch
}  // namespace Aws
