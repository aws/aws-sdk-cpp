/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/OpenSearchServerlessClientConfiguration.h>

namespace Aws {
namespace OpenSearchServerless {

void OpenSearchServerlessClientConfiguration::LoadOpenSearchServerlessSpecificConfig(const Aws::String& inputProfileName) {
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

OpenSearchServerlessClientConfiguration::OpenSearchServerlessClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadOpenSearchServerlessSpecificConfig(this->profileName);
}

OpenSearchServerlessClientConfiguration::OpenSearchServerlessClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadOpenSearchServerlessSpecificConfig(Aws::String(inputProfileName));
}

OpenSearchServerlessClientConfiguration::OpenSearchServerlessClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadOpenSearchServerlessSpecificConfig(this->profileName);
}

OpenSearchServerlessClientConfiguration::OpenSearchServerlessClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadOpenSearchServerlessSpecificConfig(this->profileName);
}

}  // namespace OpenSearchServerless
}  // namespace Aws
