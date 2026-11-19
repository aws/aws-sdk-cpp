/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-deployment/model/ListDeploymentConfigurationJobsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MarketplaceDeployment {

template <typename DerivedClient>
class MarketplaceDeploymentPaginationBase {
 public:
  /**
   * Create a paginator for ListDeploymentConfigurationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentConfigurationJobsRequest,
                                    Pagination::ListDeploymentConfigurationJobsPaginationTraits<DerivedClient>>
  ListDeploymentConfigurationJobsPaginator(const Model::ListDeploymentConfigurationJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentConfigurationJobsRequest,
                                             Pagination::ListDeploymentConfigurationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MarketplaceDeployment
}  // namespace Aws
