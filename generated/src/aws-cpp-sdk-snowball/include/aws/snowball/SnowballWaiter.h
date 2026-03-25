/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/snowball/SnowballClient.h>

#include <algorithm>

namespace Aws {
namespace Snowball {

template <typename DerivedClient = SnowballClient>
class SnowballWaiter {
 public:
};
}  // namespace Snowball
}  // namespace Aws
