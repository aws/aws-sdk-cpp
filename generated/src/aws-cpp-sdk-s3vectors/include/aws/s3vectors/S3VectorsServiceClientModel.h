/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/s3vectors/S3VectorsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/s3vectors/S3VectorsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in S3VectorsClient header */
#include <aws/s3vectors/model/CreateIndexResult.h>
#include <aws/s3vectors/model/CreateVectorBucketResult.h>
#include <aws/s3vectors/model/DeleteIndexResult.h>
#include <aws/s3vectors/model/DeleteVectorBucketResult.h>
#include <aws/s3vectors/model/DeleteVectorBucketPolicyResult.h>
#include <aws/s3vectors/model/DeleteVectorsResult.h>
#include <aws/s3vectors/model/GetIndexResult.h>
#include <aws/s3vectors/model/GetVectorBucketResult.h>
#include <aws/s3vectors/model/GetVectorBucketPolicyResult.h>
#include <aws/s3vectors/model/GetVectorsResult.h>
#include <aws/s3vectors/model/ListIndexesResult.h>
#include <aws/s3vectors/model/ListVectorBucketsResult.h>
#include <aws/s3vectors/model/ListVectorsResult.h>
#include <aws/s3vectors/model/PutVectorBucketPolicyResult.h>
#include <aws/s3vectors/model/PutVectorsResult.h>
#include <aws/s3vectors/model/QueryVectorsResult.h>
#include <aws/s3vectors/model/GetVectorBucketRequest.h>
#include <aws/s3vectors/model/DeleteVectorBucketRequest.h>
#include <aws/s3vectors/model/DeleteVectorBucketPolicyRequest.h>
#include <aws/s3vectors/model/DeleteIndexRequest.h>
#include <aws/s3vectors/model/ListIndexesRequest.h>
#include <aws/s3vectors/model/ListVectorBucketsRequest.h>
#include <aws/s3vectors/model/ListVectorsRequest.h>
#include <aws/s3vectors/model/GetVectorBucketPolicyRequest.h>
#include <aws/s3vectors/model/GetIndexRequest.h>
/* End of service model headers required in S3VectorsClient header */

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

  namespace S3Vectors
  {
    using S3VectorsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using S3VectorsEndpointProviderBase = Aws::S3Vectors::Endpoint::S3VectorsEndpointProviderBase;
    using S3VectorsEndpointProvider = Aws::S3Vectors::Endpoint::S3VectorsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in S3VectorsClient header */
      class CreateIndexRequest;
      class CreateVectorBucketRequest;
      class DeleteIndexRequest;
      class DeleteVectorBucketRequest;
      class DeleteVectorBucketPolicyRequest;
      class DeleteVectorsRequest;
      class GetIndexRequest;
      class GetVectorBucketRequest;
      class GetVectorBucketPolicyRequest;
      class GetVectorsRequest;
      class ListIndexesRequest;
      class ListVectorBucketsRequest;
      class ListVectorsRequest;
      class PutVectorBucketPolicyRequest;
      class PutVectorsRequest;
      class QueryVectorsRequest;
      /* End of service model forward declarations required in S3VectorsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateIndexResult, S3VectorsError> CreateIndexOutcome;
      typedef Aws::Utils::Outcome<CreateVectorBucketResult, S3VectorsError> CreateVectorBucketOutcome;
      typedef Aws::Utils::Outcome<DeleteIndexResult, S3VectorsError> DeleteIndexOutcome;
      typedef Aws::Utils::Outcome<DeleteVectorBucketResult, S3VectorsError> DeleteVectorBucketOutcome;
      typedef Aws::Utils::Outcome<DeleteVectorBucketPolicyResult, S3VectorsError> DeleteVectorBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteVectorsResult, S3VectorsError> DeleteVectorsOutcome;
      typedef Aws::Utils::Outcome<GetIndexResult, S3VectorsError> GetIndexOutcome;
      typedef Aws::Utils::Outcome<GetVectorBucketResult, S3VectorsError> GetVectorBucketOutcome;
      typedef Aws::Utils::Outcome<GetVectorBucketPolicyResult, S3VectorsError> GetVectorBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<GetVectorsResult, S3VectorsError> GetVectorsOutcome;
      typedef Aws::Utils::Outcome<ListIndexesResult, S3VectorsError> ListIndexesOutcome;
      typedef Aws::Utils::Outcome<ListVectorBucketsResult, S3VectorsError> ListVectorBucketsOutcome;
      typedef Aws::Utils::Outcome<ListVectorsResult, S3VectorsError> ListVectorsOutcome;
      typedef Aws::Utils::Outcome<PutVectorBucketPolicyResult, S3VectorsError> PutVectorBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<PutVectorsResult, S3VectorsError> PutVectorsOutcome;
      typedef Aws::Utils::Outcome<QueryVectorsResult, S3VectorsError> QueryVectorsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
      typedef std::future<CreateVectorBucketOutcome> CreateVectorBucketOutcomeCallable;
      typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
      typedef std::future<DeleteVectorBucketOutcome> DeleteVectorBucketOutcomeCallable;
      typedef std::future<DeleteVectorBucketPolicyOutcome> DeleteVectorBucketPolicyOutcomeCallable;
      typedef std::future<DeleteVectorsOutcome> DeleteVectorsOutcomeCallable;
      typedef std::future<GetIndexOutcome> GetIndexOutcomeCallable;
      typedef std::future<GetVectorBucketOutcome> GetVectorBucketOutcomeCallable;
      typedef std::future<GetVectorBucketPolicyOutcome> GetVectorBucketPolicyOutcomeCallable;
      typedef std::future<GetVectorsOutcome> GetVectorsOutcomeCallable;
      typedef std::future<ListIndexesOutcome> ListIndexesOutcomeCallable;
      typedef std::future<ListVectorBucketsOutcome> ListVectorBucketsOutcomeCallable;
      typedef std::future<ListVectorsOutcome> ListVectorsOutcomeCallable;
      typedef std::future<PutVectorBucketPolicyOutcome> PutVectorBucketPolicyOutcomeCallable;
      typedef std::future<PutVectorsOutcome> PutVectorsOutcomeCallable;
      typedef std::future<QueryVectorsOutcome> QueryVectorsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class S3VectorsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const S3VectorsClient*, const Model::CreateIndexRequest&, const Model::CreateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIndexResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::CreateVectorBucketRequest&, const Model::CreateVectorBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVectorBucketResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::DeleteIndexRequest&, const Model::DeleteIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIndexResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::DeleteVectorBucketRequest&, const Model::DeleteVectorBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVectorBucketResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::DeleteVectorBucketPolicyRequest&, const Model::DeleteVectorBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVectorBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::DeleteVectorsRequest&, const Model::DeleteVectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVectorsResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::GetIndexRequest&, const Model::GetIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIndexResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::GetVectorBucketRequest&, const Model::GetVectorBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVectorBucketResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::GetVectorBucketPolicyRequest&, const Model::GetVectorBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVectorBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::GetVectorsRequest&, const Model::GetVectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVectorsResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::ListIndexesRequest&, const Model::ListIndexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndexesResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::ListVectorBucketsRequest&, const Model::ListVectorBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVectorBucketsResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::ListVectorsRequest&, const Model::ListVectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVectorsResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::PutVectorBucketPolicyRequest&, const Model::PutVectorBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVectorBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::PutVectorsRequest&, const Model::PutVectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVectorsResponseReceivedHandler;
    typedef std::function<void(const S3VectorsClient*, const Model::QueryVectorsRequest&, const Model::QueryVectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryVectorsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace S3Vectors
} // namespace Aws
