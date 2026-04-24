/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClient.h>

#include <algorithm>

namespace Aws {
namespace AugmentedAIRuntime {

template <typename DerivedClient = AugmentedAIRuntimeClient>
class AugmentedAIRuntimeWaiter {
 public:
};
}  // namespace AugmentedAIRuntime
}  // namespace Aws
