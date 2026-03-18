/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/shield/ShieldClient.h>

#include <algorithm>

namespace Aws {
namespace Shield {

template <typename DerivedClient = ShieldClient>
class ShieldWaiter {
 public:
};
}  // namespace Shield
}  // namespace Aws
