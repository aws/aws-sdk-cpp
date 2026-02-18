/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/supplychain/SupplyChainClient.h>
#include <aws/supplychain/model/ListDataIntegrationEventsPaginationTraits.h>
#include <aws/supplychain/model/ListDataIntegrationFlowExecutionsPaginationTraits.h>
#include <aws/supplychain/model/ListDataIntegrationFlowsPaginationTraits.h>
#include <aws/supplychain/model/ListDataLakeDatasetsPaginationTraits.h>
#include <aws/supplychain/model/ListDataLakeNamespacesPaginationTraits.h>
#include <aws/supplychain/model/ListInstancesPaginationTraits.h>

namespace Aws {
namespace SupplyChain {

using ListDataIntegrationEventsPaginator =
    Aws::Utils::Pagination::Paginator<SupplyChainClient, Model::ListDataIntegrationEventsRequest,
                                      Pagination::ListDataIntegrationEventsPaginationTraits<SupplyChainClient>>;
using ListDataIntegrationFlowExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SupplyChainClient, Model::ListDataIntegrationFlowExecutionsRequest,
                                      Pagination::ListDataIntegrationFlowExecutionsPaginationTraits<SupplyChainClient>>;
using ListDataIntegrationFlowsPaginator =
    Aws::Utils::Pagination::Paginator<SupplyChainClient, Model::ListDataIntegrationFlowsRequest,
                                      Pagination::ListDataIntegrationFlowsPaginationTraits<SupplyChainClient>>;
using ListDataLakeDatasetsPaginator =
    Aws::Utils::Pagination::Paginator<SupplyChainClient, Model::ListDataLakeDatasetsRequest,
                                      Pagination::ListDataLakeDatasetsPaginationTraits<SupplyChainClient>>;
using ListDataLakeNamespacesPaginator =
    Aws::Utils::Pagination::Paginator<SupplyChainClient, Model::ListDataLakeNamespacesRequest,
                                      Pagination::ListDataLakeNamespacesPaginationTraits<SupplyChainClient>>;
using ListInstancesPaginator = Aws::Utils::Pagination::Paginator<SupplyChainClient, Model::ListInstancesRequest,
                                                                 Pagination::ListInstancesPaginationTraits<SupplyChainClient>>;

}  // namespace SupplyChain
}  // namespace Aws
