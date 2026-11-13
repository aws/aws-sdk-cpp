/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/RedshiftServerlessClientConfiguration.h>

namespace Aws {
namespace RedshiftServerless {

void RedshiftServerlessClientConfiguration::LoadRedshiftServerlessSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

RedshiftServerlessClientConfiguration::RedshiftServerlessClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRedshiftServerlessSpecificConfig(this->profileName);
}

RedshiftServerlessClientConfiguration::RedshiftServerlessClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRedshiftServerlessSpecificConfig(Aws::String(inputProfileName));
}

RedshiftServerlessClientConfiguration::RedshiftServerlessClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRedshiftServerlessSpecificConfig(this->profileName);
}

RedshiftServerlessClientConfiguration::RedshiftServerlessClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRedshiftServerlessSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const RedshiftServerlessClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace RedshiftServerless
}  // namespace Aws
