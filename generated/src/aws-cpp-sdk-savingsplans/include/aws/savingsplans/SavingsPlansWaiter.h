/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/savingsplans/SavingsPlansClient.h>

#include <algorithm>

namespace Aws {
namespace SavingsPlans {

template <typename DerivedClient = SavingsPlansClient>
class SavingsPlansWaiter {
 public:
};
}  // namespace SavingsPlans
}  // namespace Aws
