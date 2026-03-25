/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/synthetics/SyntheticsClient.h>

#include <algorithm>

namespace Aws {
namespace Synthetics {

template <typename DerivedClient = SyntheticsClient>
class SyntheticsWaiter {
 public:
};
}  // namespace Synthetics
}  // namespace Aws
