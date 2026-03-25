/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryClient.h>

#include <algorithm>

namespace Aws {
namespace ManagedBlockchainQuery {

template <typename DerivedClient = ManagedBlockchainQueryClient>
class ManagedBlockchainQueryWaiter {
 public:
};
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
