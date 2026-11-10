/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/ServiceDiscoveryClientConfiguration.h>

namespace Aws {
namespace ServiceDiscovery {

void ServiceDiscoveryClientConfiguration::LoadServiceDiscoverySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ServiceDiscoveryClientConfiguration::ServiceDiscoveryClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadServiceDiscoverySpecificConfig(this->profileName);
}

ServiceDiscoveryClientConfiguration::ServiceDiscoveryClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadServiceDiscoverySpecificConfig(Aws::String(inputProfileName));
}

ServiceDiscoveryClientConfiguration::ServiceDiscoveryClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadServiceDiscoverySpecificConfig(this->profileName);
}

ServiceDiscoveryClientConfiguration::ServiceDiscoveryClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadServiceDiscoverySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ServiceDiscoveryClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ServiceDiscovery
}  // namespace Aws
