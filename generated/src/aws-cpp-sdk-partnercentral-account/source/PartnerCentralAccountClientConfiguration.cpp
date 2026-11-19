/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-account/PartnerCentralAccountClientConfiguration.h>

namespace Aws {
namespace PartnerCentralAccount {

void PartnerCentralAccountClientConfiguration::LoadPartnerCentralAccountSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
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

}  // namespace PartnerCentralAccount
}  // namespace Aws
