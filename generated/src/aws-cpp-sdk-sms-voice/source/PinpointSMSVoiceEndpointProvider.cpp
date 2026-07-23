/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/PinpointSMSVoiceEndpointProvider.h>
#include <aws/sms-voice/internal/PinpointSMSVoiceEndpointRules.h>

namespace Aws {
namespace PinpointSMSVoice {
namespace Endpoint {
PinpointSMSVoiceEndpointProvider::PinpointSMSVoiceEndpointProvider()
    : PinpointSMSVoiceDefaultEpProviderBase(Aws::PinpointSMSVoice::PinpointSMSVoiceEndpointRules::GetRulesBlob(),
                                            Aws::PinpointSMSVoice::PinpointSMSVoiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PinpointSMSVoice
}  // namespace Aws
