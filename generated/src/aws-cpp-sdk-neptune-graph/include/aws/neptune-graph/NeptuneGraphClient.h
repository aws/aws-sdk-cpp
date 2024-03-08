/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptune-graph/NeptuneGraphServiceClientModel.h>

namespace Aws
{
namespace NeptuneGraph
{
  /**
   * <p>Neptune Analytics is a new analytics database engine for Amazon Neptune that
   * helps customers get to insights faster by quickly processing large amounts of
   * graph data, invoking popular graph analytic algorithms in low-latency queries,
   * and getting analytics results in seconds.</p>
   */
  class AWS_NEPTUNEGRAPH_API NeptuneGraphClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NeptuneGraphClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NeptuneGraphClientConfiguration ClientConfigurationType;
      typedef NeptuneGraphEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneGraphClient(const Aws::NeptuneGraph::NeptuneGraphClientConfiguration& clientConfiguration = Aws::NeptuneGraph::NeptuneGraphClientConfiguration(),
                           std::shared_ptr<NeptuneGraphEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneGraphClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<NeptuneGraphEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::NeptuneGraph::NeptuneGraphClientConfiguration& clientConfiguration = Aws::NeptuneGraph::NeptuneGraphClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NeptuneGraphClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<NeptuneGraphEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::NeptuneGraph::NeptuneGraphClientConfiguration& clientConfiguration = Aws::NeptuneGraph::NeptuneGraphClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneGraphClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneGraphClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NeptuneGraphClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NeptuneGraphClient();

        /**
         * <p>Deletes the specified import task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/CancelImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImportTaskOutcome CancelImportTask(const Model::CancelImportTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelImportTaskRequestT = Model::CancelImportTaskRequest>
        Model::CancelImportTaskOutcomeCallable CancelImportTaskCallable(const CancelImportTaskRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::CancelImportTask, request);
        }

        /**
         * An Async wrapper for CancelImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelImportTaskRequestT = Model::CancelImportTaskRequest>
        void CancelImportTaskAsync(const CancelImportTaskRequestT& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::CancelImportTask, request, handler, context);
        }

        /**
         * <p>Cancels a specified query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/CancelQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQueryOutcome CancelQuery(const Model::CancelQueryRequest& request) const;

        /**
         * A Callable wrapper for CancelQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelQueryRequestT = Model::CancelQueryRequest>
        Model::CancelQueryOutcomeCallable CancelQueryCallable(const CancelQueryRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::CancelQuery, request);
        }

        /**
         * An Async wrapper for CancelQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelQueryRequestT = Model::CancelQueryRequest>
        void CancelQueryAsync(const CancelQueryRequestT& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::CancelQuery, request, handler, context);
        }

        /**
         * <p>Creates a new Neptune Analytics graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/CreateGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphOutcome CreateGraph(const Model::CreateGraphRequest& request) const;

        /**
         * A Callable wrapper for CreateGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGraphRequestT = Model::CreateGraphRequest>
        Model::CreateGraphOutcomeCallable CreateGraphCallable(const CreateGraphRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::CreateGraph, request);
        }

        /**
         * An Async wrapper for CreateGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGraphRequestT = Model::CreateGraphRequest>
        void CreateGraphAsync(const CreateGraphRequestT& request, const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::CreateGraph, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of the specific graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/CreateGraphSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphSnapshotOutcome CreateGraphSnapshot(const Model::CreateGraphSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateGraphSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGraphSnapshotRequestT = Model::CreateGraphSnapshotRequest>
        Model::CreateGraphSnapshotOutcomeCallable CreateGraphSnapshotCallable(const CreateGraphSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::CreateGraphSnapshot, request);
        }

        /**
         * An Async wrapper for CreateGraphSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGraphSnapshotRequestT = Model::CreateGraphSnapshotRequest>
        void CreateGraphSnapshotAsync(const CreateGraphSnapshotRequestT& request, const CreateGraphSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::CreateGraphSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a new Neptune Analytics graph and imports data into it, either from
         * Amazon Simple Storage Service (S3) or from a Neptune database or a Neptune
         * database snapshot.</p> <p>The data can be loaded from files in S3 that in either
         * the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
         * CSV format</a> or the <a
         * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
         * load format</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/CreateGraphUsingImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphUsingImportTaskOutcome CreateGraphUsingImportTask(const Model::CreateGraphUsingImportTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateGraphUsingImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGraphUsingImportTaskRequestT = Model::CreateGraphUsingImportTaskRequest>
        Model::CreateGraphUsingImportTaskOutcomeCallable CreateGraphUsingImportTaskCallable(const CreateGraphUsingImportTaskRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::CreateGraphUsingImportTask, request);
        }

        /**
         * An Async wrapper for CreateGraphUsingImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGraphUsingImportTaskRequestT = Model::CreateGraphUsingImportTaskRequest>
        void CreateGraphUsingImportTaskAsync(const CreateGraphUsingImportTaskRequestT& request, const CreateGraphUsingImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::CreateGraphUsingImportTask, request, handler, context);
        }

        /**
         * <p>Create a private graph endpoint to allow private access from to the graph
         * from within a VPC. You can attach security groups to the private graph endpoint.
         * VPC endpoint charges apply.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/CreatePrivateGraphEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrivateGraphEndpointOutcome CreatePrivateGraphEndpoint(const Model::CreatePrivateGraphEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreatePrivateGraphEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePrivateGraphEndpointRequestT = Model::CreatePrivateGraphEndpointRequest>
        Model::CreatePrivateGraphEndpointOutcomeCallable CreatePrivateGraphEndpointCallable(const CreatePrivateGraphEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::CreatePrivateGraphEndpoint, request);
        }

        /**
         * An Async wrapper for CreatePrivateGraphEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePrivateGraphEndpointRequestT = Model::CreatePrivateGraphEndpointRequest>
        void CreatePrivateGraphEndpointAsync(const CreatePrivateGraphEndpointRequestT& request, const CreatePrivateGraphEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::CreatePrivateGraphEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes the specified graph. Graphs cannot be deleted if delete-protection is
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/DeleteGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphOutcome DeleteGraph(const Model::DeleteGraphRequest& request) const;

        /**
         * A Callable wrapper for DeleteGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGraphRequestT = Model::DeleteGraphRequest>
        Model::DeleteGraphOutcomeCallable DeleteGraphCallable(const DeleteGraphRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::DeleteGraph, request);
        }

        /**
         * An Async wrapper for DeleteGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGraphRequestT = Model::DeleteGraphRequest>
        void DeleteGraphAsync(const DeleteGraphRequestT& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::DeleteGraph, request, handler, context);
        }

        /**
         * <p>Deletes the specifed graph snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/DeleteGraphSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphSnapshotOutcome DeleteGraphSnapshot(const Model::DeleteGraphSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteGraphSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGraphSnapshotRequestT = Model::DeleteGraphSnapshotRequest>
        Model::DeleteGraphSnapshotOutcomeCallable DeleteGraphSnapshotCallable(const DeleteGraphSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::DeleteGraphSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteGraphSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGraphSnapshotRequestT = Model::DeleteGraphSnapshotRequest>
        void DeleteGraphSnapshotAsync(const DeleteGraphSnapshotRequestT& request, const DeleteGraphSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::DeleteGraphSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes a private graph endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/DeletePrivateGraphEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePrivateGraphEndpointOutcome DeletePrivateGraphEndpoint(const Model::DeletePrivateGraphEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeletePrivateGraphEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePrivateGraphEndpointRequestT = Model::DeletePrivateGraphEndpointRequest>
        Model::DeletePrivateGraphEndpointOutcomeCallable DeletePrivateGraphEndpointCallable(const DeletePrivateGraphEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::DeletePrivateGraphEndpoint, request);
        }

        /**
         * An Async wrapper for DeletePrivateGraphEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePrivateGraphEndpointRequestT = Model::DeletePrivateGraphEndpointRequest>
        void DeletePrivateGraphEndpointAsync(const DeletePrivateGraphEndpointRequestT& request, const DeletePrivateGraphEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::DeletePrivateGraphEndpoint, request, handler, context);
        }

        /**
         * <p>Execute an openCypher query. Currently, the SDK does not support
         * parameterized queries. If you want to make a parameterized query call, you can
         * use an HTTP request. </p> <p> When invoking this operation in a Neptune
         * Analytics cluster, the IAM user or role making the request must have a policy
         * attached that allows one of the following IAM actions in that cluster, depending
         * on the query: </p> <ul> <li> <p>neptune-graph:ReadDataViaQuery</p> </li> <li>
         * <p>neptune-graph:WriteDataViaQuery</p> </li> <li>
         * <p>neptune-graph:DeleteDataViaQuery</p> </li> </ul>  <p> Non-parametrized
         * queries are not considered for plan caching. You can force plan caching with
         * <code>planCache=enabled</code>. The plan cache will be reused only for the same
         * exact query. Slight variations in the query will not be able to reuse the query
         * plan cache. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ExecuteQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteQueryOutcome ExecuteQuery(const Model::ExecuteQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteQueryRequestT = Model::ExecuteQueryRequest>
        Model::ExecuteQueryOutcomeCallable ExecuteQueryCallable(const ExecuteQueryRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ExecuteQuery, request);
        }

        /**
         * An Async wrapper for ExecuteQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteQueryRequestT = Model::ExecuteQueryRequest>
        void ExecuteQueryAsync(const ExecuteQueryRequestT& request, const ExecuteQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ExecuteQuery, request, handler, context);
        }

        /**
         * <p>Gets information about a specified graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GetGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphOutcome GetGraph(const Model::GetGraphRequest& request) const;

        /**
         * A Callable wrapper for GetGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGraphRequestT = Model::GetGraphRequest>
        Model::GetGraphOutcomeCallable GetGraphCallable(const GetGraphRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::GetGraph, request);
        }

        /**
         * An Async wrapper for GetGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGraphRequestT = Model::GetGraphRequest>
        void GetGraphAsync(const GetGraphRequestT& request, const GetGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::GetGraph, request, handler, context);
        }

        /**
         * <p>Retrieves a specified graph snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GetGraphSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphSnapshotOutcome GetGraphSnapshot(const Model::GetGraphSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetGraphSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGraphSnapshotRequestT = Model::GetGraphSnapshotRequest>
        Model::GetGraphSnapshotOutcomeCallable GetGraphSnapshotCallable(const GetGraphSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::GetGraphSnapshot, request);
        }

        /**
         * An Async wrapper for GetGraphSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGraphSnapshotRequestT = Model::GetGraphSnapshotRequest>
        void GetGraphSnapshotAsync(const GetGraphSnapshotRequestT& request, const GetGraphSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::GetGraphSnapshot, request, handler, context);
        }

        /**
         * <p>Gets a graph summary for a property graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GetGraphSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphSummaryOutcome GetGraphSummary(const Model::GetGraphSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetGraphSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGraphSummaryRequestT = Model::GetGraphSummaryRequest>
        Model::GetGraphSummaryOutcomeCallable GetGraphSummaryCallable(const GetGraphSummaryRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::GetGraphSummary, request);
        }

        /**
         * An Async wrapper for GetGraphSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGraphSummaryRequestT = Model::GetGraphSummaryRequest>
        void GetGraphSummaryAsync(const GetGraphSummaryRequestT& request, const GetGraphSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::GetGraphSummary, request, handler, context);
        }

        /**
         * <p>Retrieves a specified import task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GetImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportTaskOutcome GetImportTask(const Model::GetImportTaskRequest& request) const;

        /**
         * A Callable wrapper for GetImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportTaskRequestT = Model::GetImportTaskRequest>
        Model::GetImportTaskOutcomeCallable GetImportTaskCallable(const GetImportTaskRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::GetImportTask, request);
        }

        /**
         * An Async wrapper for GetImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportTaskRequestT = Model::GetImportTaskRequest>
        void GetImportTaskAsync(const GetImportTaskRequestT& request, const GetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::GetImportTask, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specified private endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GetPrivateGraphEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPrivateGraphEndpointOutcome GetPrivateGraphEndpoint(const Model::GetPrivateGraphEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetPrivateGraphEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPrivateGraphEndpointRequestT = Model::GetPrivateGraphEndpointRequest>
        Model::GetPrivateGraphEndpointOutcomeCallable GetPrivateGraphEndpointCallable(const GetPrivateGraphEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::GetPrivateGraphEndpoint, request);
        }

        /**
         * An Async wrapper for GetPrivateGraphEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPrivateGraphEndpointRequestT = Model::GetPrivateGraphEndpointRequest>
        void GetPrivateGraphEndpointAsync(const GetPrivateGraphEndpointRequestT& request, const GetPrivateGraphEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::GetPrivateGraphEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves the status of a specified query.</p>  <p> When invoking this
         * operation in a Neptune Analytics cluster, the IAM user or role making the
         * request must have the <code>neptune-graph:GetQueryStatus</code> IAM action
         * attached. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GetQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryOutcome GetQuery(const Model::GetQueryRequest& request) const;

        /**
         * A Callable wrapper for GetQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryRequestT = Model::GetQueryRequest>
        Model::GetQueryOutcomeCallable GetQueryCallable(const GetQueryRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::GetQuery, request);
        }

        /**
         * An Async wrapper for GetQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryRequestT = Model::GetQueryRequest>
        void GetQueryAsync(const GetQueryRequestT& request, const GetQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::GetQuery, request, handler, context);
        }

        /**
         * <p>Lists available snapshots of a specified Neptune Analytics
         * graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ListGraphSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphSnapshotsOutcome ListGraphSnapshots(const Model::ListGraphSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for ListGraphSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGraphSnapshotsRequestT = Model::ListGraphSnapshotsRequest>
        Model::ListGraphSnapshotsOutcomeCallable ListGraphSnapshotsCallable(const ListGraphSnapshotsRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ListGraphSnapshots, request);
        }

        /**
         * An Async wrapper for ListGraphSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGraphSnapshotsRequestT = Model::ListGraphSnapshotsRequest>
        void ListGraphSnapshotsAsync(const ListGraphSnapshotsRequestT& request, const ListGraphSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ListGraphSnapshots, request, handler, context);
        }

        /**
         * <p>Lists available Neptune Analytics graphs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ListGraphs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphsOutcome ListGraphs(const Model::ListGraphsRequest& request) const;

        /**
         * A Callable wrapper for ListGraphs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGraphsRequestT = Model::ListGraphsRequest>
        Model::ListGraphsOutcomeCallable ListGraphsCallable(const ListGraphsRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ListGraphs, request);
        }

        /**
         * An Async wrapper for ListGraphs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGraphsRequestT = Model::ListGraphsRequest>
        void ListGraphsAsync(const ListGraphsRequestT& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ListGraphs, request, handler, context);
        }

        /**
         * <p>Lists import tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ListImportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportTasksOutcome ListImportTasks(const Model::ListImportTasksRequest& request) const;

        /**
         * A Callable wrapper for ListImportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportTasksRequestT = Model::ListImportTasksRequest>
        Model::ListImportTasksOutcomeCallable ListImportTasksCallable(const ListImportTasksRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ListImportTasks, request);
        }

        /**
         * An Async wrapper for ListImportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportTasksRequestT = Model::ListImportTasksRequest>
        void ListImportTasksAsync(const ListImportTasksRequestT& request, const ListImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ListImportTasks, request, handler, context);
        }

        /**
         * <p>Lists private endpoints for a specified Neptune Analytics
         * graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ListPrivateGraphEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrivateGraphEndpointsOutcome ListPrivateGraphEndpoints(const Model::ListPrivateGraphEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListPrivateGraphEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPrivateGraphEndpointsRequestT = Model::ListPrivateGraphEndpointsRequest>
        Model::ListPrivateGraphEndpointsOutcomeCallable ListPrivateGraphEndpointsCallable(const ListPrivateGraphEndpointsRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ListPrivateGraphEndpoints, request);
        }

        /**
         * An Async wrapper for ListPrivateGraphEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPrivateGraphEndpointsRequestT = Model::ListPrivateGraphEndpointsRequest>
        void ListPrivateGraphEndpointsAsync(const ListPrivateGraphEndpointsRequestT& request, const ListPrivateGraphEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ListPrivateGraphEndpoints, request, handler, context);
        }

        /**
         * <p>Lists active openCypher queries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ListQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueriesOutcome ListQueries(const Model::ListQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueriesRequestT = Model::ListQueriesRequest>
        Model::ListQueriesOutcomeCallable ListQueriesCallable(const ListQueriesRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ListQueries, request);
        }

        /**
         * An Async wrapper for ListQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueriesRequestT = Model::ListQueriesRequest>
        void ListQueriesAsync(const ListQueriesRequestT& request, const ListQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ListQueries, request, handler, context);
        }

        /**
         * <p>Lists tags associated with a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Empties the data from a specified Neptune Analytics graph.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ResetGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetGraphOutcome ResetGraph(const Model::ResetGraphRequest& request) const;

        /**
         * A Callable wrapper for ResetGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetGraphRequestT = Model::ResetGraphRequest>
        Model::ResetGraphOutcomeCallable ResetGraphCallable(const ResetGraphRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::ResetGraph, request);
        }

        /**
         * An Async wrapper for ResetGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetGraphRequestT = Model::ResetGraphRequest>
        void ResetGraphAsync(const ResetGraphRequestT& request, const ResetGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::ResetGraph, request, handler, context);
        }

        /**
         * <p>Restores a graph from a snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/RestoreGraphFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreGraphFromSnapshotOutcome RestoreGraphFromSnapshot(const Model::RestoreGraphFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreGraphFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreGraphFromSnapshotRequestT = Model::RestoreGraphFromSnapshotRequest>
        Model::RestoreGraphFromSnapshotOutcomeCallable RestoreGraphFromSnapshotCallable(const RestoreGraphFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::RestoreGraphFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreGraphFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreGraphFromSnapshotRequestT = Model::RestoreGraphFromSnapshotRequest>
        void RestoreGraphFromSnapshotAsync(const RestoreGraphFromSnapshotRequestT& request, const RestoreGraphFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::RestoreGraphFromSnapshot, request, handler, context);
        }

        /**
         * <p>Adds tags to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of a specified Neptune Analytics
         * graph</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/UpdateGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGraphOutcome UpdateGraph(const Model::UpdateGraphRequest& request) const;

        /**
         * A Callable wrapper for UpdateGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGraphRequestT = Model::UpdateGraphRequest>
        Model::UpdateGraphOutcomeCallable UpdateGraphCallable(const UpdateGraphRequestT& request) const
        {
            return SubmitCallable(&NeptuneGraphClient::UpdateGraph, request);
        }

        /**
         * An Async wrapper for UpdateGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGraphRequestT = Model::UpdateGraphRequest>
        void UpdateGraphAsync(const UpdateGraphRequestT& request, const UpdateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneGraphClient::UpdateGraph, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NeptuneGraphEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NeptuneGraphClient>;
      void init(const NeptuneGraphClientConfiguration& clientConfiguration);

      NeptuneGraphClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NeptuneGraphEndpointProviderBase> m_endpointProvider;
  };

} // namespace NeptuneGraph
} // namespace Aws
