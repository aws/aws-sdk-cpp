/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/PinpointSMSVoiceClientConfiguration.h>

namespace Aws {
namespace PinpointSMSVoice {

void PinpointSMSVoiceClientConfiguration::LoadPinpointSMSVoiceSpecificConfig(const Aws::String& inputProfileName) {
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

PinpointSMSVoiceClientConfiguration::PinpointSMSVoiceClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPinpointSMSVoiceSpecificConfig(this->profileName);
}

PinpointSMSVoiceClientConfiguration::PinpointSMSVoiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPinpointSMSVoiceSpecificConfig(Aws::String(inputProfileName));
}

PinpointSMSVoiceClientConfiguration::PinpointSMSVoiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPinpointSMSVoiceSpecificConfig(this->profileName);
}

PinpointSMSVoiceClientConfiguration::PinpointSMSVoiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPinpointSMSVoiceSpecificConfig(this->profileName);
}

}  // namespace PinpointSMSVoice
}  // namespace Aws
