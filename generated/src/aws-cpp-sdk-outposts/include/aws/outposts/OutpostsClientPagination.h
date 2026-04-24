/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/outposts/OutpostsClient.h>
#include <aws/outposts/model/GetOutpostBillingInformationPaginationTraits.h>
#include <aws/outposts/model/GetOutpostInstanceTypesPaginationTraits.h>
#include <aws/outposts/model/GetOutpostSupportedInstanceTypesPaginationTraits.h>
#include <aws/outposts/model/ListAssetInstancesPaginationTraits.h>
#include <aws/outposts/model/ListAssetsPaginationTraits.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskPaginationTraits.h>
#include <aws/outposts/model/ListCapacityTasksPaginationTraits.h>
#include <aws/outposts/model/ListCatalogItemsPaginationTraits.h>
#include <aws/outposts/model/ListOrdersPaginationTraits.h>
#include <aws/outposts/model/ListOutpostsPaginationTraits.h>
#include <aws/outposts/model/ListSitesPaginationTraits.h>

namespace Aws {
namespace Outposts {

using GetOutpostBillingInformationPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::GetOutpostBillingInformationRequest,
                                      Pagination::GetOutpostBillingInformationPaginationTraits<OutpostsClient>>;
using GetOutpostInstanceTypesPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::GetOutpostInstanceTypesRequest,
                                      Pagination::GetOutpostInstanceTypesPaginationTraits<OutpostsClient>>;
using GetOutpostSupportedInstanceTypesPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::GetOutpostSupportedInstanceTypesRequest,
                                      Pagination::GetOutpostSupportedInstanceTypesPaginationTraits<OutpostsClient>>;
using ListAssetInstancesPaginator = Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListAssetInstancesRequest,
                                                                      Pagination::ListAssetInstancesPaginationTraits<OutpostsClient>>;
using ListAssetsPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListAssetsRequest, Pagination::ListAssetsPaginationTraits<OutpostsClient>>;
using ListBlockingInstancesForCapacityTaskPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListBlockingInstancesForCapacityTaskRequest,
                                      Pagination::ListBlockingInstancesForCapacityTaskPaginationTraits<OutpostsClient>>;
using ListCapacityTasksPaginator = Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListCapacityTasksRequest,
                                                                     Pagination::ListCapacityTasksPaginationTraits<OutpostsClient>>;
using ListCatalogItemsPaginator = Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListCatalogItemsRequest,
                                                                    Pagination::ListCatalogItemsPaginationTraits<OutpostsClient>>;
using ListOrdersPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListOrdersRequest, Pagination::ListOrdersPaginationTraits<OutpostsClient>>;
using ListOutpostsPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListOutpostsRequest, Pagination::ListOutpostsPaginationTraits<OutpostsClient>>;
using ListSitesPaginator =
    Aws::Utils::Pagination::Paginator<OutpostsClient, Model::ListSitesRequest, Pagination::ListSitesPaginationTraits<OutpostsClient>>;

}  // namespace Outposts
}  // namespace Aws
