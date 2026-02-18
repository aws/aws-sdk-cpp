/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resource-explorer-2/ResourceExplorer2Client.h>
#include <aws/resource-explorer-2/model/GetResourceExplorerSetupPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListIndexesForMembersPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListIndexesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListManagedViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListResourcesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListServiceIndexesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListServiceViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListStreamingAccessForServicesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/SearchPaginationTraits.h>

namespace Aws {
namespace ResourceExplorer2 {

using GetResourceExplorerSetupPaginator =
    Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::GetResourceExplorerSetupRequest,
                                      Pagination::GetResourceExplorerSetupPaginationTraits<ResourceExplorer2Client>>;
using ListIndexesPaginator = Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListIndexesRequest,
                                                               Pagination::ListIndexesPaginationTraits<ResourceExplorer2Client>>;
using ListIndexesForMembersPaginator =
    Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListIndexesForMembersRequest,
                                      Pagination::ListIndexesForMembersPaginationTraits<ResourceExplorer2Client>>;
using ListManagedViewsPaginator = Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListManagedViewsRequest,
                                                                    Pagination::ListManagedViewsPaginationTraits<ResourceExplorer2Client>>;
using ListResourcesPaginator = Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListResourcesRequest,
                                                                 Pagination::ListResourcesPaginationTraits<ResourceExplorer2Client>>;
using ListServiceIndexesPaginator =
    Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListServiceIndexesRequest,
                                      Pagination::ListServiceIndexesPaginationTraits<ResourceExplorer2Client>>;
using ListServiceViewsPaginator = Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListServiceViewsRequest,
                                                                    Pagination::ListServiceViewsPaginationTraits<ResourceExplorer2Client>>;
using ListStreamingAccessForServicesPaginator =
    Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListStreamingAccessForServicesRequest,
                                      Pagination::ListStreamingAccessForServicesPaginationTraits<ResourceExplorer2Client>>;
using ListSupportedResourceTypesPaginator =
    Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListSupportedResourceTypesRequest,
                                      Pagination::ListSupportedResourceTypesPaginationTraits<ResourceExplorer2Client>>;
using ListViewsPaginator = Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::ListViewsRequest,
                                                             Pagination::ListViewsPaginationTraits<ResourceExplorer2Client>>;
using SearchPaginator = Aws::Utils::Pagination::Paginator<ResourceExplorer2Client, Model::SearchRequest,
                                                          Pagination::SearchPaginationTraits<ResourceExplorer2Client>>;

}  // namespace ResourceExplorer2
}  // namespace Aws
