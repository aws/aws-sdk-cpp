/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/repostspace/RepostspaceServiceClientModel.h>

namespace Aws
{
namespace repostspace
{
  /**
   * <p>AWS re:Post Private is a private version of AWS re:Post for enterprises with
   * Enterprise Support or Enterprise On-Ramp Support plans. It provides access to
   * knowledge and experts to accelerate cloud adoption and increase developer
   * productivity. With your organization-specific private re:Post, you can build an
   * organization-specific developer community that drives efficiencies at scale and
   * provides access to valuable knowledge resources. Additionally, re:Post Private
   * centralizes trusted AWS technical content and offers private discussion forums
   * to improve how your teams collaborate internally and with AWS to remove
   * technical obstacles, accelerate innovation, and scale more efficiently in the
   * cloud.</p>
   */
  class AWS_REPOSTSPACE_API RepostspaceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RepostspaceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RepostspaceClientConfiguration ClientConfigurationType;
      typedef RepostspaceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RepostspaceClient(const Aws::repostspace::RepostspaceClientConfiguration& clientConfiguration = Aws::repostspace::RepostspaceClientConfiguration(),
                          std::shared_ptr<RepostspaceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RepostspaceClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<RepostspaceEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::repostspace::RepostspaceClientConfiguration& clientConfiguration = Aws::repostspace::RepostspaceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RepostspaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<RepostspaceEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::repostspace::RepostspaceClientConfiguration& clientConfiguration = Aws::repostspace::RepostspaceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RepostspaceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RepostspaceClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RepostspaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RepostspaceClient();

        /**
         * <p>Creates an AWS re:Post Private private re:Post.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/CreateSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSpaceOutcome CreateSpace(const Model::CreateSpaceRequest& request) const;

        /**
         * A Callable wrapper for CreateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSpaceRequestT = Model::CreateSpaceRequest>
        Model::CreateSpaceOutcomeCallable CreateSpaceCallable(const CreateSpaceRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::CreateSpace, request);
        }

        /**
         * An Async wrapper for CreateSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSpaceRequestT = Model::CreateSpaceRequest>
        void CreateSpaceAsync(const CreateSpaceRequestT& request, const CreateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::CreateSpace, request, handler, context);
        }

        /**
         * <p>Deletes an AWS re:Post Private private re:Post.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/DeleteSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
        Model::DeleteSpaceOutcomeCallable DeleteSpaceCallable(const DeleteSpaceRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::DeleteSpace, request);
        }

        /**
         * An Async wrapper for DeleteSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
        void DeleteSpaceAsync(const DeleteSpaceRequestT& request, const DeleteSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::DeleteSpace, request, handler, context);
        }

        /**
         * <p>Removes the user or group from the list of administrators of the private
         * re:Post.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/DeregisterAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterAdminOutcome DeregisterAdmin(const Model::DeregisterAdminRequest& request) const;

        /**
         * A Callable wrapper for DeregisterAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterAdminRequestT = Model::DeregisterAdminRequest>
        Model::DeregisterAdminOutcomeCallable DeregisterAdminCallable(const DeregisterAdminRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::DeregisterAdmin, request);
        }

        /**
         * An Async wrapper for DeregisterAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterAdminRequestT = Model::DeregisterAdminRequest>
        void DeregisterAdminAsync(const DeregisterAdminRequestT& request, const DeregisterAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::DeregisterAdmin, request, handler, context);
        }

        /**
         * <p>Displays information about the AWS re:Post Private private
         * re:Post.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/GetSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpaceOutcome GetSpace(const Model::GetSpaceRequest& request) const;

        /**
         * A Callable wrapper for GetSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSpaceRequestT = Model::GetSpaceRequest>
        Model::GetSpaceOutcomeCallable GetSpaceCallable(const GetSpaceRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::GetSpace, request);
        }

        /**
         * An Async wrapper for GetSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSpaceRequestT = Model::GetSpaceRequest>
        void GetSpaceAsync(const GetSpaceRequestT& request, const GetSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::GetSpace, request, handler, context);
        }

        /**
         * <p>Returns a list of AWS re:Post Private private re:Posts in the account with
         * some information about each private re:Post.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/ListSpaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpacesOutcome ListSpaces(const Model::ListSpacesRequest& request) const;

        /**
         * A Callable wrapper for ListSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSpacesRequestT = Model::ListSpacesRequest>
        Model::ListSpacesOutcomeCallable ListSpacesCallable(const ListSpacesRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::ListSpaces, request);
        }

        /**
         * An Async wrapper for ListSpaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSpacesRequestT = Model::ListSpacesRequest>
        void ListSpacesAsync(const ListSpacesRequestT& request, const ListSpacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::ListSpaces, request, handler, context);
        }

        /**
         * <p>Returns the tags that are associated with the AWS re:Post Private resource
         * specified by the resourceArn. The only resource that can be tagged is a private
         * re:Post.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds a user or group to the list of administrators of the private
         * re:Post.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/RegisterAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAdminOutcome RegisterAdmin(const Model::RegisterAdminRequest& request) const;

        /**
         * A Callable wrapper for RegisterAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterAdminRequestT = Model::RegisterAdminRequest>
        Model::RegisterAdminOutcomeCallable RegisterAdminCallable(const RegisterAdminRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::RegisterAdmin, request);
        }

        /**
         * An Async wrapper for RegisterAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterAdminRequestT = Model::RegisterAdminRequest>
        void RegisterAdminAsync(const RegisterAdminRequestT& request, const RegisterAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::RegisterAdmin, request, handler, context);
        }

        /**
         * <p>Sends an invitation email to selected users and groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/SendInvites">AWS
         * API Reference</a></p>
         */
        virtual Model::SendInvitesOutcome SendInvites(const Model::SendInvitesRequest& request) const;

        /**
         * A Callable wrapper for SendInvites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendInvitesRequestT = Model::SendInvitesRequest>
        Model::SendInvitesOutcomeCallable SendInvitesCallable(const SendInvitesRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::SendInvites, request);
        }

        /**
         * An Async wrapper for SendInvites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendInvitesRequestT = Model::SendInvitesRequest>
        void SendInvitesAsync(const SendInvitesRequestT& request, const SendInvitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::SendInvites, request, handler, context);
        }

        /**
         * <p>Associates tags with an AWS re:Post Private resource. Currently, the only
         * resource that can be tagged is the private re:Post. If you specify a new tag key
         * for the resource, the tag is appended to the list of tags that are associated
         * with the resource. If you specify a tag key that’s already associated with the
         * resource, the new tag value that you specify replaces the previous value for
         * that tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the association of the tag with the AWS re:Post Private
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Modifies an existing AWS re:Post Private private re:Post.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/UpdateSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSpaceOutcome UpdateSpace(const Model::UpdateSpaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
        Model::UpdateSpaceOutcomeCallable UpdateSpaceCallable(const UpdateSpaceRequestT& request) const
        {
            return SubmitCallable(&RepostspaceClient::UpdateSpace, request);
        }

        /**
         * An Async wrapper for UpdateSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
        void UpdateSpaceAsync(const UpdateSpaceRequestT& request, const UpdateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RepostspaceClient::UpdateSpace, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RepostspaceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RepostspaceClient>;
      void init(const RepostspaceClientConfiguration& clientConfiguration);

      RepostspaceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RepostspaceEndpointProviderBase> m_endpointProvider;
  };

} // namespace repostspace
} // namespace Aws
