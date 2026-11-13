/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/PcaConnectorAdClientConfiguration.h>

namespace Aws {
namespace PcaConnectorAd {

void PcaConnectorAdClientConfiguration::LoadPcaConnectorAdSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PcaConnectorAdClientConfiguration::PcaConnectorAdClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPcaConnectorAdSpecificConfig(this->profileName);
}

PcaConnectorAdClientConfiguration::PcaConnectorAdClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPcaConnectorAdSpecificConfig(Aws::String(inputProfileName));
}

PcaConnectorAdClientConfiguration::PcaConnectorAdClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPcaConnectorAdSpecificConfig(this->profileName);
}

PcaConnectorAdClientConfiguration::PcaConnectorAdClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPcaConnectorAdSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PcaConnectorAdClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PcaConnectorAd
}  // namespace Aws
