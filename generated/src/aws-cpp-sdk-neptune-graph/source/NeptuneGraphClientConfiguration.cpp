/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/NeptuneGraphClientConfiguration.h>

namespace Aws {
namespace NeptuneGraph {

void NeptuneGraphClientConfiguration::LoadNeptuneGraphSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

NeptuneGraphClientConfiguration::NeptuneGraphClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNeptuneGraphSpecificConfig(this->profileName);
}

NeptuneGraphClientConfiguration::NeptuneGraphClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNeptuneGraphSpecificConfig(Aws::String(inputProfileName));
}

NeptuneGraphClientConfiguration::NeptuneGraphClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNeptuneGraphSpecificConfig(this->profileName);
}

NeptuneGraphClientConfiguration::NeptuneGraphClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNeptuneGraphSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const NeptuneGraphClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace NeptuneGraph
}  // namespace Aws
