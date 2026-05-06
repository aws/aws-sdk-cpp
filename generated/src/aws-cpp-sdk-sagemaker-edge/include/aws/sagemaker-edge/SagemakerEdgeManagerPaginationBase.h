/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SagemakerEdgeManager {

template <typename DerivedClient>
class SagemakerEdgeManagerPaginationBase {
 public:
  virtual ~SagemakerEdgeManagerPaginationBase() = default;
};
}  // namespace SagemakerEdgeManager
}  // namespace Aws
