/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pinpoint-email/PinpointEmailClient.h>

#include <algorithm>

namespace Aws {
namespace PinpointEmail {

template <typename DerivedClient = PinpointEmailClient>
class PinpointEmailWaiter {
 public:
};
}  // namespace PinpointEmail
}  // namespace Aws
