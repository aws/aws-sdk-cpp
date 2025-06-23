/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/WorkspacesInstancesServiceClientModel.h>

namespace Aws
{
namespace WorkspacesInstances
{
  /**
   * <p>Amazon WorkSpaces Instances provides an API framework for managing virtual
   * workspace environments across multiple AWS regions, enabling programmatic
   * creation and configuration of desktop infrastructure.</p>
   */
  class AWS_WORKSPACESINSTANCES_API WorkspacesInstancesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkspacesInstancesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WorkspacesInstancesClientConfiguration ClientConfigurationType;
      typedef WorkspacesInstancesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkspacesInstancesClient(const Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration& clientConfiguration = Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration(),
                                  std::shared_ptr<WorkspacesInstancesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkspacesInstancesClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<WorkspacesInstancesEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration& clientConfiguration = Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkspacesInstancesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<WorkspacesInstancesEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration& clientConfiguration = Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkspacesInstancesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkspacesInstancesClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkspacesInstancesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkspacesInstancesClient();

        /**
         * <p>Attaches a volume to a WorkSpace Instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/AssociateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVolumeOutcome AssociateVolume(const Model::AssociateVolumeRequest& request) const;

        /**
         * A Callable wrapper for AssociateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateVolumeRequestT = Model::AssociateVolumeRequest>
        Model::AssociateVolumeOutcomeCallable AssociateVolumeCallable(const AssociateVolumeRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::AssociateVolume, request);
        }

        /**
         * An Async wrapper for AssociateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateVolumeRequestT = Model::AssociateVolumeRequest>
        void AssociateVolumeAsync(const AssociateVolumeRequestT& request, const AssociateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::AssociateVolume, request, handler, context);
        }

        /**
         * <p>Creates a new volume for WorkSpace Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CreateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVolumeOutcome CreateVolume(const Model::CreateVolumeRequest& request) const;

        /**
         * A Callable wrapper for CreateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVolumeRequestT = Model::CreateVolumeRequest>
        Model::CreateVolumeOutcomeCallable CreateVolumeCallable(const CreateVolumeRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::CreateVolume, request);
        }

        /**
         * An Async wrapper for CreateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVolumeRequestT = Model::CreateVolumeRequest>
        void CreateVolumeAsync(const CreateVolumeRequestT& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::CreateVolume, request, handler, context);
        }

        /**
         * <p>Launches a new WorkSpace Instance with specified configuration parameters,
         * enabling programmatic workspace deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CreateWorkspaceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceInstanceOutcome CreateWorkspaceInstance(const Model::CreateWorkspaceInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspaceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkspaceInstanceRequestT = Model::CreateWorkspaceInstanceRequest>
        Model::CreateWorkspaceInstanceOutcomeCallable CreateWorkspaceInstanceCallable(const CreateWorkspaceInstanceRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::CreateWorkspaceInstance, request);
        }

        /**
         * An Async wrapper for CreateWorkspaceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkspaceInstanceRequestT = Model::CreateWorkspaceInstanceRequest>
        void CreateWorkspaceInstanceAsync(const CreateWorkspaceInstanceRequestT& request, const CreateWorkspaceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::CreateWorkspaceInstance, request, handler, context);
        }

        /**
         * <p>Deletes a specified volume.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/DeleteVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest& request) const;

        /**
         * A Callable wrapper for DeleteVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVolumeRequestT = Model::DeleteVolumeRequest>
        Model::DeleteVolumeOutcomeCallable DeleteVolumeCallable(const DeleteVolumeRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::DeleteVolume, request);
        }

        /**
         * An Async wrapper for DeleteVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVolumeRequestT = Model::DeleteVolumeRequest>
        void DeleteVolumeAsync(const DeleteVolumeRequestT& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::DeleteVolume, request, handler, context);
        }

        /**
         * <p>Deletes the specified WorkSpace</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/DeleteWorkspaceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceInstanceOutcome DeleteWorkspaceInstance(const Model::DeleteWorkspaceInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspaceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkspaceInstanceRequestT = Model::DeleteWorkspaceInstanceRequest>
        Model::DeleteWorkspaceInstanceOutcomeCallable DeleteWorkspaceInstanceCallable(const DeleteWorkspaceInstanceRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::DeleteWorkspaceInstance, request);
        }

        /**
         * An Async wrapper for DeleteWorkspaceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkspaceInstanceRequestT = Model::DeleteWorkspaceInstanceRequest>
        void DeleteWorkspaceInstanceAsync(const DeleteWorkspaceInstanceRequestT& request, const DeleteWorkspaceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::DeleteWorkspaceInstance, request, handler, context);
        }

        /**
         * <p>Detaches a volume from a WorkSpace Instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/DisassociateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateVolumeOutcome DisassociateVolume(const Model::DisassociateVolumeRequest& request) const;

        /**
         * A Callable wrapper for DisassociateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateVolumeRequestT = Model::DisassociateVolumeRequest>
        Model::DisassociateVolumeOutcomeCallable DisassociateVolumeCallable(const DisassociateVolumeRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::DisassociateVolume, request);
        }

        /**
         * An Async wrapper for DisassociateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateVolumeRequestT = Model::DisassociateVolumeRequest>
        void DisassociateVolumeAsync(const DisassociateVolumeRequestT& request, const DisassociateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::DisassociateVolume, request, handler, context);
        }

        /**
         * <p>Retrieves detailed information about a specific WorkSpace
         * Instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/GetWorkspaceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkspaceInstanceOutcome GetWorkspaceInstance(const Model::GetWorkspaceInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetWorkspaceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkspaceInstanceRequestT = Model::GetWorkspaceInstanceRequest>
        Model::GetWorkspaceInstanceOutcomeCallable GetWorkspaceInstanceCallable(const GetWorkspaceInstanceRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::GetWorkspaceInstance, request);
        }

        /**
         * An Async wrapper for GetWorkspaceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkspaceInstanceRequestT = Model::GetWorkspaceInstanceRequest>
        void GetWorkspaceInstanceAsync(const GetWorkspaceInstanceRequestT& request, const GetWorkspaceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::GetWorkspaceInstance, request, handler, context);
        }

        /**
         * <p>Retrieves a list of instance types supported by Amazon WorkSpaces Instances,
         * enabling precise workspace infrastructure configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceTypesOutcome ListInstanceTypes(const Model::ListInstanceTypesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInstanceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstanceTypesRequestT = Model::ListInstanceTypesRequest>
        Model::ListInstanceTypesOutcomeCallable ListInstanceTypesCallable(const ListInstanceTypesRequestT& request = {}) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::ListInstanceTypes, request);
        }

        /**
         * An Async wrapper for ListInstanceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstanceTypesRequestT = Model::ListInstanceTypesRequest>
        void ListInstanceTypesAsync(const ListInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInstanceTypesRequestT& request = {}) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::ListInstanceTypes, request, handler, context);
        }

        /**
         * <p>Retrieves a list of AWS regions supported by Amazon WorkSpaces Instances,
         * enabling region discovery for workspace deployments.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegionsOutcome ListRegions(const Model::ListRegionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegionsRequestT = Model::ListRegionsRequest>
        Model::ListRegionsOutcomeCallable ListRegionsCallable(const ListRegionsRequestT& request = {}) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::ListRegions, request);
        }

        /**
         * An Async wrapper for ListRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegionsRequestT = Model::ListRegionsRequest>
        void ListRegionsAsync(const ListRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRegionsRequestT& request = {}) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::ListRegions, request, handler, context);
        }

        /**
         * <p>Retrieves tags for a WorkSpace Instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Retrieves a collection of WorkSpaces Instances based on specified
         * filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListWorkspaceInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkspaceInstancesOutcome ListWorkspaceInstances(const Model::ListWorkspaceInstancesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListWorkspaceInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkspaceInstancesRequestT = Model::ListWorkspaceInstancesRequest>
        Model::ListWorkspaceInstancesOutcomeCallable ListWorkspaceInstancesCallable(const ListWorkspaceInstancesRequestT& request = {}) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::ListWorkspaceInstances, request);
        }

        /**
         * An Async wrapper for ListWorkspaceInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkspaceInstancesRequestT = Model::ListWorkspaceInstancesRequest>
        void ListWorkspaceInstancesAsync(const ListWorkspaceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListWorkspaceInstancesRequestT& request = {}) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::ListWorkspaceInstances, request, handler, context);
        }

        /**
         * <p>Adds tags to a WorkSpace Instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a WorkSpace Instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkspacesInstancesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkspacesInstancesClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkspacesInstancesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkspacesInstancesClient>;
      void init(const WorkspacesInstancesClientConfiguration& clientConfiguration);

      WorkspacesInstancesClientConfiguration m_clientConfiguration;
      std::shared_ptr<WorkspacesInstancesEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkspacesInstances
} // namespace Aws
