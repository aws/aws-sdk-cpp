/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Redshift {

template <typename DerivedClient>
class RedshiftPaginationBase {
 public:
  /**
   * Create a paginator for DescribeClusterDbRevisions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterDbRevisionsRequest,
                                    Pagination::DescribeClusterDbRevisionsPaginationTraits<DerivedClient>>
  DescribeClusterDbRevisionsPaginator(const Model::DescribeClusterDbRevisionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterDbRevisionsRequest,
                                             Pagination::DescribeClusterDbRevisionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusterParameterGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterParameterGroupsRequest,
                                    Pagination::DescribeClusterParameterGroupsPaginationTraits<DerivedClient>>
  DescribeClusterParameterGroupsPaginator(const Model::DescribeClusterParameterGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterParameterGroupsRequest,
                                             Pagination::DescribeClusterParameterGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusterParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterParametersRequest,
                                    Pagination::DescribeClusterParametersPaginationTraits<DerivedClient>>
  DescribeClusterParametersPaginator(const Model::DescribeClusterParametersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterParametersRequest,
                                             Pagination::DescribeClusterParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClustersRequest,
                                    Pagination::DescribeClustersPaginationTraits<DerivedClient>>
  DescribeClustersPaginator(const Model::DescribeClustersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClustersRequest,
                                             Pagination::DescribeClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeClusterSecurityGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterSecurityGroupsRequest,
                                    Pagination::DescribeClusterSecurityGroupsPaginationTraits<DerivedClient>>
  DescribeClusterSecurityGroupsPaginator(const Model::DescribeClusterSecurityGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterSecurityGroupsRequest,
                                             Pagination::DescribeClusterSecurityGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusterSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterSnapshotsRequest,
                                    Pagination::DescribeClusterSnapshotsPaginationTraits<DerivedClient>>
  DescribeClusterSnapshotsPaginator(const Model::DescribeClusterSnapshotsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterSnapshotsRequest,
                                             Pagination::DescribeClusterSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusterSubnetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterSubnetGroupsRequest,
                                    Pagination::DescribeClusterSubnetGroupsPaginationTraits<DerivedClient>>
  DescribeClusterSubnetGroupsPaginator(const Model::DescribeClusterSubnetGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterSubnetGroupsRequest,
                                             Pagination::DescribeClusterSubnetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusterTracks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterTracksRequest,
                                    Pagination::DescribeClusterTracksPaginationTraits<DerivedClient>>
  DescribeClusterTracksPaginator(const Model::DescribeClusterTracksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterTracksRequest,
                                             Pagination::DescribeClusterTracksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusterVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterVersionsRequest,
                                    Pagination::DescribeClusterVersionsPaginationTraits<DerivedClient>>
  DescribeClusterVersionsPaginator(const Model::DescribeClusterVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterVersionsRequest,
                                             Pagination::DescribeClusterVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCustomDomainAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCustomDomainAssociationsRequest,
                                    Pagination::DescribeCustomDomainAssociationsPaginationTraits<DerivedClient>>
  DescribeCustomDomainAssociationsPaginator(const Model::DescribeCustomDomainAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCustomDomainAssociationsRequest,
                                             Pagination::DescribeCustomDomainAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDataShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSharesRequest,
                                    Pagination::DescribeDataSharesPaginationTraits<DerivedClient>>
  DescribeDataSharesPaginator(const Model::DescribeDataSharesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSharesRequest,
                                             Pagination::DescribeDataSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDataSharesForConsumer operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSharesForConsumerRequest,
                                    Pagination::DescribeDataSharesForConsumerPaginationTraits<DerivedClient>>
  DescribeDataSharesForConsumerPaginator(const Model::DescribeDataSharesForConsumerRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSharesForConsumerRequest,
                                             Pagination::DescribeDataSharesForConsumerPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDataSharesForProducer operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSharesForProducerRequest,
                                    Pagination::DescribeDataSharesForProducerPaginationTraits<DerivedClient>>
  DescribeDataSharesForProducerPaginator(const Model::DescribeDataSharesForProducerRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSharesForProducerRequest,
                                             Pagination::DescribeDataSharesForProducerPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDefaultClusterParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDefaultClusterParametersRequest,
                                    Pagination::DescribeDefaultClusterParametersPaginationTraits<DerivedClient>>
  DescribeDefaultClusterParametersPaginator(const Model::DescribeDefaultClusterParametersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDefaultClusterParametersRequest,
                                             Pagination::DescribeDefaultClusterParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEndpointAccess operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointAccessRequest,
                                    Pagination::DescribeEndpointAccessPaginationTraits<DerivedClient>>
  DescribeEndpointAccessPaginator(const Model::DescribeEndpointAccessRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointAccessRequest,
                                             Pagination::DescribeEndpointAccessPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEndpointAuthorization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointAuthorizationRequest,
                                    Pagination::DescribeEndpointAuthorizationPaginationTraits<DerivedClient>>
  DescribeEndpointAuthorizationPaginator(const Model::DescribeEndpointAuthorizationRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointAuthorizationRequest,
                                             Pagination::DescribeEndpointAuthorizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeEventSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                    Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>
  DescribeEventSubscriptionsPaginator(const Model::DescribeEventSubscriptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                             Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeHsmClientCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHsmClientCertificatesRequest,
                                    Pagination::DescribeHsmClientCertificatesPaginationTraits<DerivedClient>>
  DescribeHsmClientCertificatesPaginator(const Model::DescribeHsmClientCertificatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHsmClientCertificatesRequest,
                                             Pagination::DescribeHsmClientCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeHsmConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHsmConfigurationsRequest,
                                    Pagination::DescribeHsmConfigurationsPaginationTraits<DerivedClient>>
  DescribeHsmConfigurationsPaginator(const Model::DescribeHsmConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHsmConfigurationsRequest,
                                             Pagination::DescribeHsmConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInboundIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInboundIntegrationsRequest,
                                    Pagination::DescribeInboundIntegrationsPaginationTraits<DerivedClient>>
  DescribeInboundIntegrationsPaginator(const Model::DescribeInboundIntegrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInboundIntegrationsRequest,
                                             Pagination::DescribeInboundIntegrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIntegrationsRequest,
                                    Pagination::DescribeIntegrationsPaginationTraits<DerivedClient>>
  DescribeIntegrationsPaginator(const Model::DescribeIntegrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIntegrationsRequest,
                                             Pagination::DescribeIntegrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNodeConfigurationOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNodeConfigurationOptionsRequest,
                                    Pagination::DescribeNodeConfigurationOptionsPaginationTraits<DerivedClient>>
  DescribeNodeConfigurationOptionsPaginator(const Model::DescribeNodeConfigurationOptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNodeConfigurationOptionsRequest,
                                             Pagination::DescribeNodeConfigurationOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrderableClusterOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableClusterOptionsRequest,
                                    Pagination::DescribeOrderableClusterOptionsPaginationTraits<DerivedClient>>
  DescribeOrderableClusterOptionsPaginator(const Model::DescribeOrderableClusterOptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableClusterOptionsRequest,
                                             Pagination::DescribeOrderableClusterOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRedshiftIdcApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRedshiftIdcApplicationsRequest,
                                    Pagination::DescribeRedshiftIdcApplicationsPaginationTraits<DerivedClient>>
  DescribeRedshiftIdcApplicationsPaginator(const Model::DescribeRedshiftIdcApplicationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRedshiftIdcApplicationsRequest,
                                             Pagination::DescribeRedshiftIdcApplicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedNodeExchangeStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodeExchangeStatusRequest,
                                    Pagination::DescribeReservedNodeExchangeStatusPaginationTraits<DerivedClient>>
  DescribeReservedNodeExchangeStatusPaginator(const Model::DescribeReservedNodeExchangeStatusRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodeExchangeStatusRequest,
                                             Pagination::DescribeReservedNodeExchangeStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedNodeOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodeOfferingsRequest,
                                    Pagination::DescribeReservedNodeOfferingsPaginationTraits<DerivedClient>>
  DescribeReservedNodeOfferingsPaginator(const Model::DescribeReservedNodeOfferingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodeOfferingsRequest,
                                             Pagination::DescribeReservedNodeOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodesRequest,
                                    Pagination::DescribeReservedNodesPaginationTraits<DerivedClient>>
  DescribeReservedNodesPaginator(const Model::DescribeReservedNodesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodesRequest,
                                             Pagination::DescribeReservedNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScheduledActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledActionsRequest,
                                    Pagination::DescribeScheduledActionsPaginationTraits<DerivedClient>>
  DescribeScheduledActionsPaginator(const Model::DescribeScheduledActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledActionsRequest,
                                             Pagination::DescribeScheduledActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshotCopyGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotCopyGrantsRequest,
                                    Pagination::DescribeSnapshotCopyGrantsPaginationTraits<DerivedClient>>
  DescribeSnapshotCopyGrantsPaginator(const Model::DescribeSnapshotCopyGrantsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotCopyGrantsRequest,
                                             Pagination::DescribeSnapshotCopyGrantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshotSchedules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotSchedulesRequest,
                                    Pagination::DescribeSnapshotSchedulesPaginationTraits<DerivedClient>>
  DescribeSnapshotSchedulesPaginator(const Model::DescribeSnapshotSchedulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotSchedulesRequest,
                                             Pagination::DescribeSnapshotSchedulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTableRestoreStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTableRestoreStatusRequest,
                                    Pagination::DescribeTableRestoreStatusPaginationTraits<DerivedClient>>
  DescribeTableRestoreStatusPaginator(const Model::DescribeTableRestoreStatusRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTableRestoreStatusRequest,
                                             Pagination::DescribeTableRestoreStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits<DerivedClient>>
  DescribeTagsPaginator(const Model::DescribeTagsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest,
                                             Pagination::DescribeTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for DescribeUsageLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsageLimitsRequest,
                                    Pagination::DescribeUsageLimitsPaginationTraits<DerivedClient>>
  DescribeUsageLimitsPaginator(const Model::DescribeUsageLimitsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsageLimitsRequest,
                                             Pagination::DescribeUsageLimitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetReservedNodeExchangeConfigurationOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReservedNodeExchangeConfigurationOptionsRequest,
                                    Pagination::GetReservedNodeExchangeConfigurationOptionsPaginationTraits<DerivedClient>>
  GetReservedNodeExchangeConfigurationOptionsPaginator(const Model::GetReservedNodeExchangeConfigurationOptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReservedNodeExchangeConfigurationOptionsRequest,
                                             Pagination::GetReservedNodeExchangeConfigurationOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetReservedNodeExchangeOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReservedNodeExchangeOfferingsRequest,
                                    Pagination::GetReservedNodeExchangeOfferingsPaginationTraits<DerivedClient>>
  GetReservedNodeExchangeOfferingsPaginator(const Model::GetReservedNodeExchangeOfferingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReservedNodeExchangeOfferingsRequest,
                                             Pagination::GetReservedNodeExchangeOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                    Pagination::ListRecommendationsPaginationTraits<DerivedClient>>
  ListRecommendationsPaginator(const Model::ListRecommendationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                             Pagination::ListRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Redshift
}  // namespace Aws
