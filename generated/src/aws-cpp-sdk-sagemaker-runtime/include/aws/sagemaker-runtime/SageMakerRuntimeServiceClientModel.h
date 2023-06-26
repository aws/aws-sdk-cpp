/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sagemaker-runtime/SageMakerRuntimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SageMakerRuntimeClient header */
#include <aws/sagemaker-runtime/model/InvokeEndpointResult.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointAsyncResult.h>
/* End of service model headers required in SageMakerRuntimeClient header */

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

  namespace SageMakerRuntime
  {
    using SageMakerRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SageMakerRuntimeEndpointProviderBase = Aws::SageMakerRuntime::Endpoint::SageMakerRuntimeEndpointProviderBase;
    using SageMakerRuntimeEndpointProvider = Aws::SageMakerRuntime::Endpoint::SageMakerRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SageMakerRuntimeClient header */
      class InvokeEndpointRequest;
      class InvokeEndpointAsyncRequest;
      /* End of service model forward declarations required in SageMakerRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<InvokeEndpointResult, SageMakerRuntimeError> InvokeEndpointOutcome;
      typedef Aws::Utils::Outcome<InvokeEndpointAsyncResult, SageMakerRuntimeError> InvokeEndpointAsyncOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<InvokeEndpointOutcome> InvokeEndpointOutcomeCallable;
      typedef std::future<InvokeEndpointAsyncOutcome> InvokeEndpointAsyncOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SageMakerRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SageMakerRuntimeClient*, const Model::InvokeEndpointRequest&, Model::InvokeEndpointOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerRuntimeClient*, const Model::InvokeEndpointAsyncRequest&, const Model::InvokeEndpointAsyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeEndpointAsyncResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SageMakerRuntime
} // namespace Aws
