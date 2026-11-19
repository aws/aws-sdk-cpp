/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-deployment/MarketplaceDeploymentClientConfiguration.h>

namespace Aws {
namespace MarketplaceDeployment {

void MarketplaceDeploymentClientConfiguration::LoadMarketplaceDeploymentSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace MarketplaceDeployment
}  // namespace Aws
