/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa-serverless/MWAAServerlessClientConfiguration.h>

namespace Aws {
namespace MWAAServerless {

void MWAAServerlessClientConfiguration::LoadMWAAServerlessSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MWAAServerlessClientConfiguration::MWAAServerlessClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMWAAServerlessSpecificConfig(this->profileName);
}

MWAAServerlessClientConfiguration::MWAAServerlessClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMWAAServerlessSpecificConfig(Aws::String(inputProfileName));
}

MWAAServerlessClientConfiguration::MWAAServerlessClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMWAAServerlessSpecificConfig(this->profileName);
}

MWAAServerlessClientConfiguration::MWAAServerlessClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMWAAServerlessSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MWAAServerlessClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MWAAServerless
}  // namespace Aws
