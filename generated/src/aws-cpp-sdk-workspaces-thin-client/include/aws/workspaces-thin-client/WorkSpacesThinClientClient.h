/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientServiceClientModel.h>

namespace Aws
{
namespace WorkSpacesThinClient
{
  /**
   * <p>Amazon WorkSpaces Thin Client is a affordable device built to work with
   * Amazon Web Services End User Computing (EUC) virtual desktops to provide users
   * with a complete cloud desktop solution. WorkSpaces Thin Client is a compact
   * device designed to connect up to two monitors and USB devices like a keyboard,
   * mouse, headset, and webcam. To maximize endpoint security, WorkSpaces Thin
   * Client devices do not allow local data storage or installation of unapproved
   * applications. The WorkSpaces Thin Client device ships preloaded with device
   * management software.</p> <p>You can use these APIs to complete WorkSpaces Thin
   * Client tasks, such as creating environments or viewing devices. For more
   * information about WorkSpaces Thin Client, including the required permissions to
   * use the service, see the <a
   * href="https://docs.aws.amazon.com/workspaces-thin-client/latest/ag/">Amazon
   * WorkSpaces Thin Client Administrator Guide</a>. For more information about using
   * the Command Line Interface (CLI) to manage your WorkSpaces Thin Client
   * resources, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/workspaces-thin-client/index.html">WorkSpaces
   * Thin Client section of the CLI Reference</a>.</p>
   */
  class AWS_WORKSPACESTHINCLIENT_API WorkSpacesThinClientClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesThinClientClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WorkSpacesThinClientClientConfiguration ClientConfigurationType;
      typedef WorkSpacesThinClientEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesThinClientClient(const Aws::WorkSpacesThinClient::WorkSpacesThinClientClientConfiguration& clientConfiguration = Aws::WorkSpacesThinClient::WorkSpacesThinClientClientConfiguration(),
                                   std::shared_ptr<WorkSpacesThinClientEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesThinClientClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<WorkSpacesThinClientEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::WorkSpacesThinClient::WorkSpacesThinClientClientConfiguration& clientConfiguration = Aws::WorkSpacesThinClient::WorkSpacesThinClientClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesThinClientClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<WorkSpacesThinClientEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::WorkSpacesThinClient::WorkSpacesThinClientClientConfiguration& clientConfiguration = Aws::WorkSpacesThinClient::WorkSpacesThinClientClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesThinClientClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesThinClientClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesThinClientClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkSpacesThinClientClient();

        /**
         * <p>Creates an environment for your thin client devices.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::CreateEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes a thin client device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const DeleteDeviceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::DeleteDevice, request);
        }

        /**
         * An Async wrapper for DeleteDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        void DeleteDeviceAsync(const DeleteDeviceRequestT& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::DeleteDevice, request, handler, context);
        }

        /**
         * <p>Deletes an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::DeleteEnvironment, request, handler, context);
        }

        /**
         * <p>Deregisters a thin client device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/DeregisterDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDeviceOutcome DeregisterDevice(const Model::DeregisterDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterDeviceRequestT = Model::DeregisterDeviceRequest>
        Model::DeregisterDeviceOutcomeCallable DeregisterDeviceCallable(const DeregisterDeviceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::DeregisterDevice, request);
        }

        /**
         * An Async wrapper for DeregisterDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterDeviceRequestT = Model::DeregisterDeviceRequest>
        void DeregisterDeviceAsync(const DeregisterDeviceRequestT& request, const DeregisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::DeregisterDevice, request, handler, context);
        }

        /**
         * <p>Returns information for a thin client device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        Model::GetDeviceOutcomeCallable GetDeviceCallable(const GetDeviceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::GetDevice, request);
        }

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        void GetDeviceAsync(const GetDeviceRequestT& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::GetDevice, request, handler, context);
        }

        /**
         * <p>Returns information for an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::GetEnvironment, request, handler, context);
        }

        /**
         * <p>Returns information for a software set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/GetSoftwareSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSoftwareSetOutcome GetSoftwareSet(const Model::GetSoftwareSetRequest& request) const;

        /**
         * A Callable wrapper for GetSoftwareSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSoftwareSetRequestT = Model::GetSoftwareSetRequest>
        Model::GetSoftwareSetOutcomeCallable GetSoftwareSetCallable(const GetSoftwareSetRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::GetSoftwareSet, request);
        }

        /**
         * An Async wrapper for GetSoftwareSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSoftwareSetRequestT = Model::GetSoftwareSetRequest>
        void GetSoftwareSetAsync(const GetSoftwareSetRequestT& request, const GetSoftwareSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::GetSoftwareSet, request, handler, context);
        }

        /**
         * <p>Returns a list of thin client devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        Model::ListDevicesOutcomeCallable ListDevicesCallable(const ListDevicesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::ListDevices, request);
        }

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        void ListDevicesAsync(const ListDevicesRequestT& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::ListDevices, request, handler, context);
        }

        /**
         * <p>Returns a list of environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Returns a list of software sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/ListSoftwareSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSoftwareSetsOutcome ListSoftwareSets(const Model::ListSoftwareSetsRequest& request) const;

        /**
         * A Callable wrapper for ListSoftwareSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSoftwareSetsRequestT = Model::ListSoftwareSetsRequest>
        Model::ListSoftwareSetsOutcomeCallable ListSoftwareSetsCallable(const ListSoftwareSetsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::ListSoftwareSets, request);
        }

        /**
         * An Async wrapper for ListSoftwareSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSoftwareSetsRequestT = Model::ListSoftwareSetsRequest>
        void ListSoftwareSetsAsync(const ListSoftwareSetsRequestT& request, const ListSoftwareSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::ListSoftwareSets, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a thin client device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceRequestT = Model::UpdateDeviceRequest>
        Model::UpdateDeviceOutcomeCallable UpdateDeviceCallable(const UpdateDeviceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::UpdateDevice, request);
        }

        /**
         * An Async wrapper for UpdateDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceRequestT = Model::UpdateDeviceRequest>
        void UpdateDeviceAsync(const UpdateDeviceRequestT& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::UpdateDevice, request, handler, context);
        }

        /**
         * <p>Updates an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::UpdateEnvironment, request, handler, context);
        }

        /**
         * <p>Updates a software set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/UpdateSoftwareSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSoftwareSetOutcome UpdateSoftwareSet(const Model::UpdateSoftwareSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateSoftwareSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSoftwareSetRequestT = Model::UpdateSoftwareSetRequest>
        Model::UpdateSoftwareSetOutcomeCallable UpdateSoftwareSetCallable(const UpdateSoftwareSetRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesThinClientClient::UpdateSoftwareSet, request);
        }

        /**
         * An Async wrapper for UpdateSoftwareSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSoftwareSetRequestT = Model::UpdateSoftwareSetRequest>
        void UpdateSoftwareSetAsync(const UpdateSoftwareSetRequestT& request, const UpdateSoftwareSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesThinClientClient::UpdateSoftwareSet, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkSpacesThinClientEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesThinClientClient>;
      void init(const WorkSpacesThinClientClientConfiguration& clientConfiguration);

      WorkSpacesThinClientClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkSpacesThinClientEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkSpacesThinClient
} // namespace Aws
