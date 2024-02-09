/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptunedata/NeptunedataServiceClientModel.h>
#include <aws/neptunedata/model/GetSparqlStatisticsRequest.h>
#include <aws/neptunedata/model/GetPropertygraphStatisticsRequest.h>
#include <aws/neptunedata/model/DeletePropertygraphStatisticsRequest.h>
#include <aws/neptunedata/model/DeleteSparqlStatisticsRequest.h>
#include <aws/neptunedata/model/GetEngineStatusRequest.h>

namespace Aws
{
namespace neptunedata
{
  /**
   * <p><fullname>Neptune Data API</fullname> <p>The Amazon Neptune data API provides
   * SDK support for more than 40 of Neptune's data operations, including data
   * loading, query execution, data inquiry, and machine learning. It supports the
   * Gremlin and openCypher query languages, and is available in all SDK languages.
   * It automatically signs API requests and greatly simplifies integrating Neptune
   * into your applications.</p></p>
   */
  class AWS_NEPTUNEDATA_API NeptunedataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NeptunedataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NeptunedataClientConfiguration ClientConfigurationType;
      typedef NeptunedataEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptunedataClient(const Aws::neptunedata::NeptunedataClientConfiguration& clientConfiguration = Aws::neptunedata::NeptunedataClientConfiguration(),
                          std::shared_ptr<NeptunedataEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptunedataClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<NeptunedataEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::neptunedata::NeptunedataClientConfiguration& clientConfiguration = Aws::neptunedata::NeptunedataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NeptunedataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<NeptunedataEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::neptunedata::NeptunedataClientConfiguration& clientConfiguration = Aws::neptunedata::NeptunedataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptunedataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptunedataClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NeptunedataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NeptunedataClient();

        /**
         * <p>Cancels a Gremlin query. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-api-status-cancel.html">Gremlin
         * query cancellation</a> for more information.</p> <p>When invoking this operation
         * in a Neptune cluster that has IAM authentication enabled, the IAM user or role
         * making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#cancelquery">neptune-db:CancelQuery</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CancelGremlinQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelGremlinQueryOutcome CancelGremlinQuery(const Model::CancelGremlinQueryRequest& request) const;

        /**
         * A Callable wrapper for CancelGremlinQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelGremlinQueryRequestT = Model::CancelGremlinQueryRequest>
        Model::CancelGremlinQueryOutcomeCallable CancelGremlinQueryCallable(const CancelGremlinQueryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::CancelGremlinQuery, request);
        }

        /**
         * An Async wrapper for CancelGremlinQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelGremlinQueryRequestT = Model::CancelGremlinQueryRequest>
        void CancelGremlinQueryAsync(const CancelGremlinQueryRequestT& request, const CancelGremlinQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::CancelGremlinQuery, request, handler, context);
        }

        /**
         * <p>Cancels a specified load job. This is an HTTP <code>DELETE</code> request.
         * See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/load-api-reference-status.htm">Neptune
         * Loader Get-Status API</a> for more information.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#cancelloaderjob">neptune-db:CancelLoaderJob</a>
         * IAM action in that cluster..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CancelLoaderJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelLoaderJobOutcome CancelLoaderJob(const Model::CancelLoaderJobRequest& request) const;

        /**
         * A Callable wrapper for CancelLoaderJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelLoaderJobRequestT = Model::CancelLoaderJobRequest>
        Model::CancelLoaderJobOutcomeCallable CancelLoaderJobCallable(const CancelLoaderJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::CancelLoaderJob, request);
        }

        /**
         * An Async wrapper for CancelLoaderJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelLoaderJobRequestT = Model::CancelLoaderJobRequest>
        void CancelLoaderJobAsync(const CancelLoaderJobRequestT& request, const CancelLoaderJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::CancelLoaderJob, request, handler, context);
        }

        /**
         * <p>Cancels a Neptune ML data processing job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-dataprocessing.html">The
         * <code>dataprocessing</code> command</a>.</p> <p>When invoking this operation in
         * a Neptune cluster that has IAM authentication enabled, the IAM user or role
         * making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#cancelmldataprocessingjob">neptune-db:CancelMLDataProcessingJob</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CancelMLDataProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMLDataProcessingJobOutcome CancelMLDataProcessingJob(const Model::CancelMLDataProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for CancelMLDataProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMLDataProcessingJobRequestT = Model::CancelMLDataProcessingJobRequest>
        Model::CancelMLDataProcessingJobOutcomeCallable CancelMLDataProcessingJobCallable(const CancelMLDataProcessingJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::CancelMLDataProcessingJob, request);
        }

        /**
         * An Async wrapper for CancelMLDataProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMLDataProcessingJobRequestT = Model::CancelMLDataProcessingJobRequest>
        void CancelMLDataProcessingJobAsync(const CancelMLDataProcessingJobRequestT& request, const CancelMLDataProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::CancelMLDataProcessingJob, request, handler, context);
        }

        /**
         * <p>Cancels a Neptune ML model training job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-modeltraining.html">Model
         * training using the <code>modeltraining</code> command</a>.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#cancelmlmodeltrainingjob">neptune-db:CancelMLModelTrainingJob</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CancelMLModelTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMLModelTrainingJobOutcome CancelMLModelTrainingJob(const Model::CancelMLModelTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for CancelMLModelTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMLModelTrainingJobRequestT = Model::CancelMLModelTrainingJobRequest>
        Model::CancelMLModelTrainingJobOutcomeCallable CancelMLModelTrainingJobCallable(const CancelMLModelTrainingJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::CancelMLModelTrainingJob, request);
        }

        /**
         * An Async wrapper for CancelMLModelTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMLModelTrainingJobRequestT = Model::CancelMLModelTrainingJobRequest>
        void CancelMLModelTrainingJobAsync(const CancelMLModelTrainingJobRequestT& request, const CancelMLModelTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::CancelMLModelTrainingJob, request, handler, context);
        }

        /**
         * <p>Cancels a specified model transform job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-model-transform.html">Use
         * a trained model to generate new model artifacts</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#cancelmlmodeltransformjob">neptune-db:CancelMLModelTransformJob</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CancelMLModelTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMLModelTransformJobOutcome CancelMLModelTransformJob(const Model::CancelMLModelTransformJobRequest& request) const;

        /**
         * A Callable wrapper for CancelMLModelTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMLModelTransformJobRequestT = Model::CancelMLModelTransformJobRequest>
        Model::CancelMLModelTransformJobOutcomeCallable CancelMLModelTransformJobCallable(const CancelMLModelTransformJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::CancelMLModelTransformJob, request);
        }

        /**
         * An Async wrapper for CancelMLModelTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMLModelTransformJobRequestT = Model::CancelMLModelTransformJobRequest>
        void CancelMLModelTransformJobAsync(const CancelMLModelTransformJobRequestT& request, const CancelMLModelTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::CancelMLModelTransformJob, request, handler, context);
        }

        /**
         * <p>Cancels a specified openCypher query. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/access-graph-opencypher-status.html">Neptune
         * openCypher status endpoint</a> for more information.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#cancelquery">neptune-db:CancelQuery</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CancelOpenCypherQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelOpenCypherQueryOutcome CancelOpenCypherQuery(const Model::CancelOpenCypherQueryRequest& request) const;

        /**
         * A Callable wrapper for CancelOpenCypherQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelOpenCypherQueryRequestT = Model::CancelOpenCypherQueryRequest>
        Model::CancelOpenCypherQueryOutcomeCallable CancelOpenCypherQueryCallable(const CancelOpenCypherQueryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::CancelOpenCypherQuery, request);
        }

        /**
         * An Async wrapper for CancelOpenCypherQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelOpenCypherQueryRequestT = Model::CancelOpenCypherQueryRequest>
        void CancelOpenCypherQueryAsync(const CancelOpenCypherQueryRequestT& request, const CancelOpenCypherQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::CancelOpenCypherQuery, request, handler, context);
        }

        /**
         * <p>Creates a new Neptune ML inference endpoint that lets you query one specific
         * model that the model-training process constructed. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-endpoints.html">Managing
         * inference endpoints using the endpoints command</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#createmlendpoint">neptune-db:CreateMLEndpoint</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/CreateMLEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMLEndpointOutcome CreateMLEndpoint(const Model::CreateMLEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateMLEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMLEndpointRequestT = Model::CreateMLEndpointRequest>
        Model::CreateMLEndpointOutcomeCallable CreateMLEndpointCallable(const CreateMLEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::CreateMLEndpoint, request);
        }

        /**
         * An Async wrapper for CreateMLEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMLEndpointRequestT = Model::CreateMLEndpointRequest>
        void CreateMLEndpointAsync(const CreateMLEndpointRequestT& request, const CreateMLEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::CreateMLEndpoint, request, handler, context);
        }

        /**
         * <p>Cancels the creation of a Neptune ML inference endpoint. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-endpoints.html">Managing
         * inference endpoints using the endpoints command</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#deletemlendpoint">neptune-db:DeleteMLEndpoint</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/DeleteMLEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMLEndpointOutcome DeleteMLEndpoint(const Model::DeleteMLEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteMLEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMLEndpointRequestT = Model::DeleteMLEndpointRequest>
        Model::DeleteMLEndpointOutcomeCallable DeleteMLEndpointCallable(const DeleteMLEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::DeleteMLEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteMLEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMLEndpointRequestT = Model::DeleteMLEndpointRequest>
        void DeleteMLEndpointAsync(const DeleteMLEndpointRequestT& request, const DeleteMLEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::DeleteMLEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes statistics for Gremlin and openCypher (property graph) data.</p>
         * <p>When invoking this operation in a Neptune cluster that has IAM authentication
         * enabled, the IAM user or role making the request must have a policy attached
         * that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#deletestatistics">neptune-db:DeleteStatistics</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/DeletePropertygraphStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePropertygraphStatisticsOutcome DeletePropertygraphStatistics(const Model::DeletePropertygraphStatisticsRequest& request = {}) const;

        /**
         * A Callable wrapper for DeletePropertygraphStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePropertygraphStatisticsRequestT = Model::DeletePropertygraphStatisticsRequest>
        Model::DeletePropertygraphStatisticsOutcomeCallable DeletePropertygraphStatisticsCallable(const DeletePropertygraphStatisticsRequestT& request = {}) const
        {
            return SubmitCallable(&NeptunedataClient::DeletePropertygraphStatistics, request);
        }

        /**
         * An Async wrapper for DeletePropertygraphStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePropertygraphStatisticsRequestT = Model::DeletePropertygraphStatisticsRequest>
        void DeletePropertygraphStatisticsAsync(const DeletePropertygraphStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeletePropertygraphStatisticsRequestT& request = {}) const
        {
            return SubmitAsync(&NeptunedataClient::DeletePropertygraphStatistics, request, handler, context);
        }

        /**
         * <p>Deletes SPARQL statistics</p> <p>When invoking this operation in a Neptune
         * cluster that has IAM authentication enabled, the IAM user or role making the
         * request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#deletestatistics">neptune-db:DeleteStatistics</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/DeleteSparqlStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSparqlStatisticsOutcome DeleteSparqlStatistics(const Model::DeleteSparqlStatisticsRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteSparqlStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSparqlStatisticsRequestT = Model::DeleteSparqlStatisticsRequest>
        Model::DeleteSparqlStatisticsOutcomeCallable DeleteSparqlStatisticsCallable(const DeleteSparqlStatisticsRequestT& request = {}) const
        {
            return SubmitCallable(&NeptunedataClient::DeleteSparqlStatistics, request);
        }

        /**
         * An Async wrapper for DeleteSparqlStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSparqlStatisticsRequestT = Model::DeleteSparqlStatisticsRequest>
        void DeleteSparqlStatisticsAsync(const DeleteSparqlStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteSparqlStatisticsRequestT& request = {}) const
        {
            return SubmitAsync(&NeptunedataClient::DeleteSparqlStatistics, request, handler, context);
        }

        /**
         * <p>The fast reset REST API lets you reset a Neptune graph quicky and easily,
         * removing all of its data.</p> <p>Neptune fast reset is a two-step process. First
         * you call <code>ExecuteFastReset</code> with <code>action</code> set to
         * <code>initiateDatabaseReset</code>. This returns a UUID token which you then
         * include when calling <code>ExecuteFastReset</code> again with
         * <code>action</code> set to <code>performDatabaseReset</code>. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/manage-console-fast-reset.html">Empty
         * an Amazon Neptune DB cluster using the fast reset API</a>.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#resetdatabase">neptune-db:ResetDatabase</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ExecuteFastReset">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteFastResetOutcome ExecuteFastReset(const Model::ExecuteFastResetRequest& request) const;

        /**
         * A Callable wrapper for ExecuteFastReset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteFastResetRequestT = Model::ExecuteFastResetRequest>
        Model::ExecuteFastResetOutcomeCallable ExecuteFastResetCallable(const ExecuteFastResetRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ExecuteFastReset, request);
        }

        /**
         * An Async wrapper for ExecuteFastReset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteFastResetRequestT = Model::ExecuteFastResetRequest>
        void ExecuteFastResetAsync(const ExecuteFastResetRequestT& request, const ExecuteFastResetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ExecuteFastReset, request, handler, context);
        }

        /**
         * <p>Executes a Gremlin Explain query.</p> <p>Amazon Neptune has added a Gremlin
         * feature named <code>explain</code> that provides is a self-service tool for
         * understanding the execution approach being taken by the Neptune engine for the
         * query. You invoke it by adding an <code>explain</code> parameter to an HTTP call
         * that submits a Gremlin query.</p> <p>The explain feature provides information
         * about the logical structure of query execution plans. You can use this
         * information to identify potential evaluation and execution bottlenecks and to
         * tune your query, as explained in <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-traversal-tuning.html">Tuning
         * Gremlin queries</a>. You can also use query hints to improve query execution
         * plans.</p> <p>When invoking this operation in a Neptune cluster that has IAM
         * authentication enabled, the IAM user or role making the request must have a
         * policy attached that allows one of the following IAM actions in that cluster,
         * depending on the query:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#readdataviaquery">neptune-db:ReadDataViaQuery</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#writedataviaquery">neptune-db:WriteDataViaQuery</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#deletedataviaquery">neptune-db:DeleteDataViaQuery</a>
         * </p> </li> </ul> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:Gremlin</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * Gremlin queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ExecuteGremlinExplainQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteGremlinExplainQueryOutcome ExecuteGremlinExplainQuery(const Model::ExecuteGremlinExplainQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteGremlinExplainQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteGremlinExplainQueryRequestT = Model::ExecuteGremlinExplainQueryRequest>
        Model::ExecuteGremlinExplainQueryOutcomeCallable ExecuteGremlinExplainQueryCallable(const ExecuteGremlinExplainQueryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ExecuteGremlinExplainQuery, request);
        }

        /**
         * An Async wrapper for ExecuteGremlinExplainQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteGremlinExplainQueryRequestT = Model::ExecuteGremlinExplainQueryRequest>
        void ExecuteGremlinExplainQueryAsync(const ExecuteGremlinExplainQueryRequestT& request, const ExecuteGremlinExplainQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ExecuteGremlinExplainQuery, request, handler, context);
        }

        /**
         * <p>Executes a Gremlin Profile query, which runs a specified traversal, collects
         * various metrics about the run, and produces a profile report as output. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
         * profile API in Neptune</a> for details.</p> <p>When invoking this operation in a
         * Neptune cluster that has IAM authentication enabled, the IAM user or role making
         * the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#readdataviaquery">neptune-db:ReadDataViaQuery</a>
         * IAM action in that cluster.</p> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:Gremlin</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * Gremlin queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ExecuteGremlinProfileQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteGremlinProfileQueryOutcome ExecuteGremlinProfileQuery(const Model::ExecuteGremlinProfileQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteGremlinProfileQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteGremlinProfileQueryRequestT = Model::ExecuteGremlinProfileQueryRequest>
        Model::ExecuteGremlinProfileQueryOutcomeCallable ExecuteGremlinProfileQueryCallable(const ExecuteGremlinProfileQueryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ExecuteGremlinProfileQuery, request);
        }

        /**
         * An Async wrapper for ExecuteGremlinProfileQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteGremlinProfileQueryRequestT = Model::ExecuteGremlinProfileQueryRequest>
        void ExecuteGremlinProfileQueryAsync(const ExecuteGremlinProfileQueryRequestT& request, const ExecuteGremlinProfileQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ExecuteGremlinProfileQuery, request, handler, context);
        }

        /**
         * <p>This commands executes a Gremlin query. Amazon Neptune is compatible with
         * Apache TinkerPop3 and Gremlin, so you can use the Gremlin traversal language to
         * query the graph, as described under <a
         * href="https://tinkerpop.apache.org/docs/current/reference/#graph">The Graph</a>
         * in the Apache TinkerPop3 documentation. More details can also be found in <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/access-graph-gremlin.html">Accessing
         * a Neptune graph with Gremlin</a>.</p> <p>When invoking this operation in a
         * Neptune cluster that has IAM authentication enabled, the IAM user or role making
         * the request must have a policy attached that enables one of the following IAM
         * actions in that cluster, depending on the query:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#readdataviaquery">neptune-db:ReadDataViaQuery</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#writedataviaquery">neptune-db:WriteDataViaQuery</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#deletedataviaquery">neptune-db:DeleteDataViaQuery</a>
         * </p> </li> </ul> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:Gremlin</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * Gremlin queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ExecuteGremlinQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteGremlinQueryOutcome ExecuteGremlinQuery(const Model::ExecuteGremlinQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteGremlinQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteGremlinQueryRequestT = Model::ExecuteGremlinQueryRequest>
        Model::ExecuteGremlinQueryOutcomeCallable ExecuteGremlinQueryCallable(const ExecuteGremlinQueryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ExecuteGremlinQuery, request);
        }

        /**
         * An Async wrapper for ExecuteGremlinQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteGremlinQueryRequestT = Model::ExecuteGremlinQueryRequest>
        void ExecuteGremlinQueryAsync(const ExecuteGremlinQueryRequestT& request, const ExecuteGremlinQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ExecuteGremlinQuery, request, handler, context);
        }

        /**
         * <p>Executes an openCypher <code>explain</code> request. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/access-graph-opencypher-explain.html">The
         * openCypher explain feature</a> for more information.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#readdataviaquery">neptune-db:ReadDataViaQuery</a>
         * IAM action in that cluster.</p> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:OpenCypher</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * openCypher queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ExecuteOpenCypherExplainQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteOpenCypherExplainQueryOutcome ExecuteOpenCypherExplainQuery(const Model::ExecuteOpenCypherExplainQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteOpenCypherExplainQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteOpenCypherExplainQueryRequestT = Model::ExecuteOpenCypherExplainQueryRequest>
        Model::ExecuteOpenCypherExplainQueryOutcomeCallable ExecuteOpenCypherExplainQueryCallable(const ExecuteOpenCypherExplainQueryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ExecuteOpenCypherExplainQuery, request);
        }

        /**
         * An Async wrapper for ExecuteOpenCypherExplainQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteOpenCypherExplainQueryRequestT = Model::ExecuteOpenCypherExplainQueryRequest>
        void ExecuteOpenCypherExplainQueryAsync(const ExecuteOpenCypherExplainQueryRequestT& request, const ExecuteOpenCypherExplainQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ExecuteOpenCypherExplainQuery, request, handler, context);
        }

        /**
         * <p>Executes an openCypher query. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/access-graph-opencypher.html">Accessing
         * the Neptune Graph with openCypher</a> for more information.</p> <p>Neptune
         * supports building graph applications using openCypher, which is currently one of
         * the most popular query languages among developers working with graph databases.
         * Developers, business analysts, and data scientists like openCypher's
         * declarative, SQL-inspired syntax because it provides a familiar structure in
         * which to querying property graphs.</p> <p>The openCypher language was originally
         * developed by Neo4j, then open-sourced in 2015 and contributed to the <a
         * href="https://opencypher.org/">openCypher project</a> under an Apache 2
         * open-source license.</p> <p>Note that when invoking this operation in a Neptune
         * cluster that has IAM authentication enabled, the IAM user or role making the
         * request must have a policy attached that allows one of the following IAM actions
         * in that cluster, depending on the query:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#readdataviaquery">neptune-db:ReadDataViaQuery</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#writedataviaquery">neptune-db:WriteDataViaQuery</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#deletedataviaquery">neptune-db:DeleteDataViaQuery</a>
         * </p> </li> </ul> <p>Note also that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:OpenCypher</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * openCypher queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ExecuteOpenCypherQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteOpenCypherQueryOutcome ExecuteOpenCypherQuery(const Model::ExecuteOpenCypherQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteOpenCypherQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteOpenCypherQueryRequestT = Model::ExecuteOpenCypherQueryRequest>
        Model::ExecuteOpenCypherQueryOutcomeCallable ExecuteOpenCypherQueryCallable(const ExecuteOpenCypherQueryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ExecuteOpenCypherQuery, request);
        }

        /**
         * An Async wrapper for ExecuteOpenCypherQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteOpenCypherQueryRequestT = Model::ExecuteOpenCypherQueryRequest>
        void ExecuteOpenCypherQueryAsync(const ExecuteOpenCypherQueryRequestT& request, const ExecuteOpenCypherQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ExecuteOpenCypherQuery, request, handler, context);
        }

        /**
         * <p>Retrieves the status of the graph database on the host.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getenginestatus">neptune-db:GetEngineStatus</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetEngineStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEngineStatusOutcome GetEngineStatus(const Model::GetEngineStatusRequest& request = {}) const;

        /**
         * A Callable wrapper for GetEngineStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEngineStatusRequestT = Model::GetEngineStatusRequest>
        Model::GetEngineStatusOutcomeCallable GetEngineStatusCallable(const GetEngineStatusRequestT& request = {}) const
        {
            return SubmitCallable(&NeptunedataClient::GetEngineStatus, request);
        }

        /**
         * An Async wrapper for GetEngineStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEngineStatusRequestT = Model::GetEngineStatusRequest>
        void GetEngineStatusAsync(const GetEngineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetEngineStatusRequestT& request = {}) const
        {
            return SubmitAsync(&NeptunedataClient::GetEngineStatus, request, handler, context);
        }

        /**
         * <p>Gets the status of a specified Gremlin query.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getquerystatus">neptune-db:GetQueryStatus</a>
         * IAM action in that cluster.</p> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:Gremlin</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * Gremlin queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetGremlinQueryStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGremlinQueryStatusOutcome GetGremlinQueryStatus(const Model::GetGremlinQueryStatusRequest& request) const;

        /**
         * A Callable wrapper for GetGremlinQueryStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGremlinQueryStatusRequestT = Model::GetGremlinQueryStatusRequest>
        Model::GetGremlinQueryStatusOutcomeCallable GetGremlinQueryStatusCallable(const GetGremlinQueryStatusRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetGremlinQueryStatus, request);
        }

        /**
         * An Async wrapper for GetGremlinQueryStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGremlinQueryStatusRequestT = Model::GetGremlinQueryStatusRequest>
        void GetGremlinQueryStatusAsync(const GetGremlinQueryStatusRequestT& request, const GetGremlinQueryStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetGremlinQueryStatus, request, handler, context);
        }

        /**
         * <p>Gets status information about a specified load job. Neptune keeps track of
         * the most recent 1,024 bulk load jobs, and stores the last 10,000 error details
         * per job.</p> <p>See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/load-api-reference-status.htm">Neptune
         * Loader Get-Status API</a> for more information.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getloaderjobstatus">neptune-db:GetLoaderJobStatus</a>
         * IAM action in that cluster..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetLoaderJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoaderJobStatusOutcome GetLoaderJobStatus(const Model::GetLoaderJobStatusRequest& request) const;

        /**
         * A Callable wrapper for GetLoaderJobStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoaderJobStatusRequestT = Model::GetLoaderJobStatusRequest>
        Model::GetLoaderJobStatusOutcomeCallable GetLoaderJobStatusCallable(const GetLoaderJobStatusRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetLoaderJobStatus, request);
        }

        /**
         * An Async wrapper for GetLoaderJobStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoaderJobStatusRequestT = Model::GetLoaderJobStatusRequest>
        void GetLoaderJobStatusAsync(const GetLoaderJobStatusRequestT& request, const GetLoaderJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetLoaderJobStatus, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specified data processing job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-dataprocessing.html">The
         * <code>dataprocessing</code> command</a>.</p> <p>When invoking this operation in
         * a Neptune cluster that has IAM authentication enabled, the IAM user or role
         * making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getmldataprocessingjobstatus">neptune-db:neptune-db:GetMLDataProcessingJobStatus</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetMLDataProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLDataProcessingJobOutcome GetMLDataProcessingJob(const Model::GetMLDataProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for GetMLDataProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLDataProcessingJobRequestT = Model::GetMLDataProcessingJobRequest>
        Model::GetMLDataProcessingJobOutcomeCallable GetMLDataProcessingJobCallable(const GetMLDataProcessingJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetMLDataProcessingJob, request);
        }

        /**
         * An Async wrapper for GetMLDataProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLDataProcessingJobRequestT = Model::GetMLDataProcessingJobRequest>
        void GetMLDataProcessingJobAsync(const GetMLDataProcessingJobRequestT& request, const GetMLDataProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetMLDataProcessingJob, request, handler, context);
        }

        /**
         * <p>Retrieves details about an inference endpoint. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-endpoints.html">Managing
         * inference endpoints using the endpoints command</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getmlendpointstatus">neptune-db:GetMLEndpointStatus</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetMLEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLEndpointOutcome GetMLEndpoint(const Model::GetMLEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetMLEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLEndpointRequestT = Model::GetMLEndpointRequest>
        Model::GetMLEndpointOutcomeCallable GetMLEndpointCallable(const GetMLEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetMLEndpoint, request);
        }

        /**
         * An Async wrapper for GetMLEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLEndpointRequestT = Model::GetMLEndpointRequest>
        void GetMLEndpointAsync(const GetMLEndpointRequestT& request, const GetMLEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetMLEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves information about a Neptune ML model training job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-modeltraining.html">Model
         * training using the <code>modeltraining</code> command</a>.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getmlmodeltrainingjobstatus">neptune-db:GetMLModelTrainingJobStatus</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetMLModelTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLModelTrainingJobOutcome GetMLModelTrainingJob(const Model::GetMLModelTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for GetMLModelTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLModelTrainingJobRequestT = Model::GetMLModelTrainingJobRequest>
        Model::GetMLModelTrainingJobOutcomeCallable GetMLModelTrainingJobCallable(const GetMLModelTrainingJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetMLModelTrainingJob, request);
        }

        /**
         * An Async wrapper for GetMLModelTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLModelTrainingJobRequestT = Model::GetMLModelTrainingJobRequest>
        void GetMLModelTrainingJobAsync(const GetMLModelTrainingJobRequestT& request, const GetMLModelTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetMLModelTrainingJob, request, handler, context);
        }

        /**
         * <p>Gets information about a specified model transform job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-model-transform.html">Use
         * a trained model to generate new model artifacts</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getmlmodeltransformjobstatus">neptune-db:GetMLModelTransformJobStatus</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetMLModelTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLModelTransformJobOutcome GetMLModelTransformJob(const Model::GetMLModelTransformJobRequest& request) const;

        /**
         * A Callable wrapper for GetMLModelTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLModelTransformJobRequestT = Model::GetMLModelTransformJobRequest>
        Model::GetMLModelTransformJobOutcomeCallable GetMLModelTransformJobCallable(const GetMLModelTransformJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetMLModelTransformJob, request);
        }

        /**
         * An Async wrapper for GetMLModelTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLModelTransformJobRequestT = Model::GetMLModelTransformJobRequest>
        void GetMLModelTransformJobAsync(const GetMLModelTransformJobRequestT& request, const GetMLModelTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetMLModelTransformJob, request, handler, context);
        }

        /**
         * <p>Retrieves the status of a specified openCypher query.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getquerystatus">neptune-db:GetQueryStatus</a>
         * IAM action in that cluster.</p> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:OpenCypher</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * openCypher queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetOpenCypherQueryStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpenCypherQueryStatusOutcome GetOpenCypherQueryStatus(const Model::GetOpenCypherQueryStatusRequest& request) const;

        /**
         * A Callable wrapper for GetOpenCypherQueryStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOpenCypherQueryStatusRequestT = Model::GetOpenCypherQueryStatusRequest>
        Model::GetOpenCypherQueryStatusOutcomeCallable GetOpenCypherQueryStatusCallable(const GetOpenCypherQueryStatusRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetOpenCypherQueryStatus, request);
        }

        /**
         * An Async wrapper for GetOpenCypherQueryStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOpenCypherQueryStatusRequestT = Model::GetOpenCypherQueryStatusRequest>
        void GetOpenCypherQueryStatusAsync(const GetOpenCypherQueryStatusRequestT& request, const GetOpenCypherQueryStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetOpenCypherQueryStatus, request, handler, context);
        }

        /**
         * <p>Gets property graph statistics (Gremlin and openCypher).</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getstatisticsstatus">neptune-db:GetStatisticsStatus</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetPropertygraphStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPropertygraphStatisticsOutcome GetPropertygraphStatistics(const Model::GetPropertygraphStatisticsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetPropertygraphStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPropertygraphStatisticsRequestT = Model::GetPropertygraphStatisticsRequest>
        Model::GetPropertygraphStatisticsOutcomeCallable GetPropertygraphStatisticsCallable(const GetPropertygraphStatisticsRequestT& request = {}) const
        {
            return SubmitCallable(&NeptunedataClient::GetPropertygraphStatistics, request);
        }

        /**
         * An Async wrapper for GetPropertygraphStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPropertygraphStatisticsRequestT = Model::GetPropertygraphStatisticsRequest>
        void GetPropertygraphStatisticsAsync(const GetPropertygraphStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetPropertygraphStatisticsRequestT& request = {}) const
        {
            return SubmitAsync(&NeptunedataClient::GetPropertygraphStatistics, request, handler, context);
        }

        /**
         * <p>Gets a stream for a property graph.</p> <p>With the Neptune Streams feature,
         * you can generate a complete sequence of change-log entries that record every
         * change made to your graph data as it happens.
         * <code>GetPropertygraphStream</code> lets you collect these change-log entries
         * for a property graph.</p> <p>The Neptune streams feature needs to be enabled on
         * your Neptune DBcluster. To enable streams, set the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/parameters.html#parameters-db-cluster-parameters-neptune_streams">neptune_streams</a>
         * DB cluster parameter to <code>1</code>.</p> <p>See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/streams.html">Capturing
         * graph changes in real time using Neptune streams</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getstreamrecords">neptune-db:GetStreamRecords</a>
         * IAM action in that cluster.</p> <p>When invoking this operation in a Neptune
         * cluster that has IAM authentication enabled, the IAM user or role making the
         * request must have a policy attached that enables one of the following IAM
         * actions, depending on the query:</p> <p>Note that you can restrict
         * property-graph queries using the following IAM context keys:</p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:Gremlin</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:OpenCypher</a>
         * </p> </li> </ul> <p>See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetPropertygraphStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPropertygraphStreamOutcome GetPropertygraphStream(const Model::GetPropertygraphStreamRequest& request) const;

        /**
         * A Callable wrapper for GetPropertygraphStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPropertygraphStreamRequestT = Model::GetPropertygraphStreamRequest>
        Model::GetPropertygraphStreamOutcomeCallable GetPropertygraphStreamCallable(const GetPropertygraphStreamRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetPropertygraphStream, request);
        }

        /**
         * An Async wrapper for GetPropertygraphStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPropertygraphStreamRequestT = Model::GetPropertygraphStreamRequest>
        void GetPropertygraphStreamAsync(const GetPropertygraphStreamRequestT& request, const GetPropertygraphStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetPropertygraphStream, request, handler, context);
        }

        /**
         * <p>Gets a graph summary for a property graph.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getgraphsummary">neptune-db:GetGraphSummary</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetPropertygraphSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPropertygraphSummaryOutcome GetPropertygraphSummary(const Model::GetPropertygraphSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetPropertygraphSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPropertygraphSummaryRequestT = Model::GetPropertygraphSummaryRequest>
        Model::GetPropertygraphSummaryOutcomeCallable GetPropertygraphSummaryCallable(const GetPropertygraphSummaryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetPropertygraphSummary, request);
        }

        /**
         * An Async wrapper for GetPropertygraphSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPropertygraphSummaryRequestT = Model::GetPropertygraphSummaryRequest>
        void GetPropertygraphSummaryAsync(const GetPropertygraphSummaryRequestT& request, const GetPropertygraphSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetPropertygraphSummary, request, handler, context);
        }

        /**
         * <p>Gets a graph summary for an RDF graph.</p> <p>When invoking this operation in
         * a Neptune cluster that has IAM authentication enabled, the IAM user or role
         * making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getgraphsummary">neptune-db:GetGraphSummary</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetRDFGraphSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRDFGraphSummaryOutcome GetRDFGraphSummary(const Model::GetRDFGraphSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetRDFGraphSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRDFGraphSummaryRequestT = Model::GetRDFGraphSummaryRequest>
        Model::GetRDFGraphSummaryOutcomeCallable GetRDFGraphSummaryCallable(const GetRDFGraphSummaryRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetRDFGraphSummary, request);
        }

        /**
         * An Async wrapper for GetRDFGraphSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRDFGraphSummaryRequestT = Model::GetRDFGraphSummaryRequest>
        void GetRDFGraphSummaryAsync(const GetRDFGraphSummaryRequestT& request, const GetRDFGraphSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetRDFGraphSummary, request, handler, context);
        }

        /**
         * <p>Gets RDF statistics (SPARQL).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetSparqlStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSparqlStatisticsOutcome GetSparqlStatistics(const Model::GetSparqlStatisticsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetSparqlStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSparqlStatisticsRequestT = Model::GetSparqlStatisticsRequest>
        Model::GetSparqlStatisticsOutcomeCallable GetSparqlStatisticsCallable(const GetSparqlStatisticsRequestT& request = {}) const
        {
            return SubmitCallable(&NeptunedataClient::GetSparqlStatistics, request);
        }

        /**
         * An Async wrapper for GetSparqlStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSparqlStatisticsRequestT = Model::GetSparqlStatisticsRequest>
        void GetSparqlStatisticsAsync(const GetSparqlStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetSparqlStatisticsRequestT& request = {}) const
        {
            return SubmitAsync(&NeptunedataClient::GetSparqlStatistics, request, handler, context);
        }

        /**
         * <p>Gets a stream for an RDF graph.</p> <p>With the Neptune Streams feature, you
         * can generate a complete sequence of change-log entries that record every change
         * made to your graph data as it happens. <code>GetSparqlStream</code> lets you
         * collect these change-log entries for an RDF graph.</p> <p>The Neptune streams
         * feature needs to be enabled on your Neptune DBcluster. To enable streams, set
         * the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/parameters.html#parameters-db-cluster-parameters-neptune_streams">neptune_streams</a>
         * DB cluster parameter to <code>1</code>.</p> <p>See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/streams.html">Capturing
         * graph changes in real time using Neptune streams</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getstreamrecords">neptune-db:GetStreamRecords</a>
         * IAM action in that cluster.</p> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:Sparql</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * SPARQL queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GetSparqlStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSparqlStreamOutcome GetSparqlStream(const Model::GetSparqlStreamRequest& request) const;

        /**
         * A Callable wrapper for GetSparqlStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSparqlStreamRequestT = Model::GetSparqlStreamRequest>
        Model::GetSparqlStreamOutcomeCallable GetSparqlStreamCallable(const GetSparqlStreamRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::GetSparqlStream, request);
        }

        /**
         * An Async wrapper for GetSparqlStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSparqlStreamRequestT = Model::GetSparqlStreamRequest>
        void GetSparqlStreamAsync(const GetSparqlStreamRequestT& request, const GetSparqlStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::GetSparqlStream, request, handler, context);
        }

        /**
         * <p>Lists active Gremlin queries. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-api-status.html">Gremlin
         * query status API</a> for details about the output.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getquerystatus">neptune-db:GetQueryStatus</a>
         * IAM action in that cluster.</p> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:Gremlin</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * Gremlin queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ListGremlinQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGremlinQueriesOutcome ListGremlinQueries(const Model::ListGremlinQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListGremlinQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGremlinQueriesRequestT = Model::ListGremlinQueriesRequest>
        Model::ListGremlinQueriesOutcomeCallable ListGremlinQueriesCallable(const ListGremlinQueriesRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ListGremlinQueries, request);
        }

        /**
         * An Async wrapper for ListGremlinQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGremlinQueriesRequestT = Model::ListGremlinQueriesRequest>
        void ListGremlinQueriesAsync(const ListGremlinQueriesRequestT& request, const ListGremlinQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ListGremlinQueries, request, handler, context);
        }

        /**
         * <p>Retrieves a list of the <code>loadIds</code> for all active loader jobs.</p>
         * <p>When invoking this operation in a Neptune cluster that has IAM authentication
         * enabled, the IAM user or role making the request must have a policy attached
         * that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#listloaderjobs">neptune-db:ListLoaderJobs</a>
         * IAM action in that cluster..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ListLoaderJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoaderJobsOutcome ListLoaderJobs(const Model::ListLoaderJobsRequest& request) const;

        /**
         * A Callable wrapper for ListLoaderJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLoaderJobsRequestT = Model::ListLoaderJobsRequest>
        Model::ListLoaderJobsOutcomeCallable ListLoaderJobsCallable(const ListLoaderJobsRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ListLoaderJobs, request);
        }

        /**
         * An Async wrapper for ListLoaderJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLoaderJobsRequestT = Model::ListLoaderJobsRequest>
        void ListLoaderJobsAsync(const ListLoaderJobsRequestT& request, const ListLoaderJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ListLoaderJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of Neptune ML data processing jobs. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-dataprocessing.html#machine-learning-api-dataprocessing-list-jobs">Listing
         * active data-processing jobs using the Neptune ML dataprocessing command</a>.</p>
         * <p>When invoking this operation in a Neptune cluster that has IAM authentication
         * enabled, the IAM user or role making the request must have a policy attached
         * that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#listmldataprocessingjobs">neptune-db:ListMLDataProcessingJobs</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ListMLDataProcessingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMLDataProcessingJobsOutcome ListMLDataProcessingJobs(const Model::ListMLDataProcessingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMLDataProcessingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMLDataProcessingJobsRequestT = Model::ListMLDataProcessingJobsRequest>
        Model::ListMLDataProcessingJobsOutcomeCallable ListMLDataProcessingJobsCallable(const ListMLDataProcessingJobsRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ListMLDataProcessingJobs, request);
        }

        /**
         * An Async wrapper for ListMLDataProcessingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMLDataProcessingJobsRequestT = Model::ListMLDataProcessingJobsRequest>
        void ListMLDataProcessingJobsAsync(const ListMLDataProcessingJobsRequestT& request, const ListMLDataProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ListMLDataProcessingJobs, request, handler, context);
        }

        /**
         * <p>Lists existing inference endpoints. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-endpoints.html">Managing
         * inference endpoints using the endpoints command</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#listmlendpoints">neptune-db:ListMLEndpoints</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ListMLEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMLEndpointsOutcome ListMLEndpoints(const Model::ListMLEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListMLEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMLEndpointsRequestT = Model::ListMLEndpointsRequest>
        Model::ListMLEndpointsOutcomeCallable ListMLEndpointsCallable(const ListMLEndpointsRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ListMLEndpoints, request);
        }

        /**
         * An Async wrapper for ListMLEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMLEndpointsRequestT = Model::ListMLEndpointsRequest>
        void ListMLEndpointsAsync(const ListMLEndpointsRequestT& request, const ListMLEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ListMLEndpoints, request, handler, context);
        }

        /**
         * <p>Lists Neptune ML model-training jobs. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-modeltraining.html">Model
         * training using the <code>modeltraining</code> command</a>.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#neptune-db:listmlmodeltrainingjobs">neptune-db:neptune-db:ListMLModelTrainingJobs</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ListMLModelTrainingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMLModelTrainingJobsOutcome ListMLModelTrainingJobs(const Model::ListMLModelTrainingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMLModelTrainingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMLModelTrainingJobsRequestT = Model::ListMLModelTrainingJobsRequest>
        Model::ListMLModelTrainingJobsOutcomeCallable ListMLModelTrainingJobsCallable(const ListMLModelTrainingJobsRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ListMLModelTrainingJobs, request);
        }

        /**
         * An Async wrapper for ListMLModelTrainingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMLModelTrainingJobsRequestT = Model::ListMLModelTrainingJobsRequest>
        void ListMLModelTrainingJobsAsync(const ListMLModelTrainingJobsRequestT& request, const ListMLModelTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ListMLModelTrainingJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of model transform job IDs. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-model-transform.html">Use
         * a trained model to generate new model artifacts</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#listmlmodeltransformjobs">neptune-db:ListMLModelTransformJobs</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ListMLModelTransformJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMLModelTransformJobsOutcome ListMLModelTransformJobs(const Model::ListMLModelTransformJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMLModelTransformJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMLModelTransformJobsRequestT = Model::ListMLModelTransformJobsRequest>
        Model::ListMLModelTransformJobsOutcomeCallable ListMLModelTransformJobsCallable(const ListMLModelTransformJobsRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ListMLModelTransformJobs, request);
        }

        /**
         * An Async wrapper for ListMLModelTransformJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMLModelTransformJobsRequestT = Model::ListMLModelTransformJobsRequest>
        void ListMLModelTransformJobsAsync(const ListMLModelTransformJobsRequestT& request, const ListMLModelTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ListMLModelTransformJobs, request, handler, context);
        }

        /**
         * <p>Lists active openCypher queries. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/access-graph-opencypher-status.html">Neptune
         * openCypher status endpoint</a> for more information.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#getquerystatus">neptune-db:GetQueryStatus</a>
         * IAM action in that cluster.</p> <p>Note that the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html#iam-neptune-condition-keys">neptune-db:QueryLanguage:OpenCypher</a>
         * IAM condition key can be used in the policy document to restrict the use of
         * openCypher queries (see <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-data-condition-keys.html">Condition
         * keys available in Neptune IAM data-access policy statements</a>).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ListOpenCypherQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpenCypherQueriesOutcome ListOpenCypherQueries(const Model::ListOpenCypherQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListOpenCypherQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOpenCypherQueriesRequestT = Model::ListOpenCypherQueriesRequest>
        Model::ListOpenCypherQueriesOutcomeCallable ListOpenCypherQueriesCallable(const ListOpenCypherQueriesRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ListOpenCypherQueries, request);
        }

        /**
         * An Async wrapper for ListOpenCypherQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOpenCypherQueriesRequestT = Model::ListOpenCypherQueriesRequest>
        void ListOpenCypherQueriesAsync(const ListOpenCypherQueriesRequestT& request, const ListOpenCypherQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ListOpenCypherQueries, request, handler, context);
        }

        /**
         * <p>Manages the generation and use of property graph statistics.</p> <p>When
         * invoking this operation in a Neptune cluster that has IAM authentication
         * enabled, the IAM user or role making the request must have a policy attached
         * that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#managestatistics">neptune-db:ManageStatistics</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ManagePropertygraphStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::ManagePropertygraphStatisticsOutcome ManagePropertygraphStatistics(const Model::ManagePropertygraphStatisticsRequest& request) const;

        /**
         * A Callable wrapper for ManagePropertygraphStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ManagePropertygraphStatisticsRequestT = Model::ManagePropertygraphStatisticsRequest>
        Model::ManagePropertygraphStatisticsOutcomeCallable ManagePropertygraphStatisticsCallable(const ManagePropertygraphStatisticsRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ManagePropertygraphStatistics, request);
        }

        /**
         * An Async wrapper for ManagePropertygraphStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ManagePropertygraphStatisticsRequestT = Model::ManagePropertygraphStatisticsRequest>
        void ManagePropertygraphStatisticsAsync(const ManagePropertygraphStatisticsRequestT& request, const ManagePropertygraphStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ManagePropertygraphStatistics, request, handler, context);
        }

        /**
         * <p>Manages the generation and use of RDF graph statistics.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#managestatistics">neptune-db:ManageStatistics</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/ManageSparqlStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::ManageSparqlStatisticsOutcome ManageSparqlStatistics(const Model::ManageSparqlStatisticsRequest& request) const;

        /**
         * A Callable wrapper for ManageSparqlStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ManageSparqlStatisticsRequestT = Model::ManageSparqlStatisticsRequest>
        Model::ManageSparqlStatisticsOutcomeCallable ManageSparqlStatisticsCallable(const ManageSparqlStatisticsRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::ManageSparqlStatistics, request);
        }

        /**
         * An Async wrapper for ManageSparqlStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ManageSparqlStatisticsRequestT = Model::ManageSparqlStatisticsRequest>
        void ManageSparqlStatisticsAsync(const ManageSparqlStatisticsRequestT& request, const ManageSparqlStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::ManageSparqlStatistics, request, handler, context);
        }

        /**
         * <p>Starts a Neptune bulk loader job to load data from an Amazon S3 bucket into a
         * Neptune DB instance. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load.html">Using
         * the Amazon Neptune Bulk Loader to Ingest Data</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#startloaderjob">neptune-db:StartLoaderJob</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/StartLoaderJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLoaderJobOutcome StartLoaderJob(const Model::StartLoaderJobRequest& request) const;

        /**
         * A Callable wrapper for StartLoaderJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartLoaderJobRequestT = Model::StartLoaderJobRequest>
        Model::StartLoaderJobOutcomeCallable StartLoaderJobCallable(const StartLoaderJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::StartLoaderJob, request);
        }

        /**
         * An Async wrapper for StartLoaderJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartLoaderJobRequestT = Model::StartLoaderJobRequest>
        void StartLoaderJobAsync(const StartLoaderJobRequestT& request, const StartLoaderJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::StartLoaderJob, request, handler, context);
        }

        /**
         * <p>Creates a new Neptune ML data processing job for processing the graph data
         * exported from Neptune for training. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-dataprocessing.html">The
         * <code>dataprocessing</code> command</a>.</p> <p>When invoking this operation in
         * a Neptune cluster that has IAM authentication enabled, the IAM user or role
         * making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#startmlmodeldataprocessingjob">neptune-db:StartMLModelDataProcessingJob</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/StartMLDataProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMLDataProcessingJobOutcome StartMLDataProcessingJob(const Model::StartMLDataProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for StartMLDataProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMLDataProcessingJobRequestT = Model::StartMLDataProcessingJobRequest>
        Model::StartMLDataProcessingJobOutcomeCallable StartMLDataProcessingJobCallable(const StartMLDataProcessingJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::StartMLDataProcessingJob, request);
        }

        /**
         * An Async wrapper for StartMLDataProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMLDataProcessingJobRequestT = Model::StartMLDataProcessingJobRequest>
        void StartMLDataProcessingJobAsync(const StartMLDataProcessingJobRequestT& request, const StartMLDataProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::StartMLDataProcessingJob, request, handler, context);
        }

        /**
         * <p>Creates a new Neptune ML model training job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-api-modeltraining.html">Model
         * training using the <code>modeltraining</code> command</a>.</p> <p>When invoking
         * this operation in a Neptune cluster that has IAM authentication enabled, the IAM
         * user or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#startmlmodeltrainingjob">neptune-db:StartMLModelTrainingJob</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/StartMLModelTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMLModelTrainingJobOutcome StartMLModelTrainingJob(const Model::StartMLModelTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for StartMLModelTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMLModelTrainingJobRequestT = Model::StartMLModelTrainingJobRequest>
        Model::StartMLModelTrainingJobOutcomeCallable StartMLModelTrainingJobCallable(const StartMLModelTrainingJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::StartMLModelTrainingJob, request);
        }

        /**
         * An Async wrapper for StartMLModelTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMLModelTrainingJobRequestT = Model::StartMLModelTrainingJobRequest>
        void StartMLModelTrainingJobAsync(const StartMLModelTrainingJobRequestT& request, const StartMLModelTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::StartMLModelTrainingJob, request, handler, context);
        }

        /**
         * <p>Creates a new model transform job. See <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/machine-learning-model-transform.html">Use
         * a trained model to generate new model artifacts</a>.</p> <p>When invoking this
         * operation in a Neptune cluster that has IAM authentication enabled, the IAM user
         * or role making the request must have a policy attached that allows the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/iam-dp-actions.html#startmlmodeltransformjob">neptune-db:StartMLModelTransformJob</a>
         * IAM action in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/StartMLModelTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMLModelTransformJobOutcome StartMLModelTransformJob(const Model::StartMLModelTransformJobRequest& request) const;

        /**
         * A Callable wrapper for StartMLModelTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMLModelTransformJobRequestT = Model::StartMLModelTransformJobRequest>
        Model::StartMLModelTransformJobOutcomeCallable StartMLModelTransformJobCallable(const StartMLModelTransformJobRequestT& request) const
        {
            return SubmitCallable(&NeptunedataClient::StartMLModelTransformJob, request);
        }

        /**
         * An Async wrapper for StartMLModelTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMLModelTransformJobRequestT = Model::StartMLModelTransformJobRequest>
        void StartMLModelTransformJobAsync(const StartMLModelTransformJobRequestT& request, const StartMLModelTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptunedataClient::StartMLModelTransformJob, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NeptunedataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NeptunedataClient>;
      void init(const NeptunedataClientConfiguration& clientConfiguration);

      NeptunedataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NeptunedataEndpointProviderBase> m_endpointProvider;
  };

} // namespace neptunedata
} // namespace Aws
