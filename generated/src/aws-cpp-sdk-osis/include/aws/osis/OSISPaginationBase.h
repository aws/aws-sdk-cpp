/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/osis/model/ListPipelineEndpointConnectionsPaginationTraits.h>
#include <aws/osis/model/ListPipelineEndpointsPaginationTraits.h>
#include <aws/osis/model/ListPipelinesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace OSIS {

class OSISClient;

template <typename DerivedClient>
class OSISPaginationBase {
 public:
  /**
   * Create a paginator for ListPipelineEndpointConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineEndpointConnectionsRequest,
                                    Pagination::ListPipelineEndpointConnectionsPaginationTraits<DerivedClient>>
  ListPipelineEndpointConnectionsPaginator(const Model::ListPipelineEndpointConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineEndpointConnectionsRequest,
                                             Pagination::ListPipelineEndpointConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelineEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineEndpointsRequest,
                                    Pagination::ListPipelineEndpointsPaginationTraits<DerivedClient>>
  ListPipelineEndpointsPaginator(const Model::ListPipelineEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineEndpointsRequest,
                                             Pagination::ListPipelineEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest, Pagination::ListPipelinesPaginationTraits<DerivedClient>>
  ListPipelinesPaginator(const Model::ListPipelinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest,
                                             Pagination::ListPipelinesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace OSIS
}  // namespace Aws
