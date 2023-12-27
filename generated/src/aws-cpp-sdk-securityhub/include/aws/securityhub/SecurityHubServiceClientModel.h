﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/securityhub/SecurityHubErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/securityhub/SecurityHubEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SecurityHubClient header */
#include <aws/securityhub/model/AcceptAdministratorInvitationResult.h>
#include <aws/securityhub/model/BatchDeleteAutomationRulesResult.h>
#include <aws/securityhub/model/BatchDisableStandardsResult.h>
#include <aws/securityhub/model/BatchEnableStandardsResult.h>
#include <aws/securityhub/model/BatchGetAutomationRulesResult.h>
#include <aws/securityhub/model/BatchGetConfigurationPolicyAssociationsResult.h>
#include <aws/securityhub/model/BatchGetSecurityControlsResult.h>
#include <aws/securityhub/model/BatchGetStandardsControlAssociationsResult.h>
#include <aws/securityhub/model/BatchImportFindingsResult.h>
#include <aws/securityhub/model/BatchUpdateAutomationRulesResult.h>
#include <aws/securityhub/model/BatchUpdateFindingsResult.h>
#include <aws/securityhub/model/BatchUpdateStandardsControlAssociationsResult.h>
#include <aws/securityhub/model/CreateActionTargetResult.h>
#include <aws/securityhub/model/CreateAutomationRuleResult.h>
#include <aws/securityhub/model/CreateConfigurationPolicyResult.h>
#include <aws/securityhub/model/CreateFindingAggregatorResult.h>
#include <aws/securityhub/model/CreateInsightResult.h>
#include <aws/securityhub/model/CreateMembersResult.h>
#include <aws/securityhub/model/DeclineInvitationsResult.h>
#include <aws/securityhub/model/DeleteActionTargetResult.h>
#include <aws/securityhub/model/DeleteConfigurationPolicyResult.h>
#include <aws/securityhub/model/DeleteFindingAggregatorResult.h>
#include <aws/securityhub/model/DeleteInsightResult.h>
#include <aws/securityhub/model/DeleteInvitationsResult.h>
#include <aws/securityhub/model/DeleteMembersResult.h>
#include <aws/securityhub/model/DescribeActionTargetsResult.h>
#include <aws/securityhub/model/DescribeHubResult.h>
#include <aws/securityhub/model/DescribeOrganizationConfigurationResult.h>
#include <aws/securityhub/model/DescribeProductsResult.h>
#include <aws/securityhub/model/DescribeStandardsResult.h>
#include <aws/securityhub/model/DescribeStandardsControlsResult.h>
#include <aws/securityhub/model/DisableImportFindingsForProductResult.h>
#include <aws/securityhub/model/DisableOrganizationAdminAccountResult.h>
#include <aws/securityhub/model/DisableSecurityHubResult.h>
#include <aws/securityhub/model/DisassociateFromAdministratorAccountResult.h>
#include <aws/securityhub/model/DisassociateMembersResult.h>
#include <aws/securityhub/model/EnableImportFindingsForProductResult.h>
#include <aws/securityhub/model/EnableOrganizationAdminAccountResult.h>
#include <aws/securityhub/model/EnableSecurityHubResult.h>
#include <aws/securityhub/model/GetAdministratorAccountResult.h>
#include <aws/securityhub/model/GetConfigurationPolicyResult.h>
#include <aws/securityhub/model/GetConfigurationPolicyAssociationResult.h>
#include <aws/securityhub/model/GetEnabledStandardsResult.h>
#include <aws/securityhub/model/GetFindingAggregatorResult.h>
#include <aws/securityhub/model/GetFindingHistoryResult.h>
#include <aws/securityhub/model/GetFindingsResult.h>
#include <aws/securityhub/model/GetInsightResultsResult.h>
#include <aws/securityhub/model/GetInsightsResult.h>
#include <aws/securityhub/model/GetInvitationsCountResult.h>
#include <aws/securityhub/model/GetMembersResult.h>
#include <aws/securityhub/model/GetSecurityControlDefinitionResult.h>
#include <aws/securityhub/model/InviteMembersResult.h>
#include <aws/securityhub/model/ListAutomationRulesResult.h>
#include <aws/securityhub/model/ListConfigurationPoliciesResult.h>
#include <aws/securityhub/model/ListConfigurationPolicyAssociationsResult.h>
#include <aws/securityhub/model/ListEnabledProductsForImportResult.h>
#include <aws/securityhub/model/ListFindingAggregatorsResult.h>
#include <aws/securityhub/model/ListInvitationsResult.h>
#include <aws/securityhub/model/ListMembersResult.h>
#include <aws/securityhub/model/ListOrganizationAdminAccountsResult.h>
#include <aws/securityhub/model/ListSecurityControlDefinitionsResult.h>
#include <aws/securityhub/model/ListStandardsControlAssociationsResult.h>
#include <aws/securityhub/model/ListTagsForResourceResult.h>
#include <aws/securityhub/model/StartConfigurationPolicyAssociationResult.h>
#include <aws/securityhub/model/StartConfigurationPolicyDisassociationResult.h>
#include <aws/securityhub/model/TagResourceResult.h>
#include <aws/securityhub/model/UntagResourceResult.h>
#include <aws/securityhub/model/UpdateActionTargetResult.h>
#include <aws/securityhub/model/UpdateConfigurationPolicyResult.h>
#include <aws/securityhub/model/UpdateFindingAggregatorResult.h>
#include <aws/securityhub/model/UpdateFindingsResult.h>
#include <aws/securityhub/model/UpdateInsightResult.h>
#include <aws/securityhub/model/UpdateOrganizationConfigurationResult.h>
#include <aws/securityhub/model/UpdateSecurityControlResult.h>
#include <aws/securityhub/model/UpdateSecurityHubConfigurationResult.h>
#include <aws/securityhub/model/UpdateStandardsControlResult.h>
/* End of service model headers required in SecurityHubClient header */

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

  namespace SecurityHub
  {
    using SecurityHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SecurityHubEndpointProviderBase = Aws::SecurityHub::Endpoint::SecurityHubEndpointProviderBase;
    using SecurityHubEndpointProvider = Aws::SecurityHub::Endpoint::SecurityHubEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SecurityHubClient header */
      class AcceptAdministratorInvitationRequest;
      class BatchDeleteAutomationRulesRequest;
      class BatchDisableStandardsRequest;
      class BatchEnableStandardsRequest;
      class BatchGetAutomationRulesRequest;
      class BatchGetConfigurationPolicyAssociationsRequest;
      class BatchGetSecurityControlsRequest;
      class BatchGetStandardsControlAssociationsRequest;
      class BatchImportFindingsRequest;
      class BatchUpdateAutomationRulesRequest;
      class BatchUpdateFindingsRequest;
      class BatchUpdateStandardsControlAssociationsRequest;
      class CreateActionTargetRequest;
      class CreateAutomationRuleRequest;
      class CreateConfigurationPolicyRequest;
      class CreateFindingAggregatorRequest;
      class CreateInsightRequest;
      class CreateMembersRequest;
      class DeclineInvitationsRequest;
      class DeleteActionTargetRequest;
      class DeleteConfigurationPolicyRequest;
      class DeleteFindingAggregatorRequest;
      class DeleteInsightRequest;
      class DeleteInvitationsRequest;
      class DeleteMembersRequest;
      class DescribeActionTargetsRequest;
      class DescribeHubRequest;
      class DescribeOrganizationConfigurationRequest;
      class DescribeProductsRequest;
      class DescribeStandardsRequest;
      class DescribeStandardsControlsRequest;
      class DisableImportFindingsForProductRequest;
      class DisableOrganizationAdminAccountRequest;
      class DisableSecurityHubRequest;
      class DisassociateFromAdministratorAccountRequest;
      class DisassociateMembersRequest;
      class EnableImportFindingsForProductRequest;
      class EnableOrganizationAdminAccountRequest;
      class EnableSecurityHubRequest;
      class GetAdministratorAccountRequest;
      class GetConfigurationPolicyRequest;
      class GetConfigurationPolicyAssociationRequest;
      class GetEnabledStandardsRequest;
      class GetFindingAggregatorRequest;
      class GetFindingHistoryRequest;
      class GetFindingsRequest;
      class GetInsightResultsRequest;
      class GetInsightsRequest;
      class GetInvitationsCountRequest;
      class GetMembersRequest;
      class GetSecurityControlDefinitionRequest;
      class InviteMembersRequest;
      class ListAutomationRulesRequest;
      class ListConfigurationPoliciesRequest;
      class ListConfigurationPolicyAssociationsRequest;
      class ListEnabledProductsForImportRequest;
      class ListFindingAggregatorsRequest;
      class ListInvitationsRequest;
      class ListMembersRequest;
      class ListOrganizationAdminAccountsRequest;
      class ListSecurityControlDefinitionsRequest;
      class ListStandardsControlAssociationsRequest;
      class ListTagsForResourceRequest;
      class StartConfigurationPolicyAssociationRequest;
      class StartConfigurationPolicyDisassociationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateActionTargetRequest;
      class UpdateConfigurationPolicyRequest;
      class UpdateFindingAggregatorRequest;
      class UpdateFindingsRequest;
      class UpdateInsightRequest;
      class UpdateOrganizationConfigurationRequest;
      class UpdateSecurityControlRequest;
      class UpdateSecurityHubConfigurationRequest;
      class UpdateStandardsControlRequest;
      /* End of service model forward declarations required in SecurityHubClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptAdministratorInvitationResult, SecurityHubError> AcceptAdministratorInvitationOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteAutomationRulesResult, SecurityHubError> BatchDeleteAutomationRulesOutcome;
      typedef Aws::Utils::Outcome<BatchDisableStandardsResult, SecurityHubError> BatchDisableStandardsOutcome;
      typedef Aws::Utils::Outcome<BatchEnableStandardsResult, SecurityHubError> BatchEnableStandardsOutcome;
      typedef Aws::Utils::Outcome<BatchGetAutomationRulesResult, SecurityHubError> BatchGetAutomationRulesOutcome;
      typedef Aws::Utils::Outcome<BatchGetConfigurationPolicyAssociationsResult, SecurityHubError> BatchGetConfigurationPolicyAssociationsOutcome;
      typedef Aws::Utils::Outcome<BatchGetSecurityControlsResult, SecurityHubError> BatchGetSecurityControlsOutcome;
      typedef Aws::Utils::Outcome<BatchGetStandardsControlAssociationsResult, SecurityHubError> BatchGetStandardsControlAssociationsOutcome;
      typedef Aws::Utils::Outcome<BatchImportFindingsResult, SecurityHubError> BatchImportFindingsOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateAutomationRulesResult, SecurityHubError> BatchUpdateAutomationRulesOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateFindingsResult, SecurityHubError> BatchUpdateFindingsOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateStandardsControlAssociationsResult, SecurityHubError> BatchUpdateStandardsControlAssociationsOutcome;
      typedef Aws::Utils::Outcome<CreateActionTargetResult, SecurityHubError> CreateActionTargetOutcome;
      typedef Aws::Utils::Outcome<CreateAutomationRuleResult, SecurityHubError> CreateAutomationRuleOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationPolicyResult, SecurityHubError> CreateConfigurationPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateFindingAggregatorResult, SecurityHubError> CreateFindingAggregatorOutcome;
      typedef Aws::Utils::Outcome<CreateInsightResult, SecurityHubError> CreateInsightOutcome;
      typedef Aws::Utils::Outcome<CreateMembersResult, SecurityHubError> CreateMembersOutcome;
      typedef Aws::Utils::Outcome<DeclineInvitationsResult, SecurityHubError> DeclineInvitationsOutcome;
      typedef Aws::Utils::Outcome<DeleteActionTargetResult, SecurityHubError> DeleteActionTargetOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationPolicyResult, SecurityHubError> DeleteConfigurationPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteFindingAggregatorResult, SecurityHubError> DeleteFindingAggregatorOutcome;
      typedef Aws::Utils::Outcome<DeleteInsightResult, SecurityHubError> DeleteInsightOutcome;
      typedef Aws::Utils::Outcome<DeleteInvitationsResult, SecurityHubError> DeleteInvitationsOutcome;
      typedef Aws::Utils::Outcome<DeleteMembersResult, SecurityHubError> DeleteMembersOutcome;
      typedef Aws::Utils::Outcome<DescribeActionTargetsResult, SecurityHubError> DescribeActionTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeHubResult, SecurityHubError> DescribeHubOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, SecurityHubError> DescribeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeProductsResult, SecurityHubError> DescribeProductsOutcome;
      typedef Aws::Utils::Outcome<DescribeStandardsResult, SecurityHubError> DescribeStandardsOutcome;
      typedef Aws::Utils::Outcome<DescribeStandardsControlsResult, SecurityHubError> DescribeStandardsControlsOutcome;
      typedef Aws::Utils::Outcome<DisableImportFindingsForProductResult, SecurityHubError> DisableImportFindingsForProductOutcome;
      typedef Aws::Utils::Outcome<DisableOrganizationAdminAccountResult, SecurityHubError> DisableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisableSecurityHubResult, SecurityHubError> DisableSecurityHubOutcome;
      typedef Aws::Utils::Outcome<DisassociateFromAdministratorAccountResult, SecurityHubError> DisassociateFromAdministratorAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateMembersResult, SecurityHubError> DisassociateMembersOutcome;
      typedef Aws::Utils::Outcome<EnableImportFindingsForProductResult, SecurityHubError> EnableImportFindingsForProductOutcome;
      typedef Aws::Utils::Outcome<EnableOrganizationAdminAccountResult, SecurityHubError> EnableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<EnableSecurityHubResult, SecurityHubError> EnableSecurityHubOutcome;
      typedef Aws::Utils::Outcome<GetAdministratorAccountResult, SecurityHubError> GetAdministratorAccountOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationPolicyResult, SecurityHubError> GetConfigurationPolicyOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationPolicyAssociationResult, SecurityHubError> GetConfigurationPolicyAssociationOutcome;
      typedef Aws::Utils::Outcome<GetEnabledStandardsResult, SecurityHubError> GetEnabledStandardsOutcome;
      typedef Aws::Utils::Outcome<GetFindingAggregatorResult, SecurityHubError> GetFindingAggregatorOutcome;
      typedef Aws::Utils::Outcome<GetFindingHistoryResult, SecurityHubError> GetFindingHistoryOutcome;
      typedef Aws::Utils::Outcome<GetFindingsResult, SecurityHubError> GetFindingsOutcome;
      typedef Aws::Utils::Outcome<GetInsightResultsResult, SecurityHubError> GetInsightResultsOutcome;
      typedef Aws::Utils::Outcome<GetInsightsResult, SecurityHubError> GetInsightsOutcome;
      typedef Aws::Utils::Outcome<GetInvitationsCountResult, SecurityHubError> GetInvitationsCountOutcome;
      typedef Aws::Utils::Outcome<GetMembersResult, SecurityHubError> GetMembersOutcome;
      typedef Aws::Utils::Outcome<GetSecurityControlDefinitionResult, SecurityHubError> GetSecurityControlDefinitionOutcome;
      typedef Aws::Utils::Outcome<InviteMembersResult, SecurityHubError> InviteMembersOutcome;
      typedef Aws::Utils::Outcome<ListAutomationRulesResult, SecurityHubError> ListAutomationRulesOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationPoliciesResult, SecurityHubError> ListConfigurationPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationPolicyAssociationsResult, SecurityHubError> ListConfigurationPolicyAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListEnabledProductsForImportResult, SecurityHubError> ListEnabledProductsForImportOutcome;
      typedef Aws::Utils::Outcome<ListFindingAggregatorsResult, SecurityHubError> ListFindingAggregatorsOutcome;
      typedef Aws::Utils::Outcome<ListInvitationsResult, SecurityHubError> ListInvitationsOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, SecurityHubError> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, SecurityHubError> ListOrganizationAdminAccountsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityControlDefinitionsResult, SecurityHubError> ListSecurityControlDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListStandardsControlAssociationsResult, SecurityHubError> ListStandardsControlAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SecurityHubError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartConfigurationPolicyAssociationResult, SecurityHubError> StartConfigurationPolicyAssociationOutcome;
      typedef Aws::Utils::Outcome<StartConfigurationPolicyDisassociationResult, SecurityHubError> StartConfigurationPolicyDisassociationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SecurityHubError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SecurityHubError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateActionTargetResult, SecurityHubError> UpdateActionTargetOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationPolicyResult, SecurityHubError> UpdateConfigurationPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateFindingAggregatorResult, SecurityHubError> UpdateFindingAggregatorOutcome;
      typedef Aws::Utils::Outcome<UpdateFindingsResult, SecurityHubError> UpdateFindingsOutcome;
      typedef Aws::Utils::Outcome<UpdateInsightResult, SecurityHubError> UpdateInsightOutcome;
      typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, SecurityHubError> UpdateOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateSecurityControlResult, SecurityHubError> UpdateSecurityControlOutcome;
      typedef Aws::Utils::Outcome<UpdateSecurityHubConfigurationResult, SecurityHubError> UpdateSecurityHubConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateStandardsControlResult, SecurityHubError> UpdateStandardsControlOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptAdministratorInvitationOutcome> AcceptAdministratorInvitationOutcomeCallable;
      typedef std::future<BatchDeleteAutomationRulesOutcome> BatchDeleteAutomationRulesOutcomeCallable;
      typedef std::future<BatchDisableStandardsOutcome> BatchDisableStandardsOutcomeCallable;
      typedef std::future<BatchEnableStandardsOutcome> BatchEnableStandardsOutcomeCallable;
      typedef std::future<BatchGetAutomationRulesOutcome> BatchGetAutomationRulesOutcomeCallable;
      typedef std::future<BatchGetConfigurationPolicyAssociationsOutcome> BatchGetConfigurationPolicyAssociationsOutcomeCallable;
      typedef std::future<BatchGetSecurityControlsOutcome> BatchGetSecurityControlsOutcomeCallable;
      typedef std::future<BatchGetStandardsControlAssociationsOutcome> BatchGetStandardsControlAssociationsOutcomeCallable;
      typedef std::future<BatchImportFindingsOutcome> BatchImportFindingsOutcomeCallable;
      typedef std::future<BatchUpdateAutomationRulesOutcome> BatchUpdateAutomationRulesOutcomeCallable;
      typedef std::future<BatchUpdateFindingsOutcome> BatchUpdateFindingsOutcomeCallable;
      typedef std::future<BatchUpdateStandardsControlAssociationsOutcome> BatchUpdateStandardsControlAssociationsOutcomeCallable;
      typedef std::future<CreateActionTargetOutcome> CreateActionTargetOutcomeCallable;
      typedef std::future<CreateAutomationRuleOutcome> CreateAutomationRuleOutcomeCallable;
      typedef std::future<CreateConfigurationPolicyOutcome> CreateConfigurationPolicyOutcomeCallable;
      typedef std::future<CreateFindingAggregatorOutcome> CreateFindingAggregatorOutcomeCallable;
      typedef std::future<CreateInsightOutcome> CreateInsightOutcomeCallable;
      typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
      typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
      typedef std::future<DeleteActionTargetOutcome> DeleteActionTargetOutcomeCallable;
      typedef std::future<DeleteConfigurationPolicyOutcome> DeleteConfigurationPolicyOutcomeCallable;
      typedef std::future<DeleteFindingAggregatorOutcome> DeleteFindingAggregatorOutcomeCallable;
      typedef std::future<DeleteInsightOutcome> DeleteInsightOutcomeCallable;
      typedef std::future<DeleteInvitationsOutcome> DeleteInvitationsOutcomeCallable;
      typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
      typedef std::future<DescribeActionTargetsOutcome> DescribeActionTargetsOutcomeCallable;
      typedef std::future<DescribeHubOutcome> DescribeHubOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
      typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
      typedef std::future<DescribeStandardsOutcome> DescribeStandardsOutcomeCallable;
      typedef std::future<DescribeStandardsControlsOutcome> DescribeStandardsControlsOutcomeCallable;
      typedef std::future<DisableImportFindingsForProductOutcome> DisableImportFindingsForProductOutcomeCallable;
      typedef std::future<DisableOrganizationAdminAccountOutcome> DisableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<DisableSecurityHubOutcome> DisableSecurityHubOutcomeCallable;
      typedef std::future<DisassociateFromAdministratorAccountOutcome> DisassociateFromAdministratorAccountOutcomeCallable;
      typedef std::future<DisassociateMembersOutcome> DisassociateMembersOutcomeCallable;
      typedef std::future<EnableImportFindingsForProductOutcome> EnableImportFindingsForProductOutcomeCallable;
      typedef std::future<EnableOrganizationAdminAccountOutcome> EnableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<EnableSecurityHubOutcome> EnableSecurityHubOutcomeCallable;
      typedef std::future<GetAdministratorAccountOutcome> GetAdministratorAccountOutcomeCallable;
      typedef std::future<GetConfigurationPolicyOutcome> GetConfigurationPolicyOutcomeCallable;
      typedef std::future<GetConfigurationPolicyAssociationOutcome> GetConfigurationPolicyAssociationOutcomeCallable;
      typedef std::future<GetEnabledStandardsOutcome> GetEnabledStandardsOutcomeCallable;
      typedef std::future<GetFindingAggregatorOutcome> GetFindingAggregatorOutcomeCallable;
      typedef std::future<GetFindingHistoryOutcome> GetFindingHistoryOutcomeCallable;
      typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
      typedef std::future<GetInsightResultsOutcome> GetInsightResultsOutcomeCallable;
      typedef std::future<GetInsightsOutcome> GetInsightsOutcomeCallable;
      typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
      typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
      typedef std::future<GetSecurityControlDefinitionOutcome> GetSecurityControlDefinitionOutcomeCallable;
      typedef std::future<InviteMembersOutcome> InviteMembersOutcomeCallable;
      typedef std::future<ListAutomationRulesOutcome> ListAutomationRulesOutcomeCallable;
      typedef std::future<ListConfigurationPoliciesOutcome> ListConfigurationPoliciesOutcomeCallable;
      typedef std::future<ListConfigurationPolicyAssociationsOutcome> ListConfigurationPolicyAssociationsOutcomeCallable;
      typedef std::future<ListEnabledProductsForImportOutcome> ListEnabledProductsForImportOutcomeCallable;
      typedef std::future<ListFindingAggregatorsOutcome> ListFindingAggregatorsOutcomeCallable;
      typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
      typedef std::future<ListSecurityControlDefinitionsOutcome> ListSecurityControlDefinitionsOutcomeCallable;
      typedef std::future<ListStandardsControlAssociationsOutcome> ListStandardsControlAssociationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartConfigurationPolicyAssociationOutcome> StartConfigurationPolicyAssociationOutcomeCallable;
      typedef std::future<StartConfigurationPolicyDisassociationOutcome> StartConfigurationPolicyDisassociationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateActionTargetOutcome> UpdateActionTargetOutcomeCallable;
      typedef std::future<UpdateConfigurationPolicyOutcome> UpdateConfigurationPolicyOutcomeCallable;
      typedef std::future<UpdateFindingAggregatorOutcome> UpdateFindingAggregatorOutcomeCallable;
      typedef std::future<UpdateFindingsOutcome> UpdateFindingsOutcomeCallable;
      typedef std::future<UpdateInsightOutcome> UpdateInsightOutcomeCallable;
      typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
      typedef std::future<UpdateSecurityControlOutcome> UpdateSecurityControlOutcomeCallable;
      typedef std::future<UpdateSecurityHubConfigurationOutcome> UpdateSecurityHubConfigurationOutcomeCallable;
      typedef std::future<UpdateStandardsControlOutcome> UpdateStandardsControlOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SecurityHubClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SecurityHubClient*, const Model::AcceptAdministratorInvitationRequest&, const Model::AcceptAdministratorInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptAdministratorInvitationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchDeleteAutomationRulesRequest&, const Model::BatchDeleteAutomationRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteAutomationRulesResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchDisableStandardsRequest&, const Model::BatchDisableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchEnableStandardsRequest&, const Model::BatchEnableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEnableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchGetAutomationRulesRequest&, const Model::BatchGetAutomationRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetAutomationRulesResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchGetConfigurationPolicyAssociationsRequest&, const Model::BatchGetConfigurationPolicyAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetConfigurationPolicyAssociationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchGetSecurityControlsRequest&, const Model::BatchGetSecurityControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetSecurityControlsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchGetStandardsControlAssociationsRequest&, const Model::BatchGetStandardsControlAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetStandardsControlAssociationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchImportFindingsRequest&, const Model::BatchImportFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchImportFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchUpdateAutomationRulesRequest&, const Model::BatchUpdateAutomationRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateAutomationRulesResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchUpdateFindingsRequest&, const Model::BatchUpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchUpdateStandardsControlAssociationsRequest&, const Model::BatchUpdateStandardsControlAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateStandardsControlAssociationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateActionTargetRequest&, const Model::CreateActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateAutomationRuleRequest&, const Model::CreateAutomationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutomationRuleResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateConfigurationPolicyRequest&, const Model::CreateConfigurationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationPolicyResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateFindingAggregatorRequest&, const Model::CreateFindingAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFindingAggregatorResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateInsightRequest&, const Model::CreateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteActionTargetRequest&, const Model::DeleteActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteConfigurationPolicyRequest&, const Model::DeleteConfigurationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationPolicyResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteFindingAggregatorRequest&, const Model::DeleteFindingAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFindingAggregatorResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInsightRequest&, const Model::DeleteInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInvitationsRequest&, const Model::DeleteInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeActionTargetsRequest&, const Model::DescribeActionTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActionTargetsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeHubRequest&, const Model::DescribeHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeProductsRequest&, const Model::DescribeProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeStandardsRequest&, const Model::DescribeStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeStandardsControlsRequest&, const Model::DescribeStandardsControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStandardsControlsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableImportFindingsForProductRequest&, const Model::DisableImportFindingsForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableImportFindingsForProductResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableOrganizationAdminAccountRequest&, const Model::DisableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableSecurityHubRequest&, const Model::DisableSecurityHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSecurityHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisassociateFromAdministratorAccountRequest&, const Model::DisassociateFromAdministratorAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromAdministratorAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisassociateMembersRequest&, const Model::DisassociateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableImportFindingsForProductRequest&, const Model::EnableImportFindingsForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableImportFindingsForProductResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableOrganizationAdminAccountRequest&, const Model::EnableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableSecurityHubRequest&, const Model::EnableSecurityHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSecurityHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetAdministratorAccountRequest&, const Model::GetAdministratorAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdministratorAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetConfigurationPolicyRequest&, const Model::GetConfigurationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationPolicyResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetConfigurationPolicyAssociationRequest&, const Model::GetConfigurationPolicyAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationPolicyAssociationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetEnabledStandardsRequest&, const Model::GetEnabledStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnabledStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetFindingAggregatorRequest&, const Model::GetFindingAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingAggregatorResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetFindingHistoryRequest&, const Model::GetFindingHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingHistoryResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInsightResultsRequest&, const Model::GetInsightResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightResultsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInsightsRequest&, const Model::GetInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetSecurityControlDefinitionRequest&, const Model::GetSecurityControlDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSecurityControlDefinitionResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::InviteMembersRequest&, const Model::InviteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListAutomationRulesRequest&, const Model::ListAutomationRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutomationRulesResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListConfigurationPoliciesRequest&, const Model::ListConfigurationPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationPoliciesResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListConfigurationPolicyAssociationsRequest&, const Model::ListConfigurationPolicyAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationPolicyAssociationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListEnabledProductsForImportRequest&, const Model::ListEnabledProductsForImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnabledProductsForImportResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListFindingAggregatorsRequest&, const Model::ListFindingAggregatorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingAggregatorsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListSecurityControlDefinitionsRequest&, const Model::ListSecurityControlDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityControlDefinitionsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListStandardsControlAssociationsRequest&, const Model::ListStandardsControlAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStandardsControlAssociationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::StartConfigurationPolicyAssociationRequest&, const Model::StartConfigurationPolicyAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigurationPolicyAssociationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::StartConfigurationPolicyDisassociationRequest&, const Model::StartConfigurationPolicyDisassociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigurationPolicyDisassociationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateActionTargetRequest&, const Model::UpdateActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateConfigurationPolicyRequest&, const Model::UpdateConfigurationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationPolicyResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateFindingAggregatorRequest&, const Model::UpdateFindingAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingAggregatorResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateFindingsRequest&, const Model::UpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateInsightRequest&, const Model::UpdateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateSecurityControlRequest&, const Model::UpdateSecurityControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityControlResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateSecurityHubConfigurationRequest&, const Model::UpdateSecurityHubConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityHubConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateStandardsControlRequest&, const Model::UpdateStandardsControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStandardsControlResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SecurityHub
} // namespace Aws
