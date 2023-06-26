/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AugmentedAIRuntimeClient header */
#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsResult.h>
#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/StopHumanLoopResult.h>
/* End of service model headers required in AugmentedAIRuntimeClient header */

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

  namespace AugmentedAIRuntime
  {
    using AugmentedAIRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AugmentedAIRuntimeEndpointProviderBase = Aws::AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeEndpointProviderBase;
    using AugmentedAIRuntimeEndpointProvider = Aws::AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AugmentedAIRuntimeClient header */
      class DeleteHumanLoopRequest;
      class DescribeHumanLoopRequest;
      class ListHumanLoopsRequest;
      class StartHumanLoopRequest;
      class StopHumanLoopRequest;
      /* End of service model forward declarations required in AugmentedAIRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteHumanLoopResult, AugmentedAIRuntimeError> DeleteHumanLoopOutcome;
      typedef Aws::Utils::Outcome<DescribeHumanLoopResult, AugmentedAIRuntimeError> DescribeHumanLoopOutcome;
      typedef Aws::Utils::Outcome<ListHumanLoopsResult, AugmentedAIRuntimeError> ListHumanLoopsOutcome;
      typedef Aws::Utils::Outcome<StartHumanLoopResult, AugmentedAIRuntimeError> StartHumanLoopOutcome;
      typedef Aws::Utils::Outcome<StopHumanLoopResult, AugmentedAIRuntimeError> StopHumanLoopOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteHumanLoopOutcome> DeleteHumanLoopOutcomeCallable;
      typedef std::future<DescribeHumanLoopOutcome> DescribeHumanLoopOutcomeCallable;
      typedef std::future<ListHumanLoopsOutcome> ListHumanLoopsOutcomeCallable;
      typedef std::future<StartHumanLoopOutcome> StartHumanLoopOutcomeCallable;
      typedef std::future<StopHumanLoopOutcome> StopHumanLoopOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AugmentedAIRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::DeleteHumanLoopRequest&, const Model::DeleteHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHumanLoopResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::DescribeHumanLoopRequest&, const Model::DescribeHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHumanLoopResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::ListHumanLoopsRequest&, const Model::ListHumanLoopsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHumanLoopsResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::StartHumanLoopRequest&, const Model::StartHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartHumanLoopResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::StopHumanLoopRequest&, const Model::StopHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopHumanLoopResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AugmentedAIRuntime
} // namespace Aws
