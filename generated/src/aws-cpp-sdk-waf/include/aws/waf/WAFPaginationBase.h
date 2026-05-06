/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace WAF {

template <typename DerivedClient>
class WAFPaginationBase {
 public:
  virtual ~WAFPaginationBase() = default;
};
}  // namespace WAF
}  // namespace Aws
