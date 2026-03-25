/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/voice-id/VoiceIDClient.h>

#include <algorithm>

namespace Aws {
namespace VoiceID {

template <typename DerivedClient = VoiceIDClient>
class VoiceIDWaiter {
 public:
};
}  // namespace VoiceID
}  // namespace Aws
