/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/supplychain/model/ListDataIntegrationEventsPaginationTraits.h>
#include <aws/supplychain/model/ListDataIntegrationFlowExecutionsPaginationTraits.h>
#include <aws/supplychain/model/ListDataIntegrationFlowsPaginationTraits.h>
#include <aws/supplychain/model/ListDataLakeDatasetsPaginationTraits.h>
#include <aws/supplychain/model/ListDataLakeNamespacesPaginationTraits.h>
#include <aws/supplychain/model/ListInstancesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SupplyChain {

class SupplyChainClient;

template <typename DerivedClient>
class SupplyChainPaginationBase {
 public:
  /**
   * Create a paginator for ListDataIntegrationEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationEventsRequest,
                                    Pagination::ListDataIntegrationEventsPaginationTraits<DerivedClient>>
  ListDataIntegrationEventsPaginator(const Model::ListDataIntegrationEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationEventsRequest,
                                             Pagination::ListDataIntegrationEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataIntegrationFlowExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationFlowExecutionsRequest,
                                    Pagination::ListDataIntegrationFlowExecutionsPaginationTraits<DerivedClient>>
  ListDataIntegrationFlowExecutionsPaginator(const Model::ListDataIntegrationFlowExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationFlowExecutionsRequest,
                                             Pagination::ListDataIntegrationFlowExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataIntegrationFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationFlowsRequest,
                                    Pagination::ListDataIntegrationFlowsPaginationTraits<DerivedClient>>
  ListDataIntegrationFlowsPaginator(const Model::ListDataIntegrationFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationFlowsRequest,
                                             Pagination::ListDataIntegrationFlowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataLakeDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataLakeDatasetsRequest,
                                    Pagination::ListDataLakeDatasetsPaginationTraits<DerivedClient>>
  ListDataLakeDatasetsPaginator(const Model::ListDataLakeDatasetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataLakeDatasetsRequest,
                                             Pagination::ListDataLakeDatasetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataLakeNamespaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataLakeNamespacesRequest,
                                    Pagination::ListDataLakeNamespacesPaginationTraits<DerivedClient>>
  ListDataLakeNamespacesPaginator(const Model::ListDataLakeNamespacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataLakeNamespacesRequest,
                                             Pagination::ListDataLakeNamespacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest, Pagination::ListInstancesPaginationTraits<DerivedClient>>
  ListInstancesPaginator(const Model::ListInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest,
                                             Pagination::ListInstancesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace SupplyChain
}  // namespace Aws
