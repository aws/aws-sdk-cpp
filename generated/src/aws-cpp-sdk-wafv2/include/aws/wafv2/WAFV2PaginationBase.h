/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace WAFV2 {

class WAFV2Client;

template <typename DerivedClient>
class WAFV2PaginationBase {
 public:
  virtual ~WAFV2PaginationBase() = default;
};
}  // namespace WAFV2
}  // namespace Aws
