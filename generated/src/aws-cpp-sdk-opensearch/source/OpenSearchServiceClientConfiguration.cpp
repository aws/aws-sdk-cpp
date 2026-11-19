/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/OpenSearchServiceClientConfiguration.h>

namespace Aws {
namespace OpenSearchService {

void OpenSearchServiceClientConfiguration::LoadOpenSearchServiceSpecificConfig(const Aws::String& inputProfileName) {
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

OpenSearchServiceClientConfiguration::OpenSearchServiceClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadOpenSearchServiceSpecificConfig(this->profileName);
}

OpenSearchServiceClientConfiguration::OpenSearchServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadOpenSearchServiceSpecificConfig(Aws::String(inputProfileName));
}

OpenSearchServiceClientConfiguration::OpenSearchServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadOpenSearchServiceSpecificConfig(this->profileName);
}

OpenSearchServiceClientConfiguration::OpenSearchServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadOpenSearchServiceSpecificConfig(this->profileName);
}

}  // namespace OpenSearchService
}  // namespace Aws
