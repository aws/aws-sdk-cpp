/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Route53RecoveryReadinessClient header */
#include <aws/route53-recovery-readiness/model/CreateCellResult.h>
#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationResult.h>
#include <aws/route53-recovery-readiness/model/CreateReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/CreateRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/CreateResourceSetResult.h>
#include <aws/route53-recovery-readiness/model/DeleteCrossAccountAuthorizationResult.h>
#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsResult.h>
#include <aws/route53-recovery-readiness/model/GetCellResult.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusResult.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryResult.h>
#include <aws/route53-recovery-readiness/model/GetResourceSetResult.h>
#include <aws/route53-recovery-readiness/model/ListCellsResult.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsResult.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksResult.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsResult.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsResult.h>
#include <aws/route53-recovery-readiness/model/ListRulesResult.h>
#include <aws/route53-recovery-readiness/model/ListTagsForResourcesResult.h>
#include <aws/route53-recovery-readiness/model/TagResourceResult.h>
#include <aws/route53-recovery-readiness/model/UpdateCellResult.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/UpdateRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/UpdateResourceSetResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in Route53RecoveryReadinessClient header */

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

  namespace Route53RecoveryReadiness
  {
    using Route53RecoveryReadinessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Route53RecoveryReadinessEndpointProviderBase = Aws::Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessEndpointProviderBase;
    using Route53RecoveryReadinessEndpointProvider = Aws::Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Route53RecoveryReadinessClient header */
      class CreateCellRequest;
      class CreateCrossAccountAuthorizationRequest;
      class CreateReadinessCheckRequest;
      class CreateRecoveryGroupRequest;
      class CreateResourceSetRequest;
      class DeleteCellRequest;
      class DeleteCrossAccountAuthorizationRequest;
      class DeleteReadinessCheckRequest;
      class DeleteRecoveryGroupRequest;
      class DeleteResourceSetRequest;
      class GetArchitectureRecommendationsRequest;
      class GetCellRequest;
      class GetCellReadinessSummaryRequest;
      class GetReadinessCheckRequest;
      class GetReadinessCheckResourceStatusRequest;
      class GetReadinessCheckStatusRequest;
      class GetRecoveryGroupRequest;
      class GetRecoveryGroupReadinessSummaryRequest;
      class GetResourceSetRequest;
      class ListCellsRequest;
      class ListCrossAccountAuthorizationsRequest;
      class ListReadinessChecksRequest;
      class ListRecoveryGroupsRequest;
      class ListResourceSetsRequest;
      class ListRulesRequest;
      class ListTagsForResourcesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCellRequest;
      class UpdateReadinessCheckRequest;
      class UpdateRecoveryGroupRequest;
      class UpdateResourceSetRequest;
      /* End of service model forward declarations required in Route53RecoveryReadinessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCellResult, Route53RecoveryReadinessError> CreateCellOutcome;
      typedef Aws::Utils::Outcome<CreateCrossAccountAuthorizationResult, Route53RecoveryReadinessError> CreateCrossAccountAuthorizationOutcome;
      typedef Aws::Utils::Outcome<CreateReadinessCheckResult, Route53RecoveryReadinessError> CreateReadinessCheckOutcome;
      typedef Aws::Utils::Outcome<CreateRecoveryGroupResult, Route53RecoveryReadinessError> CreateRecoveryGroupOutcome;
      typedef Aws::Utils::Outcome<CreateResourceSetResult, Route53RecoveryReadinessError> CreateResourceSetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteCellOutcome;
      typedef Aws::Utils::Outcome<DeleteCrossAccountAuthorizationResult, Route53RecoveryReadinessError> DeleteCrossAccountAuthorizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteReadinessCheckOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteRecoveryGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteResourceSetOutcome;
      typedef Aws::Utils::Outcome<GetArchitectureRecommendationsResult, Route53RecoveryReadinessError> GetArchitectureRecommendationsOutcome;
      typedef Aws::Utils::Outcome<GetCellResult, Route53RecoveryReadinessError> GetCellOutcome;
      typedef Aws::Utils::Outcome<GetCellReadinessSummaryResult, Route53RecoveryReadinessError> GetCellReadinessSummaryOutcome;
      typedef Aws::Utils::Outcome<GetReadinessCheckResult, Route53RecoveryReadinessError> GetReadinessCheckOutcome;
      typedef Aws::Utils::Outcome<GetReadinessCheckResourceStatusResult, Route53RecoveryReadinessError> GetReadinessCheckResourceStatusOutcome;
      typedef Aws::Utils::Outcome<GetReadinessCheckStatusResult, Route53RecoveryReadinessError> GetReadinessCheckStatusOutcome;
      typedef Aws::Utils::Outcome<GetRecoveryGroupResult, Route53RecoveryReadinessError> GetRecoveryGroupOutcome;
      typedef Aws::Utils::Outcome<GetRecoveryGroupReadinessSummaryResult, Route53RecoveryReadinessError> GetRecoveryGroupReadinessSummaryOutcome;
      typedef Aws::Utils::Outcome<GetResourceSetResult, Route53RecoveryReadinessError> GetResourceSetOutcome;
      typedef Aws::Utils::Outcome<ListCellsResult, Route53RecoveryReadinessError> ListCellsOutcome;
      typedef Aws::Utils::Outcome<ListCrossAccountAuthorizationsResult, Route53RecoveryReadinessError> ListCrossAccountAuthorizationsOutcome;
      typedef Aws::Utils::Outcome<ListReadinessChecksResult, Route53RecoveryReadinessError> ListReadinessChecksOutcome;
      typedef Aws::Utils::Outcome<ListRecoveryGroupsResult, Route53RecoveryReadinessError> ListRecoveryGroupsOutcome;
      typedef Aws::Utils::Outcome<ListResourceSetsResult, Route53RecoveryReadinessError> ListResourceSetsOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, Route53RecoveryReadinessError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourcesResult, Route53RecoveryReadinessError> ListTagsForResourcesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Route53RecoveryReadinessError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCellResult, Route53RecoveryReadinessError> UpdateCellOutcome;
      typedef Aws::Utils::Outcome<UpdateReadinessCheckResult, Route53RecoveryReadinessError> UpdateReadinessCheckOutcome;
      typedef Aws::Utils::Outcome<UpdateRecoveryGroupResult, Route53RecoveryReadinessError> UpdateRecoveryGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceSetResult, Route53RecoveryReadinessError> UpdateResourceSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCellOutcome> CreateCellOutcomeCallable;
      typedef std::future<CreateCrossAccountAuthorizationOutcome> CreateCrossAccountAuthorizationOutcomeCallable;
      typedef std::future<CreateReadinessCheckOutcome> CreateReadinessCheckOutcomeCallable;
      typedef std::future<CreateRecoveryGroupOutcome> CreateRecoveryGroupOutcomeCallable;
      typedef std::future<CreateResourceSetOutcome> CreateResourceSetOutcomeCallable;
      typedef std::future<DeleteCellOutcome> DeleteCellOutcomeCallable;
      typedef std::future<DeleteCrossAccountAuthorizationOutcome> DeleteCrossAccountAuthorizationOutcomeCallable;
      typedef std::future<DeleteReadinessCheckOutcome> DeleteReadinessCheckOutcomeCallable;
      typedef std::future<DeleteRecoveryGroupOutcome> DeleteRecoveryGroupOutcomeCallable;
      typedef std::future<DeleteResourceSetOutcome> DeleteResourceSetOutcomeCallable;
      typedef std::future<GetArchitectureRecommendationsOutcome> GetArchitectureRecommendationsOutcomeCallable;
      typedef std::future<GetCellOutcome> GetCellOutcomeCallable;
      typedef std::future<GetCellReadinessSummaryOutcome> GetCellReadinessSummaryOutcomeCallable;
      typedef std::future<GetReadinessCheckOutcome> GetReadinessCheckOutcomeCallable;
      typedef std::future<GetReadinessCheckResourceStatusOutcome> GetReadinessCheckResourceStatusOutcomeCallable;
      typedef std::future<GetReadinessCheckStatusOutcome> GetReadinessCheckStatusOutcomeCallable;
      typedef std::future<GetRecoveryGroupOutcome> GetRecoveryGroupOutcomeCallable;
      typedef std::future<GetRecoveryGroupReadinessSummaryOutcome> GetRecoveryGroupReadinessSummaryOutcomeCallable;
      typedef std::future<GetResourceSetOutcome> GetResourceSetOutcomeCallable;
      typedef std::future<ListCellsOutcome> ListCellsOutcomeCallable;
      typedef std::future<ListCrossAccountAuthorizationsOutcome> ListCrossAccountAuthorizationsOutcomeCallable;
      typedef std::future<ListReadinessChecksOutcome> ListReadinessChecksOutcomeCallable;
      typedef std::future<ListRecoveryGroupsOutcome> ListRecoveryGroupsOutcomeCallable;
      typedef std::future<ListResourceSetsOutcome> ListResourceSetsOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListTagsForResourcesOutcome> ListTagsForResourcesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCellOutcome> UpdateCellOutcomeCallable;
      typedef std::future<UpdateReadinessCheckOutcome> UpdateReadinessCheckOutcomeCallable;
      typedef std::future<UpdateRecoveryGroupOutcome> UpdateRecoveryGroupOutcomeCallable;
      typedef std::future<UpdateResourceSetOutcome> UpdateResourceSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Route53RecoveryReadinessClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateCellRequest&, const Model::CreateCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateCrossAccountAuthorizationRequest&, const Model::CreateCrossAccountAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCrossAccountAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateReadinessCheckRequest&, const Model::CreateReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateRecoveryGroupRequest&, const Model::CreateRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateResourceSetRequest&, const Model::CreateResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceSetResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteCellRequest&, const Model::DeleteCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteCrossAccountAuthorizationRequest&, const Model::DeleteCrossAccountAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCrossAccountAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteReadinessCheckRequest&, const Model::DeleteReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteRecoveryGroupRequest&, const Model::DeleteRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteResourceSetRequest&, const Model::DeleteResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceSetResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetArchitectureRecommendationsRequest&, const Model::GetArchitectureRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchitectureRecommendationsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetCellRequest&, const Model::GetCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetCellReadinessSummaryRequest&, const Model::GetCellReadinessSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCellReadinessSummaryResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetReadinessCheckRequest&, const Model::GetReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetReadinessCheckResourceStatusRequest&, const Model::GetReadinessCheckResourceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadinessCheckResourceStatusResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetReadinessCheckStatusRequest&, const Model::GetReadinessCheckStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadinessCheckStatusResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetRecoveryGroupRequest&, const Model::GetRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetRecoveryGroupReadinessSummaryRequest&, const Model::GetRecoveryGroupReadinessSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecoveryGroupReadinessSummaryResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetResourceSetRequest&, const Model::GetResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSetResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListCellsRequest&, const Model::ListCellsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCellsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListCrossAccountAuthorizationsRequest&, const Model::ListCrossAccountAuthorizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrossAccountAuthorizationsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListReadinessChecksRequest&, const Model::ListReadinessChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReadinessChecksResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListRecoveryGroupsRequest&, const Model::ListRecoveryGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryGroupsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListResourceSetsRequest&, const Model::ListResourceSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceSetsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListTagsForResourcesRequest&, const Model::ListTagsForResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourcesResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateCellRequest&, const Model::UpdateCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateReadinessCheckRequest&, const Model::UpdateReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateRecoveryGroupRequest&, const Model::UpdateRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateResourceSetRequest&, const Model::UpdateResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Route53RecoveryReadiness
} // namespace Aws
