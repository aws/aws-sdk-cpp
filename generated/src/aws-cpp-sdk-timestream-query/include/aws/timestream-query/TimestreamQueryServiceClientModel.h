/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/timestream-query/TimestreamQueryErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/timestream-query/TimestreamQueryEndpointProvider.h>
#include <aws/core/utils/ConcurrentCache.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TimestreamQueryClient header */
#include <aws/timestream-query/model/CancelQueryResult.h>
#include <aws/timestream-query/model/CreateScheduledQueryResult.h>
#include <aws/timestream-query/model/DescribeEndpointsResult.h>
#include <aws/timestream-query/model/DescribeScheduledQueryResult.h>
#include <aws/timestream-query/model/ListScheduledQueriesResult.h>
#include <aws/timestream-query/model/ListTagsForResourceResult.h>
#include <aws/timestream-query/model/PrepareQueryResult.h>
#include <aws/timestream-query/model/QueryResult.h>
#include <aws/timestream-query/model/TagResourceResult.h>
#include <aws/timestream-query/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TimestreamQueryClient header */

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

  namespace TimestreamQuery
  {
    using TimestreamQueryClientConfiguration = Aws::Client::GenericClientConfiguration<true>;
    using TimestreamQueryEndpointProviderBase = Aws::TimestreamQuery::Endpoint::TimestreamQueryEndpointProviderBase;
    using TimestreamQueryEndpointProvider = Aws::TimestreamQuery::Endpoint::TimestreamQueryEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TimestreamQueryClient header */
      class CancelQueryRequest;
      class CreateScheduledQueryRequest;
      class DeleteScheduledQueryRequest;
      class DescribeEndpointsRequest;
      class DescribeScheduledQueryRequest;
      class ExecuteScheduledQueryRequest;
      class ListScheduledQueriesRequest;
      class ListTagsForResourceRequest;
      class PrepareQueryRequest;
      class QueryRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateScheduledQueryRequest;
      /* End of service model forward declarations required in TimestreamQueryClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelQueryResult, TimestreamQueryError> CancelQueryOutcome;
      typedef Aws::Utils::Outcome<CreateScheduledQueryResult, TimestreamQueryError> CreateScheduledQueryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamQueryError> DeleteScheduledQueryOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointsResult, TimestreamQueryError> DescribeEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduledQueryResult, TimestreamQueryError> DescribeScheduledQueryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamQueryError> ExecuteScheduledQueryOutcome;
      typedef Aws::Utils::Outcome<ListScheduledQueriesResult, TimestreamQueryError> ListScheduledQueriesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, TimestreamQueryError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PrepareQueryResult, TimestreamQueryError> PrepareQueryOutcome;
      typedef Aws::Utils::Outcome<QueryResult, TimestreamQueryError> QueryOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, TimestreamQueryError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, TimestreamQueryError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamQueryError> UpdateScheduledQueryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelQueryOutcome> CancelQueryOutcomeCallable;
      typedef std::future<CreateScheduledQueryOutcome> CreateScheduledQueryOutcomeCallable;
      typedef std::future<DeleteScheduledQueryOutcome> DeleteScheduledQueryOutcomeCallable;
      typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
      typedef std::future<DescribeScheduledQueryOutcome> DescribeScheduledQueryOutcomeCallable;
      typedef std::future<ExecuteScheduledQueryOutcome> ExecuteScheduledQueryOutcomeCallable;
      typedef std::future<ListScheduledQueriesOutcome> ListScheduledQueriesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PrepareQueryOutcome> PrepareQueryOutcomeCallable;
      typedef std::future<QueryOutcome> QueryOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateScheduledQueryOutcome> UpdateScheduledQueryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TimestreamQueryClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TimestreamQueryClient*, const Model::CancelQueryRequest&, const Model::CancelQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::CreateScheduledQueryRequest&, const Model::CreateScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::DeleteScheduledQueryRequest&, const Model::DeleteScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::DescribeScheduledQueryRequest&, const Model::DescribeScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::ExecuteScheduledQueryRequest&, const Model::ExecuteScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::ListScheduledQueriesRequest&, const Model::ListScheduledQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScheduledQueriesResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::PrepareQueryRequest&, const Model::PrepareQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PrepareQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::UpdateScheduledQueryRequest&, const Model::UpdateScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScheduledQueryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace TimestreamQuery
} // namespace Aws
