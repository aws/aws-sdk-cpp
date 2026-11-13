/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/VoiceIDEndpointProvider.h>
#include <aws/voice-id/internal/VoiceIDEndpointRules.h>

namespace Aws {
#ifndef AWS_VOICEID_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<VoiceID::Endpoint::VoiceIDClientConfiguration,
                                                   VoiceID::Endpoint::VoiceIDBuiltInParameters,
                                                   VoiceID::Endpoint::VoiceIDClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<VoiceID::Endpoint::VoiceIDClientConfiguration,
                                                  VoiceID::Endpoint::VoiceIDBuiltInParameters,
                                                  VoiceID::Endpoint::VoiceIDClientContextParameters>;
}  // namespace Endpoint
#endif

namespace VoiceID {
namespace Endpoint {
VoiceIDEndpointProvider::VoiceIDEndpointProvider()
    : VoiceIDDefaultEpProviderBase(Aws::VoiceID::VoiceIDEndpointRules::GetRulesBlob(), Aws::VoiceID::VoiceIDEndpointRules::RulesBlobSize) {}

void VoiceIDBuiltInParameters::SetFromClientConfiguration(const VoiceIDClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const VoiceIDClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void VoiceIDBuiltInParameters::SetFromClientConfiguration(const VoiceIDClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const VoiceIDClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void VoiceIDBuiltInParameters::SetServiceSpecificParameters(const VoiceIDClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace VoiceID
}  // namespace Aws
