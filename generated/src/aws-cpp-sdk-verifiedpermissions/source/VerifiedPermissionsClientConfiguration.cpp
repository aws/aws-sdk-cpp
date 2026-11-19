/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/VerifiedPermissionsClientConfiguration.h>

namespace Aws {
namespace VerifiedPermissions {

void VerifiedPermissionsClientConfiguration::LoadVerifiedPermissionsSpecificConfig(const Aws::String& inputProfileName) {
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

VerifiedPermissionsClientConfiguration::VerifiedPermissionsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadVerifiedPermissionsSpecificConfig(this->profileName);
}

VerifiedPermissionsClientConfiguration::VerifiedPermissionsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadVerifiedPermissionsSpecificConfig(Aws::String(inputProfileName));
}

VerifiedPermissionsClientConfiguration::VerifiedPermissionsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadVerifiedPermissionsSpecificConfig(this->profileName);
}

VerifiedPermissionsClientConfiguration::VerifiedPermissionsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadVerifiedPermissionsSpecificConfig(this->profileName);
}

}  // namespace VerifiedPermissions
}  // namespace Aws
