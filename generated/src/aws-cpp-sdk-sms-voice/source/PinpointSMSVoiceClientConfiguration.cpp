/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/PinpointSMSVoiceClientConfiguration.h>

namespace Aws {
namespace PinpointSMSVoice {

void PinpointSMSVoiceClientConfiguration::LoadPinpointSMSVoiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PinpointSMSVoiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PinpointSMSVoice
}  // namespace Aws
