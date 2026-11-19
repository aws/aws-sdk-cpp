/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/ObservabilityAdminClientConfiguration.h>

namespace Aws {
namespace ObservabilityAdmin {

void ObservabilityAdminClientConfiguration::LoadObservabilityAdminSpecificConfig(const Aws::String& inputProfileName) {
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

ObservabilityAdminClientConfiguration::ObservabilityAdminClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadObservabilityAdminSpecificConfig(this->profileName);
}

ObservabilityAdminClientConfiguration::ObservabilityAdminClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadObservabilityAdminSpecificConfig(Aws::String(inputProfileName));
}

ObservabilityAdminClientConfiguration::ObservabilityAdminClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadObservabilityAdminSpecificConfig(this->profileName);
}

ObservabilityAdminClientConfiguration::ObservabilityAdminClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadObservabilityAdminSpecificConfig(this->profileName);
}

}  // namespace ObservabilityAdmin
}  // namespace Aws
