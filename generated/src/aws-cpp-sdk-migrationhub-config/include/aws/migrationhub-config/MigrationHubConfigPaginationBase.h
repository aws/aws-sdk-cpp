/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MigrationHubConfig {

class MigrationHubConfigClient;

template <typename DerivedClient>
class MigrationHubConfigPaginationBase {
 public:
  /**
   * Create a paginator for DescribeHomeRegionControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHomeRegionControlsRequest,
                                    Pagination::DescribeHomeRegionControlsPaginationTraits<DerivedClient>>
  DescribeHomeRegionControlsPaginator(const Model::DescribeHomeRegionControlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHomeRegionControlsRequest,
                                             Pagination::DescribeHomeRegionControlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MigrationHubConfig
}  // namespace Aws
