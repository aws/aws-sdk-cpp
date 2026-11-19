/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/WorkSpacesClientConfiguration.h>

namespace Aws {
namespace WorkSpaces {

void WorkSpacesClientConfiguration::LoadWorkSpacesSpecificConfig(const Aws::String& inputProfileName) {
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

WorkSpacesClientConfiguration::WorkSpacesClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadWorkSpacesSpecificConfig(this->profileName);
}

WorkSpacesClientConfiguration::WorkSpacesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadWorkSpacesSpecificConfig(Aws::String(inputProfileName));
}

WorkSpacesClientConfiguration::WorkSpacesClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadWorkSpacesSpecificConfig(this->profileName);
}

WorkSpacesClientConfiguration::WorkSpacesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadWorkSpacesSpecificConfig(this->profileName);
}

}  // namespace WorkSpaces
}  // namespace Aws
