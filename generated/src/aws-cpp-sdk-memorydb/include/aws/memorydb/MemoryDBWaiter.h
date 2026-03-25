/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/memorydb/MemoryDBClient.h>

#include <algorithm>

namespace Aws {
namespace MemoryDB {

template <typename DerivedClient = MemoryDBClient>
class MemoryDBWaiter {
 public:
};
}  // namespace MemoryDB
}  // namespace Aws
