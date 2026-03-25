/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/rbin/RecycleBinClient.h>

#include <algorithm>

namespace Aws {
namespace RecycleBin {

template <typename DerivedClient = RecycleBinClient>
class RecycleBinWaiter {
 public:
};
}  // namespace RecycleBin
}  // namespace Aws
