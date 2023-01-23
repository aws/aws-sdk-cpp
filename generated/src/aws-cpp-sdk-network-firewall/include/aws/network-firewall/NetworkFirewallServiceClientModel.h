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
#include <aws/network-firewall/model/AssociateFirewallPolicyResult.h>
#include <aws/network-firewall/model/AssociateSubnetsResult.h>
#include <aws/network-firewall/model/CreateFirewallResult.h>
#include <aws/network-firewall/model/CreateFirewallPolicyResult.h>
#include <aws/network-firewall/model/CreateRuleGroupResult.h>
#include <aws/network-firewall/model/DeleteFirewallResult.h>
#include <aws/network-firewall/model/DeleteFirewallPolicyResult.h>
#include <aws/network-firewall/model/DeleteResourcePolicyResult.h>
#include <aws/network-firewall/model/DeleteRuleGroupResult.h>
#include <aws/network-firewall/model/DescribeFirewallResult.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyResult.h>
#include <aws/network-firewall/model/DescribeLoggingConfigurationResult.h>
#include <aws/network-firewall/model/DescribeResourcePolicyResult.h>
#include <aws/network-firewall/model/DescribeRuleGroupResult.h>
#include <aws/network-firewall/model/DescribeRuleGroupMetadataResult.h>
#include <aws/network-firewall/model/DisassociateSubnetsResult.h>
#include <aws/network-firewall/model/ListFirewallPoliciesResult.h>
#include <aws/network-firewall/model/ListFirewallsResult.h>
#include <aws/network-firewall/model/ListRuleGroupsResult.h>
#include <aws/network-firewall/model/ListTagsForResourceResult.h>
#include <aws/network-firewall/model/PutResourcePolicyResult.h>
#include <aws/network-firewall/model/TagResourceResult.h>
#include <aws/network-firewall/model/UntagResourceResult.h>
#include <aws/network-firewall/model/UpdateFirewallDeleteProtectionResult.h>
#include <aws/network-firewall/model/UpdateFirewallDescriptionResult.h>
#include <aws/network-firewall/model/UpdateFirewallEncryptionConfigurationResult.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyResult.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyChangeProtectionResult.h>
#include <aws/network-firewall/model/UpdateLoggingConfigurationResult.h>
#include <aws/network-firewall/model/UpdateRuleGroupResult.h>
#include <aws/network-firewall/model/UpdateSubnetChangeProtectionResult.h>
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
    using NetworkFirewallClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using NetworkFirewallEndpointProviderBase = Aws::NetworkFirewall::Endpoint::NetworkFirewallEndpointProviderBase;
    using NetworkFirewallEndpointProvider = Aws::NetworkFirewall::Endpoint::NetworkFirewallEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NetworkFirewallClient header */
      class AssociateFirewallPolicyRequest;
      class AssociateSubnetsRequest;
      class CreateFirewallRequest;
      class CreateFirewallPolicyRequest;
      class CreateRuleGroupRequest;
      class DeleteFirewallRequest;
      class DeleteFirewallPolicyRequest;
      class DeleteResourcePolicyRequest;
      class DeleteRuleGroupRequest;
      class DescribeFirewallRequest;
      class DescribeFirewallPolicyRequest;
      class DescribeLoggingConfigurationRequest;
      class DescribeResourcePolicyRequest;
      class DescribeRuleGroupRequest;
      class DescribeRuleGroupMetadataRequest;
      class DisassociateSubnetsRequest;
      class ListFirewallPoliciesRequest;
      class ListFirewallsRequest;
      class ListRuleGroupsRequest;
      class ListTagsForResourceRequest;
      class PutResourcePolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateFirewallDeleteProtectionRequest;
      class UpdateFirewallDescriptionRequest;
      class UpdateFirewallEncryptionConfigurationRequest;
      class UpdateFirewallPolicyRequest;
      class UpdateFirewallPolicyChangeProtectionRequest;
      class UpdateLoggingConfigurationRequest;
      class UpdateRuleGroupRequest;
      class UpdateSubnetChangeProtectionRequest;
      /* End of service model forward declarations required in NetworkFirewallClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateFirewallPolicyResult, NetworkFirewallError> AssociateFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<AssociateSubnetsResult, NetworkFirewallError> AssociateSubnetsOutcome;
      typedef Aws::Utils::Outcome<CreateFirewallResult, NetworkFirewallError> CreateFirewallOutcome;
      typedef Aws::Utils::Outcome<CreateFirewallPolicyResult, NetworkFirewallError> CreateFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateRuleGroupResult, NetworkFirewallError> CreateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallResult, NetworkFirewallError> DeleteFirewallOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallPolicyResult, NetworkFirewallError> DeleteFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, NetworkFirewallError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleGroupResult, NetworkFirewallError> DeleteRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeFirewallResult, NetworkFirewallError> DescribeFirewallOutcome;
      typedef Aws::Utils::Outcome<DescribeFirewallPolicyResult, NetworkFirewallError> DescribeFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeLoggingConfigurationResult, NetworkFirewallError> DescribeLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePolicyResult, NetworkFirewallError> DescribeResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleGroupResult, NetworkFirewallError> DescribeRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleGroupMetadataResult, NetworkFirewallError> DescribeRuleGroupMetadataOutcome;
      typedef Aws::Utils::Outcome<DisassociateSubnetsResult, NetworkFirewallError> DisassociateSubnetsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallPoliciesResult, NetworkFirewallError> ListFirewallPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListFirewallsResult, NetworkFirewallError> ListFirewallsOutcome;
      typedef Aws::Utils::Outcome<ListRuleGroupsResult, NetworkFirewallError> ListRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkFirewallError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, NetworkFirewallError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NetworkFirewallError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NetworkFirewallError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallDeleteProtectionResult, NetworkFirewallError> UpdateFirewallDeleteProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallDescriptionResult, NetworkFirewallError> UpdateFirewallDescriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallEncryptionConfigurationResult, NetworkFirewallError> UpdateFirewallEncryptionConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallPolicyResult, NetworkFirewallError> UpdateFirewallPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallPolicyChangeProtectionResult, NetworkFirewallError> UpdateFirewallPolicyChangeProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateLoggingConfigurationResult, NetworkFirewallError> UpdateLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleGroupResult, NetworkFirewallError> UpdateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSubnetChangeProtectionResult, NetworkFirewallError> UpdateSubnetChangeProtectionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateFirewallPolicyOutcome> AssociateFirewallPolicyOutcomeCallable;
      typedef std::future<AssociateSubnetsOutcome> AssociateSubnetsOutcomeCallable;
      typedef std::future<CreateFirewallOutcome> CreateFirewallOutcomeCallable;
      typedef std::future<CreateFirewallPolicyOutcome> CreateFirewallPolicyOutcomeCallable;
      typedef std::future<CreateRuleGroupOutcome> CreateRuleGroupOutcomeCallable;
      typedef std::future<DeleteFirewallOutcome> DeleteFirewallOutcomeCallable;
      typedef std::future<DeleteFirewallPolicyOutcome> DeleteFirewallPolicyOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
      typedef std::future<DescribeFirewallOutcome> DescribeFirewallOutcomeCallable;
      typedef std::future<DescribeFirewallPolicyOutcome> DescribeFirewallPolicyOutcomeCallable;
      typedef std::future<DescribeLoggingConfigurationOutcome> DescribeLoggingConfigurationOutcomeCallable;
      typedef std::future<DescribeResourcePolicyOutcome> DescribeResourcePolicyOutcomeCallable;
      typedef std::future<DescribeRuleGroupOutcome> DescribeRuleGroupOutcomeCallable;
      typedef std::future<DescribeRuleGroupMetadataOutcome> DescribeRuleGroupMetadataOutcomeCallable;
      typedef std::future<DisassociateSubnetsOutcome> DisassociateSubnetsOutcomeCallable;
      typedef std::future<ListFirewallPoliciesOutcome> ListFirewallPoliciesOutcomeCallable;
      typedef std::future<ListFirewallsOutcome> ListFirewallsOutcomeCallable;
      typedef std::future<ListRuleGroupsOutcome> ListRuleGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateFirewallDeleteProtectionOutcome> UpdateFirewallDeleteProtectionOutcomeCallable;
      typedef std::future<UpdateFirewallDescriptionOutcome> UpdateFirewallDescriptionOutcomeCallable;
      typedef std::future<UpdateFirewallEncryptionConfigurationOutcome> UpdateFirewallEncryptionConfigurationOutcomeCallable;
      typedef std::future<UpdateFirewallPolicyOutcome> UpdateFirewallPolicyOutcomeCallable;
      typedef std::future<UpdateFirewallPolicyChangeProtectionOutcome> UpdateFirewallPolicyChangeProtectionOutcomeCallable;
      typedef std::future<UpdateLoggingConfigurationOutcome> UpdateLoggingConfigurationOutcomeCallable;
      typedef std::future<UpdateRuleGroupOutcome> UpdateRuleGroupOutcomeCallable;
      typedef std::future<UpdateSubnetChangeProtectionOutcome> UpdateSubnetChangeProtectionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NetworkFirewallClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NetworkFirewallClient*, const Model::AssociateFirewallPolicyRequest&, const Model::AssociateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::AssociateSubnetsRequest&, const Model::AssociateSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSubnetsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateFirewallRequest&, const Model::CreateFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateFirewallPolicyRequest&, const Model::CreateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateRuleGroupRequest&, const Model::CreateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteFirewallRequest&, const Model::DeleteFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteFirewallPolicyRequest&, const Model::DeleteFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteRuleGroupRequest&, const Model::DeleteRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFirewallRequest&, const Model::DescribeFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFirewallPolicyRequest&, const Model::DescribeFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeLoggingConfigurationRequest&, const Model::DescribeLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeResourcePolicyRequest&, const Model::DescribeResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeRuleGroupRequest&, const Model::DescribeRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeRuleGroupMetadataRequest&, const Model::DescribeRuleGroupMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupMetadataResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DisassociateSubnetsRequest&, const Model::DisassociateSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSubnetsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFirewallPoliciesRequest&, const Model::ListFirewallPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallPoliciesResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFirewallsRequest&, const Model::ListFirewallsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListRuleGroupsRequest&, const Model::ListRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallDeleteProtectionRequest&, const Model::UpdateFirewallDeleteProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallDeleteProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallDescriptionRequest&, const Model::UpdateFirewallDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallDescriptionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallEncryptionConfigurationRequest&, const Model::UpdateFirewallEncryptionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallEncryptionConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallPolicyRequest&, const Model::UpdateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallPolicyChangeProtectionRequest&, const Model::UpdateFirewallPolicyChangeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallPolicyChangeProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateLoggingConfigurationRequest&, const Model::UpdateLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateRuleGroupRequest&, const Model::UpdateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateSubnetChangeProtectionRequest&, const Model::UpdateSubnetChangeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubnetChangeProtectionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace NetworkFirewall
} // namespace Aws
