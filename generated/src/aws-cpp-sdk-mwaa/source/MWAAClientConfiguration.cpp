/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/MWAAClientConfiguration.h>

namespace Aws {
namespace MWAA {

void MWAAClientConfiguration::LoadMWAASpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MWAAClientConfiguration::MWAAClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMWAASpecificConfig(this->profileName);
}

MWAAClientConfiguration::MWAAClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMWAASpecificConfig(Aws::String(inputProfileName));
}

MWAAClientConfiguration::MWAAClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMWAASpecificConfig(this->profileName);
}

MWAAClientConfiguration::MWAAClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMWAASpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MWAAClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MWAA
}  // namespace Aws
