/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace WAFRegional {

class WAFRegionalClient;

template <typename DerivedClient>
class WAFRegionalPaginationBase {
 public:
  virtual ~WAFRegionalPaginationBase() = default;
};
}  // namespace WAFRegional
}  // namespace Aws
