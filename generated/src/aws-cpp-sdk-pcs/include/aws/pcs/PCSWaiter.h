/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pcs/PCSClient.h>

#include <algorithm>

namespace Aws {
namespace PCS {

template <typename DerivedClient = PCSClient>
class PCSWaiter {
 public:
};
}  // namespace PCS
}  // namespace Aws
