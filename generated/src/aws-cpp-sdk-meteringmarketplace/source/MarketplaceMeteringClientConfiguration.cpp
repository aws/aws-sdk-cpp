/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/MarketplaceMeteringClientConfiguration.h>

namespace Aws {
namespace MarketplaceMetering {

void MarketplaceMeteringClientConfiguration::LoadMarketplaceMeteringSpecificConfig(const Aws::String& inputProfileName) {
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

MarketplaceMeteringClientConfiguration::MarketplaceMeteringClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMarketplaceMeteringSpecificConfig(this->profileName);
}

MarketplaceMeteringClientConfiguration::MarketplaceMeteringClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMarketplaceMeteringSpecificConfig(Aws::String(inputProfileName));
}

MarketplaceMeteringClientConfiguration::MarketplaceMeteringClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMarketplaceMeteringSpecificConfig(this->profileName);
}

MarketplaceMeteringClientConfiguration::MarketplaceMeteringClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMarketplaceMeteringSpecificConfig(this->profileName);
}

}  // namespace MarketplaceMetering
}  // namespace Aws
