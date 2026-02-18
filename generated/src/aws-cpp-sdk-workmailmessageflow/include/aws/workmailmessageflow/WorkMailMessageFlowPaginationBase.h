/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace WorkMailMessageFlow {

class WorkMailMessageFlowClient;

template <typename DerivedClient>
class WorkMailMessageFlowPaginationBase {
 public:
  virtual ~WorkMailMessageFlowPaginationBase() = default;
};
}  // namespace WorkMailMessageFlow
}  // namespace Aws
