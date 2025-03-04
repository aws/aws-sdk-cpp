/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53profiles/Route53ProfilesServiceClientModel.h>

namespace Aws
{
namespace Route53Profiles
{
  /**
   * <p> With Amazon Route 53 Profiles you can share Route 53 configurations with
   * VPCs and AWS accounts </p>
   */
  class AWS_ROUTE53PROFILES_API Route53ProfilesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Route53ProfilesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef Route53ProfilesClientConfiguration ClientConfigurationType;
      typedef Route53ProfilesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ProfilesClient(const Aws::Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration = Aws::Route53Profiles::Route53ProfilesClientConfiguration(),
                              std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ProfilesClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration = Aws::Route53Profiles::Route53ProfilesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53ProfilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration = Aws::Route53Profiles::Route53ProfilesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ProfilesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ProfilesClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53ProfilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53ProfilesClient();

        /**
         * <p> Associates a Route 53 Profiles profile with a VPC. A VPC can have only one
         * Profile associated with it, but a Profile can be associated with 1000 of VPCs
         * (and you can request a higher quota). For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities">https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/AssociateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProfileOutcome AssociateProfile(const Model::AssociateProfileRequest& request) const;

        /**
         * A Callable wrapper for AssociateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateProfileRequestT = Model::AssociateProfileRequest>
        Model::AssociateProfileOutcomeCallable AssociateProfileCallable(const AssociateProfileRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::AssociateProfile, request);
        }

        /**
         * An Async wrapper for AssociateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateProfileRequestT = Model::AssociateProfileRequest>
        void AssociateProfileAsync(const AssociateProfileRequestT& request, const AssociateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::AssociateProfile, request, handler, context);
        }

        /**
         * <p> Associates a DNS reource configuration to a Route 53 Profile. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/AssociateResourceToProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceToProfileOutcome AssociateResourceToProfile(const Model::AssociateResourceToProfileRequest& request) const;

        /**
         * A Callable wrapper for AssociateResourceToProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateResourceToProfileRequestT = Model::AssociateResourceToProfileRequest>
        Model::AssociateResourceToProfileOutcomeCallable AssociateResourceToProfileCallable(const AssociateResourceToProfileRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::AssociateResourceToProfile, request);
        }

        /**
         * An Async wrapper for AssociateResourceToProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateResourceToProfileRequestT = Model::AssociateResourceToProfileRequest>
        void AssociateResourceToProfileAsync(const AssociateResourceToProfileRequestT& request, const AssociateResourceToProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::AssociateResourceToProfile, request, handler, context);
        }

        /**
         * <p> Creates an empty Route 53 Profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        Model::CreateProfileOutcomeCallable CreateProfileCallable(const CreateProfileRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::CreateProfile, request);
        }

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        void CreateProfileAsync(const CreateProfileRequestT& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::CreateProfile, request, handler, context);
        }

        /**
         * <p> Deletes the specified Route 53 Profile. Before you can delete a profile, you
         * must first disassociate it from all VPCs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const DeleteProfileRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::DeleteProfile, request);
        }

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        void DeleteProfileAsync(const DeleteProfileRequestT& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::DeleteProfile, request, handler, context);
        }

        /**
         * <p> Dissociates a specified Route 53 Profile from the specified VPC.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/DisassociateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateProfileOutcome DisassociateProfile(const Model::DisassociateProfileRequest& request) const;

        /**
         * A Callable wrapper for DisassociateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateProfileRequestT = Model::DisassociateProfileRequest>
        Model::DisassociateProfileOutcomeCallable DisassociateProfileCallable(const DisassociateProfileRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::DisassociateProfile, request);
        }

        /**
         * An Async wrapper for DisassociateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateProfileRequestT = Model::DisassociateProfileRequest>
        void DisassociateProfileAsync(const DisassociateProfileRequestT& request, const DisassociateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::DisassociateProfile, request, handler, context);
        }

        /**
         * <p> Dissoaciated a specified resource, from the Route 53 Profile. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/DisassociateResourceFromProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceFromProfileOutcome DisassociateResourceFromProfile(const Model::DisassociateResourceFromProfileRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResourceFromProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateResourceFromProfileRequestT = Model::DisassociateResourceFromProfileRequest>
        Model::DisassociateResourceFromProfileOutcomeCallable DisassociateResourceFromProfileCallable(const DisassociateResourceFromProfileRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::DisassociateResourceFromProfile, request);
        }

        /**
         * An Async wrapper for DisassociateResourceFromProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateResourceFromProfileRequestT = Model::DisassociateResourceFromProfileRequest>
        void DisassociateResourceFromProfileAsync(const DisassociateResourceFromProfileRequestT& request, const DisassociateResourceFromProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::DisassociateResourceFromProfile, request, handler, context);
        }

        /**
         * <p> Returns information about a specified Route 53 Profile, such as whether
         * whether the Profile is shared, and the current status of the Profile.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        Model::GetProfileOutcomeCallable GetProfileCallable(const GetProfileRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::GetProfile, request);
        }

        /**
         * An Async wrapper for GetProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        void GetProfileAsync(const GetProfileRequestT& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::GetProfile, request, handler, context);
        }

        /**
         * <p> Retrieves a Route 53 Profile association for a VPC. A VPC can have only one
         * Profile association, but a Profile can be associated with up to 5000 VPCs.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/GetProfileAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileAssociationOutcome GetProfileAssociation(const Model::GetProfileAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetProfileAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileAssociationRequestT = Model::GetProfileAssociationRequest>
        Model::GetProfileAssociationOutcomeCallable GetProfileAssociationCallable(const GetProfileAssociationRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::GetProfileAssociation, request);
        }

        /**
         * An Async wrapper for GetProfileAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileAssociationRequestT = Model::GetProfileAssociationRequest>
        void GetProfileAssociationAsync(const GetProfileAssociationRequestT& request, const GetProfileAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::GetProfileAssociation, request, handler, context);
        }

        /**
         * <p> Returns information about a specified Route 53 Profile resource association.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/GetProfileResourceAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileResourceAssociationOutcome GetProfileResourceAssociation(const Model::GetProfileResourceAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetProfileResourceAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileResourceAssociationRequestT = Model::GetProfileResourceAssociationRequest>
        Model::GetProfileResourceAssociationOutcomeCallable GetProfileResourceAssociationCallable(const GetProfileResourceAssociationRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::GetProfileResourceAssociation, request);
        }

        /**
         * An Async wrapper for GetProfileResourceAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileResourceAssociationRequestT = Model::GetProfileResourceAssociationRequest>
        void GetProfileResourceAssociationAsync(const GetProfileResourceAssociationRequestT& request, const GetProfileResourceAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::GetProfileResourceAssociation, request, handler, context);
        }

        /**
         * <p> Lists all the VPCs that the specified Route 53 Profile is associated with.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/ListProfileAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileAssociationsOutcome ListProfileAssociations(const Model::ListProfileAssociationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListProfileAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfileAssociationsRequestT = Model::ListProfileAssociationsRequest>
        Model::ListProfileAssociationsOutcomeCallable ListProfileAssociationsCallable(const ListProfileAssociationsRequestT& request = {}) const
        {
            return SubmitCallable(&Route53ProfilesClient::ListProfileAssociations, request);
        }

        /**
         * An Async wrapper for ListProfileAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfileAssociationsRequestT = Model::ListProfileAssociationsRequest>
        void ListProfileAssociationsAsync(const ListProfileAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListProfileAssociationsRequestT& request = {}) const
        {
            return SubmitAsync(&Route53ProfilesClient::ListProfileAssociations, request, handler, context);
        }

        /**
         * <p> Lists all the resource associations for the specified Route 53 Profile.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/ListProfileResourceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileResourceAssociationsOutcome ListProfileResourceAssociations(const Model::ListProfileResourceAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListProfileResourceAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfileResourceAssociationsRequestT = Model::ListProfileResourceAssociationsRequest>
        Model::ListProfileResourceAssociationsOutcomeCallable ListProfileResourceAssociationsCallable(const ListProfileResourceAssociationsRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::ListProfileResourceAssociations, request);
        }

        /**
         * An Async wrapper for ListProfileResourceAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfileResourceAssociationsRequestT = Model::ListProfileResourceAssociationsRequest>
        void ListProfileResourceAssociationsAsync(const ListProfileResourceAssociationsRequestT& request, const ListProfileResourceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::ListProfileResourceAssociations, request, handler, context);
        }

        /**
         * <p> Lists all the Route 53 Profiles associated with your Amazon Web Services
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/ListProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilesOutcome ListProfiles(const Model::ListProfilesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        Model::ListProfilesOutcomeCallable ListProfilesCallable(const ListProfilesRequestT& request = {}) const
        {
            return SubmitCallable(&Route53ProfilesClient::ListProfiles, request);
        }

        /**
         * An Async wrapper for ListProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        void ListProfilesAsync(const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListProfilesRequestT& request = {}) const
        {
            return SubmitAsync(&Route53ProfilesClient::ListProfiles, request, handler, context);
        }

        /**
         * <p> Lists the tags that you associated with the specified resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Adds one or more tags to a specified resource. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes one or more tags from a specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Updates the specified Route 53 Profile resourse association. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/UpdateProfileResourceAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileResourceAssociationOutcome UpdateProfileResourceAssociation(const Model::UpdateProfileResourceAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfileResourceAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProfileResourceAssociationRequestT = Model::UpdateProfileResourceAssociationRequest>
        Model::UpdateProfileResourceAssociationOutcomeCallable UpdateProfileResourceAssociationCallable(const UpdateProfileResourceAssociationRequestT& request) const
        {
            return SubmitCallable(&Route53ProfilesClient::UpdateProfileResourceAssociation, request);
        }

        /**
         * An Async wrapper for UpdateProfileResourceAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileResourceAssociationRequestT = Model::UpdateProfileResourceAssociationRequest>
        void UpdateProfileResourceAssociationAsync(const UpdateProfileResourceAssociationRequestT& request, const UpdateProfileResourceAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ProfilesClient::UpdateProfileResourceAssociation, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53ProfilesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Route53ProfilesClient>;
      void init(const Route53ProfilesClientConfiguration& clientConfiguration);

      Route53ProfilesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Route53ProfilesEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53Profiles
} // namespace Aws
