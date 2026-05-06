/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace MarketplaceReporting {

template <typename DerivedClient>
class MarketplaceReportingPaginationBase {
 public:
  virtual ~MarketplaceReportingPaginationBase() = default;
};
}  // namespace MarketplaceReporting
}  // namespace Aws
