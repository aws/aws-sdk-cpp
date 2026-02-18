/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusPaginationTraits.h>
#include <aws/servicediscovery/model/ListInstancesPaginationTraits.h>
#include <aws/servicediscovery/model/ListNamespacesPaginationTraits.h>
#include <aws/servicediscovery/model/ListOperationsPaginationTraits.h>
#include <aws/servicediscovery/model/ListServicesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ServiceDiscovery {

class ServiceDiscoveryClient;

template <typename DerivedClient>
class ServiceDiscoveryPaginationBase {
 public:
  /**
   * Create a paginator for GetInstancesHealthStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInstancesHealthStatusRequest,
                                    Pagination::GetInstancesHealthStatusPaginationTraits<DerivedClient>>
  GetInstancesHealthStatusPaginator(const Model::GetInstancesHealthStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInstancesHealthStatusRequest,
                                             Pagination::GetInstancesHealthStatusPaginationTraits<DerivedClient>>{
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

  /**
   * Create a paginator for ListNamespaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamespacesRequest, Pagination::ListNamespacesPaginationTraits<DerivedClient>>
  ListNamespacesPaginator(const Model::ListNamespacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamespacesRequest,
                                             Pagination::ListNamespacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest, Pagination::ListOperationsPaginationTraits<DerivedClient>>
  ListOperationsPaginator(const Model::ListOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest,
                                             Pagination::ListOperationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace ServiceDiscovery
}  // namespace Aws
