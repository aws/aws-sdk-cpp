/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nimble/NimbleStudioServiceClientModel.h>

namespace Aws
{
namespace NimbleStudio
{
  /**
   * <p>Welcome to the Amazon Nimble Studio API reference. This API reference
   * provides methods, schema, resources, parameters, and more to help you get the
   * most out of Nimble Studio.</p> <p>Nimble Studio is a virtual studio that
   * empowers visual effects, animation, and interactive content teams to create
   * content securely within a scalable, private cloud service.</p>
   */
  class AWS_NIMBLESTUDIO_API NimbleStudioClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NimbleStudioClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NimbleStudioClientConfiguration ClientConfigurationType;
      typedef NimbleStudioEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration = Aws::NimbleStudio::NimbleStudioClientConfiguration(),
                           std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration = Aws::NimbleStudio::NimbleStudioClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NimbleStudioClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration = Aws::NimbleStudio::NimbleStudioClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NimbleStudioClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NimbleStudioClient();

        /**
         * <p>Accept EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/AcceptEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptEulasOutcome AcceptEulas(const Model::AcceptEulasRequest& request) const;

        /**
         * A Callable wrapper for AcceptEulas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptEulasRequestT = Model::AcceptEulasRequest>
        Model::AcceptEulasOutcomeCallable AcceptEulasCallable(const AcceptEulasRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::AcceptEulas, request);
        }

        /**
         * An Async wrapper for AcceptEulas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptEulasRequestT = Model::AcceptEulasRequest>
        void AcceptEulasAsync(const AcceptEulasRequestT& request, const AcceptEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::AcceptEulas, request, handler, context);
        }

        /**
         * <p>Create a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchProfileOutcome CreateLaunchProfile(const Model::CreateLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLaunchProfileRequestT = Model::CreateLaunchProfileRequest>
        Model::CreateLaunchProfileOutcomeCallable CreateLaunchProfileCallable(const CreateLaunchProfileRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::CreateLaunchProfile, request);
        }

        /**
         * An Async wrapper for CreateLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLaunchProfileRequestT = Model::CreateLaunchProfileRequest>
        void CreateLaunchProfileAsync(const CreateLaunchProfileRequestT& request, const CreateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::CreateLaunchProfile, request, handler, context);
        }

        /**
         * <p>Creates a streaming image resource in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingImageOutcome CreateStreamingImage(const Model::CreateStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamingImageRequestT = Model::CreateStreamingImageRequest>
        Model::CreateStreamingImageOutcomeCallable CreateStreamingImageCallable(const CreateStreamingImageRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::CreateStreamingImage, request);
        }

        /**
         * An Async wrapper for CreateStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamingImageRequestT = Model::CreateStreamingImageRequest>
        void CreateStreamingImageAsync(const CreateStreamingImageRequestT& request, const CreateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::CreateStreamingImage, request, handler, context);
        }

        /**
         * <p>Creates a streaming session in a studio.</p> <p>After invoking this
         * operation, you must poll GetStreamingSession until the streaming session is in
         * the <code>READY</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionOutcome CreateStreamingSession(const Model::CreateStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamingSessionRequestT = Model::CreateStreamingSessionRequest>
        Model::CreateStreamingSessionOutcomeCallable CreateStreamingSessionCallable(const CreateStreamingSessionRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::CreateStreamingSession, request);
        }

        /**
         * An Async wrapper for CreateStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamingSessionRequestT = Model::CreateStreamingSessionRequest>
        void CreateStreamingSessionAsync(const CreateStreamingSessionRequestT& request, const CreateStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::CreateStreamingSession, request, handler, context);
        }

        /**
         * <p>Creates a streaming session stream for a streaming session.</p> <p>After
         * invoking this API, invoke GetStreamingSessionStream with the returned streamId
         * to poll the resource until it is in the <code>READY</code> state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionStreamOutcome CreateStreamingSessionStream(const Model::CreateStreamingSessionStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamingSessionStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamingSessionStreamRequestT = Model::CreateStreamingSessionStreamRequest>
        Model::CreateStreamingSessionStreamOutcomeCallable CreateStreamingSessionStreamCallable(const CreateStreamingSessionStreamRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::CreateStreamingSessionStream, request);
        }

        /**
         * An Async wrapper for CreateStreamingSessionStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamingSessionStreamRequestT = Model::CreateStreamingSessionStreamRequest>
        void CreateStreamingSessionStreamAsync(const CreateStreamingSessionStreamRequestT& request, const CreateStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::CreateStreamingSessionStream, request, handler, context);
        }

        /**
         * <p>Create a new studio.</p> <p>When creating a studio, two IAM roles must be
         * provided: the admin role and the user role. These roles are assumed by your
         * users when they log in to the Nimble Studio portal.</p> <p>The user role must
         * have the <code>AmazonNimbleStudio-StudioUser</code> managed policy attached for
         * the portal to function properly.</p> <p>The admin role must have the
         * <code>AmazonNimbleStudio-StudioAdmin</code> managed policy attached for the
         * portal to function properly.</p> <p>You may optionally specify a KMS key in the
         * <code>StudioEncryptionConfiguration</code>.</p> <p>In Nimble Studio, resource
         * names, descriptions, initialization scripts, and other data you provide are
         * always encrypted at rest using an KMS key. By default, this key is owned by
         * Amazon Web Services and managed on your behalf. You may provide your own KMS key
         * when calling <code>CreateStudio</code> to encrypt this data using a key you own
         * and manage.</p> <p>When providing an KMS key during studio creation, Nimble
         * Studio creates KMS grants in your account to provide your studio user and admin
         * roles access to these KMS keys.</p> <p>If you delete this grant, the studio will
         * no longer be accessible to your portal users.</p> <p>If you delete the studio
         * KMS key, your studio will no longer be accessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;

        /**
         * A Callable wrapper for CreateStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStudioRequestT = Model::CreateStudioRequest>
        Model::CreateStudioOutcomeCallable CreateStudioCallable(const CreateStudioRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::CreateStudio, request);
        }

        /**
         * An Async wrapper for CreateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStudioRequestT = Model::CreateStudioRequest>
        void CreateStudioAsync(const CreateStudioRequestT& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::CreateStudio, request, handler, context);
        }

        /**
         * <p>Creates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioComponentOutcome CreateStudioComponent(const Model::CreateStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStudioComponentRequestT = Model::CreateStudioComponentRequest>
        Model::CreateStudioComponentOutcomeCallable CreateStudioComponentCallable(const CreateStudioComponentRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::CreateStudioComponent, request);
        }

        /**
         * An Async wrapper for CreateStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStudioComponentRequestT = Model::CreateStudioComponentRequest>
        void CreateStudioComponentAsync(const CreateStudioComponentRequestT& request, const CreateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::CreateStudioComponent, request, handler, context);
        }

        /**
         * <p>Permanently delete a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileOutcome DeleteLaunchProfile(const Model::DeleteLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLaunchProfileRequestT = Model::DeleteLaunchProfileRequest>
        Model::DeleteLaunchProfileOutcomeCallable DeleteLaunchProfileCallable(const DeleteLaunchProfileRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::DeleteLaunchProfile, request);
        }

        /**
         * An Async wrapper for DeleteLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLaunchProfileRequestT = Model::DeleteLaunchProfileRequest>
        void DeleteLaunchProfileAsync(const DeleteLaunchProfileRequestT& request, const DeleteLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::DeleteLaunchProfile, request, handler, context);
        }

        /**
         * <p>Delete a user from launch profile membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileMemberOutcome DeleteLaunchProfileMember(const Model::DeleteLaunchProfileMemberRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchProfileMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLaunchProfileMemberRequestT = Model::DeleteLaunchProfileMemberRequest>
        Model::DeleteLaunchProfileMemberOutcomeCallable DeleteLaunchProfileMemberCallable(const DeleteLaunchProfileMemberRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::DeleteLaunchProfileMember, request);
        }

        /**
         * An Async wrapper for DeleteLaunchProfileMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLaunchProfileMemberRequestT = Model::DeleteLaunchProfileMemberRequest>
        void DeleteLaunchProfileMemberAsync(const DeleteLaunchProfileMemberRequestT& request, const DeleteLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::DeleteLaunchProfileMember, request, handler, context);
        }

        /**
         * <p>Delete streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingImageOutcome DeleteStreamingImage(const Model::DeleteStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStreamingImageRequestT = Model::DeleteStreamingImageRequest>
        Model::DeleteStreamingImageOutcomeCallable DeleteStreamingImageCallable(const DeleteStreamingImageRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::DeleteStreamingImage, request);
        }

        /**
         * An Async wrapper for DeleteStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamingImageRequestT = Model::DeleteStreamingImageRequest>
        void DeleteStreamingImageAsync(const DeleteStreamingImageRequestT& request, const DeleteStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::DeleteStreamingImage, request, handler, context);
        }

        /**
         * <p>Deletes streaming session resource.</p> <p>After invoking this operation, use
         * GetStreamingSession to poll the resource until it transitions to a
         * <code>DELETED</code> state.</p> <p>A streaming session will count against your
         * streaming session quota until it is marked <code>DELETED</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingSessionOutcome DeleteStreamingSession(const Model::DeleteStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStreamingSessionRequestT = Model::DeleteStreamingSessionRequest>
        Model::DeleteStreamingSessionOutcomeCallable DeleteStreamingSessionCallable(const DeleteStreamingSessionRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::DeleteStreamingSession, request);
        }

        /**
         * An Async wrapper for DeleteStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamingSessionRequestT = Model::DeleteStreamingSessionRequest>
        void DeleteStreamingSessionAsync(const DeleteStreamingSessionRequestT& request, const DeleteStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::DeleteStreamingSession, request, handler, context);
        }

        /**
         * <p>Delete a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioOutcome DeleteStudio(const Model::DeleteStudioRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStudioRequestT = Model::DeleteStudioRequest>
        Model::DeleteStudioOutcomeCallable DeleteStudioCallable(const DeleteStudioRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::DeleteStudio, request);
        }

        /**
         * An Async wrapper for DeleteStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStudioRequestT = Model::DeleteStudioRequest>
        void DeleteStudioAsync(const DeleteStudioRequestT& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::DeleteStudio, request, handler, context);
        }

        /**
         * <p>Deletes a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioComponentOutcome DeleteStudioComponent(const Model::DeleteStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStudioComponentRequestT = Model::DeleteStudioComponentRequest>
        Model::DeleteStudioComponentOutcomeCallable DeleteStudioComponentCallable(const DeleteStudioComponentRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::DeleteStudioComponent, request);
        }

        /**
         * An Async wrapper for DeleteStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStudioComponentRequestT = Model::DeleteStudioComponentRequest>
        void DeleteStudioComponentAsync(const DeleteStudioComponentRequestT& request, const DeleteStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::DeleteStudioComponent, request, handler, context);
        }

        /**
         * <p>Delete a user from studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioMemberOutcome DeleteStudioMember(const Model::DeleteStudioMemberRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudioMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStudioMemberRequestT = Model::DeleteStudioMemberRequest>
        Model::DeleteStudioMemberOutcomeCallable DeleteStudioMemberCallable(const DeleteStudioMemberRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::DeleteStudioMember, request);
        }

        /**
         * An Async wrapper for DeleteStudioMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStudioMemberRequestT = Model::DeleteStudioMemberRequest>
        void DeleteStudioMemberAsync(const DeleteStudioMemberRequestT& request, const DeleteStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::DeleteStudioMember, request, handler, context);
        }

        /**
         * <p>Get EULA.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetEula">AWS API
         * Reference</a></p>
         */
        virtual Model::GetEulaOutcome GetEula(const Model::GetEulaRequest& request) const;

