/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/VoiceIDEndpointProvider.h>
#include <aws/voice-id/internal/VoiceIDEndpointRules.h>

namespace Aws {
namespace VoiceID {
namespace Endpoint {
VoiceIDEndpointProvider::VoiceIDEndpointProvider()
    : VoiceIDDefaultEpProviderBase(Aws::VoiceID::VoiceIDEndpointRules::GetRulesBlob(), Aws::VoiceID::VoiceIDEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace VoiceID
}  // namespace Aws
