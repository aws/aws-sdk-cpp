/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ram/RAMClient.h>

#include <algorithm>

namespace Aws {
namespace RAM {

template <typename DerivedClient = RAMClient>
class RAMWaiter {
 public:
};
}  // namespace RAM
}  // namespace Aws
