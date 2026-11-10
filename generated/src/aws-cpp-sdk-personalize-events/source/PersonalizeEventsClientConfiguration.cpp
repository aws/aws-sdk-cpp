/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/PersonalizeEventsClientConfiguration.h>

namespace Aws {
namespace PersonalizeEvents {

void PersonalizeEventsClientConfiguration::LoadPersonalizeEventsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PersonalizeEventsClientConfiguration::PersonalizeEventsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPersonalizeEventsSpecificConfig(this->profileName);
}

PersonalizeEventsClientConfiguration::PersonalizeEventsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPersonalizeEventsSpecificConfig(Aws::String(inputProfileName));
}

PersonalizeEventsClientConfiguration::PersonalizeEventsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPersonalizeEventsSpecificConfig(this->profileName);
}

PersonalizeEventsClientConfiguration::PersonalizeEventsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPersonalizeEventsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PersonalizeEventsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PersonalizeEvents
}  // namespace Aws
