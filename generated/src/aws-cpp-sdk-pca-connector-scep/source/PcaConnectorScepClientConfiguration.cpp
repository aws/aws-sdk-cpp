/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/PcaConnectorScepClientConfiguration.h>

namespace Aws {
namespace PcaConnectorScep {

void PcaConnectorScepClientConfiguration::LoadPcaConnectorScepSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PcaConnectorScepClientConfiguration::PcaConnectorScepClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPcaConnectorScepSpecificConfig(this->profileName);
}

PcaConnectorScepClientConfiguration::PcaConnectorScepClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPcaConnectorScepSpecificConfig(Aws::String(inputProfileName));
}

PcaConnectorScepClientConfiguration::PcaConnectorScepClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPcaConnectorScepSpecificConfig(this->profileName);
}

PcaConnectorScepClientConfiguration::PcaConnectorScepClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPcaConnectorScepSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PcaConnectorScepClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PcaConnectorScep
}  // namespace Aws
