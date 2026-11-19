/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/PinpointSMSVoiceEndpointProvider.h>
#include <aws/sms-voice/internal/PinpointSMSVoiceEndpointRules.h>

namespace Aws {
#ifndef AWS_PINPOINTSMSVOICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientConfiguration,
                                                   PinpointSMSVoice::Endpoint::PinpointSMSVoiceBuiltInParameters,
                                                   PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientConfiguration,
                                                  PinpointSMSVoice::Endpoint::PinpointSMSVoiceBuiltInParameters,
                                                  PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PinpointSMSVoice {
namespace Endpoint {
PinpointSMSVoiceEndpointProvider::PinpointSMSVoiceEndpointProvider()
    : PinpointSMSVoiceDefaultEpProviderBase(Aws::PinpointSMSVoice::PinpointSMSVoiceEndpointRules::GetRulesBlob(),
                                            Aws::PinpointSMSVoice::PinpointSMSVoiceEndpointRules::RulesBlobSize) {}

void PinpointSMSVoiceBuiltInParameters::SetFromClientConfiguration(const PinpointSMSVoiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PinpointSMSVoiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PinpointSMSVoiceBuiltInParameters::SetFromClientConfiguration(const PinpointSMSVoiceClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PinpointSMSVoiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PinpointSMSVoiceBuiltInParameters::SetServiceSpecificParameters(const PinpointSMSVoiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PinpointSMSVoice
}  // namespace Aws
