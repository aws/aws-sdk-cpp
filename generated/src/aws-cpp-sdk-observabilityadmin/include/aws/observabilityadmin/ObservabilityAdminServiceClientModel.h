/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/observabilityadmin/ObservabilityAdminErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/observabilityadmin/ObservabilityAdminEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ObservabilityAdminClient header */
#include <aws/observabilityadmin/model/CreateCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListTagsForResourceResult.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesResult.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationResult.h>
#include <aws/observabilityadmin/model/UpdateCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesRequest.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ObservabilityAdminClient header */

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

  namespace ObservabilityAdmin
  {
    using ObservabilityAdminClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ObservabilityAdminEndpointProviderBase = Aws::ObservabilityAdmin::Endpoint::ObservabilityAdminEndpointProviderBase;
    using ObservabilityAdminEndpointProvider = Aws::ObservabilityAdmin::Endpoint::ObservabilityAdminEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ObservabilityAdminClient header */
      class CreateCentralizationRuleForOrganizationRequest;
      class CreateTelemetryRuleRequest;
      class CreateTelemetryRuleForOrganizationRequest;
      class DeleteCentralizationRuleForOrganizationRequest;
      class DeleteTelemetryRuleRequest;
      class DeleteTelemetryRuleForOrganizationRequest;
      class GetCentralizationRuleForOrganizationRequest;
      class GetTelemetryEvaluationStatusRequest;
      class GetTelemetryEvaluationStatusForOrganizationRequest;
      class GetTelemetryRuleRequest;
      class GetTelemetryRuleForOrganizationRequest;
      class ListCentralizationRulesForOrganizationRequest;
      class ListResourceTelemetryRequest;
      class ListResourceTelemetryForOrganizationRequest;
      class ListTagsForResourceRequest;
      class ListTelemetryRulesRequest;
      class ListTelemetryRulesForOrganizationRequest;
      class StartTelemetryEvaluationRequest;
      class StartTelemetryEvaluationForOrganizationRequest;
      class StopTelemetryEvaluationRequest;
      class StopTelemetryEvaluationForOrganizationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCentralizationRuleForOrganizationRequest;
      class UpdateTelemetryRuleRequest;
      class UpdateTelemetryRuleForOrganizationRequest;
      /* End of service model forward declarations required in ObservabilityAdminClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCentralizationRuleForOrganizationResult, ObservabilityAdminError> CreateCentralizationRuleForOrganizationOutcome;
      typedef Aws::Utils::Outcome<CreateTelemetryRuleResult, ObservabilityAdminError> CreateTelemetryRuleOutcome;
      typedef Aws::Utils::Outcome<CreateTelemetryRuleForOrganizationResult, ObservabilityAdminError> CreateTelemetryRuleForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> DeleteCentralizationRuleForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> DeleteTelemetryRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> DeleteTelemetryRuleForOrganizationOutcome;
      typedef Aws::Utils::Outcome<GetCentralizationRuleForOrganizationResult, ObservabilityAdminError> GetCentralizationRuleForOrganizationOutcome;
      typedef Aws::Utils::Outcome<GetTelemetryEvaluationStatusResult, ObservabilityAdminError> GetTelemetryEvaluationStatusOutcome;
      typedef Aws::Utils::Outcome<GetTelemetryEvaluationStatusForOrganizationResult, ObservabilityAdminError> GetTelemetryEvaluationStatusForOrganizationOutcome;
      typedef Aws::Utils::Outcome<GetTelemetryRuleResult, ObservabilityAdminError> GetTelemetryRuleOutcome;
      typedef Aws::Utils::Outcome<GetTelemetryRuleForOrganizationResult, ObservabilityAdminError> GetTelemetryRuleForOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListCentralizationRulesForOrganizationResult, ObservabilityAdminError> ListCentralizationRulesForOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListResourceTelemetryResult, ObservabilityAdminError> ListResourceTelemetryOutcome;
      typedef Aws::Utils::Outcome<ListResourceTelemetryForOrganizationResult, ObservabilityAdminError> ListResourceTelemetryForOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ObservabilityAdminError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTelemetryRulesResult, ObservabilityAdminError> ListTelemetryRulesOutcome;
      typedef Aws::Utils::Outcome<ListTelemetryRulesForOrganizationResult, ObservabilityAdminError> ListTelemetryRulesForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StartTelemetryEvaluationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StartTelemetryEvaluationForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StopTelemetryEvaluationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StopTelemetryEvaluationForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCentralizationRuleForOrganizationResult, ObservabilityAdminError> UpdateCentralizationRuleForOrganizationOutcome;
      typedef Aws::Utils::Outcome<UpdateTelemetryRuleResult, ObservabilityAdminError> UpdateTelemetryRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateTelemetryRuleForOrganizationResult, ObservabilityAdminError> UpdateTelemetryRuleForOrganizationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCentralizationRuleForOrganizationOutcome> CreateCentralizationRuleForOrganizationOutcomeCallable;
      typedef std::future<CreateTelemetryRuleOutcome> CreateTelemetryRuleOutcomeCallable;
      typedef std::future<CreateTelemetryRuleForOrganizationOutcome> CreateTelemetryRuleForOrganizationOutcomeCallable;
      typedef std::future<DeleteCentralizationRuleForOrganizationOutcome> DeleteCentralizationRuleForOrganizationOutcomeCallable;
      typedef std::future<DeleteTelemetryRuleOutcome> DeleteTelemetryRuleOutcomeCallable;
      typedef std::future<DeleteTelemetryRuleForOrganizationOutcome> DeleteTelemetryRuleForOrganizationOutcomeCallable;
      typedef std::future<GetCentralizationRuleForOrganizationOutcome> GetCentralizationRuleForOrganizationOutcomeCallable;
      typedef std::future<GetTelemetryEvaluationStatusOutcome> GetTelemetryEvaluationStatusOutcomeCallable;
      typedef std::future<GetTelemetryEvaluationStatusForOrganizationOutcome> GetTelemetryEvaluationStatusForOrganizationOutcomeCallable;
      typedef std::future<GetTelemetryRuleOutcome> GetTelemetryRuleOutcomeCallable;
      typedef std::future<GetTelemetryRuleForOrganizationOutcome> GetTelemetryRuleForOrganizationOutcomeCallable;
      typedef std::future<ListCentralizationRulesForOrganizationOutcome> ListCentralizationRulesForOrganizationOutcomeCallable;
      typedef std::future<ListResourceTelemetryOutcome> ListResourceTelemetryOutcomeCallable;
      typedef std::future<ListResourceTelemetryForOrganizationOutcome> ListResourceTelemetryForOrganizationOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTelemetryRulesOutcome> ListTelemetryRulesOutcomeCallable;
      typedef std::future<ListTelemetryRulesForOrganizationOutcome> ListTelemetryRulesForOrganizationOutcomeCallable;
      typedef std::future<StartTelemetryEvaluationOutcome> StartTelemetryEvaluationOutcomeCallable;
      typedef std::future<StartTelemetryEvaluationForOrganizationOutcome> StartTelemetryEvaluationForOrganizationOutcomeCallable;
      typedef std::future<StopTelemetryEvaluationOutcome> StopTelemetryEvaluationOutcomeCallable;
      typedef std::future<StopTelemetryEvaluationForOrganizationOutcome> StopTelemetryEvaluationForOrganizationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCentralizationRuleForOrganizationOutcome> UpdateCentralizationRuleForOrganizationOutcomeCallable;
      typedef std::future<UpdateTelemetryRuleOutcome> UpdateTelemetryRuleOutcomeCallable;
      typedef std::future<UpdateTelemetryRuleForOrganizationOutcome> UpdateTelemetryRuleForOrganizationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ObservabilityAdminClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateCentralizationRuleForOrganizationRequest&, const Model::CreateCentralizationRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCentralizationRuleForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateTelemetryRuleRequest&, const Model::CreateTelemetryRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTelemetryRuleResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateTelemetryRuleForOrganizationRequest&, const Model::CreateTelemetryRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTelemetryRuleForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteCentralizationRuleForOrganizationRequest&, const Model::DeleteCentralizationRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCentralizationRuleForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteTelemetryRuleRequest&, const Model::DeleteTelemetryRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTelemetryRuleResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteTelemetryRuleForOrganizationRequest&, const Model::DeleteTelemetryRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTelemetryRuleForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::GetCentralizationRuleForOrganizationRequest&, const Model::GetCentralizationRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCentralizationRuleForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryEvaluationStatusRequest&, const Model::GetTelemetryEvaluationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTelemetryEvaluationStatusResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryEvaluationStatusForOrganizationRequest&, const Model::GetTelemetryEvaluationStatusForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTelemetryEvaluationStatusForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryRuleRequest&, const Model::GetTelemetryRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTelemetryRuleResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryRuleForOrganizationRequest&, const Model::GetTelemetryRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTelemetryRuleForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListCentralizationRulesForOrganizationRequest&, const Model::ListCentralizationRulesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCentralizationRulesForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListResourceTelemetryRequest&, const Model::ListResourceTelemetryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceTelemetryResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListResourceTelemetryForOrganizationRequest&, const Model::ListResourceTelemetryForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceTelemetryForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListTelemetryRulesRequest&, const Model::ListTelemetryRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTelemetryRulesResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListTelemetryRulesForOrganizationRequest&, const Model::ListTelemetryRulesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTelemetryRulesForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StartTelemetryEvaluationRequest&, const Model::StartTelemetryEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTelemetryEvaluationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StartTelemetryEvaluationForOrganizationRequest&, const Model::StartTelemetryEvaluationForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTelemetryEvaluationForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StopTelemetryEvaluationRequest&, const Model::StopTelemetryEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTelemetryEvaluationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StopTelemetryEvaluationForOrganizationRequest&, const Model::StopTelemetryEvaluationForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTelemetryEvaluationForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::UpdateCentralizationRuleForOrganizationRequest&, const Model::UpdateCentralizationRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCentralizationRuleForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::UpdateTelemetryRuleRequest&, const Model::UpdateTelemetryRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTelemetryRuleResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::UpdateTelemetryRuleForOrganizationRequest&, const Model::UpdateTelemetryRuleForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTelemetryRuleForOrganizationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ObservabilityAdmin
} // namespace Aws
