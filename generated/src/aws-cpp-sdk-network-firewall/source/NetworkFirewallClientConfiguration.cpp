/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/NetworkFirewallClientConfiguration.h>

namespace Aws {
namespace NetworkFirewall {

void NetworkFirewallClientConfiguration::LoadNetworkFirewallSpecificConfig(const Aws::String& inputProfileName) {
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

NetworkFirewallClientConfiguration::NetworkFirewallClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNetworkFirewallSpecificConfig(this->profileName);
}

NetworkFirewallClientConfiguration::NetworkFirewallClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNetworkFirewallSpecificConfig(Aws::String(inputProfileName));
}

NetworkFirewallClientConfiguration::NetworkFirewallClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNetworkFirewallSpecificConfig(this->profileName);
}

NetworkFirewallClientConfiguration::NetworkFirewallClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNetworkFirewallSpecificConfig(this->profileName);
}

}  // namespace NetworkFirewall
}  // namespace Aws
