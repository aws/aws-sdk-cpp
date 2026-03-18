/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/rum/CloudWatchRUMClient.h>

#include <algorithm>

namespace Aws {
namespace CloudWatchRUM {

template <typename DerivedClient = CloudWatchRUMClient>
class CloudWatchRUMWaiter {
 public:
};
}  // namespace CloudWatchRUM
}  // namespace Aws
