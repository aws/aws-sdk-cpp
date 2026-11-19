/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentClient.h>
#include <aws/marketplace-deployment/model/ListDeploymentConfigurationJobsPaginationTraits.h>

namespace Aws {
namespace MarketplaceDeployment {

using ListDeploymentConfigurationJobsPaginator =
    Aws::Utils::Pagination::Paginator<MarketplaceDeploymentClient, Model::ListDeploymentConfigurationJobsRequest,
                                      Pagination::ListDeploymentConfigurationJobsPaginationTraits<MarketplaceDeploymentClient>>;

}  // namespace MarketplaceDeployment
}  // namespace Aws
