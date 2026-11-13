/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-channel/PartnerCentralChannelClientConfiguration.h>

namespace Aws {
namespace PartnerCentralChannel {

void PartnerCentralChannelClientConfiguration::LoadPartnerCentralChannelSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  sigV4aSigningRegionSet = Aws::Client::LoadSigV4aSigningRegionSetFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PartnerCentralChannelClientConfiguration::PartnerCentralChannelClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPartnerCentralChannelSpecificConfig(this->profileName);
}

PartnerCentralChannelClientConfiguration::PartnerCentralChannelClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPartnerCentralChannelSpecificConfig(Aws::String(inputProfileName));
}

PartnerCentralChannelClientConfiguration::PartnerCentralChannelClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPartnerCentralChannelSpecificConfig(this->profileName);
}

PartnerCentralChannelClientConfiguration::PartnerCentralChannelClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPartnerCentralChannelSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PartnerCentralChannelClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.sigV4aSigningRegionSet = config.sigV4aSigningRegionSet;
  return options;
}

}  // namespace PartnerCentralChannel
}  // namespace Aws
