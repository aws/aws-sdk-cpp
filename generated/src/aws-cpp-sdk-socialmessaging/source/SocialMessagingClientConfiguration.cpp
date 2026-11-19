/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/SocialMessagingClientConfiguration.h>

namespace Aws {
namespace SocialMessaging {

void SocialMessagingClientConfiguration::LoadSocialMessagingSpecificConfig(const Aws::String& inputProfileName) {
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

SocialMessagingClientConfiguration::SocialMessagingClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSocialMessagingSpecificConfig(this->profileName);
}

SocialMessagingClientConfiguration::SocialMessagingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSocialMessagingSpecificConfig(Aws::String(inputProfileName));
}

SocialMessagingClientConfiguration::SocialMessagingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSocialMessagingSpecificConfig(this->profileName);
}

SocialMessagingClientConfiguration::SocialMessagingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSocialMessagingSpecificConfig(this->profileName);
}

}  // namespace SocialMessaging
}  // namespace Aws
