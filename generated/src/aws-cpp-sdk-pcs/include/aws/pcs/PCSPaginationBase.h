/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pcs/model/ListClustersPaginationTraits.h>
#include <aws/pcs/model/ListComputeNodeGroupsPaginationTraits.h>
#include <aws/pcs/model/ListQueuesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PCS {

class PCSClient;

template <typename DerivedClient>
class PCSPaginationBase {
 public:
  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListComputeNodeGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputeNodeGroupsRequest,
                                    Pagination::ListComputeNodeGroupsPaginationTraits<DerivedClient>>
  ListComputeNodeGroupsPaginator(const Model::ListComputeNodeGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputeNodeGroupsRequest,
                                             Pagination::ListComputeNodeGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<DerivedClient>>
  ListQueuesPaginator(const Model::ListQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest,
                                             Pagination::ListQueuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace PCS
}  // namespace Aws
