/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-discovery/MarketplaceDiscoveryClientConfiguration.h>
#include <smithy/identity/signer/built-in/SigV4aSigningRegionSet.h>

namespace Aws {
namespace MarketplaceDiscovery {

void MarketplaceDiscoveryClientConfiguration::LoadMarketplaceDiscoverySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  sigV4aSigningRegionSet = Aws::Client::LoadSigV4aSigningRegionSetFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MarketplaceDiscoveryClientConfiguration::MarketplaceDiscoveryClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMarketplaceDiscoverySpecificConfig(this->profileName);
}

MarketplaceDiscoveryClientConfiguration::MarketplaceDiscoveryClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMarketplaceDiscoverySpecificConfig(Aws::String(inputProfileName));
}

MarketplaceDiscoveryClientConfiguration::MarketplaceDiscoveryClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMarketplaceDiscoverySpecificConfig(this->profileName);
}

MarketplaceDiscoveryClientConfiguration::MarketplaceDiscoveryClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMarketplaceDiscoverySpecificConfig(this->profileName);
}

}  // namespace MarketplaceDiscovery
}  // namespace Aws
