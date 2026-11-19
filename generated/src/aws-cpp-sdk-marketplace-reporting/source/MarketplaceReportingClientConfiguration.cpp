/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-reporting/MarketplaceReportingClientConfiguration.h>

namespace Aws {
namespace MarketplaceReporting {

void MarketplaceReportingClientConfiguration::LoadMarketplaceReportingSpecificConfig(const Aws::String& inputProfileName) {
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

MarketplaceReportingClientConfiguration::MarketplaceReportingClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMarketplaceReportingSpecificConfig(this->profileName);
}

MarketplaceReportingClientConfiguration::MarketplaceReportingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMarketplaceReportingSpecificConfig(Aws::String(inputProfileName));
}

MarketplaceReportingClientConfiguration::MarketplaceReportingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMarketplaceReportingSpecificConfig(this->profileName);
}

MarketplaceReportingClientConfiguration::MarketplaceReportingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMarketplaceReportingSpecificConfig(this->profileName);
}

}  // namespace MarketplaceReporting
}  // namespace Aws
