/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/QAppsClientConfiguration.h>

namespace Aws {
namespace QApps {

void QAppsClientConfiguration::LoadQAppsSpecificConfig(const Aws::String& inputProfileName) {
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

QAppsClientConfiguration::QAppsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadQAppsSpecificConfig(this->profileName);
}

QAppsClientConfiguration::QAppsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadQAppsSpecificConfig(Aws::String(inputProfileName));
}

QAppsClientConfiguration::QAppsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadQAppsSpecificConfig(this->profileName);
}

QAppsClientConfiguration::QAppsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadQAppsSpecificConfig(this->profileName);
}

}  // namespace QApps
}  // namespace Aws
