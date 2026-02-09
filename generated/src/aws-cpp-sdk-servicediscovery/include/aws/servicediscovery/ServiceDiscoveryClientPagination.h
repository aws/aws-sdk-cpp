/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/servicediscovery/ServiceDiscoveryClient.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusPaginationTraits.h>
#include <aws/servicediscovery/model/ListInstancesPaginationTraits.h>
#include <aws/servicediscovery/model/ListNamespacesPaginationTraits.h>
#include <aws/servicediscovery/model/ListOperationsPaginationTraits.h>
#include <aws/servicediscovery/model/ListServicesPaginationTraits.h>

namespace Aws {
namespace ServiceDiscovery {

using GetInstancesHealthStatusPaginator =
    Aws::Utils::Pagination::Paginator<ServiceDiscoveryClient, Model::GetInstancesHealthStatusRequest,
                                      Pagination::GetInstancesHealthStatusPaginationTraits<ServiceDiscoveryClient>>;
using ListInstancesPaginator = Aws::Utils::Pagination::Paginator<ServiceDiscoveryClient, Model::ListInstancesRequest,
                                                                 Pagination::ListInstancesPaginationTraits<ServiceDiscoveryClient>>;
using ListNamespacesPaginator = Aws::Utils::Pagination::Paginator<ServiceDiscoveryClient, Model::ListNamespacesRequest,
                                                                  Pagination::ListNamespacesPaginationTraits<ServiceDiscoveryClient>>;
using ListOperationsPaginator = Aws::Utils::Pagination::Paginator<ServiceDiscoveryClient, Model::ListOperationsRequest,
                                                                  Pagination::ListOperationsPaginationTraits<ServiceDiscoveryClient>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<ServiceDiscoveryClient, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<ServiceDiscoveryClient>>;

}  // namespace ServiceDiscovery
}  // namespace Aws
