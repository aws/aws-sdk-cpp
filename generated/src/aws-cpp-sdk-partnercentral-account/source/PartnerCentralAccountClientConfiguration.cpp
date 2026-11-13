/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-account/PartnerCentralAccountClientConfiguration.h>

namespace Aws {
namespace PartnerCentralAccount {

void PartnerCentralAccountClientConfiguration::LoadPartnerCentralAccountSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PartnerCentralAccountClientConfiguration::PartnerCentralAccountClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPartnerCentralAccountSpecificConfig(this->profileName);
}

PartnerCentralAccountClientConfiguration::PartnerCentralAccountClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPartnerCentralAccountSpecificConfig(Aws::String(inputProfileName));
}

PartnerCentralAccountClientConfiguration::PartnerCentralAccountClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPartnerCentralAccountSpecificConfig(this->profileName);
}

PartnerCentralAccountClientConfiguration::PartnerCentralAccountClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPartnerCentralAccountSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PartnerCentralAccountClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PartnerCentralAccount
}  // namespace Aws
