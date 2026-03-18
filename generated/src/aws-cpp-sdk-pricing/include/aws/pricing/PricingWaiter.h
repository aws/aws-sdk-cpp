/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pricing/PricingClient.h>

#include <algorithm>

namespace Aws {
namespace Pricing {

template <typename DerivedClient = PricingClient>
class PricingWaiter {
 public:
};
}  // namespace Pricing
}  // namespace Aws
