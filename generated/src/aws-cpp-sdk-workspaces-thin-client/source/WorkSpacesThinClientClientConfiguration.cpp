/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/WorkSpacesThinClientClientConfiguration.h>

namespace Aws {
namespace WorkSpacesThinClient {

void WorkSpacesThinClientClientConfiguration::LoadWorkSpacesThinClientSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

WorkSpacesThinClientClientConfiguration::WorkSpacesThinClientClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadWorkSpacesThinClientSpecificConfig(this->profileName);
}

WorkSpacesThinClientClientConfiguration::WorkSpacesThinClientClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadWorkSpacesThinClientSpecificConfig(Aws::String(inputProfileName));
}

WorkSpacesThinClientClientConfiguration::WorkSpacesThinClientClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadWorkSpacesThinClientSpecificConfig(this->profileName);
}

WorkSpacesThinClientClientConfiguration::WorkSpacesThinClientClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadWorkSpacesThinClientSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const WorkSpacesThinClientClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace WorkSpacesThinClient
}  // namespace Aws
