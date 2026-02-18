/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces-instances/model/ListInstanceTypesPaginationTraits.h>
#include <aws/workspaces-instances/model/ListRegionsPaginationTraits.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace WorkspacesInstances {

class WorkspacesInstancesClient;

template <typename DerivedClient>
class WorkspacesInstancesPaginationBase {
 public:
  /**
   * Create a paginator for ListInstanceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceTypesRequest,
                                    Pagination::ListInstanceTypesPaginationTraits<DerivedClient>>
  ListInstanceTypesPaginator(const Model::ListInstanceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceTypesRequest,
                                             Pagination::ListInstanceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRegions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionsRequest, Pagination::ListRegionsPaginationTraits<DerivedClient>>
  ListRegionsPaginator(const Model::ListRegionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionsRequest,
                                             Pagination::ListRegionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListWorkspaceInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspaceInstancesRequest,
                                    Pagination::ListWorkspaceInstancesPaginationTraits<DerivedClient>>
  ListWorkspaceInstancesPaginator(const Model::ListWorkspaceInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspaceInstancesRequest,
                                             Pagination::ListWorkspaceInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace WorkspacesInstances
}  // namespace Aws
