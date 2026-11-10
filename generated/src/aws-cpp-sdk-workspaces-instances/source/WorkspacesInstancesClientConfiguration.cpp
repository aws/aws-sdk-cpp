/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/WorkspacesInstancesClientConfiguration.h>

namespace Aws {
namespace WorkspacesInstances {

void WorkspacesInstancesClientConfiguration::LoadWorkspacesInstancesSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

WorkspacesInstancesClientConfiguration::WorkspacesInstancesClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadWorkspacesInstancesSpecificConfig(this->profileName);
}

WorkspacesInstancesClientConfiguration::WorkspacesInstancesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadWorkspacesInstancesSpecificConfig(Aws::String(inputProfileName));
}

WorkspacesInstancesClientConfiguration::WorkspacesInstancesClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadWorkspacesInstancesSpecificConfig(this->profileName);
}

WorkspacesInstancesClientConfiguration::WorkspacesInstancesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadWorkspacesInstancesSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const WorkspacesInstancesClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace WorkspacesInstances
}  // namespace Aws
