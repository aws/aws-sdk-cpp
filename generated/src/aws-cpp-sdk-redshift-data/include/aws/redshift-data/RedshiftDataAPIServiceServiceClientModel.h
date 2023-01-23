/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/redshift-data/RedshiftDataAPIServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/redshift-data/RedshiftDataAPIServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RedshiftDataAPIServiceClient header */
#include <aws/redshift-data/model/BatchExecuteStatementResult.h>
#include <aws/redshift-data/model/CancelStatementResult.h>
#include <aws/redshift-data/model/DescribeStatementResult.h>
#include <aws/redshift-data/model/DescribeTableResult.h>
#include <aws/redshift-data/model/ExecuteStatementResult.h>
#include <aws/redshift-data/model/GetStatementResultResult.h>
#include <aws/redshift-data/model/ListDatabasesResult.h>
#include <aws/redshift-data/model/ListSchemasResult.h>
#include <aws/redshift-data/model/ListStatementsResult.h>
#include <aws/redshift-data/model/ListTablesResult.h>
/* End of service model headers required in RedshiftDataAPIServiceClient header */

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

  namespace RedshiftDataAPIService
  {
    using RedshiftDataAPIServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RedshiftDataAPIServiceEndpointProviderBase = Aws::RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceEndpointProviderBase;
    using RedshiftDataAPIServiceEndpointProvider = Aws::RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RedshiftDataAPIServiceClient header */
      class BatchExecuteStatementRequest;
      class CancelStatementRequest;
      class DescribeStatementRequest;
      class DescribeTableRequest;
      class ExecuteStatementRequest;
      class GetStatementResultRequest;
      class ListDatabasesRequest;
      class ListSchemasRequest;
      class ListStatementsRequest;
      class ListTablesRequest;
      /* End of service model forward declarations required in RedshiftDataAPIServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchExecuteStatementResult, RedshiftDataAPIServiceError> BatchExecuteStatementOutcome;
      typedef Aws::Utils::Outcome<CancelStatementResult, RedshiftDataAPIServiceError> CancelStatementOutcome;
      typedef Aws::Utils::Outcome<DescribeStatementResult, RedshiftDataAPIServiceError> DescribeStatementOutcome;
      typedef Aws::Utils::Outcome<DescribeTableResult, RedshiftDataAPIServiceError> DescribeTableOutcome;
      typedef Aws::Utils::Outcome<ExecuteStatementResult, RedshiftDataAPIServiceError> ExecuteStatementOutcome;
      typedef Aws::Utils::Outcome<GetStatementResultResult, RedshiftDataAPIServiceError> GetStatementResultOutcome;
      typedef Aws::Utils::Outcome<ListDatabasesResult, RedshiftDataAPIServiceError> ListDatabasesOutcome;
      typedef Aws::Utils::Outcome<ListSchemasResult, RedshiftDataAPIServiceError> ListSchemasOutcome;
      typedef Aws::Utils::Outcome<ListStatementsResult, RedshiftDataAPIServiceError> ListStatementsOutcome;
      typedef Aws::Utils::Outcome<ListTablesResult, RedshiftDataAPIServiceError> ListTablesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchExecuteStatementOutcome> BatchExecuteStatementOutcomeCallable;
      typedef std::future<CancelStatementOutcome> CancelStatementOutcomeCallable;
      typedef std::future<DescribeStatementOutcome> DescribeStatementOutcomeCallable;
      typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
      typedef std::future<ExecuteStatementOutcome> ExecuteStatementOutcomeCallable;
      typedef std::future<GetStatementResultOutcome> GetStatementResultOutcomeCallable;
      typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
      typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
      typedef std::future<ListStatementsOutcome> ListStatementsOutcomeCallable;
      typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RedshiftDataAPIServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::BatchExecuteStatementRequest&, const Model::BatchExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::CancelStatementRequest&, const Model::CancelStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelStatementResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::DescribeStatementRequest&, const Model::DescribeStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStatementResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ExecuteStatementRequest&, const Model::ExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::GetStatementResultRequest&, const Model::GetStatementResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStatementResultResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListDatabasesRequest&, const Model::ListDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatabasesResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListStatementsRequest&, const Model::ListStatementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStatementsResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RedshiftDataAPIService
} // namespace Aws
