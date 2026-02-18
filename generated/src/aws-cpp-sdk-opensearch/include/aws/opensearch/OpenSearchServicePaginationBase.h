/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace OpenSearchService {

class OpenSearchServiceClient;

template <typename DerivedClient>
class OpenSearchServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeDomainAutoTunes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDomainAutoTunesRequest,
                                    Pagination::DescribeDomainAutoTunesPaginationTraits<DerivedClient>>
  DescribeDomainAutoTunesPaginator(const Model::DescribeDomainAutoTunesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDomainAutoTunesRequest,
                                             Pagination::DescribeDomainAutoTunesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInboundConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInboundConnectionsRequest,
                                    Pagination::DescribeInboundConnectionsPaginationTraits<DerivedClient>>
  DescribeInboundConnectionsPaginator(const Model::DescribeInboundConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInboundConnectionsRequest,
                                             Pagination::DescribeInboundConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOutboundConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOutboundConnectionsRequest,
                                    Pagination::DescribeOutboundConnectionsPaginationTraits<DerivedClient>>
  DescribeOutboundConnectionsPaginator(const Model::DescribeOutboundConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOutboundConnectionsRequest,
                                             Pagination::DescribeOutboundConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePackagesRequest,
                                    Pagination::DescribePackagesPaginationTraits<DerivedClient>>
  DescribePackagesPaginator(const Model::DescribePackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePackagesRequest,
                                             Pagination::DescribePackagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeReservedInstanceOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstanceOfferingsRequest,
                                    Pagination::DescribeReservedInstanceOfferingsPaginationTraits<DerivedClient>>
  DescribeReservedInstanceOfferingsPaginator(const Model::DescribeReservedInstanceOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstanceOfferingsRequest,
                                             Pagination::DescribeReservedInstanceOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstancesRequest,
                                    Pagination::DescribeReservedInstancesPaginationTraits<DerivedClient>>
  DescribeReservedInstancesPaginator(const Model::DescribeReservedInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstancesRequest,
                                             Pagination::DescribeReservedInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetPackageVersionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPackageVersionHistoryRequest,
                                    Pagination::GetPackageVersionHistoryPaginationTraits<DerivedClient>>
  GetPackageVersionHistoryPaginator(const Model::GetPackageVersionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPackageVersionHistoryRequest,
                                             Pagination::GetPackageVersionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetUpgradeHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUpgradeHistoryRequest,
                                    Pagination::GetUpgradeHistoryPaginationTraits<DerivedClient>>
  GetUpgradeHistoryPaginator(const Model::GetUpgradeHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUpgradeHistoryRequest,
                                             Pagination::GetUpgradeHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListDomainMaintenances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainMaintenancesRequest,
                                    Pagination::ListDomainMaintenancesPaginationTraits<DerivedClient>>
  ListDomainMaintenancesPaginator(const Model::ListDomainMaintenancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainMaintenancesRequest,
                                             Pagination::ListDomainMaintenancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainsForPackage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsForPackageRequest,
                                    Pagination::ListDomainsForPackagePaginationTraits<DerivedClient>>
  ListDomainsForPackagePaginator(const Model::ListDomainsForPackageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsForPackageRequest,
                                             Pagination::ListDomainsForPackagePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstanceTypeDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceTypeDetailsRequest,
                                    Pagination::ListInstanceTypeDetailsPaginationTraits<DerivedClient>>
  ListInstanceTypeDetailsPaginator(const Model::ListInstanceTypeDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceTypeDetailsRequest,
                                             Pagination::ListInstanceTypeDetailsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackagesForDomain operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesForDomainRequest,
                                    Pagination::ListPackagesForDomainPaginationTraits<DerivedClient>>
  ListPackagesForDomainPaginator(const Model::ListPackagesForDomainRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesForDomainRequest,
                                             Pagination::ListPackagesForDomainPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScheduledActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledActionsRequest,
                                    Pagination::ListScheduledActionsPaginationTraits<DerivedClient>>
  ListScheduledActionsPaginator(const Model::ListScheduledActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledActionsRequest,
                                             Pagination::ListScheduledActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsRequest, Pagination::ListVersionsPaginationTraits<DerivedClient>>
  ListVersionsPaginator(const Model::ListVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsRequest,
                                             Pagination::ListVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace OpenSearchService
}  // namespace Aws
