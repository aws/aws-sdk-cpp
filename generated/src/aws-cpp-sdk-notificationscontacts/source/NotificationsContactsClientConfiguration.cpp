/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notificationscontacts/NotificationsContactsClientConfiguration.h>

namespace Aws {
namespace NotificationsContacts {

void NotificationsContactsClientConfiguration::LoadNotificationsContactsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

NotificationsContactsClientConfiguration::NotificationsContactsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNotificationsContactsSpecificConfig(this->profileName);
}

NotificationsContactsClientConfiguration::NotificationsContactsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNotificationsContactsSpecificConfig(Aws::String(inputProfileName));
}

NotificationsContactsClientConfiguration::NotificationsContactsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNotificationsContactsSpecificConfig(this->profileName);
}

NotificationsContactsClientConfiguration::NotificationsContactsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNotificationsContactsSpecificConfig(this->profileName);
}

}  // namespace NotificationsContacts
}  // namespace Aws
