/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pi/PIClient.h>

#include <algorithm>

namespace Aws {
namespace PI {

template <typename DerivedClient = PIClient>
class PIWaiter {
 public:
};
}  // namespace PI
}  // namespace Aws
