/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notificationscontacts/NotificationsContactsClientConfiguration.h>

namespace Aws {
namespace NotificationsContacts {

void NotificationsContactsClientConfiguration::LoadNotificationsContactsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const NotificationsContactsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace NotificationsContacts
}  // namespace Aws
