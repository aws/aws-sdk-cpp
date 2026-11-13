/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/MPAClientConfiguration.h>

namespace Aws {
namespace MPA {

void MPAClientConfiguration::LoadMPASpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MPAClientConfiguration::MPAClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMPASpecificConfig(this->profileName);
}

MPAClientConfiguration::MPAClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMPASpecificConfig(Aws::String(inputProfileName));
}

MPAClientConfiguration::MPAClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMPASpecificConfig(this->profileName);
}

MPAClientConfiguration::MPAClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadMPASpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MPAClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MPA
}  // namespace Aws
