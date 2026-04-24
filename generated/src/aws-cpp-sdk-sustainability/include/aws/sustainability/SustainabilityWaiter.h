/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sustainability/SustainabilityClient.h>

#include <algorithm>

namespace Aws {
namespace Sustainability {

template <typename DerivedClient = SustainabilityClient>
class SustainabilityWaiter {
 public:
};
}  // namespace Sustainability
}  // namespace Aws
