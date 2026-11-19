/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/WAFRegionalClientConfiguration.h>

namespace Aws {
namespace WAFRegional {

void WAFRegionalClientConfiguration::LoadWAFRegionalSpecificConfig(const Aws::String& inputProfileName) {
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

WAFRegionalClientConfiguration::WAFRegionalClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadWAFRegionalSpecificConfig(this->profileName);
}

WAFRegionalClientConfiguration::WAFRegionalClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadWAFRegionalSpecificConfig(Aws::String(inputProfileName));
}

WAFRegionalClientConfiguration::WAFRegionalClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadWAFRegionalSpecificConfig(this->profileName);
}

WAFRegionalClientConfiguration::WAFRegionalClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadWAFRegionalSpecificConfig(this->profileName);
}

}  // namespace WAFRegional
}  // namespace Aws
