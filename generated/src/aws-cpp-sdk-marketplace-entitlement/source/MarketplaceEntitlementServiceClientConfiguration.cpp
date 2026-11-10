/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceClientConfiguration.h>

namespace Aws {
namespace MarketplaceEntitlementService {

void MarketplaceEntitlementServiceClientConfiguration::LoadMarketplaceEntitlementServiceSpecificConfig(
    const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MarketplaceEntitlementServiceClientConfiguration::MarketplaceEntitlementServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMarketplaceEntitlementServiceSpecificConfig(this->profileName);
}

MarketplaceEntitlementServiceClientConfiguration::MarketplaceEntitlementServiceClientConfiguration(const char* inputProfileName,
                                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMarketplaceEntitlementServiceSpecificConfig(Aws::String(inputProfileName));
}

MarketplaceEntitlementServiceClientConfiguration::MarketplaceEntitlementServiceClientConfiguration(bool useSmartDefaults,
                                                                                                   const char* defaultMode,
                                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMarketplaceEntitlementServiceSpecificConfig(this->profileName);
}

MarketplaceEntitlementServiceClientConfiguration::MarketplaceEntitlementServiceClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMarketplaceEntitlementServiceSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MarketplaceEntitlementServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MarketplaceEntitlementService
}  // namespace Aws
