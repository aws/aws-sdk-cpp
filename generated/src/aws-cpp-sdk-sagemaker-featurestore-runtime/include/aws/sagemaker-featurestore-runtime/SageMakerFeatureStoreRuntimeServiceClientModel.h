/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SageMakerFeatureStoreRuntimeClient header */
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordResult.h>
#include <aws/sagemaker-featurestore-runtime/model/GetRecordResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SageMakerFeatureStoreRuntimeClient header */

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

  namespace SageMakerFeatureStoreRuntime
  {
    using SageMakerFeatureStoreRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SageMakerFeatureStoreRuntimeEndpointProviderBase = Aws::SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeEndpointProviderBase;
    using SageMakerFeatureStoreRuntimeEndpointProvider = Aws::SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SageMakerFeatureStoreRuntimeClient header */
      class BatchGetRecordRequest;
      class DeleteRecordRequest;
      class GetRecordRequest;
      class PutRecordRequest;
      /* End of service model forward declarations required in SageMakerFeatureStoreRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetRecordResult, SageMakerFeatureStoreRuntimeError> BatchGetRecordOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerFeatureStoreRuntimeError> DeleteRecordOutcome;
      typedef Aws::Utils::Outcome<GetRecordResult, SageMakerFeatureStoreRuntimeError> GetRecordOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerFeatureStoreRuntimeError> PutRecordOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetRecordOutcome> BatchGetRecordOutcomeCallable;
      typedef std::future<DeleteRecordOutcome> DeleteRecordOutcomeCallable;
      typedef std::future<GetRecordOutcome> GetRecordOutcomeCallable;
      typedef std::future<PutRecordOutcome> PutRecordOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SageMakerFeatureStoreRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::BatchGetRecordRequest&, const Model::BatchGetRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetRecordResponseReceivedHandler;
    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::DeleteRecordRequest&, const Model::DeleteRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecordResponseReceivedHandler;
    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::GetRecordRequest&, const Model::GetRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecordResponseReceivedHandler;
    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::PutRecordRequest&, const Model::PutRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecordResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
