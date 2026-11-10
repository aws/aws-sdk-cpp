/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/PartnerCentralSellingClientConfiguration.h>

namespace Aws {
namespace PartnerCentralSelling {

void PartnerCentralSellingClientConfiguration::LoadPartnerCentralSellingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PartnerCentralSellingClientConfiguration::PartnerCentralSellingClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPartnerCentralSellingSpecificConfig(this->profileName);
}

PartnerCentralSellingClientConfiguration::PartnerCentralSellingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPartnerCentralSellingSpecificConfig(Aws::String(inputProfileName));
}

PartnerCentralSellingClientConfiguration::PartnerCentralSellingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPartnerCentralSellingSpecificConfig(this->profileName);
}

PartnerCentralSellingClientConfiguration::PartnerCentralSellingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPartnerCentralSellingSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PartnerCentralSellingClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PartnerCentralSelling
}  // namespace Aws
