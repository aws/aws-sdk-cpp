/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/resiliencehub/ResilienceHubClient.h>

#include <algorithm>

namespace Aws {
namespace ResilienceHub {

template <typename DerivedClient = ResilienceHubClient>
class ResilienceHubWaiter {
 public:
};
}  // namespace ResilienceHub
}  // namespace Aws
