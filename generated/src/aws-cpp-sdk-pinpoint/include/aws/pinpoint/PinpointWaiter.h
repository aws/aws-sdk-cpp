/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pinpoint/PinpointClient.h>

#include <algorithm>

namespace Aws {
namespace Pinpoint {

template <typename DerivedClient = PinpointClient>
class PinpointWaiter {
 public:
};
}  // namespace Pinpoint
}  // namespace Aws
