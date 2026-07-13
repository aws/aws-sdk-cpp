/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClient.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueShareAllocationsPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueSharesPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsPaginationTraits.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {

using ListMarketplaceRevenueShareAllocationsPaginator = Aws::Utils::Pagination::Paginator<
    PartnerCentralRevenueMeasurementClient, Model::ListMarketplaceRevenueShareAllocationsRequest,
    Pagination::ListMarketplaceRevenueShareAllocationsPaginationTraits<PartnerCentralRevenueMeasurementClient>>;
using ListMarketplaceRevenueSharesPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralRevenueMeasurementClient, Model::ListMarketplaceRevenueSharesRequest,
                                      Pagination::ListMarketplaceRevenueSharesPaginationTraits<PartnerCentralRevenueMeasurementClient>>;
using ListRevenueAttributionAllocationsPaginator = Aws::Utils::Pagination::Paginator<
    PartnerCentralRevenueMeasurementClient, Model::ListRevenueAttributionAllocationsRequest,
    Pagination::ListRevenueAttributionAllocationsPaginationTraits<PartnerCentralRevenueMeasurementClient>>;
using ListRevenueAttributionsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralRevenueMeasurementClient, Model::ListRevenueAttributionsRequest,
                                      Pagination::ListRevenueAttributionsPaginationTraits<PartnerCentralRevenueMeasurementClient>>;

}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
