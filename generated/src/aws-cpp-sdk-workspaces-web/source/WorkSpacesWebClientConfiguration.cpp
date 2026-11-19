/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/WorkSpacesWebClientConfiguration.h>

namespace Aws {
namespace WorkSpacesWeb {

void WorkSpacesWebClientConfiguration::LoadWorkSpacesWebSpecificConfig(const Aws::String& inputProfileName) {
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

WorkSpacesWebClientConfiguration::WorkSpacesWebClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadWorkSpacesWebSpecificConfig(this->profileName);
}

WorkSpacesWebClientConfiguration::WorkSpacesWebClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadWorkSpacesWebSpecificConfig(Aws::String(inputProfileName));
}

WorkSpacesWebClientConfiguration::WorkSpacesWebClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadWorkSpacesWebSpecificConfig(this->profileName);
}

WorkSpacesWebClientConfiguration::WorkSpacesWebClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadWorkSpacesWebSpecificConfig(this->profileName);
}

}  // namespace WorkSpacesWeb
}  // namespace Aws
