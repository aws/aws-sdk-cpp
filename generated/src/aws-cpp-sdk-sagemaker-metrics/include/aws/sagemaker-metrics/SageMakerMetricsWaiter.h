/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-metrics/SageMakerMetricsClient.h>

#include <algorithm>

namespace Aws {
namespace SageMakerMetrics {

template <typename DerivedClient = SageMakerMetricsClient>
class SageMakerMetricsWaiter {
 public:
};
}  // namespace SageMakerMetrics
}  // namespace Aws
