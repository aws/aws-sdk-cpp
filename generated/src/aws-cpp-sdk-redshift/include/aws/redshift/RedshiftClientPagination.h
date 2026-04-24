/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/model/DescribeClusterDbRevisionsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterParametersPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterSnapshotsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterTracksPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterVersionsPaginationTraits.h>
#include <aws/redshift/model/DescribeClustersPaginationTraits.h>
#include <aws/redshift/model/DescribeCustomDomainAssociationsPaginationTraits.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerPaginationTraits.h>
#include <aws/redshift/model/DescribeDataSharesForProducerPaginationTraits.h>
#include <aws/redshift/model/DescribeDataSharesPaginationTraits.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersPaginationTraits.h>
#include <aws/redshift/model/DescribeEndpointAccessPaginationTraits.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationPaginationTraits.h>
#include <aws/redshift/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/redshift/model/DescribeEventsPaginationTraits.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesPaginationTraits.h>
#include <aws/redshift/model/DescribeHsmConfigurationsPaginationTraits.h>
#include <aws/redshift/model/DescribeInboundIntegrationsPaginationTraits.h>
#include <aws/redshift/model/DescribeIntegrationsPaginationTraits.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsPaginationTraits.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsPaginationTraits.h>
#include <aws/redshift/model/DescribeRedshiftIdcApplicationsPaginationTraits.h>
#include <aws/redshift/model/DescribeReservedNodeExchangeStatusPaginationTraits.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsPaginationTraits.h>
#include <aws/redshift/model/DescribeReservedNodesPaginationTraits.h>
#include <aws/redshift/model/DescribeScheduledActionsPaginationTraits.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsPaginationTraits.h>
#include <aws/redshift/model/DescribeSnapshotSchedulesPaginationTraits.h>
#include <aws/redshift/model/DescribeTableRestoreStatusPaginationTraits.h>
#include <aws/redshift/model/DescribeTagsPaginationTraits.h>
#include <aws/redshift/model/DescribeUsageLimitsPaginationTraits.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsPaginationTraits.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsPaginationTraits.h>
#include <aws/redshift/model/ListRecommendationsPaginationTraits.h>

