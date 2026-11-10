/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2EndpointProvider.h>
#include <aws/pinpoint-sms-voice-v2/internal/PinpointSMSVoiceV2EndpointRules.h>

namespace Aws {
#ifndef AWS_PINPOINTSMSVOICEV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2ClientConfiguration,
                                                   PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2BuiltInParameters,
                                                   PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2ClientConfiguration,
                                                  PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2BuiltInParameters,
                                                  PinpointSMSVoiceV2::Endpoint::PinpointSMSVoiceV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PinpointSMSVoiceV2 {
namespace Endpoint {
PinpointSMSVoiceV2EndpointProvider::PinpointSMSVoiceV2EndpointProvider()
    : PinpointSMSVoiceV2DefaultEpProviderBase(Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2EndpointRules::GetRulesBlob(),
                                              Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2EndpointRules::RulesBlobSize) {}

void PinpointSMSVoiceV2BuiltInParameters::SetFromClientConfiguration(const PinpointSMSVoiceV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PinpointSMSVoiceV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PinpointSMSVoiceV2BuiltInParameters::SetFromClientConfiguration(const PinpointSMSVoiceV2ClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PinpointSMSVoiceV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PinpointSMSVoiceV2BuiltInParameters::SetServiceSpecificParameters(const PinpointSMSVoiceV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
