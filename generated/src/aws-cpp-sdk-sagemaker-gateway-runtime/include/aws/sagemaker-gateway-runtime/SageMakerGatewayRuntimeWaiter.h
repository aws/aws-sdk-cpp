/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeClient.h>

#include <algorithm>

namespace Aws {
namespace SageMakerGatewayRuntime {

template <typename DerivedClient = SageMakerGatewayRuntimeClient>
class SageMakerGatewayRuntimeWaiter {
 public:
};
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
