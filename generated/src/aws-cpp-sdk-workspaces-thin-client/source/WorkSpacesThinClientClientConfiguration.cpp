/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/WorkSpacesThinClientClientConfiguration.h>

namespace Aws {
namespace WorkSpacesThinClient {

void WorkSpacesThinClientClientConfiguration::LoadWorkSpacesThinClientSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace WorkSpacesThinClient
}  // namespace Aws
