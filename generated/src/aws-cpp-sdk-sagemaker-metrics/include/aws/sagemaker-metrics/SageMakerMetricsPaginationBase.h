/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SageMakerMetrics {

template <typename DerivedClient>
class SageMakerMetricsPaginationBase {
 public:
  virtual ~SageMakerMetricsPaginationBase() = default;
};
}  // namespace SageMakerMetrics
}  // namespace Aws
