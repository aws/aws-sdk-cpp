/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/wellarchitected/WellArchitectedClient.h>

#include <algorithm>

namespace Aws {
namespace WellArchitected {

template <typename DerivedClient = WellArchitectedClient>
class WellArchitectedWaiter {
 public:
};
}  // namespace WellArchitected
}  // namespace Aws
