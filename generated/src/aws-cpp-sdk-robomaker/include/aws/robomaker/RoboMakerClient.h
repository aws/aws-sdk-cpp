/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/robomaker/RoboMakerServiceClientModel.h>

namespace Aws
{
namespace RoboMaker
{
  /**
   * <p>This section provides documentation for the AWS RoboMaker API operations.</p>
   */
  class AWS_ROBOMAKER_API RoboMakerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RoboMakerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RoboMakerClientConfiguration ClientConfigurationType;
      typedef RoboMakerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration(),
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RoboMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RoboMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RoboMakerClient();

        /**
         * <p>Deletes one or more worlds in a batch operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDeleteWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteWorldsOutcome BatchDeleteWorlds(const Model::BatchDeleteWorldsRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteWorlds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteWorldsRequestT = Model::BatchDeleteWorldsRequest>
        Model::BatchDeleteWorldsOutcomeCallable BatchDeleteWorldsCallable(const BatchDeleteWorldsRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::BatchDeleteWorlds, request);
        }

        /**
         * An Async wrapper for BatchDeleteWorlds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteWorldsRequestT = Model::BatchDeleteWorldsRequest>
        void BatchDeleteWorldsAsync(const BatchDeleteWorldsRequestT& request, const BatchDeleteWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::BatchDeleteWorlds, request, handler, context);
        }

        /**
         * <p>Describes one or more simulation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeSimulationJobOutcome BatchDescribeSimulationJob(const Model::BatchDescribeSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for BatchDescribeSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDescribeSimulationJobRequestT = Model::BatchDescribeSimulationJobRequest>
        Model::BatchDescribeSimulationJobOutcomeCallable BatchDescribeSimulationJobCallable(const BatchDescribeSimulationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::BatchDescribeSimulationJob, request);
        }

        /**
         * An Async wrapper for BatchDescribeSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDescribeSimulationJobRequestT = Model::BatchDescribeSimulationJobRequest>
        void BatchDescribeSimulationJobAsync(const BatchDescribeSimulationJobRequestT& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::BatchDescribeSimulationJob, request, handler, context);
        }

        /**
         * <p>Cancels the specified simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobOutcome CancelSimulationJob(const Model::CancelSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for CancelSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSimulationJobRequestT = Model::CancelSimulationJobRequest>
        Model::CancelSimulationJobOutcomeCallable CancelSimulationJobCallable(const CancelSimulationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CancelSimulationJob, request);
        }

        /**
         * An Async wrapper for CancelSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSimulationJobRequestT = Model::CancelSimulationJobRequest>
        void CancelSimulationJobAsync(const CancelSimulationJobRequestT& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CancelSimulationJob, request, handler, context);
        }

        /**
         * <p>Cancels a simulation job batch. When you cancel a simulation job batch, you
         * are also cancelling all of the active simulation jobs created as part of the
         * batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobBatchOutcome CancelSimulationJobBatch(const Model::CancelSimulationJobBatchRequest& request) const;

        /**
         * A Callable wrapper for CancelSimulationJobBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSimulationJobBatchRequestT = Model::CancelSimulationJobBatchRequest>
        Model::CancelSimulationJobBatchOutcomeCallable CancelSimulationJobBatchCallable(const CancelSimulationJobBatchRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CancelSimulationJobBatch, request);
        }

        /**
         * An Async wrapper for CancelSimulationJobBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSimulationJobBatchRequestT = Model::CancelSimulationJobBatchRequest>
        void CancelSimulationJobBatchAsync(const CancelSimulationJobBatchRequestT& request, const CancelSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CancelSimulationJobBatch, request, handler, context);
        }

        /**
         * <p>Cancels the specified export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldExportJobOutcome CancelWorldExportJob(const Model::CancelWorldExportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelWorldExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelWorldExportJobRequestT = Model::CancelWorldExportJobRequest>
        Model::CancelWorldExportJobOutcomeCallable CancelWorldExportJobCallable(const CancelWorldExportJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CancelWorldExportJob, request);
        }

        /**
         * An Async wrapper for CancelWorldExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelWorldExportJobRequestT = Model::CancelWorldExportJobRequest>
        void CancelWorldExportJobAsync(const CancelWorldExportJobRequestT& request, const CancelWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CancelWorldExportJob, request, handler, context);
        }

        /**
         * <p>Cancels the specified world generator job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldGenerationJobOutcome CancelWorldGenerationJob(const Model::CancelWorldGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for CancelWorldGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelWorldGenerationJobRequestT = Model::CancelWorldGenerationJobRequest>
        Model::CancelWorldGenerationJobOutcomeCallable CancelWorldGenerationJobCallable(const CancelWorldGenerationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CancelWorldGenerationJob, request);
        }

        /**
         * An Async wrapper for CancelWorldGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelWorldGenerationJobRequestT = Model::CancelWorldGenerationJobRequest>
        void CancelWorldGenerationJobAsync(const CancelWorldGenerationJobRequestT& request, const CancelWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CancelWorldGenerationJob, request, handler, context);
        }

        /**
         * <p>Creates a robot application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationOutcome CreateRobotApplication(const Model::CreateRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRobotApplicationRequestT = Model::CreateRobotApplicationRequest>
        Model::CreateRobotApplicationOutcomeCallable CreateRobotApplicationCallable(const CreateRobotApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateRobotApplication, request);
        }

        /**
         * An Async wrapper for CreateRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRobotApplicationRequestT = Model::CreateRobotApplicationRequest>
        void CreateRobotApplicationAsync(const CreateRobotApplicationRequestT& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateRobotApplication, request, handler, context);
        }

        /**
         * <p>Creates a version of a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationVersionOutcome CreateRobotApplicationVersion(const Model::CreateRobotApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateRobotApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRobotApplicationVersionRequestT = Model::CreateRobotApplicationVersionRequest>
        Model::CreateRobotApplicationVersionOutcomeCallable CreateRobotApplicationVersionCallable(const CreateRobotApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateRobotApplicationVersion, request);
        }

        /**
         * An Async wrapper for CreateRobotApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRobotApplicationVersionRequestT = Model::CreateRobotApplicationVersionRequest>
        void CreateRobotApplicationVersionAsync(const CreateRobotApplicationVersionRequestT& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateRobotApplicationVersion, request, handler, context);
        }

        /**
         * <p>Creates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationOutcome CreateSimulationApplication(const Model::CreateSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSimulationApplicationRequestT = Model::CreateSimulationApplicationRequest>
        Model::CreateSimulationApplicationOutcomeCallable CreateSimulationApplicationCallable(const CreateSimulationApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateSimulationApplication, request);
        }

        /**
         * An Async wrapper for CreateSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSimulationApplicationRequestT = Model::CreateSimulationApplicationRequest>
        void CreateSimulationApplicationAsync(const CreateSimulationApplicationRequestT& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateSimulationApplication, request, handler, context);
        }

        /**
         * <p>Creates a simulation application with a specific revision id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationVersionOutcome CreateSimulationApplicationVersion(const Model::CreateSimulationApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateSimulationApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSimulationApplicationVersionRequestT = Model::CreateSimulationApplicationVersionRequest>
        Model::CreateSimulationApplicationVersionOutcomeCallable CreateSimulationApplicationVersionCallable(const CreateSimulationApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateSimulationApplicationVersion, request);
        }

        /**
         * An Async wrapper for CreateSimulationApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSimulationApplicationVersionRequestT = Model::CreateSimulationApplicationVersionRequest>
        void CreateSimulationApplicationVersionAsync(const CreateSimulationApplicationVersionRequestT& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateSimulationApplicationVersion, request, handler, context);
        }

        /**
         * <p>Creates a simulation job.</p>  <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationJobOutcome CreateSimulationJob(const Model::CreateSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSimulationJobRequestT = Model::CreateSimulationJobRequest>
        Model::CreateSimulationJobOutcomeCallable CreateSimulationJobCallable(const CreateSimulationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateSimulationJob, request);
        }

        /**
         * An Async wrapper for CreateSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSimulationJobRequestT = Model::CreateSimulationJobRequest>
        void CreateSimulationJobAsync(const CreateSimulationJobRequestT& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateSimulationJob, request, handler, context);
        }

        /**
         * <p>Creates a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldExportJobOutcome CreateWorldExportJob(const Model::CreateWorldExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateWorldExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorldExportJobRequestT = Model::CreateWorldExportJobRequest>
        Model::CreateWorldExportJobOutcomeCallable CreateWorldExportJobCallable(const CreateWorldExportJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateWorldExportJob, request);
        }

        /**
         * An Async wrapper for CreateWorldExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorldExportJobRequestT = Model::CreateWorldExportJobRequest>
        void CreateWorldExportJobAsync(const CreateWorldExportJobRequestT& request, const CreateWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateWorldExportJob, request, handler, context);
        }

        /**
         * <p>Creates worlds using the specified template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldGenerationJobOutcome CreateWorldGenerationJob(const Model::CreateWorldGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateWorldGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorldGenerationJobRequestT = Model::CreateWorldGenerationJobRequest>
        Model::CreateWorldGenerationJobOutcomeCallable CreateWorldGenerationJobCallable(const CreateWorldGenerationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateWorldGenerationJob, request);
        }

        /**
         * An Async wrapper for CreateWorldGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorldGenerationJobRequestT = Model::CreateWorldGenerationJobRequest>
        void CreateWorldGenerationJobAsync(const CreateWorldGenerationJobRequestT& request, const CreateWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateWorldGenerationJob, request, handler, context);
        }

        /**
         * <p>Creates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldTemplateOutcome CreateWorldTemplate(const Model::CreateWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorldTemplateRequestT = Model::CreateWorldTemplateRequest>
        Model::CreateWorldTemplateOutcomeCallable CreateWorldTemplateCallable(const CreateWorldTemplateRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::CreateWorldTemplate, request);
        }

        /**
         * An Async wrapper for CreateWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorldTemplateRequestT = Model::CreateWorldTemplateRequest>
        void CreateWorldTemplateAsync(const CreateWorldTemplateRequestT& request, const CreateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::CreateWorldTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRobotApplicationOutcome DeleteRobotApplication(const Model::DeleteRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRobotApplicationRequestT = Model::DeleteRobotApplicationRequest>
        Model::DeleteRobotApplicationOutcomeCallable DeleteRobotApplicationCallable(const DeleteRobotApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DeleteRobotApplication, request);
        }

        /**
         * An Async wrapper for DeleteRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRobotApplicationRequestT = Model::DeleteRobotApplicationRequest>
        void DeleteRobotApplicationAsync(const DeleteRobotApplicationRequestT& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DeleteRobotApplication, request, handler, context);
        }

        /**
         * <p>Deletes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSimulationApplicationOutcome DeleteSimulationApplication(const Model::DeleteSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSimulationApplicationRequestT = Model::DeleteSimulationApplicationRequest>
        Model::DeleteSimulationApplicationOutcomeCallable DeleteSimulationApplicationCallable(const DeleteSimulationApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DeleteSimulationApplication, request);
        }

        /**
         * An Async wrapper for DeleteSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSimulationApplicationRequestT = Model::DeleteSimulationApplicationRequest>
        void DeleteSimulationApplicationAsync(const DeleteSimulationApplicationRequestT& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DeleteSimulationApplication, request, handler, context);
        }

        /**
         * <p>Deletes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorldTemplateOutcome DeleteWorldTemplate(const Model::DeleteWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorldTemplateRequestT = Model::DeleteWorldTemplateRequest>
        Model::DeleteWorldTemplateOutcomeCallable DeleteWorldTemplateCallable(const DeleteWorldTemplateRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DeleteWorldTemplate, request);
        }

        /**
         * An Async wrapper for DeleteWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorldTemplateRequestT = Model::DeleteWorldTemplateRequest>
        void DeleteWorldTemplateAsync(const DeleteWorldTemplateRequestT& request, const DeleteWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DeleteWorldTemplate, request, handler, context);
        }

        /**
         * <p>Describes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRobotApplicationOutcome DescribeRobotApplication(const Model::DescribeRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRobotApplicationRequestT = Model::DescribeRobotApplicationRequest>
        Model::DescribeRobotApplicationOutcomeCallable DescribeRobotApplicationCallable(const DescribeRobotApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeRobotApplication, request);
        }

        /**
         * An Async wrapper for DescribeRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRobotApplicationRequestT = Model::DescribeRobotApplicationRequest>
        void DescribeRobotApplicationAsync(const DescribeRobotApplicationRequestT& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeRobotApplication, request, handler, context);
        }

        /**
         * <p>Describes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationApplicationOutcome DescribeSimulationApplication(const Model::DescribeSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSimulationApplicationRequestT = Model::DescribeSimulationApplicationRequest>
        Model::DescribeSimulationApplicationOutcomeCallable DescribeSimulationApplicationCallable(const DescribeSimulationApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeSimulationApplication, request);
        }

        /**
         * An Async wrapper for DescribeSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSimulationApplicationRequestT = Model::DescribeSimulationApplicationRequest>
        void DescribeSimulationApplicationAsync(const DescribeSimulationApplicationRequestT& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeSimulationApplication, request, handler, context);
        }

        /**
         * <p>Describes a simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobOutcome DescribeSimulationJob(const Model::DescribeSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSimulationJobRequestT = Model::DescribeSimulationJobRequest>
        Model::DescribeSimulationJobOutcomeCallable DescribeSimulationJobCallable(const DescribeSimulationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeSimulationJob, request);
        }

        /**
         * An Async wrapper for DescribeSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSimulationJobRequestT = Model::DescribeSimulationJobRequest>
        void DescribeSimulationJobAsync(const DescribeSimulationJobRequestT& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeSimulationJob, request, handler, context);
        }

        /**
         * <p>Describes a simulation job batch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobBatchOutcome DescribeSimulationJobBatch(const Model::DescribeSimulationJobBatchRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulationJobBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSimulationJobBatchRequestT = Model::DescribeSimulationJobBatchRequest>
        Model::DescribeSimulationJobBatchOutcomeCallable DescribeSimulationJobBatchCallable(const DescribeSimulationJobBatchRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeSimulationJobBatch, request);
        }

        /**
         * An Async wrapper for DescribeSimulationJobBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSimulationJobBatchRequestT = Model::DescribeSimulationJobBatchRequest>
        void DescribeSimulationJobBatchAsync(const DescribeSimulationJobBatchRequestT& request, const DescribeSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeSimulationJobBatch, request, handler, context);
        }

        /**
         * <p>Describes a world.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorld">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldOutcome DescribeWorld(const Model::DescribeWorldRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorld that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorldRequestT = Model::DescribeWorldRequest>
        Model::DescribeWorldOutcomeCallable DescribeWorldCallable(const DescribeWorldRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeWorld, request);
        }

        /**
         * An Async wrapper for DescribeWorld that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorldRequestT = Model::DescribeWorldRequest>
        void DescribeWorldAsync(const DescribeWorldRequestT& request, const DescribeWorldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeWorld, request, handler, context);
        }

        /**
         * <p>Describes a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldExportJobOutcome DescribeWorldExportJob(const Model::DescribeWorldExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorldExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorldExportJobRequestT = Model::DescribeWorldExportJobRequest>
        Model::DescribeWorldExportJobOutcomeCallable DescribeWorldExportJobCallable(const DescribeWorldExportJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeWorldExportJob, request);
        }

        /**
         * An Async wrapper for DescribeWorldExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorldExportJobRequestT = Model::DescribeWorldExportJobRequest>
        void DescribeWorldExportJobAsync(const DescribeWorldExportJobRequestT& request, const DescribeWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeWorldExportJob, request, handler, context);
        }

        /**
         * <p>Describes a world generation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldGenerationJobOutcome DescribeWorldGenerationJob(const Model::DescribeWorldGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorldGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorldGenerationJobRequestT = Model::DescribeWorldGenerationJobRequest>
        Model::DescribeWorldGenerationJobOutcomeCallable DescribeWorldGenerationJobCallable(const DescribeWorldGenerationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeWorldGenerationJob, request);
        }

        /**
         * An Async wrapper for DescribeWorldGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorldGenerationJobRequestT = Model::DescribeWorldGenerationJobRequest>
        void DescribeWorldGenerationJobAsync(const DescribeWorldGenerationJobRequestT& request, const DescribeWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeWorldGenerationJob, request, handler, context);
        }

        /**
         * <p>Describes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldTemplateOutcome DescribeWorldTemplate(const Model::DescribeWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorldTemplateRequestT = Model::DescribeWorldTemplateRequest>
        Model::DescribeWorldTemplateOutcomeCallable DescribeWorldTemplateCallable(const DescribeWorldTemplateRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::DescribeWorldTemplate, request);
        }

        /**
         * An Async wrapper for DescribeWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorldTemplateRequestT = Model::DescribeWorldTemplateRequest>
        void DescribeWorldTemplateAsync(const DescribeWorldTemplateRequestT& request, const DescribeWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::DescribeWorldTemplate, request, handler, context);
        }

        /**
         * <p>Gets the world template body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/GetWorldTemplateBody">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorldTemplateBodyOutcome GetWorldTemplateBody(const Model::GetWorldTemplateBodyRequest& request) const;

        /**
         * A Callable wrapper for GetWorldTemplateBody that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorldTemplateBodyRequestT = Model::GetWorldTemplateBodyRequest>
        Model::GetWorldTemplateBodyOutcomeCallable GetWorldTemplateBodyCallable(const GetWorldTemplateBodyRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::GetWorldTemplateBody, request);
        }

        /**
         * An Async wrapper for GetWorldTemplateBody that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorldTemplateBodyRequestT = Model::GetWorldTemplateBodyRequest>
        void GetWorldTemplateBodyAsync(const GetWorldTemplateBodyRequestT& request, const GetWorldTemplateBodyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::GetWorldTemplateBody, request, handler, context);
        }

        /**
         * <p>Returns a list of robot application. You can optionally provide filters to
         * retrieve specific robot applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobotApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRobotApplicationsOutcome ListRobotApplications(const Model::ListRobotApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListRobotApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRobotApplicationsRequestT = Model::ListRobotApplicationsRequest>
        Model::ListRobotApplicationsOutcomeCallable ListRobotApplicationsCallable(const ListRobotApplicationsRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListRobotApplications, request);
        }

        /**
         * An Async wrapper for ListRobotApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRobotApplicationsRequestT = Model::ListRobotApplicationsRequest>
        void ListRobotApplicationsAsync(const ListRobotApplicationsRequestT& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListRobotApplications, request, handler, context);
        }

        /**
         * <p>Returns a list of simulation applications. You can optionally provide filters
         * to retrieve specific simulation applications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationApplicationsOutcome ListSimulationApplications(const Model::ListSimulationApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListSimulationApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSimulationApplicationsRequestT = Model::ListSimulationApplicationsRequest>
        Model::ListSimulationApplicationsOutcomeCallable ListSimulationApplicationsCallable(const ListSimulationApplicationsRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListSimulationApplications, request);
        }

        /**
         * An Async wrapper for ListSimulationApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSimulationApplicationsRequestT = Model::ListSimulationApplicationsRequest>
        void ListSimulationApplicationsAsync(const ListSimulationApplicationsRequestT& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListSimulationApplications, request, handler, context);
        }

        /**
         * <p>Returns a list simulation job batches. You can optionally provide filters to
         * retrieve specific simulation batch jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobBatchesOutcome ListSimulationJobBatches(const Model::ListSimulationJobBatchesRequest& request) const;

        /**
         * A Callable wrapper for ListSimulationJobBatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSimulationJobBatchesRequestT = Model::ListSimulationJobBatchesRequest>
        Model::ListSimulationJobBatchesOutcomeCallable ListSimulationJobBatchesCallable(const ListSimulationJobBatchesRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListSimulationJobBatches, request);
        }

        /**
         * An Async wrapper for ListSimulationJobBatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSimulationJobBatchesRequestT = Model::ListSimulationJobBatchesRequest>
        void ListSimulationJobBatchesAsync(const ListSimulationJobBatchesRequestT& request, const ListSimulationJobBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListSimulationJobBatches, request, handler, context);
        }

        /**
         * <p>Returns a list of simulation jobs. You can optionally provide filters to
         * retrieve specific simulation jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobsOutcome ListSimulationJobs(const Model::ListSimulationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSimulationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSimulationJobsRequestT = Model::ListSimulationJobsRequest>
        Model::ListSimulationJobsOutcomeCallable ListSimulationJobsCallable(const ListSimulationJobsRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListSimulationJobs, request);
        }

        /**
         * An Async wrapper for ListSimulationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSimulationJobsRequestT = Model::ListSimulationJobsRequest>
        void ListSimulationJobsAsync(const ListSimulationJobsRequestT& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListSimulationJobs, request, handler, context);
        }

        /**
         * <p>Lists all tags on a AWS RoboMaker resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists world export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldExportJobsOutcome ListWorldExportJobs(const Model::ListWorldExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListWorldExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorldExportJobsRequestT = Model::ListWorldExportJobsRequest>
        Model::ListWorldExportJobsOutcomeCallable ListWorldExportJobsCallable(const ListWorldExportJobsRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListWorldExportJobs, request);
        }

        /**
         * An Async wrapper for ListWorldExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorldExportJobsRequestT = Model::ListWorldExportJobsRequest>
        void ListWorldExportJobsAsync(const ListWorldExportJobsRequestT& request, const ListWorldExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListWorldExportJobs, request, handler, context);
        }

        /**
         * <p>Lists world generator jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldGenerationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldGenerationJobsOutcome ListWorldGenerationJobs(const Model::ListWorldGenerationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListWorldGenerationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorldGenerationJobsRequestT = Model::ListWorldGenerationJobsRequest>
        Model::ListWorldGenerationJobsOutcomeCallable ListWorldGenerationJobsCallable(const ListWorldGenerationJobsRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListWorldGenerationJobs, request);
        }

        /**
         * An Async wrapper for ListWorldGenerationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorldGenerationJobsRequestT = Model::ListWorldGenerationJobsRequest>
        void ListWorldGenerationJobsAsync(const ListWorldGenerationJobsRequestT& request, const ListWorldGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListWorldGenerationJobs, request, handler, context);
        }

        /**
         * <p>Lists world templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldTemplatesOutcome ListWorldTemplates(const Model::ListWorldTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListWorldTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorldTemplatesRequestT = Model::ListWorldTemplatesRequest>
        Model::ListWorldTemplatesOutcomeCallable ListWorldTemplatesCallable(const ListWorldTemplatesRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListWorldTemplates, request);
        }

        /**
         * An Async wrapper for ListWorldTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorldTemplatesRequestT = Model::ListWorldTemplatesRequest>
        void ListWorldTemplatesAsync(const ListWorldTemplatesRequestT& request, const ListWorldTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListWorldTemplates, request, handler, context);
        }

        /**
         * <p>Lists worlds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldsOutcome ListWorlds(const Model::ListWorldsRequest& request) const;

        /**
         * A Callable wrapper for ListWorlds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorldsRequestT = Model::ListWorldsRequest>
        Model::ListWorldsOutcomeCallable ListWorldsCallable(const ListWorldsRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::ListWorlds, request);
        }

        /**
         * An Async wrapper for ListWorlds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorldsRequestT = Model::ListWorldsRequest>
        void ListWorldsAsync(const ListWorldsRequestT& request, const ListWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::ListWorlds, request, handler, context);
        }

        /**
         * <p>Restarts a running simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RestartSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::RestartSimulationJobOutcome RestartSimulationJob(const Model::RestartSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for RestartSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestartSimulationJobRequestT = Model::RestartSimulationJobRequest>
        Model::RestartSimulationJobOutcomeCallable RestartSimulationJobCallable(const RestartSimulationJobRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::RestartSimulationJob, request);
        }

        /**
         * An Async wrapper for RestartSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestartSimulationJobRequestT = Model::RestartSimulationJobRequest>
        void RestartSimulationJobAsync(const RestartSimulationJobRequestT& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::RestartSimulationJob, request, handler, context);
        }

        /**
         * <p>Starts a new simulation job batch. The batch is defined using one or more
         * <code>SimulationJobRequest</code> objects. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/StartSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSimulationJobBatchOutcome StartSimulationJobBatch(const Model::StartSimulationJobBatchRequest& request) const;

        /**
         * A Callable wrapper for StartSimulationJobBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSimulationJobBatchRequestT = Model::StartSimulationJobBatchRequest>
        Model::StartSimulationJobBatchOutcomeCallable StartSimulationJobBatchCallable(const StartSimulationJobBatchRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::StartSimulationJobBatch, request);
        }

        /**
         * An Async wrapper for StartSimulationJobBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSimulationJobBatchRequestT = Model::StartSimulationJobBatchRequest>
        void StartSimulationJobBatchAsync(const StartSimulationJobBatchRequestT& request, const StartSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::StartSimulationJobBatch, request, handler, context);
        }

        /**
         * <p>Adds or edits tags for a AWS RoboMaker resource.</p> <p>Each tag consists of
         * a tag key and a tag value. Tag keys and tag values are both required, but tag
         * values can be empty strings. </p> <p>For information about the rules that apply
         * to tag keys and tag values, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified AWS RoboMaker resource.</p>
         * <p>To remove a tag, specify the tag key. To change the tag value of an existing
         * tag key, use <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/API_TagResource.html">
         * <code>TagResource</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRobotApplicationOutcome UpdateRobotApplication(const Model::UpdateRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRobotApplicationRequestT = Model::UpdateRobotApplicationRequest>
        Model::UpdateRobotApplicationOutcomeCallable UpdateRobotApplicationCallable(const UpdateRobotApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::UpdateRobotApplication, request);
        }

        /**
         * An Async wrapper for UpdateRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRobotApplicationRequestT = Model::UpdateRobotApplicationRequest>
        void UpdateRobotApplicationAsync(const UpdateRobotApplicationRequestT& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::UpdateRobotApplication, request, handler, context);
        }

        /**
         * <p>Updates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSimulationApplicationOutcome UpdateSimulationApplication(const Model::UpdateSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSimulationApplicationRequestT = Model::UpdateSimulationApplicationRequest>
        Model::UpdateSimulationApplicationOutcomeCallable UpdateSimulationApplicationCallable(const UpdateSimulationApplicationRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::UpdateSimulationApplication, request);
        }

        /**
         * An Async wrapper for UpdateSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSimulationApplicationRequestT = Model::UpdateSimulationApplicationRequest>
        void UpdateSimulationApplicationAsync(const UpdateSimulationApplicationRequestT& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::UpdateSimulationApplication, request, handler, context);
        }

        /**
         * <p>Updates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorldTemplateOutcome UpdateWorldTemplate(const Model::UpdateWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorldTemplateRequestT = Model::UpdateWorldTemplateRequest>
        Model::UpdateWorldTemplateOutcomeCallable UpdateWorldTemplateCallable(const UpdateWorldTemplateRequestT& request) const
        {
            return SubmitCallable(&RoboMakerClient::UpdateWorldTemplate, request);
        }

        /**
         * An Async wrapper for UpdateWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorldTemplateRequestT = Model::UpdateWorldTemplateRequest>
        void UpdateWorldTemplateAsync(const UpdateWorldTemplateRequestT& request, const UpdateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RoboMakerClient::UpdateWorldTemplate, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RoboMakerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RoboMakerClient>;
      void init(const RoboMakerClientConfiguration& clientConfiguration);

      RoboMakerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RoboMakerEndpointProviderBase> m_endpointProvider;
  };

} // namespace RoboMaker
} // namespace Aws
