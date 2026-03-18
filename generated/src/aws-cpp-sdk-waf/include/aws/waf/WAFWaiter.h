/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/waf/WAFClient.h>

#include <algorithm>

namespace Aws {
namespace WAF {

template <typename DerivedClient = WAFClient>
class WAFWaiter {
 public:
};
}  // namespace WAF
}  // namespace Aws
