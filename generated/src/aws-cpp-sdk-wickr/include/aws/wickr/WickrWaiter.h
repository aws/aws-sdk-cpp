/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/wickr/WickrClient.h>

#include <algorithm>

namespace Aws {
namespace Wickr {

template <typename DerivedClient = WickrClient>
class WickrWaiter {
 public:
};
}  // namespace Wickr
}  // namespace Aws
