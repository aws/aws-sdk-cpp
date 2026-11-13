/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sustainability/SustainabilityClientConfiguration.h>

namespace Aws {
namespace Sustainability {

void SustainabilityClientConfiguration::LoadSustainabilitySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  sigV4aSigningRegionSet = Aws::Client::LoadSigV4aSigningRegionSetFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SustainabilityClientConfiguration::SustainabilityClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSustainabilitySpecificConfig(this->profileName);
}

SustainabilityClientConfiguration::SustainabilityClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSustainabilitySpecificConfig(Aws::String(inputProfileName));
}

SustainabilityClientConfiguration::SustainabilityClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSustainabilitySpecificConfig(this->profileName);
}

SustainabilityClientConfiguration::SustainabilityClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSustainabilitySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SustainabilityClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.sigV4aSigningRegionSet = config.sigV4aSigningRegionSet;
  return options;
}

}  // namespace Sustainability
}  // namespace Aws
