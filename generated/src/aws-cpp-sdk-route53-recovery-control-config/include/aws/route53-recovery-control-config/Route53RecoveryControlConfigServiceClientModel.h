/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Route53RecoveryControlConfigClient header */
#include <aws/route53-recovery-control-config/model/CreateClusterResult.h>
#include <aws/route53-recovery-control-config/model/CreateControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/CreateRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/CreateSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/DeleteClusterResult.h>
#include <aws/route53-recovery-control-config/model/DeleteControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/DeleteRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/DeleteSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterResult.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/DescribeSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksResult.h>
#include <aws/route53-recovery-control-config/model/ListClustersResult.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsResult.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsResult.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesResult.h>
#include <aws/route53-recovery-control-config/model/ListTagsForResourceResult.h>
#include <aws/route53-recovery-control-config/model/TagResourceResult.h>
#include <aws/route53-recovery-control-config/model/UntagResourceResult.h>
#include <aws/route53-recovery-control-config/model/UpdateControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/UpdateRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/UpdateSafetyRuleResult.h>
/* End of service model headers required in Route53RecoveryControlConfigClient header */

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

  namespace Route53RecoveryControlConfig
  {
    using Route53RecoveryControlConfigClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Route53RecoveryControlConfigEndpointProviderBase = Aws::Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigEndpointProviderBase;
    using Route53RecoveryControlConfigEndpointProvider = Aws::Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Route53RecoveryControlConfigClient header */
      class CreateClusterRequest;
      class CreateControlPanelRequest;
      class CreateRoutingControlRequest;
      class CreateSafetyRuleRequest;
      class DeleteClusterRequest;
      class DeleteControlPanelRequest;
      class DeleteRoutingControlRequest;
      class DeleteSafetyRuleRequest;
      class DescribeClusterRequest;
      class DescribeControlPanelRequest;
      class DescribeRoutingControlRequest;
      class DescribeSafetyRuleRequest;
      class ListAssociatedRoute53HealthChecksRequest;
      class ListClustersRequest;
      class ListControlPanelsRequest;
      class ListRoutingControlsRequest;
      class ListSafetyRulesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateControlPanelRequest;
      class UpdateRoutingControlRequest;
      class UpdateSafetyRuleRequest;
      /* End of service model forward declarations required in Route53RecoveryControlConfigClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateClusterResult, Route53RecoveryControlConfigError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateControlPanelResult, Route53RecoveryControlConfigError> CreateControlPanelOutcome;
      typedef Aws::Utils::Outcome<CreateRoutingControlResult, Route53RecoveryControlConfigError> CreateRoutingControlOutcome;
      typedef Aws::Utils::Outcome<CreateSafetyRuleResult, Route53RecoveryControlConfigError> CreateSafetyRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, Route53RecoveryControlConfigError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteControlPanelResult, Route53RecoveryControlConfigError> DeleteControlPanelOutcome;
      typedef Aws::Utils::Outcome<DeleteRoutingControlResult, Route53RecoveryControlConfigError> DeleteRoutingControlOutcome;
      typedef Aws::Utils::Outcome<DeleteSafetyRuleResult, Route53RecoveryControlConfigError> DeleteSafetyRuleOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterResult, Route53RecoveryControlConfigError> DescribeClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeControlPanelResult, Route53RecoveryControlConfigError> DescribeControlPanelOutcome;
      typedef Aws::Utils::Outcome<DescribeRoutingControlResult, Route53RecoveryControlConfigError> DescribeRoutingControlOutcome;
      typedef Aws::Utils::Outcome<DescribeSafetyRuleResult, Route53RecoveryControlConfigError> DescribeSafetyRuleOutcome;
      typedef Aws::Utils::Outcome<ListAssociatedRoute53HealthChecksResult, Route53RecoveryControlConfigError> ListAssociatedRoute53HealthChecksOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, Route53RecoveryControlConfigError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListControlPanelsResult, Route53RecoveryControlConfigError> ListControlPanelsOutcome;
      typedef Aws::Utils::Outcome<ListRoutingControlsResult, Route53RecoveryControlConfigError> ListRoutingControlsOutcome;
      typedef Aws::Utils::Outcome<ListSafetyRulesResult, Route53RecoveryControlConfigError> ListSafetyRulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Route53RecoveryControlConfigError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Route53RecoveryControlConfigError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Route53RecoveryControlConfigError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateControlPanelResult, Route53RecoveryControlConfigError> UpdateControlPanelOutcome;
      typedef Aws::Utils::Outcome<UpdateRoutingControlResult, Route53RecoveryControlConfigError> UpdateRoutingControlOutcome;
      typedef Aws::Utils::Outcome<UpdateSafetyRuleResult, Route53RecoveryControlConfigError> UpdateSafetyRuleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateControlPanelOutcome> CreateControlPanelOutcomeCallable;
      typedef std::future<CreateRoutingControlOutcome> CreateRoutingControlOutcomeCallable;
      typedef std::future<CreateSafetyRuleOutcome> CreateSafetyRuleOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteControlPanelOutcome> DeleteControlPanelOutcomeCallable;
      typedef std::future<DeleteRoutingControlOutcome> DeleteRoutingControlOutcomeCallable;
      typedef std::future<DeleteSafetyRuleOutcome> DeleteSafetyRuleOutcomeCallable;
      typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
      typedef std::future<DescribeControlPanelOutcome> DescribeControlPanelOutcomeCallable;
      typedef std::future<DescribeRoutingControlOutcome> DescribeRoutingControlOutcomeCallable;
      typedef std::future<DescribeSafetyRuleOutcome> DescribeSafetyRuleOutcomeCallable;
      typedef std::future<ListAssociatedRoute53HealthChecksOutcome> ListAssociatedRoute53HealthChecksOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListControlPanelsOutcome> ListControlPanelsOutcomeCallable;
      typedef std::future<ListRoutingControlsOutcome> ListRoutingControlsOutcomeCallable;
      typedef std::future<ListSafetyRulesOutcome> ListSafetyRulesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateControlPanelOutcome> UpdateControlPanelOutcomeCallable;
      typedef std::future<UpdateRoutingControlOutcome> UpdateRoutingControlOutcomeCallable;
      typedef std::future<UpdateSafetyRuleOutcome> UpdateSafetyRuleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Route53RecoveryControlConfigClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateControlPanelRequest&, const Model::CreateControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateRoutingControlRequest&, const Model::CreateRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::CreateSafetyRuleRequest&, const Model::CreateSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSafetyRuleResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteControlPanelRequest&, const Model::DeleteControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteRoutingControlRequest&, const Model::DeleteRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DeleteSafetyRuleRequest&, const Model::DeleteSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSafetyRuleResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeControlPanelRequest&, const Model::DescribeControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeRoutingControlRequest&, const Model::DescribeRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::DescribeSafetyRuleRequest&, const Model::DescribeSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSafetyRuleResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListAssociatedRoute53HealthChecksRequest&, const Model::ListAssociatedRoute53HealthChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedRoute53HealthChecksResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListControlPanelsRequest&, const Model::ListControlPanelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlPanelsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListRoutingControlsRequest&, const Model::ListRoutingControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingControlsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListSafetyRulesRequest&, const Model::ListSafetyRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSafetyRulesResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UpdateControlPanelRequest&, const Model::UpdateControlPanelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateControlPanelResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UpdateRoutingControlRequest&, const Model::UpdateRoutingControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryControlConfigClient*, const Model::UpdateSafetyRuleRequest&, const Model::UpdateSafetyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSafetyRuleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Route53RecoveryControlConfig
} // namespace Aws
