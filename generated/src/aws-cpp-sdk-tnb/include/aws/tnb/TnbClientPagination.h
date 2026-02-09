/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/tnb/TnbClient.h>
#include <aws/tnb/model/ListSolFunctionInstancesPaginationTraits.h>
#include <aws/tnb/model/ListSolFunctionPackagesPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkInstancesPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkOperationsPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkPackagesPaginationTraits.h>

namespace Aws {
namespace tnb {

using ListSolFunctionInstancesPaginator =
    Aws::Utils::Pagination::Paginator<TnbClient, Model::ListSolFunctionInstancesRequest,
                                      Pagination::ListSolFunctionInstancesPaginationTraits<TnbClient>>;
using ListSolFunctionPackagesPaginator = Aws::Utils::Pagination::Paginator<TnbClient, Model::ListSolFunctionPackagesRequest,
                                                                           Pagination::ListSolFunctionPackagesPaginationTraits<TnbClient>>;
using ListSolNetworkInstancesPaginator = Aws::Utils::Pagination::Paginator<TnbClient, Model::ListSolNetworkInstancesRequest,
                                                                           Pagination::ListSolNetworkInstancesPaginationTraits<TnbClient>>;
using ListSolNetworkOperationsPaginator =
    Aws::Utils::Pagination::Paginator<TnbClient, Model::ListSolNetworkOperationsRequest,
                                      Pagination::ListSolNetworkOperationsPaginationTraits<TnbClient>>;
using ListSolNetworkPackagesPaginator = Aws::Utils::Pagination::Paginator<TnbClient, Model::ListSolNetworkPackagesRequest,
                                                                          Pagination::ListSolNetworkPackagesPaginationTraits<TnbClient>>;

}  // namespace tnb
}  // namespace Aws
