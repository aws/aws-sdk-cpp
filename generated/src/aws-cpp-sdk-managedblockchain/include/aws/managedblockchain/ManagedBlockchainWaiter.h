/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/managedblockchain/ManagedBlockchainClient.h>

#include <algorithm>

namespace Aws {
namespace ManagedBlockchain {

template <typename DerivedClient = ManagedBlockchainClient>
class ManagedBlockchainWaiter {
 public:
};
}  // namespace ManagedBlockchain
}  // namespace Aws
