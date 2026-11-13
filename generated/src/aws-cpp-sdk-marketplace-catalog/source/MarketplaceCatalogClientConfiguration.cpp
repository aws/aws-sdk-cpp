/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/MarketplaceCatalogClientConfiguration.h>

namespace Aws {
namespace MarketplaceCatalog {

void MarketplaceCatalogClientConfiguration::LoadMarketplaceCatalogSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MarketplaceCatalogClientConfiguration::MarketplaceCatalogClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMarketplaceCatalogSpecificConfig(this->profileName);
}

MarketplaceCatalogClientConfiguration::MarketplaceCatalogClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMarketplaceCatalogSpecificConfig(Aws::String(inputProfileName));
}

MarketplaceCatalogClientConfiguration::MarketplaceCatalogClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMarketplaceCatalogSpecificConfig(this->profileName);
}

MarketplaceCatalogClientConfiguration::MarketplaceCatalogClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMarketplaceCatalogSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MarketplaceCatalogClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MarketplaceCatalog
}  // namespace Aws
