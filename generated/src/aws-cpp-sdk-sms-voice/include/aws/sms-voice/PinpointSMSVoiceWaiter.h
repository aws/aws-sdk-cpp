/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sms-voice/PinpointSMSVoiceClient.h>

#include <algorithm>

namespace Aws {
namespace PinpointSMSVoice {

template <typename DerivedClient = PinpointSMSVoiceClient>
class PinpointSMSVoiceWaiter {
 public:
};
}  // namespace PinpointSMSVoice
}  // namespace Aws
