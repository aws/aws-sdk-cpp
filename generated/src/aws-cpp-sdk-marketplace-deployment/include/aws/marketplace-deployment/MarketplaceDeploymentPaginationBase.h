/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace MarketplaceDeployment {

class MarketplaceDeploymentClient;

template <typename DerivedClient>
class MarketplaceDeploymentPaginationBase {
 public:
  virtual ~MarketplaceDeploymentPaginationBase() = default;
};
}  // namespace MarketplaceDeployment
}  // namespace Aws
