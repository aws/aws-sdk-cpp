/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/opensearch/OpenSearchServiceClient.h>
#include <aws/opensearch/model/DescribeDomainAutoTunesPaginationTraits.h>
#include <aws/opensearch/model/DescribeInboundConnectionsPaginationTraits.h>
#include <aws/opensearch/model/DescribeOutboundConnectionsPaginationTraits.h>
#include <aws/opensearch/model/DescribePackagesPaginationTraits.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsPaginationTraits.h>
#include <aws/opensearch/model/DescribeReservedInstancesPaginationTraits.h>
#include <aws/opensearch/model/GetPackageVersionHistoryPaginationTraits.h>
#include <aws/opensearch/model/GetUpgradeHistoryPaginationTraits.h>
#include <aws/opensearch/model/ListApplicationsPaginationTraits.h>
#include <aws/opensearch/model/ListDomainMaintenancesPaginationTraits.h>
#include <aws/opensearch/model/ListDomainsForPackagePaginationTraits.h>
#include <aws/opensearch/model/ListInstanceTypeDetailsPaginationTraits.h>
#include <aws/opensearch/model/ListPackagesForDomainPaginationTraits.h>
#include <aws/opensearch/model/ListScheduledActionsPaginationTraits.h>
#include <aws/opensearch/model/ListVersionsPaginationTraits.h>

namespace Aws {
namespace OpenSearchService {

using DescribeDomainAutoTunesPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::DescribeDomainAutoTunesRequest,
                                      Pagination::DescribeDomainAutoTunesPaginationTraits<OpenSearchServiceClient>>;
using DescribeInboundConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::DescribeInboundConnectionsRequest,
                                      Pagination::DescribeInboundConnectionsPaginationTraits<OpenSearchServiceClient>>;
using DescribeOutboundConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::DescribeOutboundConnectionsRequest,
                                      Pagination::DescribeOutboundConnectionsPaginationTraits<OpenSearchServiceClient>>;
using DescribePackagesPaginator = Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::DescribePackagesRequest,
                                                                    Pagination::DescribePackagesPaginationTraits<OpenSearchServiceClient>>;
using DescribeReservedInstanceOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::DescribeReservedInstanceOfferingsRequest,
                                      Pagination::DescribeReservedInstanceOfferingsPaginationTraits<OpenSearchServiceClient>>;
using DescribeReservedInstancesPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::DescribeReservedInstancesRequest,
                                      Pagination::DescribeReservedInstancesPaginationTraits<OpenSearchServiceClient>>;
using GetPackageVersionHistoryPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::GetPackageVersionHistoryRequest,
                                      Pagination::GetPackageVersionHistoryPaginationTraits<OpenSearchServiceClient>>;
using GetUpgradeHistoryPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::GetUpgradeHistoryRequest,
                                      Pagination::GetUpgradeHistoryPaginationTraits<OpenSearchServiceClient>>;
using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<OpenSearchServiceClient>>;
using ListDomainMaintenancesPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::ListDomainMaintenancesRequest,
                                      Pagination::ListDomainMaintenancesPaginationTraits<OpenSearchServiceClient>>;
using ListDomainsForPackagePaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::ListDomainsForPackageRequest,
                                      Pagination::ListDomainsForPackagePaginationTraits<OpenSearchServiceClient>>;
using ListInstanceTypeDetailsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::ListInstanceTypeDetailsRequest,
                                      Pagination::ListInstanceTypeDetailsPaginationTraits<OpenSearchServiceClient>>;
using ListPackagesForDomainPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::ListPackagesForDomainRequest,
                                      Pagination::ListPackagesForDomainPaginationTraits<OpenSearchServiceClient>>;
using ListScheduledActionsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::ListScheduledActionsRequest,
                                      Pagination::ListScheduledActionsPaginationTraits<OpenSearchServiceClient>>;
using ListVersionsPaginator = Aws::Utils::Pagination::Paginator<OpenSearchServiceClient, Model::ListVersionsRequest,
                                                                Pagination::ListVersionsPaginationTraits<OpenSearchServiceClient>>;

}  // namespace OpenSearchService
}  // namespace Aws
