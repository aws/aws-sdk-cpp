/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace WAF {

class WAFClient;

template <typename DerivedClient>
class WAFPaginationBase {
 public:
  virtual ~WAFPaginationBase() = default;
};
}  // namespace WAF
}  // namespace Aws
