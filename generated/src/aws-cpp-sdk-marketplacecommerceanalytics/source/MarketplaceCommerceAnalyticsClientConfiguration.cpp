/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClientConfiguration.h>

namespace Aws {
namespace MarketplaceCommerceAnalytics {

void MarketplaceCommerceAnalyticsClientConfiguration::LoadMarketplaceCommerceAnalyticsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MarketplaceCommerceAnalyticsClientConfiguration::MarketplaceCommerceAnalyticsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMarketplaceCommerceAnalyticsSpecificConfig(this->profileName);
}

MarketplaceCommerceAnalyticsClientConfiguration::MarketplaceCommerceAnalyticsClientConfiguration(const char* inputProfileName,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMarketplaceCommerceAnalyticsSpecificConfig(Aws::String(inputProfileName));
}

MarketplaceCommerceAnalyticsClientConfiguration::MarketplaceCommerceAnalyticsClientConfiguration(bool useSmartDefaults,
                                                                                                 const char* defaultMode,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMarketplaceCommerceAnalyticsSpecificConfig(this->profileName);
}

MarketplaceCommerceAnalyticsClientConfiguration::MarketplaceCommerceAnalyticsClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMarketplaceCommerceAnalyticsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MarketplaceCommerceAnalyticsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MarketplaceCommerceAnalytics
}  // namespace Aws
