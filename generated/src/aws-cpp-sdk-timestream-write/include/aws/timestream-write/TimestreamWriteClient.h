/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-write/TimestreamWriteServiceClientModel.h>

namespace Aws
{
namespace TimestreamWrite
{
  /**
   * <fullname>Amazon Timestream Write</fullname> <p>Amazon Timestream is a fast,
   * scalable, fully managed time-series database service that makes it easy to store
   * and analyze trillions of time-series data points per day. With Timestream, you
   * can easily store and analyze IoT sensor data to derive insights from your IoT
   * applications. You can analyze industrial telemetry to streamline equipment
   * management and maintenance. You can also store and analyze log data and metrics
   * to improve the performance and availability of your applications. </p>
   * <p>Timestream is built from the ground up to effectively ingest, process, and
   * store time-series data. It organizes data to optimize query processing. It
   * automatically scales based on the volume of data ingested and on the query
   * volume to ensure you receive optimal performance while inserting and querying
   * data. As your data grows over time, Timestream’s adaptive query processing
   * engine spans across storage tiers to provide fast analysis while reducing
   * costs.</p>
   */
  class AWS_TIMESTREAMWRITE_API TimestreamWriteClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TimestreamWriteClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TimestreamWriteClientConfiguration ClientConfigurationType;
      typedef TimestreamWriteEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration = Aws::TimestreamWrite::TimestreamWriteClientConfiguration(),
                              std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration = Aws::TimestreamWrite::TimestreamWriteClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamWriteClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration = Aws::TimestreamWrite::TimestreamWriteClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamWriteClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TimestreamWriteClient();

