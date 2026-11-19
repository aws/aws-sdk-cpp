/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/SSOAdminClientConfiguration.h>

namespace Aws {
namespace SSOAdmin {

void SSOAdminClientConfiguration::LoadSSOAdminSpecificConfig(const Aws::String& inputProfileName) {
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

SSOAdminClientConfiguration::SSOAdminClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSSOAdminSpecificConfig(this->profileName);
}

SSOAdminClientConfiguration::SSOAdminClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSSOAdminSpecificConfig(Aws::String(inputProfileName));
}

SSOAdminClientConfiguration::SSOAdminClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSSOAdminSpecificConfig(this->profileName);
}

SSOAdminClientConfiguration::SSOAdminClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSSOAdminSpecificConfig(this->profileName);
}

}  // namespace SSOAdmin
}  // namespace Aws
