/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/support/SupportClient.h>

#include <algorithm>

namespace Aws {
namespace Support {

template <typename DerivedClient = SupportClient>
class SupportWaiter {
 public:
};
}  // namespace Support
}  // namespace Aws
