/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/snowball/SnowballClient.h>
#include <aws/snowball/model/DescribeAddressesPaginationTraits.h>
#include <aws/snowball/model/ListClusterJobsPaginationTraits.h>
#include <aws/snowball/model/ListClustersPaginationTraits.h>
#include <aws/snowball/model/ListCompatibleImagesPaginationTraits.h>
#include <aws/snowball/model/ListJobsPaginationTraits.h>
#include <aws/snowball/model/ListLongTermPricingPaginationTraits.h>
#include <aws/snowball/model/ListPickupLocationsPaginationTraits.h>

namespace Aws {
namespace Snowball {

using DescribeAddressesPaginator = Aws::Utils::Pagination::Paginator<SnowballClient, Model::DescribeAddressesRequest,
                                                                     Pagination::DescribeAddressesPaginationTraits<SnowballClient>>;
using ListClusterJobsPaginator = Aws::Utils::Pagination::Paginator<SnowballClient, Model::ListClusterJobsRequest,
                                                                   Pagination::ListClusterJobsPaginationTraits<SnowballClient>>;
using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<SnowballClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<SnowballClient>>;
using ListCompatibleImagesPaginator = Aws::Utils::Pagination::Paginator<SnowballClient, Model::ListCompatibleImagesRequest,
                                                                        Pagination::ListCompatibleImagesPaginationTraits<SnowballClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<SnowballClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<SnowballClient>>;
using ListLongTermPricingPaginator = Aws::Utils::Pagination::Paginator<SnowballClient, Model::ListLongTermPricingRequest,
                                                                       Pagination::ListLongTermPricingPaginationTraits<SnowballClient>>;
using ListPickupLocationsPaginator = Aws::Utils::Pagination::Paginator<SnowballClient, Model::ListPickupLocationsRequest,
                                                                       Pagination::ListPickupLocationsPaginationTraits<SnowballClient>>;

}  // namespace Snowball
}  // namespace Aws
