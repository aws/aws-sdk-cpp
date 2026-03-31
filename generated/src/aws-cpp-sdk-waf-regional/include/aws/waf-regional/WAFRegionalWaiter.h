/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/waf-regional/WAFRegionalClient.h>

#include <algorithm>

namespace Aws {
namespace WAFRegional {

template <typename DerivedClient = WAFRegionalClient>
class WAFRegionalWaiter {
 public:
};
}  // namespace WAFRegional
}  // namespace Aws
