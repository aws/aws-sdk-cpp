/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ClientConfiguration.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {

void PinpointSMSVoiceV2ClientConfiguration::LoadPinpointSMSVoiceV2SpecificConfig(const Aws::String& inputProfileName) {
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

PinpointSMSVoiceV2ClientConfiguration::PinpointSMSVoiceV2ClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPinpointSMSVoiceV2SpecificConfig(this->profileName);
}

PinpointSMSVoiceV2ClientConfiguration::PinpointSMSVoiceV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPinpointSMSVoiceV2SpecificConfig(Aws::String(inputProfileName));
}

PinpointSMSVoiceV2ClientConfiguration::PinpointSMSVoiceV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPinpointSMSVoiceV2SpecificConfig(this->profileName);
}

PinpointSMSVoiceV2ClientConfiguration::PinpointSMSVoiceV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPinpointSMSVoiceV2SpecificConfig(this->profileName);
}

}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
