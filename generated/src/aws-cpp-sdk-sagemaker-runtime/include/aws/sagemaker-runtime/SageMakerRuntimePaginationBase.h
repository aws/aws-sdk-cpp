/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SageMakerRuntime {

class SageMakerRuntimeClient;

template <typename DerivedClient>
class SageMakerRuntimePaginationBase {
 public:
  virtual ~SageMakerRuntimePaginationBase() = default;
};
}  // namespace SageMakerRuntime
}  // namespace Aws
