/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-deployment/MarketplaceDeploymentClientConfiguration.h>

namespace Aws {
namespace MarketplaceDeployment {

void MarketplaceDeploymentClientConfiguration::LoadMarketplaceDeploymentSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MarketplaceDeploymentClientConfiguration::MarketplaceDeploymentClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMarketplaceDeploymentSpecificConfig(this->profileName);
}

MarketplaceDeploymentClientConfiguration::MarketplaceDeploymentClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMarketplaceDeploymentSpecificConfig(Aws::String(inputProfileName));
}

MarketplaceDeploymentClientConfiguration::MarketplaceDeploymentClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMarketplaceDeploymentSpecificConfig(this->profileName);
}

MarketplaceDeploymentClientConfiguration::MarketplaceDeploymentClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMarketplaceDeploymentSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MarketplaceDeploymentClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MarketplaceDeployment
}  // namespace Aws
