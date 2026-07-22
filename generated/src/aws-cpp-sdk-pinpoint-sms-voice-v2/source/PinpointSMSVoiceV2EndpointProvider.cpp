/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2EndpointProvider.h>
#include <aws/pinpoint-sms-voice-v2/internal/PinpointSMSVoiceV2EndpointRules.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Endpoint {
PinpointSMSVoiceV2EndpointProvider::PinpointSMSVoiceV2EndpointProvider()
    : PinpointSMSVoiceV2DefaultEpProviderBase(Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2EndpointRules::GetRulesBlob(),
                                              Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