namespace Aws {
namespace Redshift {

using DescribeClusterDbRevisionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterDbRevisionsRequest,
                                      Pagination::DescribeClusterDbRevisionsPaginationTraits<RedshiftClient>>;
using DescribeClusterParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterParameterGroupsRequest,
                                      Pagination::DescribeClusterParameterGroupsPaginationTraits<RedshiftClient>>;
using DescribeClusterParametersPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterParametersRequest,
                                      Pagination::DescribeClusterParametersPaginationTraits<RedshiftClient>>;
using DescribeClustersPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClustersRequest,
                                                                    Pagination::DescribeClustersPaginationTraits<RedshiftClient>>;
using DescribeClusterSecurityGroupsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterSecurityGroupsRequest,
                                      Pagination::DescribeClusterSecurityGroupsPaginationTraits<RedshiftClient>>;
using DescribeClusterSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterSnapshotsRequest,
                                      Pagination::DescribeClusterSnapshotsPaginationTraits<RedshiftClient>>;
using DescribeClusterSubnetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterSubnetGroupsRequest,
                                      Pagination::DescribeClusterSubnetGroupsPaginationTraits<RedshiftClient>>;
using DescribeClusterTracksPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterTracksRequest,
                                                                         Pagination::DescribeClusterTracksPaginationTraits<RedshiftClient>>;
using DescribeClusterVersionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeClusterVersionsRequest,
                                      Pagination::DescribeClusterVersionsPaginationTraits<RedshiftClient>>;
using DescribeCustomDomainAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeCustomDomainAssociationsRequest,
                                      Pagination::DescribeCustomDomainAssociationsPaginationTraits<RedshiftClient>>;
using DescribeDataSharesPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeDataSharesRequest,
                                                                      Pagination::DescribeDataSharesPaginationTraits<RedshiftClient>>;
using DescribeDataSharesForConsumerPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeDataSharesForConsumerRequest,
                                      Pagination::DescribeDataSharesForConsumerPaginationTraits<RedshiftClient>>;
using DescribeDataSharesForProducerPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeDataSharesForProducerRequest,
                                      Pagination::DescribeDataSharesForProducerPaginationTraits<RedshiftClient>>;
using DescribeDefaultClusterParametersPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeDefaultClusterParametersRequest,
                                      Pagination::DescribeDefaultClusterParametersPaginationTraits<RedshiftClient>>;
using DescribeEndpointAccessPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeEndpointAccessRequest,
                                      Pagination::DescribeEndpointAccessPaginationTraits<RedshiftClient>>;
using DescribeEndpointAuthorizationPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeEndpointAuthorizationRequest,
                                      Pagination::DescribeEndpointAuthorizationPaginationTraits<RedshiftClient>>;
using DescribeEventsPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeEventsRequest,
                                                                  Pagination::DescribeEventsPaginationTraits<RedshiftClient>>;
using DescribeEventSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeEventSubscriptionsRequest,
                                      Pagination::DescribeEventSubscriptionsPaginationTraits<RedshiftClient>>;
using DescribeHsmClientCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeHsmClientCertificatesRequest,
                                      Pagination::DescribeHsmClientCertificatesPaginationTraits<RedshiftClient>>;
using DescribeHsmConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeHsmConfigurationsRequest,
                                      Pagination::DescribeHsmConfigurationsPaginationTraits<RedshiftClient>>;
using DescribeInboundIntegrationsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeInboundIntegrationsRequest,
                                      Pagination::DescribeInboundIntegrationsPaginationTraits<RedshiftClient>>;
using DescribeIntegrationsPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeIntegrationsRequest,
                                                                        Pagination::DescribeIntegrationsPaginationTraits<RedshiftClient>>;
using DescribeNodeConfigurationOptionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeNodeConfigurationOptionsRequest,
                                      Pagination::DescribeNodeConfigurationOptionsPaginationTraits<RedshiftClient>>;
using DescribeOrderableClusterOptionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeOrderableClusterOptionsRequest,
                                      Pagination::DescribeOrderableClusterOptionsPaginationTraits<RedshiftClient>>;
using DescribeRedshiftIdcApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeRedshiftIdcApplicationsRequest,
                                      Pagination::DescribeRedshiftIdcApplicationsPaginationTraits<RedshiftClient>>;
using DescribeReservedNodeExchangeStatusPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeReservedNodeExchangeStatusRequest,
                                      Pagination::DescribeReservedNodeExchangeStatusPaginationTraits<RedshiftClient>>;
using DescribeReservedNodeOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeReservedNodeOfferingsRequest,
                                      Pagination::DescribeReservedNodeOfferingsPaginationTraits<RedshiftClient>>;
using DescribeReservedNodesPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeReservedNodesRequest,
                                                                         Pagination::DescribeReservedNodesPaginationTraits<RedshiftClient>>;
using DescribeScheduledActionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeScheduledActionsRequest,
                                      Pagination::DescribeScheduledActionsPaginationTraits<RedshiftClient>>;
using DescribeSnapshotCopyGrantsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeSnapshotCopyGrantsRequest,
                                      Pagination::DescribeSnapshotCopyGrantsPaginationTraits<RedshiftClient>>;
using DescribeSnapshotSchedulesPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeSnapshotSchedulesRequest,
                                      Pagination::DescribeSnapshotSchedulesPaginationTraits<RedshiftClient>>;
using DescribeTableRestoreStatusPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeTableRestoreStatusRequest,
                                      Pagination::DescribeTableRestoreStatusPaginationTraits<RedshiftClient>>;
using DescribeTagsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits<RedshiftClient>>;
using DescribeUsageLimitsPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::DescribeUsageLimitsRequest,
                                                                       Pagination::DescribeUsageLimitsPaginationTraits<RedshiftClient>>;
using GetReservedNodeExchangeConfigurationOptionsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::GetReservedNodeExchangeConfigurationOptionsRequest,
                                      Pagination::GetReservedNodeExchangeConfigurationOptionsPaginationTraits<RedshiftClient>>;
using GetReservedNodeExchangeOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftClient, Model::GetReservedNodeExchangeOfferingsRequest,
                                      Pagination::GetReservedNodeExchangeOfferingsPaginationTraits<RedshiftClient>>;
using ListRecommendationsPaginator = Aws::Utils::Pagination::Paginator<RedshiftClient, Model::ListRecommendationsRequest,
                                                                       Pagination::ListRecommendationsPaginationTraits<RedshiftClient>>;

}  // namespace Redshift
}  // namespace Aws
