/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {

template <typename DerivedClient>
class SageMakerTrainingSessionRuntimePaginationBase {
 public:
  virtual ~SageMakerTrainingSessionRuntimePaginationBase() = default;
};
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
