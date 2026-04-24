/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/vpc-lattice/VPCLatticeClient.h>

#include <algorithm>

namespace Aws {
namespace VPCLattice {

template <typename DerivedClient = VPCLatticeClient>
class VPCLatticeWaiter {
 public:
};
}  // namespace VPCLattice
}  // namespace Aws
