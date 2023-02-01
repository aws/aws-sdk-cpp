/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/workmailmessageflow/WorkMailMessageFlowErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WorkMailMessageFlowClient header */
#include <aws/workmailmessageflow/model/GetRawMessageContentResult.h>
#include <aws/workmailmessageflow/model/PutRawMessageContentResult.h>
/* End of service model headers required in WorkMailMessageFlowClient header */

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

  namespace WorkMailMessageFlow
  {
    using WorkMailMessageFlowClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WorkMailMessageFlowEndpointProviderBase = Aws::WorkMailMessageFlow::Endpoint::WorkMailMessageFlowEndpointProviderBase;
    using WorkMailMessageFlowEndpointProvider = Aws::WorkMailMessageFlow::Endpoint::WorkMailMessageFlowEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WorkMailMessageFlowClient header */
      class GetRawMessageContentRequest;
      class PutRawMessageContentRequest;
      /* End of service model forward declarations required in WorkMailMessageFlowClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetRawMessageContentResult, WorkMailMessageFlowError> GetRawMessageContentOutcome;
      typedef Aws::Utils::Outcome<PutRawMessageContentResult, WorkMailMessageFlowError> PutRawMessageContentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetRawMessageContentOutcome> GetRawMessageContentOutcomeCallable;
      typedef std::future<PutRawMessageContentOutcome> PutRawMessageContentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WorkMailMessageFlowClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WorkMailMessageFlowClient*, const Model::GetRawMessageContentRequest&, Model::GetRawMessageContentOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRawMessageContentResponseReceivedHandler;
    typedef std::function<void(const WorkMailMessageFlowClient*, const Model::PutRawMessageContentRequest&, const Model::PutRawMessageContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRawMessageContentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WorkMailMessageFlow
} // namespace Aws
