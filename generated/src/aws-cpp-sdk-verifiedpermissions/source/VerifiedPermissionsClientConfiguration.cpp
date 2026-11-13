/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/VerifiedPermissionsClientConfiguration.h>

namespace Aws {
namespace VerifiedPermissions {

void VerifiedPermissionsClientConfiguration::LoadVerifiedPermissionsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const VerifiedPermissionsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace VerifiedPermissions
}  // namespace Aws
