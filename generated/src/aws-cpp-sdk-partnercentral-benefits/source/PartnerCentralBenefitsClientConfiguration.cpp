/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-benefits/PartnerCentralBenefitsClientConfiguration.h>

namespace Aws {
namespace PartnerCentralBenefits {

void PartnerCentralBenefitsClientConfiguration::LoadPartnerCentralBenefitsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PartnerCentralBenefitsClientConfiguration::PartnerCentralBenefitsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPartnerCentralBenefitsSpecificConfig(this->profileName);
}

PartnerCentralBenefitsClientConfiguration::PartnerCentralBenefitsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPartnerCentralBenefitsSpecificConfig(Aws::String(inputProfileName));
}

PartnerCentralBenefitsClientConfiguration::PartnerCentralBenefitsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPartnerCentralBenefitsSpecificConfig(this->profileName);
}

PartnerCentralBenefitsClientConfiguration::PartnerCentralBenefitsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPartnerCentralBenefitsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PartnerCentralBenefitsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PartnerCentralBenefits
}  // namespace Aws
