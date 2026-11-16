/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeClient.h>

#include <algorithm>

namespace Aws {
namespace SageMakerInferenceRouterRuntime {

template <typename DerivedClient = SageMakerInferenceRouterRuntimeClient>
class SageMakerInferenceRouterRuntimeWaiter {
 public:
};
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
