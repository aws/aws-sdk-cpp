/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/wafv2/WAFV2Client.h>

#include <algorithm>

namespace Aws {
namespace WAFV2 {

template <typename DerivedClient = WAFV2Client>
class WAFV2Waiter {
 public:
};
}  // namespace WAFV2
}  // namespace Aws
