/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/SavingsPlansClientConfiguration.h>

namespace Aws {
namespace SavingsPlans {

void SavingsPlansClientConfiguration::LoadSavingsPlansSpecificConfig(const Aws::String& inputProfileName) {
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

SavingsPlansClientConfiguration::SavingsPlansClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSavingsPlansSpecificConfig(this->profileName);
}

SavingsPlansClientConfiguration::SavingsPlansClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSavingsPlansSpecificConfig(Aws::String(inputProfileName));
}

SavingsPlansClientConfiguration::SavingsPlansClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSavingsPlansSpecificConfig(this->profileName);
}

SavingsPlansClientConfiguration::SavingsPlansClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSavingsPlansSpecificConfig(this->profileName);
}

}  // namespace SavingsPlans
}  // namespace Aws
