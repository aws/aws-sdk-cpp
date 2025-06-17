/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/network-firewall/NetworkFirewallErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/network-firewall/NetworkFirewallEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NetworkFirewallClient header */
#include <aws/network-firewall/model/AcceptNetworkFirewallTransitGatewayAttachmentResult.h>
#include <aws/network-firewall/model/AssociateAvailabilityZonesResult.h>
#include <aws/network-firewall/model/AssociateFirewallPolicyResult.h>
#include <aws/network-firewall/model/AssociateSubnetsResult.h>
#include <aws/network-firewall/model/CreateFirewallResult.h>
#include <aws/network-firewall/model/CreateFirewallPolicyResult.h>
#include <aws/network-firewall/model/CreateRuleGroupResult.h>
#include <aws/network-firewall/model/CreateTLSInspectionConfigurationResult.h>
#include <aws/network-firewall/model/CreateVpcEndpointAssociationResult.h>
#include <aws/network-firewall/model/DeleteFirewallResult.h>
#include <aws/network-firewall/model/DeleteFirewallPolicyResult.h>
#include <aws/network-firewall/model/DeleteNetworkFirewallTransitGatewayAttachmentResult.h>
#include <aws/network-firewall/model/DeleteResourcePolicyResult.h>
#include <aws/network-firewall/model/DeleteRuleGroupResult.h>
#include <aws/network-firewall/model/DeleteTLSInspectionConfigurationResult.h>
#include <aws/network-firewall/model/DeleteVpcEndpointAssociationResult.h>
#include <aws/network-firewall/model/DescribeFirewallResult.h>
#include <aws/network-firewall/model/DescribeFirewallMetadataResult.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyResult.h>
#include <aws/network-firewall/model/DescribeFlowOperationResult.h>
#include <aws/network-firewall/model/DescribeLoggingConfigurationResult.h>
#include <aws/network-firewall/model/DescribeResourcePolicyResult.h>
#include <aws/network-firewall/model/DescribeRuleGroupResult.h>
#include <aws/network-firewall/model/DescribeRuleGroupMetadataResult.h>
#include <aws/network-firewall/model/DescribeRuleGroupSummaryResult.h>
#include <aws/network-firewall/model/DescribeTLSInspectionConfigurationResult.h>
#include <aws/network-firewall/model/DescribeVpcEndpointAssociationResult.h>
#include <aws/network-firewall/model/DisassociateAvailabilityZonesResult.h>
#include <aws/network-firewall/model/DisassociateSubnetsResult.h>
#include <aws/network-firewall/model/GetAnalysisReportResultsResult.h>
#include <aws/network-firewall/model/ListAnalysisReportsResult.h>
#include <aws/network-firewall/model/ListFirewallPoliciesResult.h>
#include <aws/network-firewall/model/ListFirewallsResult.h>
#include <aws/network-firewall/model/ListFlowOperationResultsResult.h>
#include <aws/network-firewall/model/ListFlowOperationsResult.h>
#include <aws/network-firewall/model/ListRuleGroupsResult.h>
#include <aws/network-firewall/model/ListTLSInspectionConfigurationsResult.h>
#include <aws/network-firewall/model/ListTagsForResourceResult.h>
#include <aws/network-firewall/model/ListVpcEndpointAssociationsResult.h>
#include <aws/network-firewall/model/PutResourcePolicyResult.h>
#include <aws/network-firewall/model/RejectNetworkFirewallTransitGatewayAttachmentResult.h>
#include <aws/network-firewall/model/StartAnalysisReportResult.h>
#include <aws/network-firewall/model/StartFlowCaptureResult.h>
#include <aws/network-firewall/model/StartFlowFlushResult.h>
#include <aws/network-firewall/model/TagResourceResult.h>
#include <aws/network-firewall/model/UntagResourceResult.h>
#include <aws/network-firewall/model/UpdateAvailabilityZoneChangeProtectionResult.h>
#include <aws/network-firewall/model/UpdateFirewallAnalysisSettingsResult.h>
#include <aws/network-firewall/model/UpdateFirewallDeleteProtectionResult.h>
#include <aws/network-firewall/model/UpdateFirewallDescriptionResult.h>
#include <aws/network-firewall/model/UpdateFirewallEncryptionConfigurationResult.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyResult.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyChangeProtectionResult.h>
#include <aws/network-firewall/model/UpdateLoggingConfigurationResult.h>
#include <aws/network-firewall/model/UpdateRuleGroupResult.h>
#include <aws/network-firewall/model/UpdateSubnetChangeProtectionResult.h>
#include <aws/network-firewall/model/UpdateTLSInspectionConfigurationResult.h>
#include <aws/network-firewall/model/DescribeFirewallMetadataRequest.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyRequest.h>
#include <aws/network-firewall/model/ListFirewallPoliciesRequest.h>
#include <aws/network-firewall/model/DeleteTLSInspectionConfigurationRequest.h>
#include <aws/network-firewall/model/UpdateLoggingConfigurationRequest.h>
#include <aws/network-firewall/model/ListVpcEndpointAssociationsRequest.h>
#include <aws/network-firewall/model/DescribeLoggingConfigurationRequest.h>
#include <aws/network-firewall/model/UpdateFirewallEncryptionConfigurationRequest.h>
#include <aws/network-firewall/model/DescribeRuleGroupMetadataRequest.h>
#include <aws/network-firewall/model/ListFirewallsRequest.h>
#include <aws/network-firewall/model/DescribeRuleGroupSummaryRequest.h>
#include <aws/network-firewall/model/ListRuleGroupsRequest.h>
#include <aws/network-firewall/model/UpdateFirewallAnalysisSettingsRequest.h>
#include <aws/network-firewall/model/DeleteFirewallPolicyRequest.h>
#include <aws/network-firewall/model/DescribeRuleGroupRequest.h>
#include <aws/network-firewall/model/ListTLSInspectionConfigurationsRequest.h>
#include <aws/network-firewall/model/DescribeTLSInspectionConfigurationRequest.h>
#include <aws/network-firewall/model/ListAnalysisReportsRequest.h>
#include <aws/network-firewall/model/DeleteFirewallRequest.h>
#include <aws/network-firewall/model/DeleteRuleGroupRequest.h>
#include <aws/network-firewall/model/DescribeFirewallRequest.h>
#include <aws/network-firewall/model/UpdateFirewallDescriptionRequest.h>
/* End of service model headers required in NetworkFirewallClient header */

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

  namespace NetworkFirewall
  {
    using NetworkFirewallClientConfiguration = Aws::Client::GenericClientConfiguration;
    using NetworkFirewallEndpointProviderBase = Aws::NetworkFirewall::Endpoint::NetworkFirewallEndpointProviderBase;
    using NetworkFirewallEndpointProvider = Aws::NetworkFirewall::Endpoint::NetworkFirewallEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NetworkFirewallClient header */
      class AcceptNetworkFirewallTransitGatewayAttachmentRequest;
      class AssociateAvailabilityZonesRequest;
      class AssociateFirewallPolicyRequest;
      class AssociateSubnetsRequest;
      class CreateFirewallRequest;
      class CreateFirewallPolicyRequest;
      class CreateRuleGroupRequest;
      class CreateTLSInspectionConfigurationRequest;
      class CreateVpcEndpointAssociationRequest;
      class DeleteFirewallRequest;
      class DeleteFirewallPolicyRequest;
      class DeleteNetworkFirewallTransitGatewayAttachmentRequest;
      class DeleteResourcePolicyRequest;
      class DeleteRuleGroupRequest;
      class DeleteTLSInspectionConfigurationRequest;
      class DeleteVpcEndpointAssociationRequest;
      class DescribeFirewallRequest;
      class DescribeFirewallMetadataRequest;
      class DescribeFirewallPolicyRequest;
      class DescribeFlowOperationRequest;
      class DescribeLoggingConfigurationRequest;
      class DescribeResourcePolicyRequest;
      class DescribeRuleGroupRequest;
      class DescribeRuleGroupMetadataRequest;
      class DescribeRuleGroupSummaryRequest;
      class DescribeTLSInspectionConfigurationRequest;
      class DescribeVpcEndpointAssociationRequest;
      class DisassociateAvailabilityZonesRequest;
      class DisassociateSubnetsRequest;
      class GetAnalysisReportResultsRequest;
      class ListAnalysisReportsRequest;
      class ListFirewallPoliciesRequest;
      class ListFirewallsRequest;
      class ListFlowOperationResultsRequest;
      class ListFlowOperationsRequest;
      class ListRuleGroupsRequest;
      class ListTLSInspectionConfigurationsRequest;
      class ListTagsForResourceRequest;
      class ListVpcEndpointAssociationsRequest;
      class PutResourcePolicyRequest;
      class RejectNetworkFirewallTransitGatewayAttachmentRequest;
      class StartAnalysisReportRequest;
      class StartFlowCaptureRequest;
      class StartFlowFlushRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAvailabilityZoneChangeProtectionRequest;
      class UpdateFirewallAnalysisSettingsRequest;
      class UpdateFirewallDeleteProtectionRequest;
      class UpdateFirewallDescriptionRequest;
      class UpdateFirewallEncryptionConfigurationRequest;
      class UpdateFirewallPolicyRequest;
      class UpdateFirewallPolicyChangeProtectionRequest;
      class UpdateLoggingConfigurationRequest;
      class UpdateRuleGroupRequest;
      class UpdateSubnetChangeProtectionRequest;
      class UpdateTLSInspectionConfigurationRequest;
      /* End of service model forward declarations required in NetworkFirewallClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptNetworkFirewallTransitGatewayAttachmentResult, NetworkFirewallError> AcceptNetworkFirewallTransitGatewayAttachmentOutcome;
      typedef Aws::Utils::Outcome<AssociateAvailabilityZonesResult, NetworkFirewallError> AssociateAvailabilityZonesOutcome;
      typedef Aws::Utils::Outcome<AssociateFirewallPolicyResult, NetworkFirewallError> AssociateFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<AssociateSubnetsResult, NetworkFirewallError> AssociateSubnetsOutcome;
      typedef Aws::Utils::Outcome<CreateFirewallResult, NetworkFirewallError> CreateFirewallOutcome;
      typedef Aws::Utils::Outcome<CreateFirewallPolicyResult, NetworkFirewallError> CreateFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateRuleGroupResult, NetworkFirewallError> CreateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<CreateTLSInspectionConfigurationResult, NetworkFirewallError> CreateTLSInspectionConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateVpcEndpointAssociationResult, NetworkFirewallError> CreateVpcEndpointAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallResult, NetworkFirewallError> DeleteFirewallOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallPolicyResult, NetworkFirewallError> DeleteFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkFirewallTransitGatewayAttachmentResult, NetworkFirewallError> DeleteNetworkFirewallTransitGatewayAttachmentOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, NetworkFirewallError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleGroupResult, NetworkFirewallError> DeleteRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteTLSInspectionConfigurationResult, NetworkFirewallError> DeleteTLSInspectionConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcEndpointAssociationResult, NetworkFirewallError> DeleteVpcEndpointAssociationOutcome;
      typedef Aws::Utils::Outcome<DescribeFirewallResult, NetworkFirewallError> DescribeFirewallOutcome;
      typedef Aws::Utils::Outcome<DescribeFirewallMetadataResult, NetworkFirewallError> DescribeFirewallMetadataOutcome;
      typedef Aws::Utils::Outcome<DescribeFirewallPolicyResult, NetworkFirewallError> DescribeFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowOperationResult, NetworkFirewallError> DescribeFlowOperationOutcome;
      typedef Aws::Utils::Outcome<DescribeLoggingConfigurationResult, NetworkFirewallError> DescribeLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePolicyResult, NetworkFirewallError> DescribeResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleGroupResult, NetworkFirewallError> DescribeRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleGroupMetadataResult, NetworkFirewallError> DescribeRuleGroupMetadataOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleGroupSummaryResult, NetworkFirewallError> DescribeRuleGroupSummaryOutcome;
      typedef Aws::Utils::Outcome<DescribeTLSInspectionConfigurationResult, NetworkFirewallError> DescribeTLSInspectionConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointAssociationResult, NetworkFirewallError> DescribeVpcEndpointAssociationOutcome;
      typedef Aws::Utils::Outcome<DisassociateAvailabilityZonesResult, NetworkFirewallError> DisassociateAvailabilityZonesOutcome;
      typedef Aws::Utils::Outcome<DisassociateSubnetsResult, NetworkFirewallError> DisassociateSubnetsOutcome;
      typedef Aws::Utils::Outcome<GetAnalysisReportResultsResult, NetworkFirewallError> GetAnalysisReportResultsOutcome;
      typedef Aws::Utils::Outcome<ListAnalysisReportsResult, NetworkFirewallError> ListAnalysisReportsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallPoliciesResult, NetworkFirewallError> ListFirewallPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListFirewallsResult, NetworkFirewallError> ListFirewallsOutcome;
      typedef Aws::Utils::Outcome<ListFlowOperationResultsResult, NetworkFirewallError> ListFlowOperationResultsOutcome;
      typedef Aws::Utils::Outcome<ListFlowOperationsResult, NetworkFirewallError> ListFlowOperationsOutcome;
      typedef Aws::Utils::Outcome<ListRuleGroupsResult, NetworkFirewallError> ListRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTLSInspectionConfigurationsResult, NetworkFirewallError> ListTLSInspectionConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkFirewallError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVpcEndpointAssociationsResult, NetworkFirewallError> ListVpcEndpointAssociationsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, NetworkFirewallError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<RejectNetworkFirewallTransitGatewayAttachmentResult, NetworkFirewallError> RejectNetworkFirewallTransitGatewayAttachmentOutcome;
      typedef Aws::Utils::Outcome<StartAnalysisReportResult, NetworkFirewallError> StartAnalysisReportOutcome;
      typedef Aws::Utils::Outcome<StartFlowCaptureResult, NetworkFirewallError> StartFlowCaptureOutcome;
      typedef Aws::Utils::Outcome<StartFlowFlushResult, NetworkFirewallError> StartFlowFlushOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NetworkFirewallError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NetworkFirewallError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAvailabilityZoneChangeProtectionResult, NetworkFirewallError> UpdateAvailabilityZoneChangeProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallAnalysisSettingsResult, NetworkFirewallError> UpdateFirewallAnalysisSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallDeleteProtectionResult, NetworkFirewallError> UpdateFirewallDeleteProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallDescriptionResult, NetworkFirewallError> UpdateFirewallDescriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallEncryptionConfigurationResult, NetworkFirewallError> UpdateFirewallEncryptionConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallPolicyResult, NetworkFirewallError> UpdateFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallPolicyChangeProtectionResult, NetworkFirewallError> UpdateFirewallPolicyChangeProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateLoggingConfigurationResult, NetworkFirewallError> UpdateLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleGroupResult, NetworkFirewallError> UpdateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSubnetChangeProtectionResult, NetworkFirewallError> UpdateSubnetChangeProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateTLSInspectionConfigurationResult, NetworkFirewallError> UpdateTLSInspectionConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptNetworkFirewallTransitGatewayAttachmentOutcome> AcceptNetworkFirewallTransitGatewayAttachmentOutcomeCallable;
      typedef std::future<AssociateAvailabilityZonesOutcome> AssociateAvailabilityZonesOutcomeCallable;
      typedef std::future<AssociateFirewallPolicyOutcome> AssociateFirewallPolicyOutcomeCallable;
      typedef std::future<AssociateSubnetsOutcome> AssociateSubnetsOutcomeCallable;
      typedef std::future<CreateFirewallOutcome> CreateFirewallOutcomeCallable;
      typedef std::future<CreateFirewallPolicyOutcome> CreateFirewallPolicyOutcomeCallable;
      typedef std::future<CreateRuleGroupOutcome> CreateRuleGroupOutcomeCallable;
      typedef std::future<CreateTLSInspectionConfigurationOutcome> CreateTLSInspectionConfigurationOutcomeCallable;
      typedef std::future<CreateVpcEndpointAssociationOutcome> CreateVpcEndpointAssociationOutcomeCallable;
      typedef std::future<DeleteFirewallOutcome> DeleteFirewallOutcomeCallable;
      typedef std::future<DeleteFirewallPolicyOutcome> DeleteFirewallPolicyOutcomeCallable;
      typedef std::future<DeleteNetworkFirewallTransitGatewayAttachmentOutcome> DeleteNetworkFirewallTransitGatewayAttachmentOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
      typedef std::future<DeleteTLSInspectionConfigurationOutcome> DeleteTLSInspectionConfigurationOutcomeCallable;
      typedef std::future<DeleteVpcEndpointAssociationOutcome> DeleteVpcEndpointAssociationOutcomeCallable;
      typedef std::future<DescribeFirewallOutcome> DescribeFirewallOutcomeCallable;
      typedef std::future<DescribeFirewallMetadataOutcome> DescribeFirewallMetadataOutcomeCallable;
      typedef std::future<DescribeFirewallPolicyOutcome> DescribeFirewallPolicyOutcomeCallable;
      typedef std::future<DescribeFlowOperationOutcome> DescribeFlowOperationOutcomeCallable;
      typedef std::future<DescribeLoggingConfigurationOutcome> DescribeLoggingConfigurationOutcomeCallable;
      typedef std::future<DescribeResourcePolicyOutcome> DescribeResourcePolicyOutcomeCallable;
      typedef std::future<DescribeRuleGroupOutcome> DescribeRuleGroupOutcomeCallable;
      typedef std::future<DescribeRuleGroupMetadataOutcome> DescribeRuleGroupMetadataOutcomeCallable;
      typedef std::future<DescribeRuleGroupSummaryOutcome> DescribeRuleGroupSummaryOutcomeCallable;
      typedef std::future<DescribeTLSInspectionConfigurationOutcome> DescribeTLSInspectionConfigurationOutcomeCallable;
      typedef std::future<DescribeVpcEndpointAssociationOutcome> DescribeVpcEndpointAssociationOutcomeCallable;
      typedef std::future<DisassociateAvailabilityZonesOutcome> DisassociateAvailabilityZonesOutcomeCallable;
      typedef std::future<DisassociateSubnetsOutcome> DisassociateSubnetsOutcomeCallable;
      typedef std::future<GetAnalysisReportResultsOutcome> GetAnalysisReportResultsOutcomeCallable;
      typedef std::future<ListAnalysisReportsOutcome> ListAnalysisReportsOutcomeCallable;
      typedef std::future<ListFirewallPoliciesOutcome> ListFirewallPoliciesOutcomeCallable;
      typedef std::future<ListFirewallsOutcome> ListFirewallsOutcomeCallable;
      typedef std::future<ListFlowOperationResultsOutcome> ListFlowOperationResultsOutcomeCallable;
      typedef std::future<ListFlowOperationsOutcome> ListFlowOperationsOutcomeCallable;
      typedef std::future<ListRuleGroupsOutcome> ListRuleGroupsOutcomeCallable;
      typedef std::future<ListTLSInspectionConfigurationsOutcome> ListTLSInspectionConfigurationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVpcEndpointAssociationsOutcome> ListVpcEndpointAssociationsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RejectNetworkFirewallTransitGatewayAttachmentOutcome> RejectNetworkFirewallTransitGatewayAttachmentOutcomeCallable;
      typedef std::future<StartAnalysisReportOutcome> StartAnalysisReportOutcomeCallable;
      typedef std::future<StartFlowCaptureOutcome> StartFlowCaptureOutcomeCallable;
      typedef std::future<StartFlowFlushOutcome> StartFlowFlushOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAvailabilityZoneChangeProtectionOutcome> UpdateAvailabilityZoneChangeProtectionOutcomeCallable;
      typedef std::future<UpdateFirewallAnalysisSettingsOutcome> UpdateFirewallAnalysisSettingsOutcomeCallable;
      typedef std::future<UpdateFirewallDeleteProtectionOutcome> UpdateFirewallDeleteProtectionOutcomeCallable;
      typedef std::future<UpdateFirewallDescriptionOutcome> UpdateFirewallDescriptionOutcomeCallable;
      typedef std::future<UpdateFirewallEncryptionConfigurationOutcome> UpdateFirewallEncryptionConfigurationOutcomeCallable;
      typedef std::future<UpdateFirewallPolicyOutcome> UpdateFirewallPolicyOutcomeCallable;
      typedef std::future<UpdateFirewallPolicyChangeProtectionOutcome> UpdateFirewallPolicyChangeProtectionOutcomeCallable;
      typedef std::future<UpdateLoggingConfigurationOutcome> UpdateLoggingConfigurationOutcomeCallable;
      typedef std::future<UpdateRuleGroupOutcome> UpdateRuleGroupOutcomeCallable;
      typedef std::future<UpdateSubnetChangeProtectionOutcome> UpdateSubnetChangeProtectionOutcomeCallable;
      typedef std::future<UpdateTLSInspectionConfigurationOutcome> UpdateTLSInspectionConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NetworkFirewallClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NetworkFirewallClient*, const Model::AcceptNetworkFirewallTransitGatewayAttachmentRequest&, const Model::AcceptNetworkFirewallTransitGatewayAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptNetworkFirewallTransitGatewayAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::AssociateAvailabilityZonesRequest&, const Model::AssociateAvailabilityZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAvailabilityZonesResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::AssociateFirewallPolicyRequest&, const Model::AssociateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::AssociateSubnetsRequest&, const Model::AssociateSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSubnetsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateFirewallRequest&, const Model::CreateFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateFirewallPolicyRequest&, const Model::CreateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateRuleGroupRequest&, const Model::CreateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateTLSInspectionConfigurationRequest&, const Model::CreateTLSInspectionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTLSInspectionConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateVpcEndpointAssociationRequest&, const Model::CreateVpcEndpointAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointAssociationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteFirewallRequest&, const Model::DeleteFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteFirewallPolicyRequest&, const Model::DeleteFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteNetworkFirewallTransitGatewayAttachmentRequest&, const Model::DeleteNetworkFirewallTransitGatewayAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkFirewallTransitGatewayAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteRuleGroupRequest&, const Model::DeleteRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteTLSInspectionConfigurationRequest&, const Model::DeleteTLSInspectionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTLSInspectionConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteVpcEndpointAssociationRequest&, const Model::DeleteVpcEndpointAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointAssociationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFirewallRequest&, const Model::DescribeFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFirewallMetadataRequest&, const Model::DescribeFirewallMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFirewallMetadataResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFirewallPolicyRequest&, const Model::DescribeFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFlowOperationRequest&, const Model::DescribeFlowOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowOperationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeLoggingConfigurationRequest&, const Model::DescribeLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeResourcePolicyRequest&, const Model::DescribeResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeRuleGroupRequest&, const Model::DescribeRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeRuleGroupMetadataRequest&, const Model::DescribeRuleGroupMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupMetadataResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeRuleGroupSummaryRequest&, const Model::DescribeRuleGroupSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupSummaryResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeTLSInspectionConfigurationRequest&, const Model::DescribeTLSInspectionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTLSInspectionConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeVpcEndpointAssociationRequest&, const Model::DescribeVpcEndpointAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointAssociationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DisassociateAvailabilityZonesRequest&, const Model::DisassociateAvailabilityZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAvailabilityZonesResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DisassociateSubnetsRequest&, const Model::DisassociateSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSubnetsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::GetAnalysisReportResultsRequest&, const Model::GetAnalysisReportResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnalysisReportResultsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListAnalysisReportsRequest&, const Model::ListAnalysisReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalysisReportsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFirewallPoliciesRequest&, const Model::ListFirewallPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallPoliciesResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFirewallsRequest&, const Model::ListFirewallsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFlowOperationResultsRequest&, const Model::ListFlowOperationResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowOperationResultsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFlowOperationsRequest&, const Model::ListFlowOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowOperationsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListRuleGroupsRequest&, const Model::ListRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListTLSInspectionConfigurationsRequest&, const Model::ListTLSInspectionConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTLSInspectionConfigurationsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListVpcEndpointAssociationsRequest&, const Model::ListVpcEndpointAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointAssociationsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::RejectNetworkFirewallTransitGatewayAttachmentRequest&, const Model::RejectNetworkFirewallTransitGatewayAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectNetworkFirewallTransitGatewayAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::StartAnalysisReportRequest&, const Model::StartAnalysisReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAnalysisReportResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::StartFlowCaptureRequest&, const Model::StartFlowCaptureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowCaptureResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::StartFlowFlushRequest&, const Model::StartFlowFlushOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowFlushResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateAvailabilityZoneChangeProtectionRequest&, const Model::UpdateAvailabilityZoneChangeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAvailabilityZoneChangeProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallAnalysisSettingsRequest&, const Model::UpdateFirewallAnalysisSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallAnalysisSettingsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallDeleteProtectionRequest&, const Model::UpdateFirewallDeleteProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallDeleteProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallDescriptionRequest&, const Model::UpdateFirewallDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallDescriptionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallEncryptionConfigurationRequest&, const Model::UpdateFirewallEncryptionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallEncryptionConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallPolicyRequest&, const Model::UpdateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallPolicyChangeProtectionRequest&, const Model::UpdateFirewallPolicyChangeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallPolicyChangeProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateLoggingConfigurationRequest&, const Model::UpdateLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateRuleGroupRequest&, const Model::UpdateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateSubnetChangeProtectionRequest&, const Model::UpdateSubnetChangeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubnetChangeProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateTLSInspectionConfigurationRequest&, const Model::UpdateTLSInspectionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTLSInspectionConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace NetworkFirewall
} // namespace Aws
