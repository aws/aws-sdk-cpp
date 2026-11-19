/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/PcaConnectorScepClientConfiguration.h>

namespace Aws {
namespace PcaConnectorScep {

void PcaConnectorScepClientConfiguration::LoadPcaConnectorScepSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace PcaConnectorScep
}  // namespace Aws
