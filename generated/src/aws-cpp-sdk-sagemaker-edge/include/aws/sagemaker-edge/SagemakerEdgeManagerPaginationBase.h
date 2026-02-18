/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SagemakerEdgeManager {

class SagemakerEdgeManagerClient;

template <typename DerivedClient>
class SagemakerEdgeManagerPaginationBase {
 public:
  virtual ~SagemakerEdgeManagerPaginationBase() = default;
};
}  // namespace SagemakerEdgeManager
}  // namespace Aws
