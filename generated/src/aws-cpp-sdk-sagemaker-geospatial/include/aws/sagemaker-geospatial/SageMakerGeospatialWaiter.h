/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialClient.h>

#include <algorithm>

namespace Aws {
namespace SageMakerGeospatial {

template <typename DerivedClient = SageMakerGeospatialClient>
class SageMakerGeospatialWaiter {
 public:
};
}  // namespace SageMakerGeospatial
}  // namespace Aws
