/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migrationhub-config/MigrationHubConfigClient.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsPaginationTraits.h>

namespace Aws {
namespace MigrationHubConfig {

using DescribeHomeRegionControlsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubConfigClient, Model::DescribeHomeRegionControlsRequest,
                                      Pagination::DescribeHomeRegionControlsPaginationTraits<MigrationHubConfigClient>>;

}  // namespace MigrationHubConfig
}  // namespace Aws
