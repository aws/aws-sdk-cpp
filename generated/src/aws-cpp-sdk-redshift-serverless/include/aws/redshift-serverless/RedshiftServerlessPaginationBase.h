/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/redshift-serverless/model/ListCustomDomainAssociationsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListEndpointAccessPaginationTraits.h>
#include <aws/redshift-serverless/model/ListManagedWorkgroupsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListNamespacesPaginationTraits.h>
#include <aws/redshift-serverless/model/ListRecoveryPointsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListReservationOfferingsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListReservationsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListScheduledActionsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListSnapshotCopyConfigurationsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListSnapshotsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListTableRestoreStatusPaginationTraits.h>
#include <aws/redshift-serverless/model/ListTracksPaginationTraits.h>
#include <aws/redshift-serverless/model/ListUsageLimitsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListWorkgroupsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace RedshiftServerless {

class RedshiftServerlessClient;

template <typename DerivedClient>
class RedshiftServerlessPaginationBase {
 public:
  /**
   * Create a paginator for ListCustomDomainAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomDomainAssociationsRequest,
                                    Pagination::ListCustomDomainAssociationsPaginationTraits<DerivedClient>>
  ListCustomDomainAssociationsPaginator(const Model::ListCustomDomainAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomDomainAssociationsRequest,
                                             Pagination::ListCustomDomainAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEndpointAccess operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointAccessRequest,
                                    Pagination::ListEndpointAccessPaginationTraits<DerivedClient>>
  ListEndpointAccessPaginator(const Model::ListEndpointAccessRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointAccessRequest,
                                             Pagination::ListEndpointAccessPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedWorkgroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedWorkgroupsRequest,
                                    Pagination::ListManagedWorkgroupsPaginationTraits<DerivedClient>>
  ListManagedWorkgroupsPaginator(const Model::ListManagedWorkgroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedWorkgroupsRequest,
                                             Pagination::ListManagedWorkgroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListRecoveryPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsRequest,
                                    Pagination::ListRecoveryPointsPaginationTraits<DerivedClient>>
  ListRecoveryPointsPaginator(const Model::ListRecoveryPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsRequest,
                                             Pagination::ListRecoveryPointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReservationOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationOfferingsRequest,
                                    Pagination::ListReservationOfferingsPaginationTraits<DerivedClient>>
  ListReservationOfferingsPaginator(const Model::ListReservationOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationOfferingsRequest,
                                             Pagination::ListReservationOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReservations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationsRequest,
                                    Pagination::ListReservationsPaginationTraits<DerivedClient>>
  ListReservationsPaginator(const Model::ListReservationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationsRequest,
                                             Pagination::ListReservationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
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
   * Create a paginator for ListSnapshotCopyConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotCopyConfigurationsRequest,
                                    Pagination::ListSnapshotCopyConfigurationsPaginationTraits<DerivedClient>>
  ListSnapshotCopyConfigurationsPaginator(const Model::ListSnapshotCopyConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotCopyConfigurationsRequest,
                                             Pagination::ListSnapshotCopyConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotsRequest, Pagination::ListSnapshotsPaginationTraits<DerivedClient>>
  ListSnapshotsPaginator(const Model::ListSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotsRequest,
                                             Pagination::ListSnapshotsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTableRestoreStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableRestoreStatusRequest,
                                    Pagination::ListTableRestoreStatusPaginationTraits<DerivedClient>>
  ListTableRestoreStatusPaginator(const Model::ListTableRestoreStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableRestoreStatusRequest,
                                             Pagination::ListTableRestoreStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTracks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTracksRequest, Pagination::ListTracksPaginationTraits<DerivedClient>>
  ListTracksPaginator(const Model::ListTracksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTracksRequest,
                                             Pagination::ListTracksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListUsageLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsageLimitsRequest,
                                    Pagination::ListUsageLimitsPaginationTraits<DerivedClient>>
  ListUsageLimitsPaginator(const Model::ListUsageLimitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsageLimitsRequest,
                                             Pagination::ListUsageLimitsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListWorkgroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkgroupsRequest, Pagination::ListWorkgroupsPaginationTraits<DerivedClient>>
  ListWorkgroupsPaginator(const Model::ListWorkgroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkgroupsRequest,
                                             Pagination::ListWorkgroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace RedshiftServerless
}  // namespace Aws
