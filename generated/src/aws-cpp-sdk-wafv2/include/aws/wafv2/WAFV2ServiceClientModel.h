/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/wafv2/WAFV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/wafv2/WAFV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WAFV2Client header */
#include <aws/wafv2/model/AssociateWebACLResult.h>
#include <aws/wafv2/model/CheckCapacityResult.h>
#include <aws/wafv2/model/CreateIPSetResult.h>
#include <aws/wafv2/model/CreateRegexPatternSetResult.h>
#include <aws/wafv2/model/CreateRuleGroupResult.h>
#include <aws/wafv2/model/CreateWebACLResult.h>
#include <aws/wafv2/model/DeleteFirewallManagerRuleGroupsResult.h>
#include <aws/wafv2/model/DeleteIPSetResult.h>
#include <aws/wafv2/model/DeleteLoggingConfigurationResult.h>
#include <aws/wafv2/model/DeletePermissionPolicyResult.h>
#include <aws/wafv2/model/DeleteRegexPatternSetResult.h>
#include <aws/wafv2/model/DeleteRuleGroupResult.h>
#include <aws/wafv2/model/DeleteWebACLResult.h>
#include <aws/wafv2/model/DescribeManagedRuleGroupResult.h>
#include <aws/wafv2/model/DisassociateWebACLResult.h>
#include <aws/wafv2/model/GenerateMobileSdkReleaseUrlResult.h>
#include <aws/wafv2/model/GetIPSetResult.h>
#include <aws/wafv2/model/GetLoggingConfigurationResult.h>
#include <aws/wafv2/model/GetManagedRuleSetResult.h>
#include <aws/wafv2/model/GetMobileSdkReleaseResult.h>
#include <aws/wafv2/model/GetPermissionPolicyResult.h>
#include <aws/wafv2/model/GetRateBasedStatementManagedKeysResult.h>
#include <aws/wafv2/model/GetRegexPatternSetResult.h>
#include <aws/wafv2/model/GetRuleGroupResult.h>
#include <aws/wafv2/model/GetSampledRequestsResult.h>
#include <aws/wafv2/model/GetWebACLResult.h>
#include <aws/wafv2/model/GetWebACLForResourceResult.h>
#include <aws/wafv2/model/ListAvailableManagedRuleGroupVersionsResult.h>
#include <aws/wafv2/model/ListAvailableManagedRuleGroupsResult.h>
#include <aws/wafv2/model/ListIPSetsResult.h>
#include <aws/wafv2/model/ListLoggingConfigurationsResult.h>
#include <aws/wafv2/model/ListManagedRuleSetsResult.h>
#include <aws/wafv2/model/ListMobileSdkReleasesResult.h>
#include <aws/wafv2/model/ListRegexPatternSetsResult.h>
#include <aws/wafv2/model/ListResourcesForWebACLResult.h>
#include <aws/wafv2/model/ListRuleGroupsResult.h>
#include <aws/wafv2/model/ListTagsForResourceResult.h>
#include <aws/wafv2/model/ListWebACLsResult.h>
#include <aws/wafv2/model/PutLoggingConfigurationResult.h>
#include <aws/wafv2/model/PutManagedRuleSetVersionsResult.h>
#include <aws/wafv2/model/PutPermissionPolicyResult.h>
#include <aws/wafv2/model/TagResourceResult.h>
#include <aws/wafv2/model/UntagResourceResult.h>
#include <aws/wafv2/model/UpdateIPSetResult.h>
#include <aws/wafv2/model/UpdateManagedRuleSetVersionExpiryDateResult.h>
#include <aws/wafv2/model/UpdateRegexPatternSetResult.h>
#include <aws/wafv2/model/UpdateRuleGroupResult.h>
#include <aws/wafv2/model/UpdateWebACLResult.h>
/* End of service model headers required in WAFV2Client header */

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

  namespace WAFV2
  {
    using WAFV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WAFV2EndpointProviderBase = Aws::WAFV2::Endpoint::WAFV2EndpointProviderBase;
    using WAFV2EndpointProvider = Aws::WAFV2::Endpoint::WAFV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WAFV2Client header */
      class AssociateWebACLRequest;
      class CheckCapacityRequest;
      class CreateIPSetRequest;
      class CreateRegexPatternSetRequest;
      class CreateRuleGroupRequest;
      class CreateWebACLRequest;
      class DeleteFirewallManagerRuleGroupsRequest;
      class DeleteIPSetRequest;
      class DeleteLoggingConfigurationRequest;
      class DeletePermissionPolicyRequest;
      class DeleteRegexPatternSetRequest;
      class DeleteRuleGroupRequest;
      class DeleteWebACLRequest;
      class DescribeManagedRuleGroupRequest;
      class DisassociateWebACLRequest;
      class GenerateMobileSdkReleaseUrlRequest;
      class GetIPSetRequest;
      class GetLoggingConfigurationRequest;
      class GetManagedRuleSetRequest;
      class GetMobileSdkReleaseRequest;
      class GetPermissionPolicyRequest;
      class GetRateBasedStatementManagedKeysRequest;
      class GetRegexPatternSetRequest;
      class GetRuleGroupRequest;
      class GetSampledRequestsRequest;
      class GetWebACLRequest;
      class GetWebACLForResourceRequest;
      class ListAvailableManagedRuleGroupVersionsRequest;
      class ListAvailableManagedRuleGroupsRequest;
      class ListIPSetsRequest;
      class ListLoggingConfigurationsRequest;
      class ListManagedRuleSetsRequest;
      class ListMobileSdkReleasesRequest;
      class ListRegexPatternSetsRequest;
      class ListResourcesForWebACLRequest;
      class ListRuleGroupsRequest;
      class ListTagsForResourceRequest;
      class ListWebACLsRequest;
      class PutLoggingConfigurationRequest;
      class PutManagedRuleSetVersionsRequest;
      class PutPermissionPolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateIPSetRequest;
      class UpdateManagedRuleSetVersionExpiryDateRequest;
      class UpdateRegexPatternSetRequest;
      class UpdateRuleGroupRequest;
      class UpdateWebACLRequest;
      /* End of service model forward declarations required in WAFV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateWebACLResult, WAFV2Error> AssociateWebACLOutcome;
      typedef Aws::Utils::Outcome<CheckCapacityResult, WAFV2Error> CheckCapacityOutcome;
      typedef Aws::Utils::Outcome<CreateIPSetResult, WAFV2Error> CreateIPSetOutcome;
      typedef Aws::Utils::Outcome<CreateRegexPatternSetResult, WAFV2Error> CreateRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<CreateRuleGroupResult, WAFV2Error> CreateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<CreateWebACLResult, WAFV2Error> CreateWebACLOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallManagerRuleGroupsResult, WAFV2Error> DeleteFirewallManagerRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<DeleteIPSetResult, WAFV2Error> DeleteIPSetOutcome;
      typedef Aws::Utils::Outcome<DeleteLoggingConfigurationResult, WAFV2Error> DeleteLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionPolicyResult, WAFV2Error> DeletePermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRegexPatternSetResult, WAFV2Error> DeleteRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleGroupResult, WAFV2Error> DeleteRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteWebACLResult, WAFV2Error> DeleteWebACLOutcome;
      typedef Aws::Utils::Outcome<DescribeManagedRuleGroupResult, WAFV2Error> DescribeManagedRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateWebACLResult, WAFV2Error> DisassociateWebACLOutcome;
      typedef Aws::Utils::Outcome<GenerateMobileSdkReleaseUrlResult, WAFV2Error> GenerateMobileSdkReleaseUrlOutcome;
      typedef Aws::Utils::Outcome<GetIPSetResult, WAFV2Error> GetIPSetOutcome;
      typedef Aws::Utils::Outcome<GetLoggingConfigurationResult, WAFV2Error> GetLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetManagedRuleSetResult, WAFV2Error> GetManagedRuleSetOutcome;
      typedef Aws::Utils::Outcome<GetMobileSdkReleaseResult, WAFV2Error> GetMobileSdkReleaseOutcome;
      typedef Aws::Utils::Outcome<GetPermissionPolicyResult, WAFV2Error> GetPermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<GetRateBasedStatementManagedKeysResult, WAFV2Error> GetRateBasedStatementManagedKeysOutcome;
      typedef Aws::Utils::Outcome<GetRegexPatternSetResult, WAFV2Error> GetRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<GetRuleGroupResult, WAFV2Error> GetRuleGroupOutcome;
      typedef Aws::Utils::Outcome<GetSampledRequestsResult, WAFV2Error> GetSampledRequestsOutcome;
      typedef Aws::Utils::Outcome<GetWebACLResult, WAFV2Error> GetWebACLOutcome;
      typedef Aws::Utils::Outcome<GetWebACLForResourceResult, WAFV2Error> GetWebACLForResourceOutcome;
      typedef Aws::Utils::Outcome<ListAvailableManagedRuleGroupVersionsResult, WAFV2Error> ListAvailableManagedRuleGroupVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAvailableManagedRuleGroupsResult, WAFV2Error> ListAvailableManagedRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListIPSetsResult, WAFV2Error> ListIPSetsOutcome;
      typedef Aws::Utils::Outcome<ListLoggingConfigurationsResult, WAFV2Error> ListLoggingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListManagedRuleSetsResult, WAFV2Error> ListManagedRuleSetsOutcome;
      typedef Aws::Utils::Outcome<ListMobileSdkReleasesResult, WAFV2Error> ListMobileSdkReleasesOutcome;
      typedef Aws::Utils::Outcome<ListRegexPatternSetsResult, WAFV2Error> ListRegexPatternSetsOutcome;
      typedef Aws::Utils::Outcome<ListResourcesForWebACLResult, WAFV2Error> ListResourcesForWebACLOutcome;
      typedef Aws::Utils::Outcome<ListRuleGroupsResult, WAFV2Error> ListRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WAFV2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWebACLsResult, WAFV2Error> ListWebACLsOutcome;
      typedef Aws::Utils::Outcome<PutLoggingConfigurationResult, WAFV2Error> PutLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutManagedRuleSetVersionsResult, WAFV2Error> PutManagedRuleSetVersionsOutcome;
      typedef Aws::Utils::Outcome<PutPermissionPolicyResult, WAFV2Error> PutPermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WAFV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WAFV2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateIPSetResult, WAFV2Error> UpdateIPSetOutcome;
      typedef Aws::Utils::Outcome<UpdateManagedRuleSetVersionExpiryDateResult, WAFV2Error> UpdateManagedRuleSetVersionExpiryDateOutcome;
      typedef Aws::Utils::Outcome<UpdateRegexPatternSetResult, WAFV2Error> UpdateRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleGroupResult, WAFV2Error> UpdateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateWebACLResult, WAFV2Error> UpdateWebACLOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateWebACLOutcome> AssociateWebACLOutcomeCallable;
      typedef std::future<CheckCapacityOutcome> CheckCapacityOutcomeCallable;
      typedef std::future<CreateIPSetOutcome> CreateIPSetOutcomeCallable;
      typedef std::future<CreateRegexPatternSetOutcome> CreateRegexPatternSetOutcomeCallable;
      typedef std::future<CreateRuleGroupOutcome> CreateRuleGroupOutcomeCallable;
      typedef std::future<CreateWebACLOutcome> CreateWebACLOutcomeCallable;
      typedef std::future<DeleteFirewallManagerRuleGroupsOutcome> DeleteFirewallManagerRuleGroupsOutcomeCallable;
      typedef std::future<DeleteIPSetOutcome> DeleteIPSetOutcomeCallable;
      typedef std::future<DeleteLoggingConfigurationOutcome> DeleteLoggingConfigurationOutcomeCallable;
      typedef std::future<DeletePermissionPolicyOutcome> DeletePermissionPolicyOutcomeCallable;
      typedef std::future<DeleteRegexPatternSetOutcome> DeleteRegexPatternSetOutcomeCallable;
      typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
      typedef std::future<DeleteWebACLOutcome> DeleteWebACLOutcomeCallable;
      typedef std::future<DescribeManagedRuleGroupOutcome> DescribeManagedRuleGroupOutcomeCallable;
      typedef std::future<DisassociateWebACLOutcome> DisassociateWebACLOutcomeCallable;
      typedef std::future<GenerateMobileSdkReleaseUrlOutcome> GenerateMobileSdkReleaseUrlOutcomeCallable;
      typedef std::future<GetIPSetOutcome> GetIPSetOutcomeCallable;
      typedef std::future<GetLoggingConfigurationOutcome> GetLoggingConfigurationOutcomeCallable;
      typedef std::future<GetManagedRuleSetOutcome> GetManagedRuleSetOutcomeCallable;
      typedef std::future<GetMobileSdkReleaseOutcome> GetMobileSdkReleaseOutcomeCallable;
      typedef std::future<GetPermissionPolicyOutcome> GetPermissionPolicyOutcomeCallable;
      typedef std::future<GetRateBasedStatementManagedKeysOutcome> GetRateBasedStatementManagedKeysOutcomeCallable;
      typedef std::future<GetRegexPatternSetOutcome> GetRegexPatternSetOutcomeCallable;
      typedef std::future<GetRuleGroupOutcome> GetRuleGroupOutcomeCallable;
      typedef std::future<GetSampledRequestsOutcome> GetSampledRequestsOutcomeCallable;
      typedef std::future<GetWebACLOutcome> GetWebACLOutcomeCallable;
      typedef std::future<GetWebACLForResourceOutcome> GetWebACLForResourceOutcomeCallable;
      typedef std::future<ListAvailableManagedRuleGroupVersionsOutcome> ListAvailableManagedRuleGroupVersionsOutcomeCallable;
      typedef std::future<ListAvailableManagedRuleGroupsOutcome> ListAvailableManagedRuleGroupsOutcomeCallable;
      typedef std::future<ListIPSetsOutcome> ListIPSetsOutcomeCallable;
      typedef std::future<ListLoggingConfigurationsOutcome> ListLoggingConfigurationsOutcomeCallable;
      typedef std::future<ListManagedRuleSetsOutcome> ListManagedRuleSetsOutcomeCallable;
      typedef std::future<ListMobileSdkReleasesOutcome> ListMobileSdkReleasesOutcomeCallable;
      typedef std::future<ListRegexPatternSetsOutcome> ListRegexPatternSetsOutcomeCallable;
      typedef std::future<ListResourcesForWebACLOutcome> ListResourcesForWebACLOutcomeCallable;
      typedef std::future<ListRuleGroupsOutcome> ListRuleGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWebACLsOutcome> ListWebACLsOutcomeCallable;
      typedef std::future<PutLoggingConfigurationOutcome> PutLoggingConfigurationOutcomeCallable;
      typedef std::future<PutManagedRuleSetVersionsOutcome> PutManagedRuleSetVersionsOutcomeCallable;
      typedef std::future<PutPermissionPolicyOutcome> PutPermissionPolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateIPSetOutcome> UpdateIPSetOutcomeCallable;
      typedef std::future<UpdateManagedRuleSetVersionExpiryDateOutcome> UpdateManagedRuleSetVersionExpiryDateOutcomeCallable;
      typedef std::future<UpdateRegexPatternSetOutcome> UpdateRegexPatternSetOutcomeCallable;
      typedef std::future<UpdateRuleGroupOutcome> UpdateRuleGroupOutcomeCallable;
      typedef std::future<UpdateWebACLOutcome> UpdateWebACLOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WAFV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const WAFV2Client*, const Model::AssociateWebACLRequest&, const Model::AssociateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CheckCapacityRequest&, const Model::CheckCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckCapacityResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateIPSetRequest&, const Model::CreateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateRegexPatternSetRequest&, const Model::CreateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateRuleGroupRequest&, const Model::CreateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateWebACLRequest&, const Model::CreateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteFirewallManagerRuleGroupsRequest&, const Model::DeleteFirewallManagerRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallManagerRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteIPSetRequest&, const Model::DeleteIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteLoggingConfigurationRequest&, const Model::DeleteLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeletePermissionPolicyRequest&, const Model::DeletePermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteRegexPatternSetRequest&, const Model::DeleteRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteRuleGroupRequest&, const Model::DeleteRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteWebACLRequest&, const Model::DeleteWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DescribeManagedRuleGroupRequest&, const Model::DescribeManagedRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeManagedRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DisassociateWebACLRequest&, const Model::DisassociateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GenerateMobileSdkReleaseUrlRequest&, const Model::GenerateMobileSdkReleaseUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateMobileSdkReleaseUrlResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetIPSetRequest&, const Model::GetIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetLoggingConfigurationRequest&, const Model::GetLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetManagedRuleSetRequest&, const Model::GetManagedRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedRuleSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetMobileSdkReleaseRequest&, const Model::GetMobileSdkReleaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMobileSdkReleaseResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetPermissionPolicyRequest&, const Model::GetPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetRateBasedStatementManagedKeysRequest&, const Model::GetRateBasedStatementManagedKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRateBasedStatementManagedKeysResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetRegexPatternSetRequest&, const Model::GetRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetRuleGroupRequest&, const Model::GetRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetSampledRequestsRequest&, const Model::GetSampledRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSampledRequestsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetWebACLRequest&, const Model::GetWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetWebACLForResourceRequest&, const Model::GetWebACLForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebACLForResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListAvailableManagedRuleGroupVersionsRequest&, const Model::ListAvailableManagedRuleGroupVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableManagedRuleGroupVersionsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListAvailableManagedRuleGroupsRequest&, const Model::ListAvailableManagedRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableManagedRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListIPSetsRequest&, const Model::ListIPSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIPSetsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListLoggingConfigurationsRequest&, const Model::ListLoggingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoggingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListManagedRuleSetsRequest&, const Model::ListManagedRuleSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedRuleSetsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListMobileSdkReleasesRequest&, const Model::ListMobileSdkReleasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMobileSdkReleasesResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListRegexPatternSetsRequest&, const Model::ListRegexPatternSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegexPatternSetsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListResourcesForWebACLRequest&, const Model::ListResourcesForWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesForWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListRuleGroupsRequest&, const Model::ListRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListWebACLsRequest&, const Model::ListWebACLsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebACLsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::PutLoggingConfigurationRequest&, const Model::PutLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::PutManagedRuleSetVersionsRequest&, const Model::PutManagedRuleSetVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutManagedRuleSetVersionsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::PutPermissionPolicyRequest&, const Model::PutPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateIPSetRequest&, const Model::UpdateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateManagedRuleSetVersionExpiryDateRequest&, const Model::UpdateManagedRuleSetVersionExpiryDateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateManagedRuleSetVersionExpiryDateResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateRegexPatternSetRequest&, const Model::UpdateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateRuleGroupRequest&, const Model::UpdateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateWebACLRequest&, const Model::UpdateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebACLResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WAFV2
} // namespace Aws
