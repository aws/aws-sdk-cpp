/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/tnb/model/ListSolFunctionInstancesPaginationTraits.h>
#include <aws/tnb/model/ListSolFunctionPackagesPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkInstancesPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkOperationsPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkPackagesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace tnb {

class TnbClient;

template <typename DerivedClient>
class TnbPaginationBase {
 public:
  /**
   * Create a paginator for ListSolFunctionInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolFunctionInstancesRequest,
                                    Pagination::ListSolFunctionInstancesPaginationTraits<DerivedClient>>
  ListSolFunctionInstancesPaginator(const Model::ListSolFunctionInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolFunctionInstancesRequest,
                                             Pagination::ListSolFunctionInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSolFunctionPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolFunctionPackagesRequest,
                                    Pagination::ListSolFunctionPackagesPaginationTraits<DerivedClient>>
  ListSolFunctionPackagesPaginator(const Model::ListSolFunctionPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolFunctionPackagesRequest,
                                             Pagination::ListSolFunctionPackagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSolNetworkInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolNetworkInstancesRequest,
                                    Pagination::ListSolNetworkInstancesPaginationTraits<DerivedClient>>
  ListSolNetworkInstancesPaginator(const Model::ListSolNetworkInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolNetworkInstancesRequest,
                                             Pagination::ListSolNetworkInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSolNetworkOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolNetworkOperationsRequest,
                                    Pagination::ListSolNetworkOperationsPaginationTraits<DerivedClient>>
  ListSolNetworkOperationsPaginator(const Model::ListSolNetworkOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolNetworkOperationsRequest,
                                             Pagination::ListSolNetworkOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSolNetworkPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolNetworkPackagesRequest,
                                    Pagination::ListSolNetworkPackagesPaginationTraits<DerivedClient>>
  ListSolNetworkPackagesPaginator(const Model::ListSolNetworkPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolNetworkPackagesRequest,
                                             Pagination::ListSolNetworkPackagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace tnb
}  // namespace Aws
