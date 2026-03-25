/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClient.h>

#include <algorithm>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {

template <typename DerivedClient = SageMakerFeatureStoreRuntimeClient>
class SageMakerFeatureStoreRuntimeWaiter {
 public:
};
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
