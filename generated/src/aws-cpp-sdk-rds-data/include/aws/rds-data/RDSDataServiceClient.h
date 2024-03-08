/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rds-data/RDSDataServiceServiceClientModel.h>

namespace Aws
{
namespace RDSDataService
{
  /**
   * <p><fullname>RDS Data API</fullname> <p>Amazon RDS provides an HTTP endpoint to
   * run SQL statements on an Amazon Aurora DB cluster. To run these statements, you
   * use the RDS Data API (Data API).</p> <p>Data API is available with the following
   * types of Aurora databases:</p> <ul> <li> <p>Aurora PostgreSQL - Serverless v2,
   * Serverless v1, and provisioned</p> </li> <li> <p>Aurora MySQL - Serverless v1
   * only</p> </li> </ul> <p>For more information about the Data API, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
   * RDS Data API</a> in the <i>Amazon Aurora User Guide</i>.</p></p>
   */
  class AWS_RDSDATASERVICE_API RDSDataServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RDSDataServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RDSDataServiceClientConfiguration ClientConfigurationType;
      typedef RDSDataServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSDataServiceClient(const Aws::RDSDataService::RDSDataServiceClientConfiguration& clientConfiguration = Aws::RDSDataService::RDSDataServiceClientConfiguration(),
                             std::shared_ptr<RDSDataServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSDataServiceClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<RDSDataServiceEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::RDSDataService::RDSDataServiceClientConfiguration& clientConfiguration = Aws::RDSDataService::RDSDataServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSDataServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<RDSDataServiceEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::RDSDataService::RDSDataServiceClientConfiguration& clientConfiguration = Aws::RDSDataService::RDSDataServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSDataServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSDataServiceClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSDataServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RDSDataServiceClient();

        /**
         * <p>Runs a batch SQL statement over an array of data.</p> <p>You can run bulk
         * update and insert operations for multiple records using a DML statement with
         * different parameter sets. Bulk operations can provide a significant performance
         * improvement over individual insert and update operations.</p>  <p>If a
         * call isn't part of a transaction because it doesn't include the
         * <code>transactionID</code> parameter, changes that result from the call are
         * committed automatically.</p> <p>There isn't a fixed upper limit on the number of
         * parameter sets. However, the maximum size of the HTTP request submitted through
         * the Data API is 4 MiB. If the request exceeds this limit, the Data API returns
         * an error and doesn't process the request. This 4-MiB limit includes the size of
         * the HTTP headers and the JSON notation in the request. Thus, the number of
         * parameter sets that you can include depends on a combination of factors, such as
         * the size of the SQL statement and the size of each parameter set.</p> <p>The
         * response size limit is 1 MiB. If the call returns more than 1 MiB of response
         * data, the call is terminated.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchExecuteStatementOutcome BatchExecuteStatement(const Model::BatchExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for BatchExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchExecuteStatementRequestT = Model::BatchExecuteStatementRequest>
        Model::BatchExecuteStatementOutcomeCallable BatchExecuteStatementCallable(const BatchExecuteStatementRequestT& request) const
        {
            return SubmitCallable(&RDSDataServiceClient::BatchExecuteStatement, request);
        }

        /**
         * An Async wrapper for BatchExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchExecuteStatementRequestT = Model::BatchExecuteStatementRequest>
        void BatchExecuteStatementAsync(const BatchExecuteStatementRequestT& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSDataServiceClient::BatchExecuteStatement, request, handler, context);
        }

        /**
         * <p>Starts a SQL transaction.</p>  <p>A transaction can run for a maximum
         * of 24 hours. A transaction is terminated and rolled back automatically after 24
         * hours.</p> <p>A transaction times out if no calls use its transaction ID in
         * three minutes. If a transaction times out before it's committed, it's rolled
         * back automatically.</p> <p>DDL statements inside a transaction cause an implicit
         * commit. We recommend that you run each DDL statement in a separate
         * <code>ExecuteStatement</code> call with <code>continueAfterTimeout</code>
         * enabled.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BeginTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::BeginTransactionOutcome BeginTransaction(const Model::BeginTransactionRequest& request) const;

        /**
         * A Callable wrapper for BeginTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BeginTransactionRequestT = Model::BeginTransactionRequest>
        Model::BeginTransactionOutcomeCallable BeginTransactionCallable(const BeginTransactionRequestT& request) const
        {
            return SubmitCallable(&RDSDataServiceClient::BeginTransaction, request);
        }

        /**
         * An Async wrapper for BeginTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BeginTransactionRequestT = Model::BeginTransactionRequest>
        void BeginTransactionAsync(const BeginTransactionRequestT& request, const BeginTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSDataServiceClient::BeginTransaction, request, handler, context);
        }

        /**
         * <p>Ends a SQL transaction started with the <code>BeginTransaction</code>
         * operation and commits the changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/CommitTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::CommitTransactionOutcome CommitTransaction(const Model::CommitTransactionRequest& request) const;

        /**
         * A Callable wrapper for CommitTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CommitTransactionRequestT = Model::CommitTransactionRequest>
        Model::CommitTransactionOutcomeCallable CommitTransactionCallable(const CommitTransactionRequestT& request) const
        {
            return SubmitCallable(&RDSDataServiceClient::CommitTransaction, request);
        }

        /**
         * An Async wrapper for CommitTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CommitTransactionRequestT = Model::CommitTransactionRequest>
        void CommitTransactionAsync(const CommitTransactionRequestT& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSDataServiceClient::CommitTransaction, request, handler, context);
        }

        /**
         * <p>Runs a SQL statement against a database.</p>  <p>If a call isn't part
         * of a transaction because it doesn't include the <code>transactionID</code>
         * parameter, changes that result from the call are committed automatically.</p>
         * <p>If the binary response data from the database is more than 1 MB, the call is
         * terminated.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteStatementOutcome ExecuteStatement(const Model::ExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for ExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteStatementRequestT = Model::ExecuteStatementRequest>
        Model::ExecuteStatementOutcomeCallable ExecuteStatementCallable(const ExecuteStatementRequestT& request) const
        {
            return SubmitCallable(&RDSDataServiceClient::ExecuteStatement, request);
        }

        /**
         * An Async wrapper for ExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteStatementRequestT = Model::ExecuteStatementRequest>
        void ExecuteStatementAsync(const ExecuteStatementRequestT& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSDataServiceClient::ExecuteStatement, request, handler, context);
        }

        /**
         * <p>Performs a rollback of a transaction. Rolling back a transaction cancels its
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/RollbackTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::RollbackTransactionOutcome RollbackTransaction(const Model::RollbackTransactionRequest& request) const;

        /**
         * A Callable wrapper for RollbackTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RollbackTransactionRequestT = Model::RollbackTransactionRequest>
        Model::RollbackTransactionOutcomeCallable RollbackTransactionCallable(const RollbackTransactionRequestT& request) const
        {
            return SubmitCallable(&RDSDataServiceClient::RollbackTransaction, request);
        }

        /**
         * An Async wrapper for RollbackTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RollbackTransactionRequestT = Model::RollbackTransactionRequest>
        void RollbackTransactionAsync(const RollbackTransactionRequestT& request, const RollbackTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RDSDataServiceClient::RollbackTransaction, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RDSDataServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RDSDataServiceClient>;
      void init(const RDSDataServiceClientConfiguration& clientConfiguration);

      RDSDataServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RDSDataServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace RDSDataService
} // namespace Aws