        /**
         * <p>Creates a new Timestream batch load task. A batch load task processes data
         * from a CSV source in an S3 location and writes to a Timestream table. A mapping
         * from source to target is defined in a batch load task. Errors and events are
         * written to a report at an S3 location. For the report, if the KMS key is not
         * specified, the report will be encrypted with an S3 managed key when
         * <code>SSE_S3</code> is the option. Otherwise an error is thrown. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed keys</a>. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. For details, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.create-batch-load.html">code
         * sample</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateBatchLoadTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchLoadTaskOutcome CreateBatchLoadTask(const Model::CreateBatchLoadTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchLoadTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBatchLoadTaskRequestT = Model::CreateBatchLoadTaskRequest>
        Model::CreateBatchLoadTaskOutcomeCallable CreateBatchLoadTaskCallable(const CreateBatchLoadTaskRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::CreateBatchLoadTask, request);
        }

        /**
         * An Async wrapper for CreateBatchLoadTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBatchLoadTaskRequestT = Model::CreateBatchLoadTaskRequest>
        void CreateBatchLoadTaskAsync(const CreateBatchLoadTaskRequestT& request, const CreateBatchLoadTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::CreateBatchLoadTask, request, handler, context);
        }

        /**
         * <p>Creates a new Timestream database. If the KMS key is not specified, the
         * database will be encrypted with a Timestream managed KMS key located in your
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed keys</a>. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. For details, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.create-db.html">code
         * sample</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatabaseRequestT = Model::CreateDatabaseRequest>
        Model::CreateDatabaseOutcomeCallable CreateDatabaseCallable(const CreateDatabaseRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::CreateDatabase, request);
        }

        /**
         * An Async wrapper for CreateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatabaseRequestT = Model::CreateDatabaseRequest>
        void CreateDatabaseAsync(const CreateDatabaseRequestT& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::CreateDatabase, request, handler, context);
        }

        /**
         * <p>Adds a new table to an existing database in your account. In an Amazon Web
         * Services account, table names must be at least unique within each Region if they
         * are in the same database. You might have identical table names in the same
         * Region if the tables are in separate databases. While creating the table, you
         * must specify the table name, database name, and the retention properties. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.create-table.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        Model::CreateTableOutcomeCallable CreateTableCallable(const CreateTableRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::CreateTable, request);
        }

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        void CreateTableAsync(const CreateTableRequestT& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::CreateTable, request, handler, context);
        }

        /**
         * <p>Deletes a given Timestream database. <i>This is an irreversible operation.
         * After a database is deleted, the time-series data from its tables cannot be
         * recovered.</i> </p>  <p>All tables in the database must be deleted first,
         * or a ValidationException error will be thrown. </p> <p>Due to the nature of
         * distributed retries, the operation can return either success or a
         * ResourceNotFoundException. Clients should consider them equivalent.</p> 
         * <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.delete-db.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatabaseOutcome DeleteDatabase(const Model::DeleteDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatabaseRequestT = Model::DeleteDatabaseRequest>
        Model::DeleteDatabaseOutcomeCallable DeleteDatabaseCallable(const DeleteDatabaseRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::DeleteDatabase, request);
        }

        /**
         * An Async wrapper for DeleteDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatabaseRequestT = Model::DeleteDatabaseRequest>
        void DeleteDatabaseAsync(const DeleteDatabaseRequestT& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::DeleteDatabase, request, handler, context);
        }

        /**
         * <p>Deletes a given Timestream table. This is an irreversible operation. After a
         * Timestream database table is deleted, the time-series data stored in the table
         * cannot be recovered. </p>  <p>Due to the nature of distributed retries,
         * the operation can return either success or a ResourceNotFoundException. Clients
         * should consider them equivalent.</p>  <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.delete-table.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        Model::DeleteTableOutcomeCallable DeleteTableCallable(const DeleteTableRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::DeleteTable, request);
        }

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        void DeleteTableAsync(const DeleteTableRequestT& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::DeleteTable, request, handler, context);
        }

        /**
         * <p>Returns information about the batch load task, including configurations,
         * mappings, progress, and other details. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.describe-batch-load.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeBatchLoadTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBatchLoadTaskOutcome DescribeBatchLoadTask(const Model::DescribeBatchLoadTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeBatchLoadTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBatchLoadTaskRequestT = Model::DescribeBatchLoadTaskRequest>
        Model::DescribeBatchLoadTaskOutcomeCallable DescribeBatchLoadTaskCallable(const DescribeBatchLoadTaskRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::DescribeBatchLoadTask, request);
        }

        /**
         * An Async wrapper for DescribeBatchLoadTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBatchLoadTaskRequestT = Model::DescribeBatchLoadTaskRequest>
        void DescribeBatchLoadTaskAsync(const DescribeBatchLoadTaskRequestT& request, const DescribeBatchLoadTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::DescribeBatchLoadTask, request, handler, context);
        }

        /**
         * <p>Returns information about the database, including the database name, time
         * that the database was created, and the total number of tables found within the
         * database. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.describe-db.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatabaseOutcome DescribeDatabase(const Model::DescribeDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDatabaseRequestT = Model::DescribeDatabaseRequest>
        Model::DescribeDatabaseOutcomeCallable DescribeDatabaseCallable(const DescribeDatabaseRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::DescribeDatabase, request);
        }

        /**
         * An Async wrapper for DescribeDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatabaseRequestT = Model::DescribeDatabaseRequest>
        void DescribeDatabaseAsync(const DescribeDatabaseRequestT& request, const DescribeDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::DescribeDatabase, request, handler, context);
        }

        /**
         * <p>Returns a list of available endpoints to make Timestream API calls against.
         * This API operation is available through both the Write and Query APIs.</p>
         * <p>Because the Timestream SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>we don't recommend that you use this API operation unless</i>:</p>
         * <ul> <li> <p>You are using <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/VPCEndpoints">VPC
         * endpoints (Amazon Web Services PrivateLink) with Timestream</a> </p> </li> <li>
         * <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how and when to
         * use and implement DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using.API.html#Using-API.endpoint-discovery">The
         * Endpoint Discovery Pattern</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEndpointsRequestT = Model::DescribeEndpointsRequest>
        Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const DescribeEndpointsRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::DescribeEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointsRequestT = Model::DescribeEndpointsRequest>
        void DescribeEndpointsAsync(const DescribeEndpointsRequestT& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::DescribeEndpoints, request, handler, context);
        }

        /**
         * <p>Returns information about the table, including the table name, database name,
         * retention duration of the memory store and the magnetic store. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.describe-table.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * A Callable wrapper for DescribeTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        Model::DescribeTableOutcomeCallable DescribeTableCallable(const DescribeTableRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::DescribeTable, request);
        }

        /**
         * An Async wrapper for DescribeTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        void DescribeTableAsync(const DescribeTableRequestT& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::DescribeTable, request, handler, context);
        }

        /**
         * <p>Provides a list of batch load tasks, along with the name, status, when the
         * task is resumable until, and other details. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.list-batch-load-tasks.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListBatchLoadTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchLoadTasksOutcome ListBatchLoadTasks(const Model::ListBatchLoadTasksRequest& request) const;

        /**
         * A Callable wrapper for ListBatchLoadTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBatchLoadTasksRequestT = Model::ListBatchLoadTasksRequest>
        Model::ListBatchLoadTasksOutcomeCallable ListBatchLoadTasksCallable(const ListBatchLoadTasksRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::ListBatchLoadTasks, request);
        }

        /**
         * An Async wrapper for ListBatchLoadTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBatchLoadTasksRequestT = Model::ListBatchLoadTasksRequest>
        void ListBatchLoadTasksAsync(const ListBatchLoadTasksRequestT& request, const ListBatchLoadTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::ListBatchLoadTasks, request, handler, context);
        }

        /**
         * <p>Returns a list of your Timestream databases. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.list-db.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;

        /**
         * A Callable wrapper for ListDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const ListDatabasesRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::ListDatabases, request);
        }

        /**
         * An Async wrapper for ListDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        void ListDatabasesAsync(const ListDatabasesRequestT& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::ListDatabases, request, handler, context);
        }

        /**
         * <p>Provides a list of tables, along with the name, status, and retention
         * properties of each table. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.list-table.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::ListTables, request, handler, context);
        }

        /**
         * <p> Lists all tags on a Timestream resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ResumeBatchLoadTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeBatchLoadTaskOutcome ResumeBatchLoadTask(const Model::ResumeBatchLoadTaskRequest& request) const;

        /**
         * A Callable wrapper for ResumeBatchLoadTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeBatchLoadTaskRequestT = Model::ResumeBatchLoadTaskRequest>
        Model::ResumeBatchLoadTaskOutcomeCallable ResumeBatchLoadTaskCallable(const ResumeBatchLoadTaskRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::ResumeBatchLoadTask, request);
        }

        /**
         * An Async wrapper for ResumeBatchLoadTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeBatchLoadTaskRequestT = Model::ResumeBatchLoadTaskRequest>
        void ResumeBatchLoadTaskAsync(const ResumeBatchLoadTaskRequestT& request, const ResumeBatchLoadTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::ResumeBatchLoadTask, request, handler, context);
        }

        /**
         * <p> Associates a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes the association of tags from a Timestream resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Modifies the KMS key for an existing database. While updating the database,
         * you must specify the database name and the identifier of the new KMS key to be
         * used (<code>KmsKeyId</code>). If there are any concurrent
         * <code>UpdateDatabase</code> requests, first writer wins. </p> <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.update-db.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatabaseOutcome UpdateDatabase(const Model::UpdateDatabaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatabaseRequestT = Model::UpdateDatabaseRequest>
        Model::UpdateDatabaseOutcomeCallable UpdateDatabaseCallable(const UpdateDatabaseRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::UpdateDatabase, request);
        }

        /**
         * An Async wrapper for UpdateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatabaseRequestT = Model::UpdateDatabaseRequest>
        void UpdateDatabaseAsync(const UpdateDatabaseRequestT& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::UpdateDatabase, request, handler, context);
        }

        /**
         * <p>Modifies the retention duration of the memory store and magnetic store for
         * your Timestream table. Note that the change in retention duration takes effect
         * immediately. For example, if the retention period of the memory store was
         * initially set to 2 hours and then changed to 24 hours, the memory store will be
         * capable of holding 24 hours of data, but will be populated with 24 hours of data
         * 22 hours after this change was made. Timestream does not retrieve data from the
         * magnetic store to populate the memory store. </p> <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.update-table.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        Model::UpdateTableOutcomeCallable UpdateTableCallable(const UpdateTableRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::UpdateTable, request);
        }

        /**
         * An Async wrapper for UpdateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        void UpdateTableAsync(const UpdateTableRequestT& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::UpdateTable, request, handler, context);
        }

        /**
         * <p>Enables you to write your time-series data into Timestream. You can specify a
         * single data point or a batch of data points to be inserted into the system.
         * Timestream offers you a flexible schema that auto detects the column names and
         * data types for your Timestream tables based on the dimension names and data
         * types of the data points you specify when invoking writes into the database.
         * </p> <p>Timestream supports eventual consistency read semantics. This means that
         * when you query data immediately after writing a batch of data into Timestream,
         * the query results might not reflect the results of a recently completed write
         * operation. The results may also include some stale data. If you repeat the query
         * request after a short time, the results should return the latest data. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. </p> <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.write.html">code
         * sample</a> for details.</p> <p> <b>Upserts</b> </p> <p>You can use the
         * <code>Version</code> parameter in a <code>WriteRecords</code> request to update
         * data points. Timestream tracks a version number with each record.
         * <code>Version</code> defaults to <code>1</code> when it's not specified for the
         * record in the request. Timestream updates an existing record’s measure value
         * along with its <code>Version</code> when it receives a write request with a
         * higher <code>Version</code> number for that record. When it receives an update
         * request where the measure value is the same as that of the existing record,
         * Timestream still updates <code>Version</code>, if it is greater than the
         * existing value of <code>Version</code>. You can update a data point as many
         * times as desired, as long as the value of <code>Version</code> continuously
         * increases. </p> <p> For example, suppose you write a new record without
         * indicating <code>Version</code> in the request. Timestream stores this record,
         * and set <code>Version</code> to <code>1</code>. Now, suppose you try to update
         * this record with a <code>WriteRecords</code> request of the same record with a
         * different measure value but, like before, do not provide <code>Version</code>.
         * In this case, Timestream will reject this update with a
         * <code>RejectedRecordsException</code> since the updated record’s version is not
         * greater than the existing value of Version. </p> <p>However, if you were to
         * resend the update request with <code>Version</code> set to <code>2</code>,
         * Timestream would then succeed in updating the record’s value, and the
         * <code>Version</code> would be set to <code>2</code>. Next, suppose you sent a
         * <code>WriteRecords</code> request with this same record and an identical measure
         * value, but with <code>Version</code> set to <code>3</code>. In this case,
         * Timestream would only update <code>Version</code> to <code>3</code>. Any further
         * updates would need to send a version number greater than <code>3</code>, or the
         * update requests would receive a <code>RejectedRecordsException</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/WriteRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::WriteRecordsOutcome WriteRecords(const Model::WriteRecordsRequest& request) const;

        /**
         * A Callable wrapper for WriteRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename WriteRecordsRequestT = Model::WriteRecordsRequest>
        Model::WriteRecordsOutcomeCallable WriteRecordsCallable(const WriteRecordsRequestT& request) const
        {
            return SubmitCallable(&TimestreamWriteClient::WriteRecords, request);
        }

        /**
         * An Async wrapper for WriteRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename WriteRecordsRequestT = Model::WriteRecordsRequest>
        void WriteRecordsAsync(const WriteRecordsRequestT& request, const WriteRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamWriteClient::WriteRecords, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TimestreamWriteEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TimestreamWriteClient>;
      void init(const TimestreamWriteClientConfiguration& clientConfiguration);

      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      TimestreamWriteClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TimestreamWriteEndpointProviderBase> m_endpointProvider;
  };

} // namespace TimestreamWrite
} // namespace Aws
