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
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationResult.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationRequest.h>
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
      class GetTelemetryEvaluationStatusRequest;
      class GetTelemetryEvaluationStatusForOrganizationRequest;
      class ListResourceTelemetryRequest;
      class ListResourceTelemetryForOrganizationRequest;
      class StartTelemetryEvaluationRequest;
      class StartTelemetryEvaluationForOrganizationRequest;
      class StopTelemetryEvaluationRequest;
      class StopTelemetryEvaluationForOrganizationRequest;
      /* End of service model forward declarations required in ObservabilityAdminClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetTelemetryEvaluationStatusResult, ObservabilityAdminError> GetTelemetryEvaluationStatusOutcome;
      typedef Aws::Utils::Outcome<GetTelemetryEvaluationStatusForOrganizationResult, ObservabilityAdminError> GetTelemetryEvaluationStatusForOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListResourceTelemetryResult, ObservabilityAdminError> ListResourceTelemetryOutcome;
      typedef Aws::Utils::Outcome<ListResourceTelemetryForOrganizationResult, ObservabilityAdminError> ListResourceTelemetryForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StartTelemetryEvaluationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StartTelemetryEvaluationForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StopTelemetryEvaluationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StopTelemetryEvaluationForOrganizationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetTelemetryEvaluationStatusOutcome> GetTelemetryEvaluationStatusOutcomeCallable;
      typedef std::future<GetTelemetryEvaluationStatusForOrganizationOutcome> GetTelemetryEvaluationStatusForOrganizationOutcomeCallable;
      typedef std::future<ListResourceTelemetryOutcome> ListResourceTelemetryOutcomeCallable;
      typedef std::future<ListResourceTelemetryForOrganizationOutcome> ListResourceTelemetryForOrganizationOutcomeCallable;
      typedef std::future<StartTelemetryEvaluationOutcome> StartTelemetryEvaluationOutcomeCallable;
      typedef std::future<StartTelemetryEvaluationForOrganizationOutcome> StartTelemetryEvaluationForOrganizationOutcomeCallable;
      typedef std::future<StopTelemetryEvaluationOutcome> StopTelemetryEvaluationOutcomeCallable;
      typedef std::future<StopTelemetryEvaluationForOrganizationOutcome> StopTelemetryEvaluationForOrganizationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ObservabilityAdminClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryEvaluationStatusRequest&, const Model::GetTelemetryEvaluationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTelemetryEvaluationStatusResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryEvaluationStatusForOrganizationRequest&, const Model::GetTelemetryEvaluationStatusForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTelemetryEvaluationStatusForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListResourceTelemetryRequest&, const Model::ListResourceTelemetryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceTelemetryResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::ListResourceTelemetryForOrganizationRequest&, const Model::ListResourceTelemetryForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceTelemetryForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StartTelemetryEvaluationRequest&, const Model::StartTelemetryEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTelemetryEvaluationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StartTelemetryEvaluationForOrganizationRequest&, const Model::StartTelemetryEvaluationForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTelemetryEvaluationForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StopTelemetryEvaluationRequest&, const Model::StopTelemetryEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTelemetryEvaluationResponseReceivedHandler;
    typedef std::function<void(const ObservabilityAdminClient*, const Model::StopTelemetryEvaluationForOrganizationRequest&, const Model::StopTelemetryEvaluationForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTelemetryEvaluationForOrganizationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ObservabilityAdmin
} // namespace Aws
