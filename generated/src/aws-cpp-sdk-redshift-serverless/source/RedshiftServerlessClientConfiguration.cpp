/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/RedshiftServerlessClientConfiguration.h>

namespace Aws {
namespace RedshiftServerless {

void RedshiftServerlessClientConfiguration::LoadRedshiftServerlessSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
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

}  // namespace RedshiftServerless
}  // namespace Aws
