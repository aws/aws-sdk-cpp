/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/redshift/RedshiftErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/redshift/RedshiftEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RedshiftClient header */
#include <aws/redshift/model/AcceptReservedNodeExchangeResult.h>
#include <aws/redshift/model/AddPartnerResult.h>
#include <aws/redshift/model/AssociateDataShareConsumerResult.h>
#include <aws/redshift/model/AuthorizeClusterSecurityGroupIngressResult.h>
#include <aws/redshift/model/AuthorizeDataShareResult.h>
#include <aws/redshift/model/AuthorizeEndpointAccessResult.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessResult.h>
#include <aws/redshift/model/BatchDeleteClusterSnapshotsResult.h>
#include <aws/redshift/model/BatchModifyClusterSnapshotsResult.h>
#include <aws/redshift/model/CancelResizeResult.h>
#include <aws/redshift/model/CopyClusterSnapshotResult.h>
#include <aws/redshift/model/CreateAuthenticationProfileResult.h>
#include <aws/redshift/model/CreateClusterResult.h>
#include <aws/redshift/model/CreateClusterParameterGroupResult.h>
#include <aws/redshift/model/CreateClusterSecurityGroupResult.h>
#include <aws/redshift/model/CreateClusterSnapshotResult.h>
#include <aws/redshift/model/CreateClusterSubnetGroupResult.h>
#include <aws/redshift/model/CreateEndpointAccessResult.h>
#include <aws/redshift/model/CreateEventSubscriptionResult.h>
#include <aws/redshift/model/CreateHsmClientCertificateResult.h>
#include <aws/redshift/model/CreateHsmConfigurationResult.h>
#include <aws/redshift/model/CreateScheduledActionResult.h>
#include <aws/redshift/model/CreateSnapshotCopyGrantResult.h>
#include <aws/redshift/model/CreateSnapshotScheduleResult.h>
#include <aws/redshift/model/CreateUsageLimitResult.h>
#include <aws/redshift/model/DeauthorizeDataShareResult.h>
#include <aws/redshift/model/DeleteAuthenticationProfileResult.h>
#include <aws/redshift/model/DeleteClusterResult.h>
#include <aws/redshift/model/DeleteClusterSnapshotResult.h>
#include <aws/redshift/model/DeleteEndpointAccessResult.h>
#include <aws/redshift/model/DeletePartnerResult.h>
#include <aws/redshift/model/DescribeAccountAttributesResult.h>
#include <aws/redshift/model/DescribeAuthenticationProfilesResult.h>
#include <aws/redshift/model/DescribeClusterDbRevisionsResult.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsResult.h>
#include <aws/redshift/model/DescribeClusterParametersResult.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsResult.h>
#include <aws/redshift/model/DescribeClusterSnapshotsResult.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsResult.h>
#include <aws/redshift/model/DescribeClusterTracksResult.h>
#include <aws/redshift/model/DescribeClusterVersionsResult.h>
#include <aws/redshift/model/DescribeClustersResult.h>
#include <aws/redshift/model/DescribeDataSharesResult.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerResult.h>
#include <aws/redshift/model/DescribeDataSharesForProducerResult.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersResult.h>
#include <aws/redshift/model/DescribeEndpointAccessResult.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationResult.h>
#include <aws/redshift/model/DescribeEventCategoriesResult.h>
#include <aws/redshift/model/DescribeEventSubscriptionsResult.h>
#include <aws/redshift/model/DescribeEventsResult.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesResult.h>
#include <aws/redshift/model/DescribeHsmConfigurationsResult.h>
#include <aws/redshift/model/DescribeLoggingStatusResult.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsResult.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsResult.h>
#include <aws/redshift/model/DescribePartnersResult.h>
#include <aws/redshift/model/DescribeReservedNodeExchangeStatusResult.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsResult.h>
#include <aws/redshift/model/DescribeReservedNodesResult.h>
#include <aws/redshift/model/DescribeResizeResult.h>
#include <aws/redshift/model/DescribeScheduledActionsResult.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsResult.h>
#include <aws/redshift/model/DescribeSnapshotSchedulesResult.h>
#include <aws/redshift/model/DescribeStorageResult.h>
#include <aws/redshift/model/DescribeTableRestoreStatusResult.h>
#include <aws/redshift/model/DescribeTagsResult.h>
#include <aws/redshift/model/DescribeUsageLimitsResult.h>
#include <aws/redshift/model/DisableLoggingResult.h>
#include <aws/redshift/model/DisableSnapshotCopyResult.h>
#include <aws/redshift/model/DisassociateDataShareConsumerResult.h>
#include <aws/redshift/model/EnableLoggingResult.h>
#include <aws/redshift/model/EnableSnapshotCopyResult.h>
#include <aws/redshift/model/GetClusterCredentialsResult.h>
#include <aws/redshift/model/GetClusterCredentialsWithIAMResult.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsResult.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsResult.h>
#include <aws/redshift/model/ModifyAquaConfigurationResult.h>
#include <aws/redshift/model/ModifyAuthenticationProfileResult.h>
#include <aws/redshift/model/ModifyClusterResult.h>
#include <aws/redshift/model/ModifyClusterDbRevisionResult.h>
#include <aws/redshift/model/ModifyClusterIamRolesResult.h>
#include <aws/redshift/model/ModifyClusterMaintenanceResult.h>
#include <aws/redshift/model/ModifyClusterParameterGroupResult.h>
#include <aws/redshift/model/ModifyClusterSnapshotResult.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupResult.h>
#include <aws/redshift/model/ModifyEndpointAccessResult.h>
#include <aws/redshift/model/ModifyEventSubscriptionResult.h>
#include <aws/redshift/model/ModifyScheduledActionResult.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodResult.h>
#include <aws/redshift/model/ModifySnapshotScheduleResult.h>
#include <aws/redshift/model/ModifyUsageLimitResult.h>
#include <aws/redshift/model/PauseClusterResult.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingResult.h>
#include <aws/redshift/model/RebootClusterResult.h>
#include <aws/redshift/model/RejectDataShareResult.h>
#include <aws/redshift/model/ResetClusterParameterGroupResult.h>
#include <aws/redshift/model/ResizeClusterResult.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotResult.h>
#include <aws/redshift/model/RestoreTableFromClusterSnapshotResult.h>
#include <aws/redshift/model/ResumeClusterResult.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressResult.h>
#include <aws/redshift/model/RevokeEndpointAccessResult.h>
#include <aws/redshift/model/RevokeSnapshotAccessResult.h>
#include <aws/redshift/model/RotateEncryptionKeyResult.h>
#include <aws/redshift/model/UpdatePartnerStatusResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in RedshiftClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Redshift
  {
    using RedshiftClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RedshiftEndpointProviderBase = Aws::Redshift::Endpoint::RedshiftEndpointProviderBase;
    using RedshiftEndpointProvider = Aws::Redshift::Endpoint::RedshiftEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RedshiftClient header */
      class AcceptReservedNodeExchangeRequest;
      class AddPartnerRequest;
      class AssociateDataShareConsumerRequest;
      class AuthorizeClusterSecurityGroupIngressRequest;
      class AuthorizeDataShareRequest;
      class AuthorizeEndpointAccessRequest;
      class AuthorizeSnapshotAccessRequest;
      class BatchDeleteClusterSnapshotsRequest;
      class BatchModifyClusterSnapshotsRequest;
      class CancelResizeRequest;
      class CopyClusterSnapshotRequest;
      class CreateAuthenticationProfileRequest;
      class CreateClusterRequest;
      class CreateClusterParameterGroupRequest;
      class CreateClusterSecurityGroupRequest;
      class CreateClusterSnapshotRequest;
      class CreateClusterSubnetGroupRequest;
      class CreateEndpointAccessRequest;
      class CreateEventSubscriptionRequest;
      class CreateHsmClientCertificateRequest;
      class CreateHsmConfigurationRequest;
      class CreateScheduledActionRequest;
      class CreateSnapshotCopyGrantRequest;
      class CreateSnapshotScheduleRequest;
      class CreateTagsRequest;
      class CreateUsageLimitRequest;
      class DeauthorizeDataShareRequest;
      class DeleteAuthenticationProfileRequest;
      class DeleteClusterRequest;
      class DeleteClusterParameterGroupRequest;
      class DeleteClusterSecurityGroupRequest;
      class DeleteClusterSnapshotRequest;
      class DeleteClusterSubnetGroupRequest;
      class DeleteEndpointAccessRequest;
      class DeleteEventSubscriptionRequest;
      class DeleteHsmClientCertificateRequest;
      class DeleteHsmConfigurationRequest;
      class DeletePartnerRequest;
      class DeleteScheduledActionRequest;
      class DeleteSnapshotCopyGrantRequest;
      class DeleteSnapshotScheduleRequest;
      class DeleteTagsRequest;
      class DeleteUsageLimitRequest;
      class DescribeAccountAttributesRequest;
      class DescribeAuthenticationProfilesRequest;
      class DescribeClusterDbRevisionsRequest;
      class DescribeClusterParameterGroupsRequest;
      class DescribeClusterParametersRequest;
      class DescribeClusterSecurityGroupsRequest;
      class DescribeClusterSnapshotsRequest;
      class DescribeClusterSubnetGroupsRequest;
      class DescribeClusterTracksRequest;
      class DescribeClusterVersionsRequest;
      class DescribeClustersRequest;
      class DescribeDataSharesRequest;
      class DescribeDataSharesForConsumerRequest;
      class DescribeDataSharesForProducerRequest;
      class DescribeDefaultClusterParametersRequest;
      class DescribeEndpointAccessRequest;
      class DescribeEndpointAuthorizationRequest;
      class DescribeEventCategoriesRequest;
      class DescribeEventSubscriptionsRequest;
      class DescribeEventsRequest;
      class DescribeHsmClientCertificatesRequest;
      class DescribeHsmConfigurationsRequest;
      class DescribeLoggingStatusRequest;
      class DescribeNodeConfigurationOptionsRequest;
      class DescribeOrderableClusterOptionsRequest;
      class DescribePartnersRequest;
      class DescribeReservedNodeExchangeStatusRequest;
      class DescribeReservedNodeOfferingsRequest;
      class DescribeReservedNodesRequest;
      class DescribeResizeRequest;
      class DescribeScheduledActionsRequest;
      class DescribeSnapshotCopyGrantsRequest;
      class DescribeSnapshotSchedulesRequest;
      class DescribeStorageRequest;
      class DescribeTableRestoreStatusRequest;
      class DescribeTagsRequest;
      class DescribeUsageLimitsRequest;
      class DisableLoggingRequest;
      class DisableSnapshotCopyRequest;
      class DisassociateDataShareConsumerRequest;
      class EnableLoggingRequest;
      class EnableSnapshotCopyRequest;
      class GetClusterCredentialsRequest;
      class GetClusterCredentialsWithIAMRequest;
      class GetReservedNodeExchangeConfigurationOptionsRequest;
      class GetReservedNodeExchangeOfferingsRequest;
      class ModifyAquaConfigurationRequest;
      class ModifyAuthenticationProfileRequest;
      class ModifyClusterRequest;
      class ModifyClusterDbRevisionRequest;
      class ModifyClusterIamRolesRequest;
      class ModifyClusterMaintenanceRequest;
      class ModifyClusterParameterGroupRequest;
      class ModifyClusterSnapshotRequest;
      class ModifyClusterSnapshotScheduleRequest;
      class ModifyClusterSubnetGroupRequest;
      class ModifyEndpointAccessRequest;
      class ModifyEventSubscriptionRequest;
      class ModifyScheduledActionRequest;
      class ModifySnapshotCopyRetentionPeriodRequest;
      class ModifySnapshotScheduleRequest;
      class ModifyUsageLimitRequest;
      class PauseClusterRequest;
      class PurchaseReservedNodeOfferingRequest;
      class RebootClusterRequest;
      class RejectDataShareRequest;
      class ResetClusterParameterGroupRequest;
      class ResizeClusterRequest;
      class RestoreFromClusterSnapshotRequest;
      class RestoreTableFromClusterSnapshotRequest;
      class ResumeClusterRequest;
      class RevokeClusterSecurityGroupIngressRequest;
      class RevokeEndpointAccessRequest;
      class RevokeSnapshotAccessRequest;
      class RotateEncryptionKeyRequest;
      class UpdatePartnerStatusRequest;
      /* End of service model forward declarations required in RedshiftClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptReservedNodeExchangeResult, RedshiftError> AcceptReservedNodeExchangeOutcome;
      typedef Aws::Utils::Outcome<AddPartnerResult, RedshiftError> AddPartnerOutcome;
      typedef Aws::Utils::Outcome<AssociateDataShareConsumerResult, RedshiftError> AssociateDataShareConsumerOutcome;
      typedef Aws::Utils::Outcome<AuthorizeClusterSecurityGroupIngressResult, RedshiftError> AuthorizeClusterSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<AuthorizeDataShareResult, RedshiftError> AuthorizeDataShareOutcome;
      typedef Aws::Utils::Outcome<AuthorizeEndpointAccessResult, RedshiftError> AuthorizeEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<AuthorizeSnapshotAccessResult, RedshiftError> AuthorizeSnapshotAccessOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteClusterSnapshotsResult, RedshiftError> BatchDeleteClusterSnapshotsOutcome;
      typedef Aws::Utils::Outcome<BatchModifyClusterSnapshotsResult, RedshiftError> BatchModifyClusterSnapshotsOutcome;
      typedef Aws::Utils::Outcome<CancelResizeResult, RedshiftError> CancelResizeOutcome;
      typedef Aws::Utils::Outcome<CopyClusterSnapshotResult, RedshiftError> CopyClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateAuthenticationProfileResult, RedshiftError> CreateAuthenticationProfileOutcome;
      typedef Aws::Utils::Outcome<CreateClusterResult, RedshiftError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateClusterParameterGroupResult, RedshiftError> CreateClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateClusterSecurityGroupResult, RedshiftError> CreateClusterSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<CreateClusterSnapshotResult, RedshiftError> CreateClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateClusterSubnetGroupResult, RedshiftError> CreateClusterSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointAccessResult, RedshiftError> CreateEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, RedshiftError> CreateEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateHsmClientCertificateResult, RedshiftError> CreateHsmClientCertificateOutcome;
      typedef Aws::Utils::Outcome<CreateHsmConfigurationResult, RedshiftError> CreateHsmConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateScheduledActionResult, RedshiftError> CreateScheduledActionOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotCopyGrantResult, RedshiftError> CreateSnapshotCopyGrantOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotScheduleResult, RedshiftError> CreateSnapshotScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> CreateTagsOutcome;
      typedef Aws::Utils::Outcome<CreateUsageLimitResult, RedshiftError> CreateUsageLimitOutcome;
      typedef Aws::Utils::Outcome<DeauthorizeDataShareResult, RedshiftError> DeauthorizeDataShareOutcome;
      typedef Aws::Utils::Outcome<DeleteAuthenticationProfileResult, RedshiftError> DeleteAuthenticationProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, RedshiftError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteClusterSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterSnapshotResult, RedshiftError> DeleteClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteClusterSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteEndpointAccessResult, RedshiftError> DeleteEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteHsmClientCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteHsmConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePartnerResult, RedshiftError> DeletePartnerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteScheduledActionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteSnapshotCopyGrantOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteSnapshotScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> DeleteUsageLimitOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, RedshiftError> DescribeAccountAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeAuthenticationProfilesResult, RedshiftError> DescribeAuthenticationProfilesOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterDbRevisionsResult, RedshiftError> DescribeClusterDbRevisionsOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterParameterGroupsResult, RedshiftError> DescribeClusterParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterParametersResult, RedshiftError> DescribeClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterSecurityGroupsResult, RedshiftError> DescribeClusterSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterSnapshotsResult, RedshiftError> DescribeClusterSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterSubnetGroupsResult, RedshiftError> DescribeClusterSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterTracksResult, RedshiftError> DescribeClusterTracksOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterVersionsResult, RedshiftError> DescribeClusterVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeClustersResult, RedshiftError> DescribeClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSharesResult, RedshiftError> DescribeDataSharesOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSharesForConsumerResult, RedshiftError> DescribeDataSharesForConsumerOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSharesForProducerResult, RedshiftError> DescribeDataSharesForProducerOutcome;
      typedef Aws::Utils::Outcome<DescribeDefaultClusterParametersResult, RedshiftError> DescribeDefaultClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointAccessResult, RedshiftError> DescribeEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointAuthorizationResult, RedshiftError> DescribeEndpointAuthorizationOutcome;
      typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, RedshiftError> DescribeEventCategoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, RedshiftError> DescribeEventSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, RedshiftError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeHsmClientCertificatesResult, RedshiftError> DescribeHsmClientCertificatesOutcome;
      typedef Aws::Utils::Outcome<DescribeHsmConfigurationsResult, RedshiftError> DescribeHsmConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeLoggingStatusResult, RedshiftError> DescribeLoggingStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeNodeConfigurationOptionsResult, RedshiftError> DescribeNodeConfigurationOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeOrderableClusterOptionsResult, RedshiftError> DescribeOrderableClusterOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribePartnersResult, RedshiftError> DescribePartnersOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedNodeExchangeStatusResult, RedshiftError> DescribeReservedNodeExchangeStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedNodeOfferingsResult, RedshiftError> DescribeReservedNodeOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedNodesResult, RedshiftError> DescribeReservedNodesOutcome;
      typedef Aws::Utils::Outcome<DescribeResizeResult, RedshiftError> DescribeResizeOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduledActionsResult, RedshiftError> DescribeScheduledActionsOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotCopyGrantsResult, RedshiftError> DescribeSnapshotCopyGrantsOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotSchedulesResult, RedshiftError> DescribeSnapshotSchedulesOutcome;
      typedef Aws::Utils::Outcome<DescribeStorageResult, RedshiftError> DescribeStorageOutcome;
      typedef Aws::Utils::Outcome<DescribeTableRestoreStatusResult, RedshiftError> DescribeTableRestoreStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResult, RedshiftError> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeUsageLimitsResult, RedshiftError> DescribeUsageLimitsOutcome;
      typedef Aws::Utils::Outcome<DisableLoggingResult, RedshiftError> DisableLoggingOutcome;
      typedef Aws::Utils::Outcome<DisableSnapshotCopyResult, RedshiftError> DisableSnapshotCopyOutcome;
      typedef Aws::Utils::Outcome<DisassociateDataShareConsumerResult, RedshiftError> DisassociateDataShareConsumerOutcome;
      typedef Aws::Utils::Outcome<EnableLoggingResult, RedshiftError> EnableLoggingOutcome;
      typedef Aws::Utils::Outcome<EnableSnapshotCopyResult, RedshiftError> EnableSnapshotCopyOutcome;
      typedef Aws::Utils::Outcome<GetClusterCredentialsResult, RedshiftError> GetClusterCredentialsOutcome;
      typedef Aws::Utils::Outcome<GetClusterCredentialsWithIAMResult, RedshiftError> GetClusterCredentialsWithIAMOutcome;
      typedef Aws::Utils::Outcome<GetReservedNodeExchangeConfigurationOptionsResult, RedshiftError> GetReservedNodeExchangeConfigurationOptionsOutcome;
      typedef Aws::Utils::Outcome<GetReservedNodeExchangeOfferingsResult, RedshiftError> GetReservedNodeExchangeOfferingsOutcome;
      typedef Aws::Utils::Outcome<ModifyAquaConfigurationResult, RedshiftError> ModifyAquaConfigurationOutcome;
      typedef Aws::Utils::Outcome<ModifyAuthenticationProfileResult, RedshiftError> ModifyAuthenticationProfileOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterResult, RedshiftError> ModifyClusterOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterDbRevisionResult, RedshiftError> ModifyClusterDbRevisionOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterIamRolesResult, RedshiftError> ModifyClusterIamRolesOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterMaintenanceResult, RedshiftError> ModifyClusterMaintenanceOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterParameterGroupResult, RedshiftError> ModifyClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterSnapshotResult, RedshiftError> ModifyClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RedshiftError> ModifyClusterSnapshotScheduleOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterSubnetGroupResult, RedshiftError> ModifyClusterSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyEndpointAccessResult, RedshiftError> ModifyEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, RedshiftError> ModifyEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<ModifyScheduledActionResult, RedshiftError> ModifyScheduledActionOutcome;
      typedef Aws::Utils::Outcome<ModifySnapshotCopyRetentionPeriodResult, RedshiftError> ModifySnapshotCopyRetentionPeriodOutcome;
      typedef Aws::Utils::Outcome<ModifySnapshotScheduleResult, RedshiftError> ModifySnapshotScheduleOutcome;
      typedef Aws::Utils::Outcome<ModifyUsageLimitResult, RedshiftError> ModifyUsageLimitOutcome;
      typedef Aws::Utils::Outcome<PauseClusterResult, RedshiftError> PauseClusterOutcome;
      typedef Aws::Utils::Outcome<PurchaseReservedNodeOfferingResult, RedshiftError> PurchaseReservedNodeOfferingOutcome;
      typedef Aws::Utils::Outcome<RebootClusterResult, RedshiftError> RebootClusterOutcome;
      typedef Aws::Utils::Outcome<RejectDataShareResult, RedshiftError> RejectDataShareOutcome;
      typedef Aws::Utils::Outcome<ResetClusterParameterGroupResult, RedshiftError> ResetClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ResizeClusterResult, RedshiftError> ResizeClusterOutcome;
      typedef Aws::Utils::Outcome<RestoreFromClusterSnapshotResult, RedshiftError> RestoreFromClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<RestoreTableFromClusterSnapshotResult, RedshiftError> RestoreTableFromClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<ResumeClusterResult, RedshiftError> ResumeClusterOutcome;
      typedef Aws::Utils::Outcome<RevokeClusterSecurityGroupIngressResult, RedshiftError> RevokeClusterSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<RevokeEndpointAccessResult, RedshiftError> RevokeEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<RevokeSnapshotAccessResult, RedshiftError> RevokeSnapshotAccessOutcome;
      typedef Aws::Utils::Outcome<RotateEncryptionKeyResult, RedshiftError> RotateEncryptionKeyOutcome;
      typedef Aws::Utils::Outcome<UpdatePartnerStatusResult, RedshiftError> UpdatePartnerStatusOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptReservedNodeExchangeOutcome> AcceptReservedNodeExchangeOutcomeCallable;
      typedef std::future<AddPartnerOutcome> AddPartnerOutcomeCallable;
      typedef std::future<AssociateDataShareConsumerOutcome> AssociateDataShareConsumerOutcomeCallable;
      typedef std::future<AuthorizeClusterSecurityGroupIngressOutcome> AuthorizeClusterSecurityGroupIngressOutcomeCallable;
      typedef std::future<AuthorizeDataShareOutcome> AuthorizeDataShareOutcomeCallable;
      typedef std::future<AuthorizeEndpointAccessOutcome> AuthorizeEndpointAccessOutcomeCallable;
      typedef std::future<AuthorizeSnapshotAccessOutcome> AuthorizeSnapshotAccessOutcomeCallable;
      typedef std::future<BatchDeleteClusterSnapshotsOutcome> BatchDeleteClusterSnapshotsOutcomeCallable;
      typedef std::future<BatchModifyClusterSnapshotsOutcome> BatchModifyClusterSnapshotsOutcomeCallable;
      typedef std::future<CancelResizeOutcome> CancelResizeOutcomeCallable;
      typedef std::future<CopyClusterSnapshotOutcome> CopyClusterSnapshotOutcomeCallable;
      typedef std::future<CreateAuthenticationProfileOutcome> CreateAuthenticationProfileOutcomeCallable;
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateClusterParameterGroupOutcome> CreateClusterParameterGroupOutcomeCallable;
      typedef std::future<CreateClusterSecurityGroupOutcome> CreateClusterSecurityGroupOutcomeCallable;
      typedef std::future<CreateClusterSnapshotOutcome> CreateClusterSnapshotOutcomeCallable;
      typedef std::future<CreateClusterSubnetGroupOutcome> CreateClusterSubnetGroupOutcomeCallable;
      typedef std::future<CreateEndpointAccessOutcome> CreateEndpointAccessOutcomeCallable;
      typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
      typedef std::future<CreateHsmClientCertificateOutcome> CreateHsmClientCertificateOutcomeCallable;
      typedef std::future<CreateHsmConfigurationOutcome> CreateHsmConfigurationOutcomeCallable;
      typedef std::future<CreateScheduledActionOutcome> CreateScheduledActionOutcomeCallable;
      typedef std::future<CreateSnapshotCopyGrantOutcome> CreateSnapshotCopyGrantOutcomeCallable;
      typedef std::future<CreateSnapshotScheduleOutcome> CreateSnapshotScheduleOutcomeCallable;
      typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
      typedef std::future<CreateUsageLimitOutcome> CreateUsageLimitOutcomeCallable;
      typedef std::future<DeauthorizeDataShareOutcome> DeauthorizeDataShareOutcomeCallable;
      typedef std::future<DeleteAuthenticationProfileOutcome> DeleteAuthenticationProfileOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteClusterParameterGroupOutcome> DeleteClusterParameterGroupOutcomeCallable;
      typedef std::future<DeleteClusterSecurityGroupOutcome> DeleteClusterSecurityGroupOutcomeCallable;
      typedef std::future<DeleteClusterSnapshotOutcome> DeleteClusterSnapshotOutcomeCallable;
      typedef std::future<DeleteClusterSubnetGroupOutcome> DeleteClusterSubnetGroupOutcomeCallable;
      typedef std::future<DeleteEndpointAccessOutcome> DeleteEndpointAccessOutcomeCallable;
      typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
      typedef std::future<DeleteHsmClientCertificateOutcome> DeleteHsmClientCertificateOutcomeCallable;
      typedef std::future<DeleteHsmConfigurationOutcome> DeleteHsmConfigurationOutcomeCallable;
      typedef std::future<DeletePartnerOutcome> DeletePartnerOutcomeCallable;
      typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
      typedef std::future<DeleteSnapshotCopyGrantOutcome> DeleteSnapshotCopyGrantOutcomeCallable;
      typedef std::future<DeleteSnapshotScheduleOutcome> DeleteSnapshotScheduleOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DeleteUsageLimitOutcome> DeleteUsageLimitOutcomeCallable;
      typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
      typedef std::future<DescribeAuthenticationProfilesOutcome> DescribeAuthenticationProfilesOutcomeCallable;
      typedef std::future<DescribeClusterDbRevisionsOutcome> DescribeClusterDbRevisionsOutcomeCallable;
      typedef std::future<DescribeClusterParameterGroupsOutcome> DescribeClusterParameterGroupsOutcomeCallable;
      typedef std::future<DescribeClusterParametersOutcome> DescribeClusterParametersOutcomeCallable;
      typedef std::future<DescribeClusterSecurityGroupsOutcome> DescribeClusterSecurityGroupsOutcomeCallable;
      typedef std::future<DescribeClusterSnapshotsOutcome> DescribeClusterSnapshotsOutcomeCallable;
      typedef std::future<DescribeClusterSubnetGroupsOutcome> DescribeClusterSubnetGroupsOutcomeCallable;
      typedef std::future<DescribeClusterTracksOutcome> DescribeClusterTracksOutcomeCallable;
      typedef std::future<DescribeClusterVersionsOutcome> DescribeClusterVersionsOutcomeCallable;
      typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
      typedef std::future<DescribeDataSharesOutcome> DescribeDataSharesOutcomeCallable;
      typedef std::future<DescribeDataSharesForConsumerOutcome> DescribeDataSharesForConsumerOutcomeCallable;
      typedef std::future<DescribeDataSharesForProducerOutcome> DescribeDataSharesForProducerOutcomeCallable;
      typedef std::future<DescribeDefaultClusterParametersOutcome> DescribeDefaultClusterParametersOutcomeCallable;
      typedef std::future<DescribeEndpointAccessOutcome> DescribeEndpointAccessOutcomeCallable;
      typedef std::future<DescribeEndpointAuthorizationOutcome> DescribeEndpointAuthorizationOutcomeCallable;
      typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
      typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeHsmClientCertificatesOutcome> DescribeHsmClientCertificatesOutcomeCallable;
      typedef std::future<DescribeHsmConfigurationsOutcome> DescribeHsmConfigurationsOutcomeCallable;
      typedef std::future<DescribeLoggingStatusOutcome> DescribeLoggingStatusOutcomeCallable;
      typedef std::future<DescribeNodeConfigurationOptionsOutcome> DescribeNodeConfigurationOptionsOutcomeCallable;
      typedef std::future<DescribeOrderableClusterOptionsOutcome> DescribeOrderableClusterOptionsOutcomeCallable;
      typedef std::future<DescribePartnersOutcome> DescribePartnersOutcomeCallable;
      typedef std::future<DescribeReservedNodeExchangeStatusOutcome> DescribeReservedNodeExchangeStatusOutcomeCallable;
      typedef std::future<DescribeReservedNodeOfferingsOutcome> DescribeReservedNodeOfferingsOutcomeCallable;
      typedef std::future<DescribeReservedNodesOutcome> DescribeReservedNodesOutcomeCallable;
      typedef std::future<DescribeResizeOutcome> DescribeResizeOutcomeCallable;
      typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
      typedef std::future<DescribeSnapshotCopyGrantsOutcome> DescribeSnapshotCopyGrantsOutcomeCallable;
      typedef std::future<DescribeSnapshotSchedulesOutcome> DescribeSnapshotSchedulesOutcomeCallable;
      typedef std::future<DescribeStorageOutcome> DescribeStorageOutcomeCallable;
      typedef std::future<DescribeTableRestoreStatusOutcome> DescribeTableRestoreStatusOutcomeCallable;
      typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
      typedef std::future<DescribeUsageLimitsOutcome> DescribeUsageLimitsOutcomeCallable;
      typedef std::future<DisableLoggingOutcome> DisableLoggingOutcomeCallable;
      typedef std::future<DisableSnapshotCopyOutcome> DisableSnapshotCopyOutcomeCallable;
      typedef std::future<DisassociateDataShareConsumerOutcome> DisassociateDataShareConsumerOutcomeCallable;
      typedef std::future<EnableLoggingOutcome> EnableLoggingOutcomeCallable;
      typedef std::future<EnableSnapshotCopyOutcome> EnableSnapshotCopyOutcomeCallable;
      typedef std::future<GetClusterCredentialsOutcome> GetClusterCredentialsOutcomeCallable;
      typedef std::future<GetClusterCredentialsWithIAMOutcome> GetClusterCredentialsWithIAMOutcomeCallable;
      typedef std::future<GetReservedNodeExchangeConfigurationOptionsOutcome> GetReservedNodeExchangeConfigurationOptionsOutcomeCallable;
      typedef std::future<GetReservedNodeExchangeOfferingsOutcome> GetReservedNodeExchangeOfferingsOutcomeCallable;
      typedef std::future<ModifyAquaConfigurationOutcome> ModifyAquaConfigurationOutcomeCallable;
      typedef std::future<ModifyAuthenticationProfileOutcome> ModifyAuthenticationProfileOutcomeCallable;
      typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
      typedef std::future<ModifyClusterDbRevisionOutcome> ModifyClusterDbRevisionOutcomeCallable;
      typedef std::future<ModifyClusterIamRolesOutcome> ModifyClusterIamRolesOutcomeCallable;
      typedef std::future<ModifyClusterMaintenanceOutcome> ModifyClusterMaintenanceOutcomeCallable;
      typedef std::future<ModifyClusterParameterGroupOutcome> ModifyClusterParameterGroupOutcomeCallable;
      typedef std::future<ModifyClusterSnapshotOutcome> ModifyClusterSnapshotOutcomeCallable;
      typedef std::future<ModifyClusterSnapshotScheduleOutcome> ModifyClusterSnapshotScheduleOutcomeCallable;
      typedef std::future<ModifyClusterSubnetGroupOutcome> ModifyClusterSubnetGroupOutcomeCallable;
      typedef std::future<ModifyEndpointAccessOutcome> ModifyEndpointAccessOutcomeCallable;
      typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
      typedef std::future<ModifyScheduledActionOutcome> ModifyScheduledActionOutcomeCallable;
      typedef std::future<ModifySnapshotCopyRetentionPeriodOutcome> ModifySnapshotCopyRetentionPeriodOutcomeCallable;
      typedef std::future<ModifySnapshotScheduleOutcome> ModifySnapshotScheduleOutcomeCallable;
      typedef std::future<ModifyUsageLimitOutcome> ModifyUsageLimitOutcomeCallable;
      typedef std::future<PauseClusterOutcome> PauseClusterOutcomeCallable;
      typedef std::future<PurchaseReservedNodeOfferingOutcome> PurchaseReservedNodeOfferingOutcomeCallable;
      typedef std::future<RebootClusterOutcome> RebootClusterOutcomeCallable;
      typedef std::future<RejectDataShareOutcome> RejectDataShareOutcomeCallable;
      typedef std::future<ResetClusterParameterGroupOutcome> ResetClusterParameterGroupOutcomeCallable;
      typedef std::future<ResizeClusterOutcome> ResizeClusterOutcomeCallable;
      typedef std::future<RestoreFromClusterSnapshotOutcome> RestoreFromClusterSnapshotOutcomeCallable;
      typedef std::future<RestoreTableFromClusterSnapshotOutcome> RestoreTableFromClusterSnapshotOutcomeCallable;
      typedef std::future<ResumeClusterOutcome> ResumeClusterOutcomeCallable;
      typedef std::future<RevokeClusterSecurityGroupIngressOutcome> RevokeClusterSecurityGroupIngressOutcomeCallable;
      typedef std::future<RevokeEndpointAccessOutcome> RevokeEndpointAccessOutcomeCallable;
      typedef std::future<RevokeSnapshotAccessOutcome> RevokeSnapshotAccessOutcomeCallable;
      typedef std::future<RotateEncryptionKeyOutcome> RotateEncryptionKeyOutcomeCallable;
      typedef std::future<UpdatePartnerStatusOutcome> UpdatePartnerStatusOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RedshiftClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RedshiftClient*, const Model::AcceptReservedNodeExchangeRequest&, const Model::AcceptReservedNodeExchangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptReservedNodeExchangeResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::AddPartnerRequest&, const Model::AddPartnerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPartnerResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::AssociateDataShareConsumerRequest&, const Model::AssociateDataShareConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDataShareConsumerResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::AuthorizeClusterSecurityGroupIngressRequest&, const Model::AuthorizeClusterSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeClusterSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::AuthorizeDataShareRequest&, const Model::AuthorizeDataShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeDataShareResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::AuthorizeEndpointAccessRequest&, const Model::AuthorizeEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::AuthorizeSnapshotAccessRequest&, const Model::AuthorizeSnapshotAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeSnapshotAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::BatchDeleteClusterSnapshotsRequest&, const Model::BatchDeleteClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::BatchModifyClusterSnapshotsRequest&, const Model::BatchModifyClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchModifyClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CancelResizeRequest&, const Model::CancelResizeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelResizeResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CopyClusterSnapshotRequest&, const Model::CopyClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateAuthenticationProfileRequest&, const Model::CreateAuthenticationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuthenticationProfileResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterParameterGroupRequest&, const Model::CreateClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterSecurityGroupRequest&, const Model::CreateClusterSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterSnapshotRequest&, const Model::CreateClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateClusterSubnetGroupRequest&, const Model::CreateClusterSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateEndpointAccessRequest&, const Model::CreateEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateHsmClientCertificateRequest&, const Model::CreateHsmClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmClientCertificateResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateHsmConfigurationRequest&, const Model::CreateHsmConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmConfigurationResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateScheduledActionRequest&, const Model::CreateScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScheduledActionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateSnapshotCopyGrantRequest&, const Model::CreateSnapshotCopyGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotCopyGrantResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateSnapshotScheduleRequest&, const Model::CreateSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::CreateUsageLimitRequest&, const Model::CreateUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeauthorizeDataShareRequest&, const Model::DeauthorizeDataShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeauthorizeDataShareResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteAuthenticationProfileRequest&, const Model::DeleteAuthenticationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAuthenticationProfileResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterParameterGroupRequest&, const Model::DeleteClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterSecurityGroupRequest&, const Model::DeleteClusterSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterSnapshotRequest&, const Model::DeleteClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteClusterSubnetGroupRequest&, const Model::DeleteClusterSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteEndpointAccessRequest&, const Model::DeleteEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteHsmClientCertificateRequest&, const Model::DeleteHsmClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmClientCertificateResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteHsmConfigurationRequest&, const Model::DeleteHsmConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmConfigurationResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeletePartnerRequest&, const Model::DeletePartnerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePartnerResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteScheduledActionRequest&, const Model::DeleteScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledActionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteSnapshotCopyGrantRequest&, const Model::DeleteSnapshotCopyGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotCopyGrantResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteSnapshotScheduleRequest&, const Model::DeleteSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DeleteUsageLimitRequest&, const Model::DeleteUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeAuthenticationProfilesRequest&, const Model::DescribeAuthenticationProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAuthenticationProfilesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterDbRevisionsRequest&, const Model::DescribeClusterDbRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterDbRevisionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterParameterGroupsRequest&, const Model::DescribeClusterParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterParametersRequest&, const Model::DescribeClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterSecurityGroupsRequest&, const Model::DescribeClusterSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterSnapshotsRequest&, const Model::DescribeClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterSubnetGroupsRequest&, const Model::DescribeClusterSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterTracksRequest&, const Model::DescribeClusterTracksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterTracksResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClusterVersionsRequest&, const Model::DescribeClusterVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterVersionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeDataSharesRequest&, const Model::DescribeDataSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSharesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeDataSharesForConsumerRequest&, const Model::DescribeDataSharesForConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSharesForConsumerResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeDataSharesForProducerRequest&, const Model::DescribeDataSharesForProducerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSharesForProducerResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeDefaultClusterParametersRequest&, const Model::DescribeDefaultClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDefaultClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEndpointAccessRequest&, const Model::DescribeEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEndpointAuthorizationRequest&, const Model::DescribeEndpointAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointAuthorizationResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeHsmClientCertificatesRequest&, const Model::DescribeHsmClientCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHsmClientCertificatesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeHsmConfigurationsRequest&, const Model::DescribeHsmConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHsmConfigurationsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeLoggingStatusRequest&, const Model::DescribeLoggingStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingStatusResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeNodeConfigurationOptionsRequest&, const Model::DescribeNodeConfigurationOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodeConfigurationOptionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeOrderableClusterOptionsRequest&, const Model::DescribeOrderableClusterOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableClusterOptionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribePartnersRequest&, const Model::DescribePartnersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePartnersResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeReservedNodeExchangeStatusRequest&, const Model::DescribeReservedNodeExchangeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedNodeExchangeStatusResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeReservedNodeOfferingsRequest&, const Model::DescribeReservedNodeOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedNodeOfferingsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeReservedNodesRequest&, const Model::DescribeReservedNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedNodesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeResizeRequest&, const Model::DescribeResizeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResizeResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeScheduledActionsRequest&, const Model::DescribeScheduledActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledActionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeSnapshotCopyGrantsRequest&, const Model::DescribeSnapshotCopyGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotCopyGrantsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeSnapshotSchedulesRequest&, const Model::DescribeSnapshotSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotSchedulesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeStorageRequest&, const Model::DescribeStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStorageResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeTableRestoreStatusRequest&, const Model::DescribeTableRestoreStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableRestoreStatusResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DescribeUsageLimitsRequest&, const Model::DescribeUsageLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUsageLimitsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DisableLoggingRequest&, const Model::DisableLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableLoggingResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DisableSnapshotCopyRequest&, const Model::DisableSnapshotCopyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSnapshotCopyResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::DisassociateDataShareConsumerRequest&, const Model::DisassociateDataShareConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDataShareConsumerResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::EnableLoggingRequest&, const Model::EnableLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableLoggingResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::EnableSnapshotCopyRequest&, const Model::EnableSnapshotCopyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSnapshotCopyResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::GetClusterCredentialsRequest&, const Model::GetClusterCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClusterCredentialsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::GetClusterCredentialsWithIAMRequest&, const Model::GetClusterCredentialsWithIAMOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClusterCredentialsWithIAMResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::GetReservedNodeExchangeConfigurationOptionsRequest&, const Model::GetReservedNodeExchangeConfigurationOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservedNodeExchangeConfigurationOptionsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::GetReservedNodeExchangeOfferingsRequest&, const Model::GetReservedNodeExchangeOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservedNodeExchangeOfferingsResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyAquaConfigurationRequest&, const Model::ModifyAquaConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyAquaConfigurationResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyAuthenticationProfileRequest&, const Model::ModifyAuthenticationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyAuthenticationProfileResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterRequest&, const Model::ModifyClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterDbRevisionRequest&, const Model::ModifyClusterDbRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterDbRevisionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterIamRolesRequest&, const Model::ModifyClusterIamRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterIamRolesResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterMaintenanceRequest&, const Model::ModifyClusterMaintenanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterMaintenanceResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterParameterGroupRequest&, const Model::ModifyClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterSnapshotRequest&, const Model::ModifyClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterSnapshotScheduleRequest&, const Model::ModifyClusterSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyClusterSubnetGroupRequest&, const Model::ModifyClusterSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyEndpointAccessRequest&, const Model::ModifyEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyScheduledActionRequest&, const Model::ModifyScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyScheduledActionResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifySnapshotCopyRetentionPeriodRequest&, const Model::ModifySnapshotCopyRetentionPeriodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySnapshotCopyRetentionPeriodResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifySnapshotScheduleRequest&, const Model::ModifySnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ModifyUsageLimitRequest&, const Model::ModifyUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::PauseClusterRequest&, const Model::PauseClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PauseClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::PurchaseReservedNodeOfferingRequest&, const Model::PurchaseReservedNodeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedNodeOfferingResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RebootClusterRequest&, const Model::RebootClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RejectDataShareRequest&, const Model::RejectDataShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectDataShareResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ResetClusterParameterGroupRequest&, const Model::ResetClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ResizeClusterRequest&, const Model::ResizeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResizeClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RestoreFromClusterSnapshotRequest&, const Model::RestoreFromClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RestoreTableFromClusterSnapshotRequest&, const Model::RestoreTableFromClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableFromClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::ResumeClusterRequest&, const Model::ResumeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeClusterResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RevokeClusterSecurityGroupIngressRequest&, const Model::RevokeClusterSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeClusterSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RevokeEndpointAccessRequest&, const Model::RevokeEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RevokeSnapshotAccessRequest&, const Model::RevokeSnapshotAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSnapshotAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::RotateEncryptionKeyRequest&, const Model::RotateEncryptionKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RotateEncryptionKeyResponseReceivedHandler;
    typedef std::function<void(const RedshiftClient*, const Model::UpdatePartnerStatusRequest&, const Model::UpdatePartnerStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePartnerStatusResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Redshift
} // namespace Aws
