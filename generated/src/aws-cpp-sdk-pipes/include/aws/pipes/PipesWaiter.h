/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pipes/PipesClient.h>

#include <algorithm>

namespace Aws {
namespace Pipes {

template <typename DerivedClient = PipesClient>
class PipesWaiter {
 public:
};
}  // namespace Pipes
}  // namespace Aws
