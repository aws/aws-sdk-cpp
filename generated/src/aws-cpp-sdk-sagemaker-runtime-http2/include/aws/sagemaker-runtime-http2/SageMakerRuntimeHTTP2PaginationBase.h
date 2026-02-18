/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {

class SageMakerRuntimeHTTP2Client;

template <typename DerivedClient>
class SageMakerRuntimeHTTP2PaginationBase {
 public:
  virtual ~SageMakerRuntimeHTTP2PaginationBase() = default;
};
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
