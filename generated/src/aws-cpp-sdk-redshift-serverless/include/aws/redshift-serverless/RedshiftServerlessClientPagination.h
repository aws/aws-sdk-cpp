/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/redshift-serverless/RedshiftServerlessClient.h>
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

namespace Aws {
namespace RedshiftServerless {

using ListCustomDomainAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListCustomDomainAssociationsRequest,
                                      Pagination::ListCustomDomainAssociationsPaginationTraits<RedshiftServerlessClient>>;
using ListEndpointAccessPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListEndpointAccessRequest,
                                      Pagination::ListEndpointAccessPaginationTraits<RedshiftServerlessClient>>;
using ListManagedWorkgroupsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListManagedWorkgroupsRequest,
                                      Pagination::ListManagedWorkgroupsPaginationTraits<RedshiftServerlessClient>>;
using ListNamespacesPaginator = Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListNamespacesRequest,
                                                                  Pagination::ListNamespacesPaginationTraits<RedshiftServerlessClient>>;
using ListRecoveryPointsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListRecoveryPointsRequest,
                                      Pagination::ListRecoveryPointsPaginationTraits<RedshiftServerlessClient>>;
using ListReservationOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListReservationOfferingsRequest,
                                      Pagination::ListReservationOfferingsPaginationTraits<RedshiftServerlessClient>>;
using ListReservationsPaginator = Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListReservationsRequest,
                                                                    Pagination::ListReservationsPaginationTraits<RedshiftServerlessClient>>;
using ListScheduledActionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListScheduledActionsRequest,
                                      Pagination::ListScheduledActionsPaginationTraits<RedshiftServerlessClient>>;
using ListSnapshotCopyConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListSnapshotCopyConfigurationsRequest,
                                      Pagination::ListSnapshotCopyConfigurationsPaginationTraits<RedshiftServerlessClient>>;
using ListSnapshotsPaginator = Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListSnapshotsRequest,
                                                                 Pagination::ListSnapshotsPaginationTraits<RedshiftServerlessClient>>;
using ListTableRestoreStatusPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListTableRestoreStatusRequest,
                                      Pagination::ListTableRestoreStatusPaginationTraits<RedshiftServerlessClient>>;
using ListTracksPaginator = Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListTracksRequest,
                                                              Pagination::ListTracksPaginationTraits<RedshiftServerlessClient>>;
using ListUsageLimitsPaginator = Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListUsageLimitsRequest,
                                                                   Pagination::ListUsageLimitsPaginationTraits<RedshiftServerlessClient>>;
using ListWorkgroupsPaginator = Aws::Utils::Pagination::Paginator<RedshiftServerlessClient, Model::ListWorkgroupsRequest,
                                                                  Pagination::ListWorkgroupsPaginationTraits<RedshiftServerlessClient>>;

}  // namespace RedshiftServerless
}  // namespace Aws
