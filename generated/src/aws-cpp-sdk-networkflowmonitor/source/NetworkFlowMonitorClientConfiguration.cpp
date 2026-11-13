/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/NetworkFlowMonitorClientConfiguration.h>

namespace Aws {
namespace NetworkFlowMonitor {

void NetworkFlowMonitorClientConfiguration::LoadNetworkFlowMonitorSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

NetworkFlowMonitorClientConfiguration::NetworkFlowMonitorClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNetworkFlowMonitorSpecificConfig(this->profileName);
}

NetworkFlowMonitorClientConfiguration::NetworkFlowMonitorClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNetworkFlowMonitorSpecificConfig(Aws::String(inputProfileName));
}

NetworkFlowMonitorClientConfiguration::NetworkFlowMonitorClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNetworkFlowMonitorSpecificConfig(this->profileName);
}

NetworkFlowMonitorClientConfiguration::NetworkFlowMonitorClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNetworkFlowMonitorSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const NetworkFlowMonitorClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace NetworkFlowMonitor
}  // namespace Aws
