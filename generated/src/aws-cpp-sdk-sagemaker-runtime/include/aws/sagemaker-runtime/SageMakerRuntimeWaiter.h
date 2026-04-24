/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeClient.h>

#include <algorithm>

namespace Aws {
namespace SageMakerRuntime {

template <typename DerivedClient = SageMakerRuntimeClient>
class SageMakerRuntimeWaiter {
 public:
};
}  // namespace SageMakerRuntime
}  // namespace Aws