        /**
         * A Callable wrapper for GetEula that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEulaRequestT = Model::GetEulaRequest>
        Model::GetEulaOutcomeCallable GetEulaCallable(const GetEulaRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetEula, request);
        }

        /**
         * An Async wrapper for GetEula that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEulaRequestT = Model::GetEulaRequest>
        void GetEulaAsync(const GetEulaRequestT& request, const GetEulaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetEula, request, handler, context);
        }

        /**
         * <p>Get a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileOutcome GetLaunchProfile(const Model::GetLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLaunchProfileRequestT = Model::GetLaunchProfileRequest>
        Model::GetLaunchProfileOutcomeCallable GetLaunchProfileCallable(const GetLaunchProfileRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetLaunchProfile, request);
        }

        /**
         * An Async wrapper for GetLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLaunchProfileRequestT = Model::GetLaunchProfileRequest>
        void GetLaunchProfileAsync(const GetLaunchProfileRequestT& request, const GetLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetLaunchProfile, request, handler, context);
        }

        /**
         * <p>Launch profile details include the launch profile resource and summary
         * information of resources that are used by, or available to, the launch profile.
         * This includes the name and description of all studio components used by the
         * launch profiles, and the name and description of streaming images that can be
         * used with this launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileDetailsOutcome GetLaunchProfileDetails(const Model::GetLaunchProfileDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfileDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLaunchProfileDetailsRequestT = Model::GetLaunchProfileDetailsRequest>
        Model::GetLaunchProfileDetailsOutcomeCallable GetLaunchProfileDetailsCallable(const GetLaunchProfileDetailsRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetLaunchProfileDetails, request);
        }

        /**
         * An Async wrapper for GetLaunchProfileDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLaunchProfileDetailsRequestT = Model::GetLaunchProfileDetailsRequest>
        void GetLaunchProfileDetailsAsync(const GetLaunchProfileDetailsRequestT& request, const GetLaunchProfileDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetLaunchProfileDetails, request, handler, context);
        }

        /**
         * <p>Get a launch profile initialization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileInitialization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileInitializationOutcome GetLaunchProfileInitialization(const Model::GetLaunchProfileInitializationRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfileInitialization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLaunchProfileInitializationRequestT = Model::GetLaunchProfileInitializationRequest>
        Model::GetLaunchProfileInitializationOutcomeCallable GetLaunchProfileInitializationCallable(const GetLaunchProfileInitializationRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetLaunchProfileInitialization, request);
        }

        /**
         * An Async wrapper for GetLaunchProfileInitialization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLaunchProfileInitializationRequestT = Model::GetLaunchProfileInitializationRequest>
        void GetLaunchProfileInitializationAsync(const GetLaunchProfileInitializationRequestT& request, const GetLaunchProfileInitializationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetLaunchProfileInitialization, request, handler, context);
        }

        /**
         * <p>Get a user persona in launch profile membership.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileMemberOutcome GetLaunchProfileMember(const Model::GetLaunchProfileMemberRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfileMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLaunchProfileMemberRequestT = Model::GetLaunchProfileMemberRequest>
        Model::GetLaunchProfileMemberOutcomeCallable GetLaunchProfileMemberCallable(const GetLaunchProfileMemberRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetLaunchProfileMember, request);
        }

        /**
         * An Async wrapper for GetLaunchProfileMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLaunchProfileMemberRequestT = Model::GetLaunchProfileMemberRequest>
        void GetLaunchProfileMemberAsync(const GetLaunchProfileMemberRequestT& request, const GetLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetLaunchProfileMember, request, handler, context);
        }

        /**
         * <p>Get streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingImageOutcome GetStreamingImage(const Model::GetStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamingImageRequestT = Model::GetStreamingImageRequest>
        Model::GetStreamingImageOutcomeCallable GetStreamingImageCallable(const GetStreamingImageRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetStreamingImage, request);
        }

        /**
         * An Async wrapper for GetStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamingImageRequestT = Model::GetStreamingImageRequest>
        void GetStreamingImageAsync(const GetStreamingImageRequestT& request, const GetStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetStreamingImage, request, handler, context);
        }

        /**
         * <p>Gets StreamingSession resource.</p> <p>Invoke this operation to poll for a
         * streaming session state while creating or deleting a session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionOutcome GetStreamingSession(const Model::GetStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamingSessionRequestT = Model::GetStreamingSessionRequest>
        Model::GetStreamingSessionOutcomeCallable GetStreamingSessionCallable(const GetStreamingSessionRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetStreamingSession, request);
        }

        /**
         * An Async wrapper for GetStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamingSessionRequestT = Model::GetStreamingSessionRequest>
        void GetStreamingSessionAsync(const GetStreamingSessionRequestT& request, const GetStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetStreamingSession, request, handler, context);
        }

        /**
         * <p>Gets <code>StreamingSessionBackup</code> resource.</p> <p>Invoke this
         * operation to poll for a streaming session backup while stopping a streaming
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionBackupOutcome GetStreamingSessionBackup(const Model::GetStreamingSessionBackupRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingSessionBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamingSessionBackupRequestT = Model::GetStreamingSessionBackupRequest>
        Model::GetStreamingSessionBackupOutcomeCallable GetStreamingSessionBackupCallable(const GetStreamingSessionBackupRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetStreamingSessionBackup, request);
        }

        /**
         * An Async wrapper for GetStreamingSessionBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamingSessionBackupRequestT = Model::GetStreamingSessionBackupRequest>
        void GetStreamingSessionBackupAsync(const GetStreamingSessionBackupRequestT& request, const GetStreamingSessionBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetStreamingSessionBackup, request, handler, context);
        }

        /**
         * <p>Gets a StreamingSessionStream for a streaming session.</p> <p>Invoke this
         * operation to poll the resource after invoking
         * <code>CreateStreamingSessionStream</code>.</p> <p>After the
         * <code>StreamingSessionStream</code> changes to the <code>READY</code> state, the
         * url property will contain a stream to be used with the DCV streaming
         * client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionStreamOutcome GetStreamingSessionStream(const Model::GetStreamingSessionStreamRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingSessionStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamingSessionStreamRequestT = Model::GetStreamingSessionStreamRequest>
        Model::GetStreamingSessionStreamOutcomeCallable GetStreamingSessionStreamCallable(const GetStreamingSessionStreamRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetStreamingSessionStream, request);
        }

        /**
         * An Async wrapper for GetStreamingSessionStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamingSessionStreamRequestT = Model::GetStreamingSessionStreamRequest>
        void GetStreamingSessionStreamAsync(const GetStreamingSessionStreamRequestT& request, const GetStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetStreamingSessionStream, request, handler, context);
        }

        /**
         * <p>Get a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioOutcome GetStudio(const Model::GetStudioRequest& request) const;

        /**
         * A Callable wrapper for GetStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStudioRequestT = Model::GetStudioRequest>
        Model::GetStudioOutcomeCallable GetStudioCallable(const GetStudioRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetStudio, request);
        }

        /**
         * An Async wrapper for GetStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStudioRequestT = Model::GetStudioRequest>
        void GetStudioAsync(const GetStudioRequestT& request, const GetStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetStudio, request, handler, context);
        }

        /**
         * <p>Gets a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioComponentOutcome GetStudioComponent(const Model::GetStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for GetStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStudioComponentRequestT = Model::GetStudioComponentRequest>
        Model::GetStudioComponentOutcomeCallable GetStudioComponentCallable(const GetStudioComponentRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetStudioComponent, request);
        }

        /**
         * An Async wrapper for GetStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStudioComponentRequestT = Model::GetStudioComponentRequest>
        void GetStudioComponentAsync(const GetStudioComponentRequestT& request, const GetStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetStudioComponent, request, handler, context);
        }

        /**
         * <p>Get a user's membership in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioMemberOutcome GetStudioMember(const Model::GetStudioMemberRequest& request) const;

        /**
         * A Callable wrapper for GetStudioMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStudioMemberRequestT = Model::GetStudioMemberRequest>
        Model::GetStudioMemberOutcomeCallable GetStudioMemberCallable(const GetStudioMemberRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::GetStudioMember, request);
        }

        /**
         * An Async wrapper for GetStudioMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStudioMemberRequestT = Model::GetStudioMemberRequest>
        void GetStudioMemberAsync(const GetStudioMemberRequestT& request, const GetStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::GetStudioMember, request, handler, context);
        }

        /**
         * <p>List EULA acceptances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulaAcceptances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulaAcceptancesOutcome ListEulaAcceptances(const Model::ListEulaAcceptancesRequest& request) const;

        /**
         * A Callable wrapper for ListEulaAcceptances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEulaAcceptancesRequestT = Model::ListEulaAcceptancesRequest>
        Model::ListEulaAcceptancesOutcomeCallable ListEulaAcceptancesCallable(const ListEulaAcceptancesRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListEulaAcceptances, request);
        }

        /**
         * An Async wrapper for ListEulaAcceptances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEulaAcceptancesRequestT = Model::ListEulaAcceptancesRequest>
        void ListEulaAcceptancesAsync(const ListEulaAcceptancesRequestT& request, const ListEulaAcceptancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListEulaAcceptances, request, handler, context);
        }

        /**
         * <p>List EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulasOutcome ListEulas(const Model::ListEulasRequest& request) const;

        /**
         * A Callable wrapper for ListEulas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEulasRequestT = Model::ListEulasRequest>
        Model::ListEulasOutcomeCallable ListEulasCallable(const ListEulasRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListEulas, request);
        }

        /**
         * An Async wrapper for ListEulas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEulasRequestT = Model::ListEulasRequest>
        void ListEulasAsync(const ListEulasRequestT& request, const ListEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListEulas, request, handler, context);
        }

        /**
         * <p>Get all users in a given launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfileMembersOutcome ListLaunchProfileMembers(const Model::ListLaunchProfileMembersRequest& request) const;

        /**
         * A Callable wrapper for ListLaunchProfileMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLaunchProfileMembersRequestT = Model::ListLaunchProfileMembersRequest>
        Model::ListLaunchProfileMembersOutcomeCallable ListLaunchProfileMembersCallable(const ListLaunchProfileMembersRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListLaunchProfileMembers, request);
        }

        /**
         * An Async wrapper for ListLaunchProfileMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLaunchProfileMembersRequestT = Model::ListLaunchProfileMembersRequest>
        void ListLaunchProfileMembersAsync(const ListLaunchProfileMembersRequestT& request, const ListLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListLaunchProfileMembers, request, handler, context);
        }

        /**
         * <p>List all the launch profiles a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfilesOutcome ListLaunchProfiles(const Model::ListLaunchProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListLaunchProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLaunchProfilesRequestT = Model::ListLaunchProfilesRequest>
        Model::ListLaunchProfilesOutcomeCallable ListLaunchProfilesCallable(const ListLaunchProfilesRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListLaunchProfiles, request);
        }

        /**
         * An Async wrapper for ListLaunchProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLaunchProfilesRequestT = Model::ListLaunchProfilesRequest>
        void ListLaunchProfilesAsync(const ListLaunchProfilesRequestT& request, const ListLaunchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListLaunchProfiles, request, handler, context);
        }

        /**
         * <p>List the streaming image resources available to this studio.</p> <p>This list
         * will contain both images provided by Amazon Web Services, as well as streaming
         * images that you have created in your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingImagesOutcome ListStreamingImages(const Model::ListStreamingImagesRequest& request) const;

        /**
         * A Callable wrapper for ListStreamingImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamingImagesRequestT = Model::ListStreamingImagesRequest>
        Model::ListStreamingImagesOutcomeCallable ListStreamingImagesCallable(const ListStreamingImagesRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListStreamingImages, request);
        }

        /**
         * An Async wrapper for ListStreamingImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamingImagesRequestT = Model::ListStreamingImagesRequest>
        void ListStreamingImagesAsync(const ListStreamingImagesRequestT& request, const ListStreamingImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListStreamingImages, request, handler, context);
        }

        /**
         * <p>Lists the backups of a streaming session in a studio.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessionBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingSessionBackupsOutcome ListStreamingSessionBackups(const Model::ListStreamingSessionBackupsRequest& request) const;

        /**
         * A Callable wrapper for ListStreamingSessionBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamingSessionBackupsRequestT = Model::ListStreamingSessionBackupsRequest>
        Model::ListStreamingSessionBackupsOutcomeCallable ListStreamingSessionBackupsCallable(const ListStreamingSessionBackupsRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListStreamingSessionBackups, request);
        }

        /**
         * An Async wrapper for ListStreamingSessionBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamingSessionBackupsRequestT = Model::ListStreamingSessionBackupsRequest>
        void ListStreamingSessionBackupsAsync(const ListStreamingSessionBackupsRequestT& request, const ListStreamingSessionBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListStreamingSessionBackups, request, handler, context);
        }

        /**
         * <p>Lists the streaming sessions in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingSessionsOutcome ListStreamingSessions(const Model::ListStreamingSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListStreamingSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamingSessionsRequestT = Model::ListStreamingSessionsRequest>
        Model::ListStreamingSessionsOutcomeCallable ListStreamingSessionsCallable(const ListStreamingSessionsRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListStreamingSessions, request);
        }

        /**
         * An Async wrapper for ListStreamingSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamingSessionsRequestT = Model::ListStreamingSessionsRequest>
        void ListStreamingSessionsAsync(const ListStreamingSessionsRequestT& request, const ListStreamingSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListStreamingSessions, request, handler, context);
        }

        /**
         * <p>Lists the <code>StudioComponents</code> in a studio.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioComponentsOutcome ListStudioComponents(const Model::ListStudioComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListStudioComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStudioComponentsRequestT = Model::ListStudioComponentsRequest>
        Model::ListStudioComponentsOutcomeCallable ListStudioComponentsCallable(const ListStudioComponentsRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListStudioComponents, request);
        }

        /**
         * An Async wrapper for ListStudioComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStudioComponentsRequestT = Model::ListStudioComponentsRequest>
        void ListStudioComponentsAsync(const ListStudioComponentsRequestT& request, const ListStudioComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListStudioComponents, request, handler, context);
        }

        /**
         * <p>Get all users in a given studio membership.</p>  <p>
         * <code>ListStudioMembers</code> only returns admin members.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioMembersOutcome ListStudioMembers(const Model::ListStudioMembersRequest& request) const;

        /**
         * A Callable wrapper for ListStudioMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStudioMembersRequestT = Model::ListStudioMembersRequest>
        Model::ListStudioMembersOutcomeCallable ListStudioMembersCallable(const ListStudioMembersRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListStudioMembers, request);
        }

        /**
         * An Async wrapper for ListStudioMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStudioMembersRequestT = Model::ListStudioMembersRequest>
        void ListStudioMembersAsync(const ListStudioMembersRequestT& request, const ListStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListStudioMembers, request, handler, context);
        }

        /**
         * <p>List studios in your Amazon Web Services accounts in the requested Amazon Web
         * Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudiosOutcome ListStudios(const Model::ListStudiosRequest& request) const;

        /**
         * A Callable wrapper for ListStudios that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStudiosRequestT = Model::ListStudiosRequest>
        Model::ListStudiosOutcomeCallable ListStudiosCallable(const ListStudiosRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListStudios, request);
        }

        /**
         * An Async wrapper for ListStudios that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStudiosRequestT = Model::ListStudiosRequest>
        void ListStudiosAsync(const ListStudiosRequestT& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListStudios, request, handler, context);
        }

        /**
         * <p>Gets the tags for a resource, given its Amazon Resource Names (ARN).</p>
         * <p>This operation supports ARNs for all resource types in Nimble Studio that
         * support tags, including studio, studio component, launch profile, streaming
         * image, and streaming session. All resources that can be tagged will contain an
         * ARN property, so you do not have to create this ARN yourself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Add/update users with given persona to launch profile
         * membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLaunchProfileMembersOutcome PutLaunchProfileMembers(const Model::PutLaunchProfileMembersRequest& request) const;

        /**
         * A Callable wrapper for PutLaunchProfileMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLaunchProfileMembersRequestT = Model::PutLaunchProfileMembersRequest>
        Model::PutLaunchProfileMembersOutcomeCallable PutLaunchProfileMembersCallable(const PutLaunchProfileMembersRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::PutLaunchProfileMembers, request);
        }

        /**
         * An Async wrapper for PutLaunchProfileMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLaunchProfileMembersRequestT = Model::PutLaunchProfileMembersRequest>
        void PutLaunchProfileMembersAsync(const PutLaunchProfileMembersRequestT& request, const PutLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::PutLaunchProfileMembers, request, handler, context);
        }

        /**
         * <p>Add/update users with given persona to studio membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStudioMembersOutcome PutStudioMembers(const Model::PutStudioMembersRequest& request) const;

        /**
         * A Callable wrapper for PutStudioMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutStudioMembersRequestT = Model::PutStudioMembersRequest>
        Model::PutStudioMembersOutcomeCallable PutStudioMembersCallable(const PutStudioMembersRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::PutStudioMembers, request);
        }

        /**
         * An Async wrapper for PutStudioMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutStudioMembersRequestT = Model::PutStudioMembersRequest>
        void PutStudioMembersAsync(const PutStudioMembersRequestT& request, const PutStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::PutStudioMembers, request, handler, context);
        }

        /**
         * <p>Transitions sessions from the <code>STOPPED</code> state into the
         * <code>READY</code> state. The <code>START_IN_PROGRESS</code> state is the
         * intermediate state between the <code>STOPPED</code> and <code>READY</code>
         * states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStreamingSessionOutcome StartStreamingSession(const Model::StartStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for StartStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartStreamingSessionRequestT = Model::StartStreamingSessionRequest>
        Model::StartStreamingSessionOutcomeCallable StartStreamingSessionCallable(const StartStreamingSessionRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::StartStreamingSession, request);
        }

        /**
         * An Async wrapper for StartStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartStreamingSessionRequestT = Model::StartStreamingSessionRequest>
        void StartStreamingSessionAsync(const StartStreamingSessionRequestT& request, const StartStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::StartStreamingSession, request, handler, context);
        }

        /**
         * <p>Repairs the IAM Identity Center configuration for a given studio.</p> <p>If
         * the studio has a valid IAM Identity Center configuration currently associated
         * with it, this operation will fail with a validation error.</p> <p>If the studio
         * does not have a valid IAM Identity Center configuration currently associated
         * with it, then a new IAM Identity Center application is created for the studio
         * and the studio is changed to the <code>READY</code> state.</p> <p>After the IAM
         * Identity Center application is repaired, you must use the Amazon Nimble Studio
         * console to add administrators and users to your studio.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStudioSSOConfigurationRepair">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStudioSSOConfigurationRepairOutcome StartStudioSSOConfigurationRepair(const Model::StartStudioSSOConfigurationRepairRequest& request) const;

        /**
         * A Callable wrapper for StartStudioSSOConfigurationRepair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartStudioSSOConfigurationRepairRequestT = Model::StartStudioSSOConfigurationRepairRequest>
        Model::StartStudioSSOConfigurationRepairOutcomeCallable StartStudioSSOConfigurationRepairCallable(const StartStudioSSOConfigurationRepairRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::StartStudioSSOConfigurationRepair, request);
        }

        /**
         * An Async wrapper for StartStudioSSOConfigurationRepair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartStudioSSOConfigurationRepairRequestT = Model::StartStudioSSOConfigurationRepairRequest>
        void StartStudioSSOConfigurationRepairAsync(const StartStudioSSOConfigurationRepairRequestT& request, const StartStudioSSOConfigurationRepairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::StartStudioSSOConfigurationRepair, request, handler, context);
        }

        /**
         * <p>Transitions sessions from the <code>READY</code> state into the
         * <code>STOPPED</code> state. The <code>STOP_IN_PROGRESS</code> state is the
         * intermediate state between the <code>READY</code> and <code>STOPPED</code>
         * states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StopStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStreamingSessionOutcome StopStreamingSession(const Model::StopStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for StopStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopStreamingSessionRequestT = Model::StopStreamingSessionRequest>
        Model::StopStreamingSessionOutcomeCallable StopStreamingSessionCallable(const StopStreamingSessionRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::StopStreamingSession, request);
        }

        /**
         * An Async wrapper for StopStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopStreamingSessionRequestT = Model::StopStreamingSessionRequest>
        void StopStreamingSessionAsync(const StopStreamingSessionRequestT& request, const StopStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::StopStreamingSession, request, handler, context);
        }

        /**
         * <p>Creates tags for a resource, given its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileOutcome UpdateLaunchProfile(const Model::UpdateLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLaunchProfileRequestT = Model::UpdateLaunchProfileRequest>
        Model::UpdateLaunchProfileOutcomeCallable UpdateLaunchProfileCallable(const UpdateLaunchProfileRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::UpdateLaunchProfile, request);
        }

        /**
         * An Async wrapper for UpdateLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLaunchProfileRequestT = Model::UpdateLaunchProfileRequest>
        void UpdateLaunchProfileAsync(const UpdateLaunchProfileRequestT& request, const UpdateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::UpdateLaunchProfile, request, handler, context);
        }

        /**
         * <p>Update a user persona in launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileMemberOutcome UpdateLaunchProfileMember(const Model::UpdateLaunchProfileMemberRequest& request) const;

        /**
         * A Callable wrapper for UpdateLaunchProfileMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLaunchProfileMemberRequestT = Model::UpdateLaunchProfileMemberRequest>
        Model::UpdateLaunchProfileMemberOutcomeCallable UpdateLaunchProfileMemberCallable(const UpdateLaunchProfileMemberRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::UpdateLaunchProfileMember, request);
        }

        /**
         * An Async wrapper for UpdateLaunchProfileMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLaunchProfileMemberRequestT = Model::UpdateLaunchProfileMemberRequest>
        void UpdateLaunchProfileMemberAsync(const UpdateLaunchProfileMemberRequestT& request, const UpdateLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::UpdateLaunchProfileMember, request, handler, context);
        }

        /**
         * <p>Update streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingImageOutcome UpdateStreamingImage(const Model::UpdateStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStreamingImageRequestT = Model::UpdateStreamingImageRequest>
        Model::UpdateStreamingImageOutcomeCallable UpdateStreamingImageCallable(const UpdateStreamingImageRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::UpdateStreamingImage, request);
        }

        /**
         * An Async wrapper for UpdateStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStreamingImageRequestT = Model::UpdateStreamingImageRequest>
        void UpdateStreamingImageAsync(const UpdateStreamingImageRequestT& request, const UpdateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::UpdateStreamingImage, request, handler, context);
        }

        /**
         * <p>Update a Studio resource.</p> <p>Currently, this operation only supports
         * updating the displayName of your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioOutcome UpdateStudio(const Model::UpdateStudioRequest& request) const;

        /**
         * A Callable wrapper for UpdateStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStudioRequestT = Model::UpdateStudioRequest>
        Model::UpdateStudioOutcomeCallable UpdateStudioCallable(const UpdateStudioRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::UpdateStudio, request);
        }

        /**
         * An Async wrapper for UpdateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStudioRequestT = Model::UpdateStudioRequest>
        void UpdateStudioAsync(const UpdateStudioRequestT& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::UpdateStudio, request, handler, context);
        }

        /**
         * <p>Updates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioComponentOutcome UpdateStudioComponent(const Model::UpdateStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStudioComponentRequestT = Model::UpdateStudioComponentRequest>
        Model::UpdateStudioComponentOutcomeCallable UpdateStudioComponentCallable(const UpdateStudioComponentRequestT& request) const
        {
            return SubmitCallable(&NimbleStudioClient::UpdateStudioComponent, request);
        }

        /**
         * An Async wrapper for UpdateStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStudioComponentRequestT = Model::UpdateStudioComponentRequest>
        void UpdateStudioComponentAsync(const UpdateStudioComponentRequestT& request, const UpdateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NimbleStudioClient::UpdateStudioComponent, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NimbleStudioEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NimbleStudioClient>;
      void init(const NimbleStudioClientConfiguration& clientConfiguration);

      NimbleStudioClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NimbleStudioEndpointProviderBase> m_endpointProvider;
  };

} // namespace NimbleStudio
} // namespace Aws
