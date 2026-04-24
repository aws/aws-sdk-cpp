/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Client.h>

#include <algorithm>

namespace Aws {
namespace PinpointSMSVoiceV2 {

template <typename DerivedClient = PinpointSMSVoiceV2Client>
class PinpointSMSVoiceV2Waiter {
 public:
};
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
