/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorServiceClientModel.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
  /**
   * <p>This API reference provides descriptions, syntax, and other details about
   * each of the actions and data types for AWS Migration Hub Orchestrator. The topic
   * for each action shows the API request parameters and responses. Alternatively,
   * you can use one of the AWS SDKs to access an API that is tailored to the
   * programming language or platform that you're using.</p>
   */
  class AWS_MIGRATIONHUBORCHESTRATOR_API MigrationHubOrchestratorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubOrchestratorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MigrationHubOrchestratorClientConfiguration ClientConfigurationType;
      typedef MigrationHubOrchestratorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration = Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration(),
                                       std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider = nullptr,
                                       const Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration = Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubOrchestratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider = nullptr,
                                       const Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration = Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::Auth::AWSCredentials& credentials,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubOrchestratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubOrchestratorClient();

        /**
         * <p>Creates a migration workflow template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const CreateTemplateRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::CreateTemplate, request);
        }

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        void CreateTemplateAsync(const CreateTemplateRequestT& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::CreateTemplate, request, handler, context);
        }

        /**
         * <p>Create a workflow to orchestrate your migrations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const CreateWorkflowRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::CreateWorkflow, request);
        }

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        void CreateWorkflowAsync(const CreateWorkflowRequestT& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::CreateWorkflow, request, handler, context);
        }

        /**
         * <p>Create a step in the migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowStepOutcome CreateWorkflowStep(const Model::CreateWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkflowStepRequestT = Model::CreateWorkflowStepRequest>
        Model::CreateWorkflowStepOutcomeCallable CreateWorkflowStepCallable(const CreateWorkflowStepRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::CreateWorkflowStep, request);
        }

        /**
         * An Async wrapper for CreateWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowStepRequestT = Model::CreateWorkflowStepRequest>
        void CreateWorkflowStepAsync(const CreateWorkflowStepRequestT& request, const CreateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::CreateWorkflowStep, request, handler, context);
        }

        /**
         * <p>Create a step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowStepGroupOutcome CreateWorkflowStepGroup(const Model::CreateWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkflowStepGroupRequestT = Model::CreateWorkflowStepGroupRequest>
        Model::CreateWorkflowStepGroupOutcomeCallable CreateWorkflowStepGroupCallable(const CreateWorkflowStepGroupRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::CreateWorkflowStepGroup, request);
        }

        /**
         * An Async wrapper for CreateWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowStepGroupRequestT = Model::CreateWorkflowStepGroupRequest>
        void CreateWorkflowStepGroupAsync(const CreateWorkflowStepGroupRequestT& request, const CreateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::CreateWorkflowStepGroup, request, handler, context);
        }

        /**
         * <p>Deletes a migration workflow template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const DeleteTemplateRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::DeleteTemplate, request);
        }

        /**
         * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        void DeleteTemplateAsync(const DeleteTemplateRequestT& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::DeleteTemplate, request, handler, context);
        }

        /**
         * <p>Delete a migration workflow. You must pause a running workflow in Migration
         * Hub Orchestrator console to delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const DeleteWorkflowRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::DeleteWorkflow, request);
        }

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        void DeleteWorkflowAsync(const DeleteWorkflowRequestT& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::DeleteWorkflow, request, handler, context);
        }

        /**
         * <p>Delete a step in a migration workflow. Pause the workflow to delete a running
         * step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowStepOutcome DeleteWorkflowStep(const Model::DeleteWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowStepRequestT = Model::DeleteWorkflowStepRequest>
        Model::DeleteWorkflowStepOutcomeCallable DeleteWorkflowStepCallable(const DeleteWorkflowStepRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::DeleteWorkflowStep, request);
        }

        /**
         * An Async wrapper for DeleteWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowStepRequestT = Model::DeleteWorkflowStepRequest>
        void DeleteWorkflowStepAsync(const DeleteWorkflowStepRequestT& request, const DeleteWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::DeleteWorkflowStep, request, handler, context);
        }

        /**
         * <p>Delete a step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowStepGroupOutcome DeleteWorkflowStepGroup(const Model::DeleteWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowStepGroupRequestT = Model::DeleteWorkflowStepGroupRequest>
        Model::DeleteWorkflowStepGroupOutcomeCallable DeleteWorkflowStepGroupCallable(const DeleteWorkflowStepGroupRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::DeleteWorkflowStepGroup, request);
        }

        /**
         * An Async wrapper for DeleteWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowStepGroupRequestT = Model::DeleteWorkflowStepGroupRequest>
        void DeleteWorkflowStepGroupAsync(const DeleteWorkflowStepGroupRequestT& request, const DeleteWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::DeleteWorkflowStepGroup, request, handler, context);
        }

        /**
         * <p>Get the template you want to use for creating a migration
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        Model::GetTemplateOutcomeCallable GetTemplateCallable(const GetTemplateRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::GetTemplate, request);
        }

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        void GetTemplateAsync(const GetTemplateRequestT& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::GetTemplate, request, handler, context);
        }

        /**
         * <p>Get a specific step in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplateStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateStepOutcome GetTemplateStep(const Model::GetTemplateStepRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTemplateStepRequestT = Model::GetTemplateStepRequest>
        Model::GetTemplateStepOutcomeCallable GetTemplateStepCallable(const GetTemplateStepRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::GetTemplateStep, request);
        }

        /**
         * An Async wrapper for GetTemplateStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemplateStepRequestT = Model::GetTemplateStepRequest>
        void GetTemplateStepAsync(const GetTemplateStepRequestT& request, const GetTemplateStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::GetTemplateStep, request, handler, context);
        }

        /**
         * <p>Get a step group in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplateStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateStepGroupOutcome GetTemplateStepGroup(const Model::GetTemplateStepGroupRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTemplateStepGroupRequestT = Model::GetTemplateStepGroupRequest>
        Model::GetTemplateStepGroupOutcomeCallable GetTemplateStepGroupCallable(const GetTemplateStepGroupRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::GetTemplateStepGroup, request);
        }

        /**
         * An Async wrapper for GetTemplateStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemplateStepGroupRequestT = Model::GetTemplateStepGroupRequest>
        void GetTemplateStepGroupAsync(const GetTemplateStepGroupRequestT& request, const GetTemplateStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::GetTemplateStepGroup, request, handler, context);
        }

        /**
         * <p>Get migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const GetWorkflowRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::GetWorkflow, request);
        }

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        void GetWorkflowAsync(const GetWorkflowRequestT& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::GetWorkflow, request, handler, context);
        }

        /**
         * <p>Get a step in the migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepOutcome GetWorkflowStep(const Model::GetWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowStepRequestT = Model::GetWorkflowStepRequest>
        Model::GetWorkflowStepOutcomeCallable GetWorkflowStepCallable(const GetWorkflowStepRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::GetWorkflowStep, request);
        }

        /**
         * An Async wrapper for GetWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowStepRequestT = Model::GetWorkflowStepRequest>
        void GetWorkflowStepAsync(const GetWorkflowStepRequestT& request, const GetWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::GetWorkflowStep, request, handler, context);
        }

        /**
         * <p>Get the step group of a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepGroupOutcome GetWorkflowStepGroup(const Model::GetWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowStepGroupRequestT = Model::GetWorkflowStepGroupRequest>
        Model::GetWorkflowStepGroupOutcomeCallable GetWorkflowStepGroupCallable(const GetWorkflowStepGroupRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::GetWorkflowStepGroup, request);
        }

        /**
         * An Async wrapper for GetWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowStepGroupRequestT = Model::GetWorkflowStepGroupRequest>
        void GetWorkflowStepGroupAsync(const GetWorkflowStepGroupRequestT& request, const GetWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::GetWorkflowStepGroup, request, handler, context);
        }

        /**
         * <p>List AWS Migration Hub Orchestrator plugins.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListPlugins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPluginsOutcome ListPlugins(const Model::ListPluginsRequest& request) const;

        /**
         * A Callable wrapper for ListPlugins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPluginsRequestT = Model::ListPluginsRequest>
        Model::ListPluginsOutcomeCallable ListPluginsCallable(const ListPluginsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListPlugins, request);
        }

        /**
         * An Async wrapper for ListPlugins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPluginsRequestT = Model::ListPluginsRequest>
        void ListPluginsAsync(const ListPluginsRequestT& request, const ListPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListPlugins, request, handler, context);
        }

        /**
         * <p>List the tags added to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>List the step groups in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplateStepGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateStepGroupsOutcome ListTemplateStepGroups(const Model::ListTemplateStepGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateStepGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplateStepGroupsRequestT = Model::ListTemplateStepGroupsRequest>
        Model::ListTemplateStepGroupsOutcomeCallable ListTemplateStepGroupsCallable(const ListTemplateStepGroupsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListTemplateStepGroups, request);
        }

        /**
         * An Async wrapper for ListTemplateStepGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplateStepGroupsRequestT = Model::ListTemplateStepGroupsRequest>
        void ListTemplateStepGroupsAsync(const ListTemplateStepGroupsRequestT& request, const ListTemplateStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListTemplateStepGroups, request, handler, context);
        }

        /**
         * <p>List the steps in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplateSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateStepsOutcome ListTemplateSteps(const Model::ListTemplateStepsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplateStepsRequestT = Model::ListTemplateStepsRequest>
        Model::ListTemplateStepsOutcomeCallable ListTemplateStepsCallable(const ListTemplateStepsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListTemplateSteps, request);
        }

        /**
         * An Async wrapper for ListTemplateSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplateStepsRequestT = Model::ListTemplateStepsRequest>
        void ListTemplateStepsAsync(const ListTemplateStepsRequestT& request, const ListTemplateStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListTemplateSteps, request, handler, context);
        }

        /**
         * <p>List the templates available in Migration Hub Orchestrator to create a
         * migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const ListTemplatesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListTemplates, request);
        }

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        void ListTemplatesAsync(const ListTemplatesRequestT& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListTemplates, request, handler, context);
        }

        /**
         * <p>List the step groups in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflowStepGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowStepGroupsOutcome ListWorkflowStepGroups(const Model::ListWorkflowStepGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowStepGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowStepGroupsRequestT = Model::ListWorkflowStepGroupsRequest>
        Model::ListWorkflowStepGroupsOutcomeCallable ListWorkflowStepGroupsCallable(const ListWorkflowStepGroupsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListWorkflowStepGroups, request);
        }

        /**
         * An Async wrapper for ListWorkflowStepGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowStepGroupsRequestT = Model::ListWorkflowStepGroupsRequest>
        void ListWorkflowStepGroupsAsync(const ListWorkflowStepGroupsRequestT& request, const ListWorkflowStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListWorkflowStepGroups, request, handler, context);
        }

        /**
         * <p>List the steps in a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowStepsOutcome ListWorkflowSteps(const Model::ListWorkflowStepsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowStepsRequestT = Model::ListWorkflowStepsRequest>
        Model::ListWorkflowStepsOutcomeCallable ListWorkflowStepsCallable(const ListWorkflowStepsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListWorkflowSteps, request);
        }

        /**
         * An Async wrapper for ListWorkflowSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowStepsRequestT = Model::ListWorkflowStepsRequest>
        void ListWorkflowStepsAsync(const ListWorkflowStepsRequestT& request, const ListWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListWorkflowSteps, request, handler, context);
        }

        /**
         * <p>List the migration workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsRequestT& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::ListWorkflows, request, handler, context);
        }

        /**
         * <p>Retry a failed step in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/RetryWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryWorkflowStepOutcome RetryWorkflowStep(const Model::RetryWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for RetryWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetryWorkflowStepRequestT = Model::RetryWorkflowStepRequest>
        Model::RetryWorkflowStepOutcomeCallable RetryWorkflowStepCallable(const RetryWorkflowStepRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::RetryWorkflowStep, request);
        }

        /**
         * An Async wrapper for RetryWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetryWorkflowStepRequestT = Model::RetryWorkflowStepRequest>
        void RetryWorkflowStepAsync(const RetryWorkflowStepRequestT& request, const RetryWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::RetryWorkflowStep, request, handler, context);
        }

        /**
         * <p>Start a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StartWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowOutcome StartWorkflow(const Model::StartWorkflowRequest& request) const;

        /**
         * A Callable wrapper for StartWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWorkflowRequestT = Model::StartWorkflowRequest>
        Model::StartWorkflowOutcomeCallable StartWorkflowCallable(const StartWorkflowRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::StartWorkflow, request);
        }

        /**
         * An Async wrapper for StartWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWorkflowRequestT = Model::StartWorkflowRequest>
        void StartWorkflowAsync(const StartWorkflowRequestT& request, const StartWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::StartWorkflow, request, handler, context);
        }

        /**
         * <p>Stop an ongoing migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StopWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkflowOutcome StopWorkflow(const Model::StopWorkflowRequest& request) const;

        /**
         * A Callable wrapper for StopWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopWorkflowRequestT = Model::StopWorkflowRequest>
        Model::StopWorkflowOutcomeCallable StopWorkflowCallable(const StopWorkflowRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::StopWorkflow, request);
        }

        /**
         * An Async wrapper for StopWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopWorkflowRequestT = Model::StopWorkflowRequest>
        void StopWorkflowAsync(const StopWorkflowRequestT& request, const StopWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::StopWorkflow, request, handler, context);
        }

        /**
         * <p>Tag a resource by specifying its Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a migration workflow template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const UpdateTemplateRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::UpdateTemplate, request);
        }

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        void UpdateTemplateAsync(const UpdateTemplateRequestT& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::UpdateTemplate, request, handler, context);
        }

        /**
         * <p>Update a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
        Model::UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const UpdateWorkflowRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::UpdateWorkflow, request);
        }

        /**
         * An Async wrapper for UpdateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
        void UpdateWorkflowAsync(const UpdateWorkflowRequestT& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::UpdateWorkflow, request, handler, context);
        }

        /**
         * <p>Update a step in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowStepOutcome UpdateWorkflowStep(const Model::UpdateWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkflowStepRequestT = Model::UpdateWorkflowStepRequest>
        Model::UpdateWorkflowStepOutcomeCallable UpdateWorkflowStepCallable(const UpdateWorkflowStepRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::UpdateWorkflowStep, request);
        }

        /**
         * An Async wrapper for UpdateWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkflowStepRequestT = Model::UpdateWorkflowStepRequest>
        void UpdateWorkflowStepAsync(const UpdateWorkflowStepRequestT& request, const UpdateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::UpdateWorkflowStep, request, handler, context);
        }

        /**
         * <p>Update the step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowStepGroupOutcome UpdateWorkflowStepGroup(const Model::UpdateWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkflowStepGroupRequestT = Model::UpdateWorkflowStepGroupRequest>
        Model::UpdateWorkflowStepGroupOutcomeCallable UpdateWorkflowStepGroupCallable(const UpdateWorkflowStepGroupRequestT& request) const
        {
            return SubmitCallable(&MigrationHubOrchestratorClient::UpdateWorkflowStepGroup, request);
        }

        /**
         * An Async wrapper for UpdateWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkflowStepGroupRequestT = Model::UpdateWorkflowStepGroupRequest>
        void UpdateWorkflowStepGroupAsync(const UpdateWorkflowStepGroupRequestT& request, const UpdateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubOrchestratorClient::UpdateWorkflowStepGroup, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubOrchestratorClient>;
      void init(const MigrationHubOrchestratorClientConfiguration& clientConfiguration);

      MigrationHubOrchestratorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubOrchestrator
} // namespace Aws
