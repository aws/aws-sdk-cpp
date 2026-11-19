/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/NotificationsClientConfiguration.h>

namespace Aws {
namespace Notifications {

void NotificationsClientConfiguration::LoadNotificationsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

NotificationsClientConfiguration::NotificationsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNotificationsSpecificConfig(this->profileName);
}

NotificationsClientConfiguration::NotificationsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNotificationsSpecificConfig(Aws::String(inputProfileName));
}

NotificationsClientConfiguration::NotificationsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNotificationsSpecificConfig(this->profileName);
}

NotificationsClientConfiguration::NotificationsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNotificationsSpecificConfig(this->profileName);
}

}  // namespace Notifications
}  // namespace Aws
