/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint/PinpointServiceClientModel.h>

namespace Aws
{
namespace Pinpoint
{
  /**
   * <p>Doc Engage API - Amazon Pinpoint API</p>
   */
  class AWS_PINPOINT_API PinpointClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PinpointClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PinpointClientConfiguration ClientConfigurationType;
      typedef PinpointEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Pinpoint::PinpointClientConfiguration& clientConfiguration = Aws::Pinpoint::PinpointClientConfiguration(),
                       std::shared_ptr<PinpointEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<PinpointEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Pinpoint::PinpointClientConfiguration& clientConfiguration = Aws::Pinpoint::PinpointClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<PinpointEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Pinpoint::PinpointClientConfiguration& clientConfiguration = Aws::Pinpoint::PinpointClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PinpointClient();

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        Model::CreateAppOutcomeCallable CreateAppCallable(const CreateAppRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateApp, request);
        }

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        void CreateAppAsync(const CreateAppRequestT& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateApp, request, handler, context);
        }

        /**
         * <p>Creates a new campaign for an application or updates the settings of an
         * existing campaign for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * A Callable wrapper for CreateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const CreateCampaignRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateCampaign, request);
        }

        /**
         * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        void CreateCampaignAsync(const CreateCampaignRequestT& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateCampaign, request, handler, context);
        }

        /**
         * <p>Creates a message template for messages that are sent through the email
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEmailTemplateRequestT = Model::CreateEmailTemplateRequest>
        Model::CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const CreateEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateEmailTemplate, request);
        }

        /**
         * An Async wrapper for CreateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEmailTemplateRequestT = Model::CreateEmailTemplateRequest>
        void CreateEmailTemplateAsync(const CreateEmailTemplateRequestT& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateEmailTemplate, request, handler, context);
        }

        /**
         * <p>Creates an export job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportJobOutcome CreateExportJob(const Model::CreateExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExportJobRequestT = Model::CreateExportJobRequest>
        Model::CreateExportJobOutcomeCallable CreateExportJobCallable(const CreateExportJobRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateExportJob, request);
        }

        /**
         * An Async wrapper for CreateExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExportJobRequestT = Model::CreateExportJobRequest>
        void CreateExportJobAsync(const CreateExportJobRequestT& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateExportJob, request, handler, context);
        }

        /**
         * <p>Creates an import job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImportJobRequestT = Model::CreateImportJobRequest>
        Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const CreateImportJobRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateImportJob, request);
        }

        /**
         * An Async wrapper for CreateImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImportJobRequestT = Model::CreateImportJobRequest>
        void CreateImportJobAsync(const CreateImportJobRequestT& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateImportJob, request, handler, context);
        }

        /**
         * <p>Creates a new message template for messages using the in-app message
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInAppTemplateOutcome CreateInAppTemplate(const Model::CreateInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInAppTemplateRequestT = Model::CreateInAppTemplateRequest>
        Model::CreateInAppTemplateOutcomeCallable CreateInAppTemplateCallable(const CreateInAppTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateInAppTemplate, request);
        }

        /**
         * An Async wrapper for CreateInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInAppTemplateRequestT = Model::CreateInAppTemplateRequest>
        void CreateInAppTemplateAsync(const CreateInAppTemplateRequestT& request, const CreateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateInAppTemplate, request, handler, context);
        }

        /**
         * <p>Creates a journey for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJourneyOutcome CreateJourney(const Model::CreateJourneyRequest& request) const;

        /**
         * A Callable wrapper for CreateJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJourneyRequestT = Model::CreateJourneyRequest>
        Model::CreateJourneyOutcomeCallable CreateJourneyCallable(const CreateJourneyRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateJourney, request);
        }

        /**
         * An Async wrapper for CreateJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJourneyRequestT = Model::CreateJourneyRequest>
        void CreateJourneyAsync(const CreateJourneyRequestT& request, const CreateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateJourney, request, handler, context);
        }

        /**
         * <p>Creates a message template for messages that are sent through a push
         * notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreatePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePushTemplateOutcome CreatePushTemplate(const Model::CreatePushTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreatePushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePushTemplateRequestT = Model::CreatePushTemplateRequest>
        Model::CreatePushTemplateOutcomeCallable CreatePushTemplateCallable(const CreatePushTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreatePushTemplate, request);
        }

        /**
         * An Async wrapper for CreatePushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePushTemplateRequestT = Model::CreatePushTemplateRequest>
        void CreatePushTemplateAsync(const CreatePushTemplateRequestT& request, const CreatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreatePushTemplate, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecommenderConfigurationOutcome CreateRecommenderConfiguration(const Model::CreateRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRecommenderConfigurationRequestT = Model::CreateRecommenderConfigurationRequest>
        Model::CreateRecommenderConfigurationOutcomeCallable CreateRecommenderConfigurationCallable(const CreateRecommenderConfigurationRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateRecommenderConfiguration, request);
        }

        /**
         * An Async wrapper for CreateRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRecommenderConfigurationRequestT = Model::CreateRecommenderConfigurationRequest>
        void CreateRecommenderConfigurationAsync(const CreateRecommenderConfigurationRequestT& request, const CreateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateRecommenderConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSegmentOutcome CreateSegment(const Model::CreateSegmentRequest& request) const;

        /**
         * A Callable wrapper for CreateSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSegmentRequestT = Model::CreateSegmentRequest>
        Model::CreateSegmentOutcomeCallable CreateSegmentCallable(const CreateSegmentRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateSegment, request);
        }

        /**
         * An Async wrapper for CreateSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSegmentRequestT = Model::CreateSegmentRequest>
        void CreateSegmentAsync(const CreateSegmentRequestT& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateSegment, request, handler, context);
        }

        /**
         * <p>Creates a message template for messages that are sent through the SMS
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSmsTemplateOutcome CreateSmsTemplate(const Model::CreateSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSmsTemplateRequestT = Model::CreateSmsTemplateRequest>
        Model::CreateSmsTemplateOutcomeCallable CreateSmsTemplateCallable(const CreateSmsTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateSmsTemplate, request);
        }

        /**
         * An Async wrapper for CreateSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSmsTemplateRequestT = Model::CreateSmsTemplateRequest>
        void CreateSmsTemplateAsync(const CreateSmsTemplateRequestT& request, const CreateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateSmsTemplate, request, handler, context);
        }

        /**
         * <p>Creates a message template for messages that are sent through the voice
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceTemplateOutcome CreateVoiceTemplate(const Model::CreateVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVoiceTemplateRequestT = Model::CreateVoiceTemplateRequest>
        Model::CreateVoiceTemplateOutcomeCallable CreateVoiceTemplateCallable(const CreateVoiceTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::CreateVoiceTemplate, request);
        }

        /**
         * An Async wrapper for CreateVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVoiceTemplateRequestT = Model::CreateVoiceTemplateRequest>
        void CreateVoiceTemplateAsync(const CreateVoiceTemplateRequestT& request, const CreateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::CreateVoiceTemplate, request, handler, context);
        }

        /**
         * <p>Disables the ADM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAdmChannelOutcome DeleteAdmChannel(const Model::DeleteAdmChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteAdmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAdmChannelRequestT = Model::DeleteAdmChannelRequest>
        Model::DeleteAdmChannelOutcomeCallable DeleteAdmChannelCallable(const DeleteAdmChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteAdmChannel, request);
        }

        /**
         * An Async wrapper for DeleteAdmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAdmChannelRequestT = Model::DeleteAdmChannelRequest>
        void DeleteAdmChannelAsync(const DeleteAdmChannelRequestT& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteAdmChannel, request, handler, context);
        }

        /**
         * <p>Disables the APNs channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsChannelOutcome DeleteApnsChannel(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApnsChannelRequestT = Model::DeleteApnsChannelRequest>
        Model::DeleteApnsChannelOutcomeCallable DeleteApnsChannelCallable(const DeleteApnsChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteApnsChannel, request);
        }

        /**
         * An Async wrapper for DeleteApnsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApnsChannelRequestT = Model::DeleteApnsChannelRequest>
        void DeleteApnsChannelAsync(const DeleteApnsChannelRequestT& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteApnsChannel, request, handler, context);
        }

        /**
         * <p>Disables the APNs sandbox channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsSandboxChannelOutcome DeleteApnsSandboxChannel(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApnsSandboxChannelRequestT = Model::DeleteApnsSandboxChannelRequest>
        Model::DeleteApnsSandboxChannelOutcomeCallable DeleteApnsSandboxChannelCallable(const DeleteApnsSandboxChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteApnsSandboxChannel, request);
        }

        /**
         * An Async wrapper for DeleteApnsSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApnsSandboxChannelRequestT = Model::DeleteApnsSandboxChannelRequest>
        void DeleteApnsSandboxChannelAsync(const DeleteApnsSandboxChannelRequestT& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteApnsSandboxChannel, request, handler, context);
        }

        /**
         * <p>Disables the APNs VoIP channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipChannelOutcome DeleteApnsVoipChannel(const Model::DeleteApnsVoipChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsVoipChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApnsVoipChannelRequestT = Model::DeleteApnsVoipChannelRequest>
        Model::DeleteApnsVoipChannelOutcomeCallable DeleteApnsVoipChannelCallable(const DeleteApnsVoipChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteApnsVoipChannel, request);
        }

        /**
         * An Async wrapper for DeleteApnsVoipChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApnsVoipChannelRequestT = Model::DeleteApnsVoipChannelRequest>
        void DeleteApnsVoipChannelAsync(const DeleteApnsVoipChannelRequestT& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteApnsVoipChannel, request, handler, context);
        }

        /**
         * <p>Disables the APNs VoIP sandbox channel for an application and deletes any
         * existing settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcome DeleteApnsVoipSandboxChannel(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsVoipSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApnsVoipSandboxChannelRequestT = Model::DeleteApnsVoipSandboxChannelRequest>
        Model::DeleteApnsVoipSandboxChannelOutcomeCallable DeleteApnsVoipSandboxChannelCallable(const DeleteApnsVoipSandboxChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteApnsVoipSandboxChannel, request);
        }

        /**
         * An Async wrapper for DeleteApnsVoipSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApnsVoipSandboxChannelRequestT = Model::DeleteApnsVoipSandboxChannelRequest>
        void DeleteApnsVoipSandboxChannelAsync(const DeleteApnsVoipSandboxChannelRequestT& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteApnsVoipSandboxChannel, request, handler, context);
        }

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        Model::DeleteAppOutcomeCallable DeleteAppCallable(const DeleteAppRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteApp, request);
        }

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        void DeleteAppAsync(const DeleteAppRequestT& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteApp, request, handler, context);
        }

        /**
         * <p>Disables the Baidu channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBaiduChannelOutcome DeleteBaiduChannel(const Model::DeleteBaiduChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteBaiduChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBaiduChannelRequestT = Model::DeleteBaiduChannelRequest>
        Model::DeleteBaiduChannelOutcomeCallable DeleteBaiduChannelCallable(const DeleteBaiduChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteBaiduChannel, request);
        }

        /**
         * An Async wrapper for DeleteBaiduChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBaiduChannelRequestT = Model::DeleteBaiduChannelRequest>
        void DeleteBaiduChannelAsync(const DeleteBaiduChannelRequestT& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteBaiduChannel, request, handler, context);
        }

        /**
         * <p>Deletes a campaign from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const DeleteCampaignRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteCampaign, request);
        }

        /**
         * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        void DeleteCampaignAsync(const DeleteCampaignRequestT& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteCampaign, request, handler, context);
        }

        /**
         * <p>Disables the email channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailChannelOutcome DeleteEmailChannel(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEmailChannelRequestT = Model::DeleteEmailChannelRequest>
        Model::DeleteEmailChannelOutcomeCallable DeleteEmailChannelCallable(const DeleteEmailChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteEmailChannel, request);
        }

        /**
         * An Async wrapper for DeleteEmailChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEmailChannelRequestT = Model::DeleteEmailChannelRequest>
        void DeleteEmailChannelAsync(const DeleteEmailChannelRequestT& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteEmailChannel, request, handler, context);
        }

        /**
         * <p>Deletes a message template for messages that were sent through the email
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEmailTemplateRequestT = Model::DeleteEmailTemplateRequest>
        Model::DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const DeleteEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteEmailTemplate, request);
        }

        /**
         * An Async wrapper for DeleteEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEmailTemplateRequestT = Model::DeleteEmailTemplateRequest>
        void DeleteEmailTemplateAsync(const DeleteEmailTemplateRequestT& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteEmailTemplate, request, handler, context);
        }

        /**
         * <p>Deletes an endpoint from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const DeleteEndpointRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        void DeleteEndpointAsync(const DeleteEndpointRequestT& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes the event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventStreamOutcome DeleteEventStream(const Model::DeleteEventStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventStreamRequestT = Model::DeleteEventStreamRequest>
        Model::DeleteEventStreamOutcomeCallable DeleteEventStreamCallable(const DeleteEventStreamRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteEventStream, request);
        }

        /**
         * An Async wrapper for DeleteEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventStreamRequestT = Model::DeleteEventStreamRequest>
        void DeleteEventStreamAsync(const DeleteEventStreamRequestT& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteEventStream, request, handler, context);
        }

        /**
         * <p>Disables the GCM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGcmChannelOutcome DeleteGcmChannel(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteGcmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGcmChannelRequestT = Model::DeleteGcmChannelRequest>
        Model::DeleteGcmChannelOutcomeCallable DeleteGcmChannelCallable(const DeleteGcmChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteGcmChannel, request);
        }

        /**
         * An Async wrapper for DeleteGcmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGcmChannelRequestT = Model::DeleteGcmChannelRequest>
        void DeleteGcmChannelAsync(const DeleteGcmChannelRequestT& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteGcmChannel, request, handler, context);
        }

        /**
         * <p>Deletes a message template for messages sent using the in-app message
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInAppTemplateOutcome DeleteInAppTemplate(const Model::DeleteInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInAppTemplateRequestT = Model::DeleteInAppTemplateRequest>
        Model::DeleteInAppTemplateOutcomeCallable DeleteInAppTemplateCallable(const DeleteInAppTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteInAppTemplate, request);
        }

        /**
         * An Async wrapper for DeleteInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInAppTemplateRequestT = Model::DeleteInAppTemplateRequest>
        void DeleteInAppTemplateAsync(const DeleteInAppTemplateRequestT& request, const DeleteInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteInAppTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a journey from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJourneyOutcome DeleteJourney(const Model::DeleteJourneyRequest& request) const;

        /**
         * A Callable wrapper for DeleteJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJourneyRequestT = Model::DeleteJourneyRequest>
        Model::DeleteJourneyOutcomeCallable DeleteJourneyCallable(const DeleteJourneyRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteJourney, request);
        }

        /**
         * An Async wrapper for DeleteJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJourneyRequestT = Model::DeleteJourneyRequest>
        void DeleteJourneyAsync(const DeleteJourneyRequestT& request, const DeleteJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteJourney, request, handler, context);
        }

        /**
         * <p>Deletes a message template for messages that were sent through a push
         * notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeletePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePushTemplateOutcome DeletePushTemplate(const Model::DeletePushTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeletePushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePushTemplateRequestT = Model::DeletePushTemplateRequest>
        Model::DeletePushTemplateOutcomeCallable DeletePushTemplateCallable(const DeletePushTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeletePushTemplate, request);
        }

        /**
         * An Async wrapper for DeletePushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePushTemplateRequestT = Model::DeletePushTemplateRequest>
        void DeletePushTemplateAsync(const DeletePushTemplateRequestT& request, const DeletePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeletePushTemplate, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommenderConfigurationOutcome DeleteRecommenderConfiguration(const Model::DeleteRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRecommenderConfigurationRequestT = Model::DeleteRecommenderConfigurationRequest>
        Model::DeleteRecommenderConfigurationOutcomeCallable DeleteRecommenderConfigurationCallable(const DeleteRecommenderConfigurationRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteRecommenderConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecommenderConfigurationRequestT = Model::DeleteRecommenderConfigurationRequest>
        void DeleteRecommenderConfigurationAsync(const DeleteRecommenderConfigurationRequestT& request, const DeleteRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteRecommenderConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a segment from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSegmentOutcome DeleteSegment(const Model::DeleteSegmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSegmentRequestT = Model::DeleteSegmentRequest>
        Model::DeleteSegmentOutcomeCallable DeleteSegmentCallable(const DeleteSegmentRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteSegment, request);
        }

        /**
         * An Async wrapper for DeleteSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSegmentRequestT = Model::DeleteSegmentRequest>
        void DeleteSegmentAsync(const DeleteSegmentRequestT& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteSegment, request, handler, context);
        }

        /**
         * <p>Disables the SMS channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsChannelOutcome DeleteSmsChannel(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteSmsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSmsChannelRequestT = Model::DeleteSmsChannelRequest>
        Model::DeleteSmsChannelOutcomeCallable DeleteSmsChannelCallable(const DeleteSmsChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteSmsChannel, request);
        }

        /**
         * An Async wrapper for DeleteSmsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSmsChannelRequestT = Model::DeleteSmsChannelRequest>
        void DeleteSmsChannelAsync(const DeleteSmsChannelRequestT& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteSmsChannel, request, handler, context);
        }

        /**
         * <p>Deletes a message template for messages that were sent through the SMS
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsTemplateOutcome DeleteSmsTemplate(const Model::DeleteSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSmsTemplateRequestT = Model::DeleteSmsTemplateRequest>
        Model::DeleteSmsTemplateOutcomeCallable DeleteSmsTemplateCallable(const DeleteSmsTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteSmsTemplate, request);
        }

        /**
         * An Async wrapper for DeleteSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSmsTemplateRequestT = Model::DeleteSmsTemplateRequest>
        void DeleteSmsTemplateAsync(const DeleteSmsTemplateRequestT& request, const DeleteSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteSmsTemplate, request, handler, context);
        }

        /**
         * <p>Deletes all the endpoints that are associated with a specific user
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserEndpointsOutcome DeleteUserEndpoints(const Model::DeleteUserEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserEndpointsRequestT = Model::DeleteUserEndpointsRequest>
        Model::DeleteUserEndpointsOutcomeCallable DeleteUserEndpointsCallable(const DeleteUserEndpointsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteUserEndpoints, request);
        }

        /**
         * An Async wrapper for DeleteUserEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserEndpointsRequestT = Model::DeleteUserEndpointsRequest>
        void DeleteUserEndpointsAsync(const DeleteUserEndpointsRequestT& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteUserEndpoints, request, handler, context);
        }

        /**
         * <p>Disables the voice channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceChannelOutcome DeleteVoiceChannel(const Model::DeleteVoiceChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceChannelRequestT = Model::DeleteVoiceChannelRequest>
        Model::DeleteVoiceChannelOutcomeCallable DeleteVoiceChannelCallable(const DeleteVoiceChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteVoiceChannel, request);
        }

        /**
         * An Async wrapper for DeleteVoiceChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceChannelRequestT = Model::DeleteVoiceChannelRequest>
        void DeleteVoiceChannelAsync(const DeleteVoiceChannelRequestT& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteVoiceChannel, request, handler, context);
        }

        /**
         * <p>Deletes a message template for messages that were sent through the voice
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceTemplateOutcome DeleteVoiceTemplate(const Model::DeleteVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceTemplateRequestT = Model::DeleteVoiceTemplateRequest>
        Model::DeleteVoiceTemplateOutcomeCallable DeleteVoiceTemplateCallable(const DeleteVoiceTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::DeleteVoiceTemplate, request);
        }

        /**
         * An Async wrapper for DeleteVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceTemplateRequestT = Model::DeleteVoiceTemplateRequest>
        void DeleteVoiceTemplateAsync(const DeleteVoiceTemplateRequestT& request, const DeleteVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::DeleteVoiceTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the ADM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdmChannelOutcome GetAdmChannel(const Model::GetAdmChannelRequest& request) const;

        /**
         * A Callable wrapper for GetAdmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAdmChannelRequestT = Model::GetAdmChannelRequest>
        Model::GetAdmChannelOutcomeCallable GetAdmChannelCallable(const GetAdmChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetAdmChannel, request);
        }

        /**
         * An Async wrapper for GetAdmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAdmChannelRequestT = Model::GetAdmChannelRequest>
        void GetAdmChannelAsync(const GetAdmChannelRequestT& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetAdmChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the APNs channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsChannelOutcome GetApnsChannel(const Model::GetApnsChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApnsChannelRequestT = Model::GetApnsChannelRequest>
        Model::GetApnsChannelOutcomeCallable GetApnsChannelCallable(const GetApnsChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApnsChannel, request);
        }

        /**
         * An Async wrapper for GetApnsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApnsChannelRequestT = Model::GetApnsChannelRequest>
        void GetApnsChannelAsync(const GetApnsChannelRequestT& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApnsChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the APNs sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsSandboxChannelOutcome GetApnsSandboxChannel(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApnsSandboxChannelRequestT = Model::GetApnsSandboxChannelRequest>
        Model::GetApnsSandboxChannelOutcomeCallable GetApnsSandboxChannelCallable(const GetApnsSandboxChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApnsSandboxChannel, request);
        }

        /**
         * An Async wrapper for GetApnsSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApnsSandboxChannelRequestT = Model::GetApnsSandboxChannelRequest>
        void GetApnsSandboxChannelAsync(const GetApnsSandboxChannelRequestT& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApnsSandboxChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP channel
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipChannelOutcome GetApnsVoipChannel(const Model::GetApnsVoipChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsVoipChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApnsVoipChannelRequestT = Model::GetApnsVoipChannelRequest>
        Model::GetApnsVoipChannelOutcomeCallable GetApnsVoipChannelCallable(const GetApnsVoipChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApnsVoipChannel, request);
        }

        /**
         * An Async wrapper for GetApnsVoipChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApnsVoipChannelRequestT = Model::GetApnsVoipChannelRequest>
        void GetApnsVoipChannelAsync(const GetApnsVoipChannelRequestT& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApnsVoipChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipSandboxChannelOutcome GetApnsVoipSandboxChannel(const Model::GetApnsVoipSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsVoipSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApnsVoipSandboxChannelRequestT = Model::GetApnsVoipSandboxChannelRequest>
        Model::GetApnsVoipSandboxChannelOutcomeCallable GetApnsVoipSandboxChannelCallable(const GetApnsVoipSandboxChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApnsVoipSandboxChannel, request);
        }

        /**
         * An Async wrapper for GetApnsVoipSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApnsVoipSandboxChannelRequestT = Model::GetApnsVoipSandboxChannelRequest>
        void GetApnsVoipSandboxChannelAsync(const GetApnsVoipSandboxChannelRequestT& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApnsVoipSandboxChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * A Callable wrapper for GetApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppRequestT = Model::GetAppRequest>
        Model::GetAppOutcomeCallable GetAppCallable(const GetAppRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApp, request);
        }

        /**
         * An Async wrapper for GetApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppRequestT = Model::GetAppRequest>
        void GetAppAsync(const GetAppRequestT& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApp, request, handler, context);
        }

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard metric that applies to
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationDateRangeKpiOutcome GetApplicationDateRangeKpi(const Model::GetApplicationDateRangeKpiRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationDateRangeKpi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationDateRangeKpiRequestT = Model::GetApplicationDateRangeKpiRequest>
        Model::GetApplicationDateRangeKpiOutcomeCallable GetApplicationDateRangeKpiCallable(const GetApplicationDateRangeKpiRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApplicationDateRangeKpi, request);
        }

        /**
         * An Async wrapper for GetApplicationDateRangeKpi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationDateRangeKpiRequestT = Model::GetApplicationDateRangeKpiRequest>
        void GetApplicationDateRangeKpiAsync(const GetApplicationDateRangeKpiRequestT& request, const GetApplicationDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApplicationDateRangeKpi, request, handler, context);
        }

        /**
         * <p>Retrieves information about the settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationSettingsOutcome GetApplicationSettings(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationSettingsRequestT = Model::GetApplicationSettingsRequest>
        Model::GetApplicationSettingsOutcomeCallable GetApplicationSettingsCallable(const GetApplicationSettingsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApplicationSettings, request);
        }

        /**
         * An Async wrapper for GetApplicationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationSettingsRequestT = Model::GetApplicationSettingsRequest>
        void GetApplicationSettingsAsync(const GetApplicationSettingsRequestT& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApplicationSettings, request, handler, context);
        }

        /**
         * <p>Retrieves information about all the applications that are associated with
         * your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppsOutcome GetApps(const Model::GetAppsRequest& request) const;

        /**
         * A Callable wrapper for GetApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppsRequestT = Model::GetAppsRequest>
        Model::GetAppsOutcomeCallable GetAppsCallable(const GetAppsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetApps, request);
        }

        /**
         * An Async wrapper for GetApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppsRequestT = Model::GetAppsRequest>
        void GetAppsAsync(const GetAppsRequestT& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetApps, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the Baidu channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBaiduChannelOutcome GetBaiduChannel(const Model::GetBaiduChannelRequest& request) const;

        /**
         * A Callable wrapper for GetBaiduChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBaiduChannelRequestT = Model::GetBaiduChannelRequest>
        Model::GetBaiduChannelOutcomeCallable GetBaiduChannelCallable(const GetBaiduChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetBaiduChannel, request);
        }

        /**
         * An Async wrapper for GetBaiduChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBaiduChannelRequestT = Model::GetBaiduChannelRequest>
        void GetBaiduChannelAsync(const GetBaiduChannelRequestT& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetBaiduChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;

        /**
         * A Callable wrapper for GetCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignRequestT = Model::GetCampaignRequest>
        Model::GetCampaignOutcomeCallable GetCampaignCallable(const GetCampaignRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetCampaign, request);
        }

        /**
         * An Async wrapper for GetCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignRequestT = Model::GetCampaignRequest>
        void GetCampaignAsync(const GetCampaignRequestT& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetCampaign, request, handler, context);
        }

        /**
         * <p>Retrieves information about all the activities for a campaign.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignActivitiesOutcome GetCampaignActivities(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignActivitiesRequestT = Model::GetCampaignActivitiesRequest>
        Model::GetCampaignActivitiesOutcomeCallable GetCampaignActivitiesCallable(const GetCampaignActivitiesRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetCampaignActivities, request);
        }

        /**
         * An Async wrapper for GetCampaignActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignActivitiesRequestT = Model::GetCampaignActivitiesRequest>
        void GetCampaignActivitiesAsync(const GetCampaignActivitiesRequestT& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetCampaignActivities, request, handler, context);
        }

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard metric that applies to
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignDateRangeKpiOutcome GetCampaignDateRangeKpi(const Model::GetCampaignDateRangeKpiRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignDateRangeKpi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignDateRangeKpiRequestT = Model::GetCampaignDateRangeKpiRequest>
        Model::GetCampaignDateRangeKpiOutcomeCallable GetCampaignDateRangeKpiCallable(const GetCampaignDateRangeKpiRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetCampaignDateRangeKpi, request);
        }

        /**
         * An Async wrapper for GetCampaignDateRangeKpi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignDateRangeKpiRequestT = Model::GetCampaignDateRangeKpiRequest>
        void GetCampaignDateRangeKpiAsync(const GetCampaignDateRangeKpiRequestT& request, const GetCampaignDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetCampaignDateRangeKpi, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a specific version of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionOutcome GetCampaignVersion(const Model::GetCampaignVersionRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignVersionRequestT = Model::GetCampaignVersionRequest>
        Model::GetCampaignVersionOutcomeCallable GetCampaignVersionCallable(const GetCampaignVersionRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetCampaignVersion, request);
        }

        /**
         * An Async wrapper for GetCampaignVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignVersionRequestT = Model::GetCampaignVersionRequest>
        void GetCampaignVersionAsync(const GetCampaignVersionRequestT& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetCampaignVersion, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all versions of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionsOutcome GetCampaignVersions(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignVersionsRequestT = Model::GetCampaignVersionsRequest>
        Model::GetCampaignVersionsOutcomeCallable GetCampaignVersionsCallable(const GetCampaignVersionsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetCampaignVersions, request);
        }

        /**
         * An Async wrapper for GetCampaignVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignVersionsRequestT = Model::GetCampaignVersionsRequest>
        void GetCampaignVersionsAsync(const GetCampaignVersionsRequestT& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetCampaignVersions, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the campaigns that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignsOutcome GetCampaigns(const Model::GetCampaignsRequest& request) const;

        /**
         * A Callable wrapper for GetCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignsRequestT = Model::GetCampaignsRequest>
        Model::GetCampaignsOutcomeCallable GetCampaignsCallable(const GetCampaignsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetCampaigns, request);
        }

        /**
         * An Async wrapper for GetCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignsRequestT = Model::GetCampaignsRequest>
        void GetCampaignsAsync(const GetCampaignsRequestT& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetCampaigns, request, handler, context);
        }

        /**
         * <p>Retrieves information about the history and status of each channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelsOutcome GetChannels(const Model::GetChannelsRequest& request) const;

        /**
         * A Callable wrapper for GetChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelsRequestT = Model::GetChannelsRequest>
        Model::GetChannelsOutcomeCallable GetChannelsCallable(const GetChannelsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetChannels, request);
        }

        /**
         * An Async wrapper for GetChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelsRequestT = Model::GetChannelsRequest>
        void GetChannelsAsync(const GetChannelsRequestT& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetChannels, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the email channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailChannelOutcome GetEmailChannel(const Model::GetEmailChannelRequest& request) const;

        /**
         * A Callable wrapper for GetEmailChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEmailChannelRequestT = Model::GetEmailChannelRequest>
        Model::GetEmailChannelOutcomeCallable GetEmailChannelCallable(const GetEmailChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetEmailChannel, request);
        }

        /**
         * An Async wrapper for GetEmailChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEmailChannelRequestT = Model::GetEmailChannelRequest>
        void GetEmailChannelAsync(const GetEmailChannelRequestT& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetEmailChannel, request, handler, context);
        }

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the email channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEmailTemplateRequestT = Model::GetEmailTemplateRequest>
        Model::GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const GetEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetEmailTemplate, request);
        }

        /**
         * An Async wrapper for GetEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEmailTemplateRequestT = Model::GetEmailTemplateRequest>
        void GetEmailTemplateAsync(const GetEmailTemplateRequestT& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetEmailTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves information about the settings and attributes of a specific
         * endpoint for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointOutcome GetEndpoint(const Model::GetEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEndpointRequestT = Model::GetEndpointRequest>
        Model::GetEndpointOutcomeCallable GetEndpointCallable(const GetEndpointRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetEndpoint, request);
        }

        /**
         * An Async wrapper for GetEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEndpointRequestT = Model::GetEndpointRequest>
        void GetEndpointAsync(const GetEndpointRequestT& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves information about the event stream settings for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventStreamOutcome GetEventStream(const Model::GetEventStreamRequest& request) const;

        /**
         * A Callable wrapper for GetEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventStreamRequestT = Model::GetEventStreamRequest>
        Model::GetEventStreamOutcomeCallable GetEventStreamCallable(const GetEventStreamRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetEventStream, request);
        }

        /**
         * An Async wrapper for GetEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventStreamRequestT = Model::GetEventStreamRequest>
        void GetEventStreamAsync(const GetEventStreamRequestT& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetEventStream, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of a specific export job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobOutcome GetExportJob(const Model::GetExportJobRequest& request) const;

        /**
         * A Callable wrapper for GetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExportJobRequestT = Model::GetExportJobRequest>
        Model::GetExportJobOutcomeCallable GetExportJobCallable(const GetExportJobRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetExportJob, request);
        }

        /**
         * An Async wrapper for GetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExportJobRequestT = Model::GetExportJobRequest>
        void GetExportJobAsync(const GetExportJobRequestT& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetExportJob, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of all the export jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobsOutcome GetExportJobs(const Model::GetExportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExportJobsRequestT = Model::GetExportJobsRequest>
        Model::GetExportJobsOutcomeCallable GetExportJobsCallable(const GetExportJobsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetExportJobs, request);
        }

        /**
         * An Async wrapper for GetExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExportJobsRequestT = Model::GetExportJobsRequest>
        void GetExportJobsAsync(const GetExportJobsRequestT& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetExportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGcmChannelOutcome GetGcmChannel(const Model::GetGcmChannelRequest& request) const;

        /**
         * A Callable wrapper for GetGcmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGcmChannelRequestT = Model::GetGcmChannelRequest>
        Model::GetGcmChannelOutcomeCallable GetGcmChannelCallable(const GetGcmChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetGcmChannel, request);
        }

        /**
         * An Async wrapper for GetGcmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGcmChannelRequestT = Model::GetGcmChannelRequest>
        void GetGcmChannelAsync(const GetGcmChannelRequestT& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetGcmChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of a specific import job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportJobRequestT = Model::GetImportJobRequest>
        Model::GetImportJobOutcomeCallable GetImportJobCallable(const GetImportJobRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetImportJob, request);
        }

        /**
         * An Async wrapper for GetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportJobRequestT = Model::GetImportJobRequest>
        void GetImportJobAsync(const GetImportJobRequestT& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetImportJob, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of all the import jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobsOutcome GetImportJobs(const Model::GetImportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportJobsRequestT = Model::GetImportJobsRequest>
        Model::GetImportJobsOutcomeCallable GetImportJobsCallable(const GetImportJobsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetImportJobs, request);
        }

        /**
         * An Async wrapper for GetImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportJobsRequestT = Model::GetImportJobsRequest>
        void GetImportJobsAsync(const GetImportJobsRequestT& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetImportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves the in-app messages targeted for the provided endpoint
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetInAppMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInAppMessagesOutcome GetInAppMessages(const Model::GetInAppMessagesRequest& request) const;

        /**
         * A Callable wrapper for GetInAppMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInAppMessagesRequestT = Model::GetInAppMessagesRequest>
        Model::GetInAppMessagesOutcomeCallable GetInAppMessagesCallable(const GetInAppMessagesRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetInAppMessages, request);
        }

        /**
         * An Async wrapper for GetInAppMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInAppMessagesRequestT = Model::GetInAppMessagesRequest>
        void GetInAppMessagesAsync(const GetInAppMessagesRequestT& request, const GetInAppMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetInAppMessages, request, handler, context);
        }

        /**
         * <p>Retrieves the content and settings of a message template for messages sent
         * through the in-app channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInAppTemplateOutcome GetInAppTemplate(const Model::GetInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInAppTemplateRequestT = Model::GetInAppTemplateRequest>
        Model::GetInAppTemplateOutcomeCallable GetInAppTemplateCallable(const GetInAppTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetInAppTemplate, request);
        }

        /**
         * An Async wrapper for GetInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInAppTemplateRequestT = Model::GetInAppTemplateRequest>
        void GetInAppTemplateAsync(const GetInAppTemplateRequestT& request, const GetInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetInAppTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyOutcome GetJourney(const Model::GetJourneyRequest& request) const;

        /**
         * A Callable wrapper for GetJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJourneyRequestT = Model::GetJourneyRequest>
        Model::GetJourneyOutcomeCallable GetJourneyCallable(const GetJourneyRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetJourney, request);
        }

        /**
         * An Async wrapper for GetJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJourneyRequestT = Model::GetJourneyRequest>
        void GetJourneyAsync(const GetJourneyRequestT& request, const GetJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetJourney, request, handler, context);
        }

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard engagement metric that
         * applies to a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyDateRangeKpiOutcome GetJourneyDateRangeKpi(const Model::GetJourneyDateRangeKpiRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyDateRangeKpi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJourneyDateRangeKpiRequestT = Model::GetJourneyDateRangeKpiRequest>
        Model::GetJourneyDateRangeKpiOutcomeCallable GetJourneyDateRangeKpiCallable(const GetJourneyDateRangeKpiRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetJourneyDateRangeKpi, request);
        }

        /**
         * An Async wrapper for GetJourneyDateRangeKpi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJourneyDateRangeKpiRequestT = Model::GetJourneyDateRangeKpiRequest>
        void GetJourneyDateRangeKpiAsync(const GetJourneyDateRangeKpiRequestT& request, const GetJourneyDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetJourneyDateRangeKpi, request, handler, context);
        }

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard execution metric that
         * applies to a journey activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyExecutionActivityMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyExecutionActivityMetricsOutcome GetJourneyExecutionActivityMetrics(const Model::GetJourneyExecutionActivityMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyExecutionActivityMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJourneyExecutionActivityMetricsRequestT = Model::GetJourneyExecutionActivityMetricsRequest>
        Model::GetJourneyExecutionActivityMetricsOutcomeCallable GetJourneyExecutionActivityMetricsCallable(const GetJourneyExecutionActivityMetricsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetJourneyExecutionActivityMetrics, request);
        }

        /**
         * An Async wrapper for GetJourneyExecutionActivityMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJourneyExecutionActivityMetricsRequestT = Model::GetJourneyExecutionActivityMetricsRequest>
        void GetJourneyExecutionActivityMetricsAsync(const GetJourneyExecutionActivityMetricsRequestT& request, const GetJourneyExecutionActivityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetJourneyExecutionActivityMetrics, request, handler, context);
        }

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard execution metric that
         * applies to a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyExecutionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyExecutionMetricsOutcome GetJourneyExecutionMetrics(const Model::GetJourneyExecutionMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyExecutionMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJourneyExecutionMetricsRequestT = Model::GetJourneyExecutionMetricsRequest>
        Model::GetJourneyExecutionMetricsOutcomeCallable GetJourneyExecutionMetricsCallable(const GetJourneyExecutionMetricsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetJourneyExecutionMetrics, request);
        }

        /**
         * An Async wrapper for GetJourneyExecutionMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJourneyExecutionMetricsRequestT = Model::GetJourneyExecutionMetricsRequest>
        void GetJourneyExecutionMetricsAsync(const GetJourneyExecutionMetricsRequestT& request, const GetJourneyExecutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetJourneyExecutionMetrics, request, handler, context);
        }

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard run execution metric
         * that applies to a journey activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyRunExecutionActivityMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyRunExecutionActivityMetricsOutcome GetJourneyRunExecutionActivityMetrics(const Model::GetJourneyRunExecutionActivityMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyRunExecutionActivityMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJourneyRunExecutionActivityMetricsRequestT = Model::GetJourneyRunExecutionActivityMetricsRequest>
        Model::GetJourneyRunExecutionActivityMetricsOutcomeCallable GetJourneyRunExecutionActivityMetricsCallable(const GetJourneyRunExecutionActivityMetricsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetJourneyRunExecutionActivityMetrics, request);
        }

        /**
         * An Async wrapper for GetJourneyRunExecutionActivityMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJourneyRunExecutionActivityMetricsRequestT = Model::GetJourneyRunExecutionActivityMetricsRequest>
        void GetJourneyRunExecutionActivityMetricsAsync(const GetJourneyRunExecutionActivityMetricsRequestT& request, const GetJourneyRunExecutionActivityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetJourneyRunExecutionActivityMetrics, request, handler, context);
        }

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard run execution metric
         * that applies to a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyRunExecutionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyRunExecutionMetricsOutcome GetJourneyRunExecutionMetrics(const Model::GetJourneyRunExecutionMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyRunExecutionMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJourneyRunExecutionMetricsRequestT = Model::GetJourneyRunExecutionMetricsRequest>
        Model::GetJourneyRunExecutionMetricsOutcomeCallable GetJourneyRunExecutionMetricsCallable(const GetJourneyRunExecutionMetricsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetJourneyRunExecutionMetrics, request);
        }

        /**
         * An Async wrapper for GetJourneyRunExecutionMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJourneyRunExecutionMetricsRequestT = Model::GetJourneyRunExecutionMetricsRequest>
        void GetJourneyRunExecutionMetricsAsync(const GetJourneyRunExecutionMetricsRequestT& request, const GetJourneyRunExecutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetJourneyRunExecutionMetrics, request, handler, context);
        }

        /**
         * <p>Provides information about the runs of a journey.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyRunsOutcome GetJourneyRuns(const Model::GetJourneyRunsRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJourneyRunsRequestT = Model::GetJourneyRunsRequest>
        Model::GetJourneyRunsOutcomeCallable GetJourneyRunsCallable(const GetJourneyRunsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetJourneyRuns, request);
        }

        /**
         * An Async wrapper for GetJourneyRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJourneyRunsRequestT = Model::GetJourneyRunsRequest>
        void GetJourneyRunsAsync(const GetJourneyRunsRequestT& request, const GetJourneyRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetJourneyRuns, request, handler, context);
        }

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through a push notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetPushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPushTemplateOutcome GetPushTemplate(const Model::GetPushTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetPushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPushTemplateRequestT = Model::GetPushTemplateRequest>
        Model::GetPushTemplateOutcomeCallable GetPushTemplateCallable(const GetPushTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetPushTemplate, request);
        }

        /**
         * An Async wrapper for GetPushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPushTemplateRequestT = Model::GetPushTemplateRequest>
        void GetPushTemplateAsync(const GetPushTemplateRequestT& request, const GetPushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetPushTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves information about an Amazon Pinpoint configuration for a
         * recommender model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommenderConfigurationOutcome GetRecommenderConfiguration(const Model::GetRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommenderConfigurationRequestT = Model::GetRecommenderConfigurationRequest>
        Model::GetRecommenderConfigurationOutcomeCallable GetRecommenderConfigurationCallable(const GetRecommenderConfigurationRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetRecommenderConfiguration, request);
        }

        /**
         * An Async wrapper for GetRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommenderConfigurationRequestT = Model::GetRecommenderConfigurationRequest>
        void GetRecommenderConfigurationAsync(const GetRecommenderConfigurationRequestT& request, const GetRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetRecommenderConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves information about all the recommender model configurations that are
         * associated with your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetRecommenderConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommenderConfigurationsOutcome GetRecommenderConfigurations(const Model::GetRecommenderConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for GetRecommenderConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommenderConfigurationsRequestT = Model::GetRecommenderConfigurationsRequest>
        Model::GetRecommenderConfigurationsOutcomeCallable GetRecommenderConfigurationsCallable(const GetRecommenderConfigurationsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetRecommenderConfigurations, request);
        }

        /**
         * An Async wrapper for GetRecommenderConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommenderConfigurationsRequestT = Model::GetRecommenderConfigurationsRequest>
        void GetRecommenderConfigurationsAsync(const GetRecommenderConfigurationsRequestT& request, const GetRecommenderConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetRecommenderConfigurations, request, handler, context);
        }

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific segment that's associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentOutcome GetSegment(const Model::GetSegmentRequest& request) const;

        /**
         * A Callable wrapper for GetSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentRequestT = Model::GetSegmentRequest>
        Model::GetSegmentOutcomeCallable GetSegmentCallable(const GetSegmentRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSegment, request);
        }

        /**
         * An Async wrapper for GetSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentRequestT = Model::GetSegmentRequest>
        void GetSegmentAsync(const GetSegmentRequestT& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSegment, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the export jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentExportJobsOutcome GetSegmentExportJobs(const Model::GetSegmentExportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentExportJobsRequestT = Model::GetSegmentExportJobsRequest>
        Model::GetSegmentExportJobsOutcomeCallable GetSegmentExportJobsCallable(const GetSegmentExportJobsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSegmentExportJobs, request);
        }

        /**
         * An Async wrapper for GetSegmentExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentExportJobsRequestT = Model::GetSegmentExportJobsRequest>
        void GetSegmentExportJobsAsync(const GetSegmentExportJobsRequestT& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSegmentExportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the import jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentImportJobsOutcome GetSegmentImportJobs(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentImportJobsRequestT = Model::GetSegmentImportJobsRequest>
        Model::GetSegmentImportJobsOutcomeCallable GetSegmentImportJobsCallable(const GetSegmentImportJobsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSegmentImportJobs, request);
        }

        /**
         * An Async wrapper for GetSegmentImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentImportJobsRequestT = Model::GetSegmentImportJobsRequest>
        void GetSegmentImportJobsAsync(const GetSegmentImportJobsRequestT& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSegmentImportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific version of a segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionOutcome GetSegmentVersion(const Model::GetSegmentVersionRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentVersionRequestT = Model::GetSegmentVersionRequest>
        Model::GetSegmentVersionOutcomeCallable GetSegmentVersionCallable(const GetSegmentVersionRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSegmentVersion, request);
        }

        /**
         * An Async wrapper for GetSegmentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentVersionRequestT = Model::GetSegmentVersionRequest>
        void GetSegmentVersionAsync(const GetSegmentVersionRequestT& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSegmentVersion, request, handler, context);
        }

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the versions of a specific segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionsOutcome GetSegmentVersions(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentVersionsRequestT = Model::GetSegmentVersionsRequest>
        Model::GetSegmentVersionsOutcomeCallable GetSegmentVersionsCallable(const GetSegmentVersionsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSegmentVersions, request);
        }

        /**
         * An Async wrapper for GetSegmentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentVersionsRequestT = Model::GetSegmentVersionsRequest>
        void GetSegmentVersionsAsync(const GetSegmentVersionsRequestT& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSegmentVersions, request, handler, context);
        }

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the segments that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentsOutcome GetSegments(const Model::GetSegmentsRequest& request) const;

        /**
         * A Callable wrapper for GetSegments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentsRequestT = Model::GetSegmentsRequest>
        Model::GetSegmentsOutcomeCallable GetSegmentsCallable(const GetSegmentsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSegments, request);
        }

        /**
         * An Async wrapper for GetSegments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentsRequestT = Model::GetSegmentsRequest>
        void GetSegmentsAsync(const GetSegmentsRequestT& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSegments, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsChannelOutcome GetSmsChannel(const Model::GetSmsChannelRequest& request) const;

        /**
         * A Callable wrapper for GetSmsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSmsChannelRequestT = Model::GetSmsChannelRequest>
        Model::GetSmsChannelOutcomeCallable GetSmsChannelCallable(const GetSmsChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSmsChannel, request);
        }

        /**
         * An Async wrapper for GetSmsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSmsChannelRequestT = Model::GetSmsChannelRequest>
        void GetSmsChannelAsync(const GetSmsChannelRequestT& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSmsChannel, request, handler, context);
        }

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the SMS channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsTemplateOutcome GetSmsTemplate(const Model::GetSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSmsTemplateRequestT = Model::GetSmsTemplateRequest>
        Model::GetSmsTemplateOutcomeCallable GetSmsTemplateCallable(const GetSmsTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetSmsTemplate, request);
        }

        /**
         * An Async wrapper for GetSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSmsTemplateRequestT = Model::GetSmsTemplateRequest>
        void GetSmsTemplateAsync(const GetSmsTemplateRequestT& request, const GetSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetSmsTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves information about all the endpoints that are associated with a
         * specific user ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserEndpointsOutcome GetUserEndpoints(const Model::GetUserEndpointsRequest& request) const;

        /**
         * A Callable wrapper for GetUserEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserEndpointsRequestT = Model::GetUserEndpointsRequest>
        Model::GetUserEndpointsOutcomeCallable GetUserEndpointsCallable(const GetUserEndpointsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetUserEndpoints, request);
        }

        /**
         * An Async wrapper for GetUserEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserEndpointsRequestT = Model::GetUserEndpointsRequest>
        void GetUserEndpointsAsync(const GetUserEndpointsRequestT& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetUserEndpoints, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status and settings of the voice channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceChannelOutcome GetVoiceChannel(const Model::GetVoiceChannelRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceChannelRequestT = Model::GetVoiceChannelRequest>
        Model::GetVoiceChannelOutcomeCallable GetVoiceChannelCallable(const GetVoiceChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetVoiceChannel, request);
        }

        /**
         * An Async wrapper for GetVoiceChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceChannelRequestT = Model::GetVoiceChannelRequest>
        void GetVoiceChannelAsync(const GetVoiceChannelRequestT& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetVoiceChannel, request, handler, context);
        }

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the voice channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceTemplateOutcome GetVoiceTemplate(const Model::GetVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceTemplateRequestT = Model::GetVoiceTemplateRequest>
        Model::GetVoiceTemplateOutcomeCallable GetVoiceTemplateCallable(const GetVoiceTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::GetVoiceTemplate, request);
        }

        /**
         * An Async wrapper for GetVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceTemplateRequestT = Model::GetVoiceTemplateRequest>
        void GetVoiceTemplateAsync(const GetVoiceTemplateRequestT& request, const GetVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::GetVoiceTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the journeys that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListJourneys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJourneysOutcome ListJourneys(const Model::ListJourneysRequest& request) const;

        /**
         * A Callable wrapper for ListJourneys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJourneysRequestT = Model::ListJourneysRequest>
        Model::ListJourneysOutcomeCallable ListJourneysCallable(const ListJourneysRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::ListJourneys, request);
        }

        /**
         * An Async wrapper for ListJourneys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJourneysRequestT = Model::ListJourneysRequest>
        void ListJourneysAsync(const ListJourneysRequestT& request, const ListJourneysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::ListJourneys, request, handler, context);
        }

        /**
         * <p>Retrieves all the tags (keys and values) that are associated with an
         * application, campaign, message template, or segment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Retrieves information about all the versions of a specific message
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateVersionsOutcome ListTemplateVersions(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplateVersionsRequestT = Model::ListTemplateVersionsRequest>
        Model::ListTemplateVersionsOutcomeCallable ListTemplateVersionsCallable(const ListTemplateVersionsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::ListTemplateVersions, request);
        }

        /**
         * An Async wrapper for ListTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplateVersionsRequestT = Model::ListTemplateVersionsRequest>
        void ListTemplateVersionsAsync(const ListTemplateVersionsRequestT& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::ListTemplateVersions, request, handler, context);
        }

        /**
         * <p>Retrieves information about all the message templates that are associated
         * with your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const ListTemplatesRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::ListTemplates, request);
        }

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        void ListTemplatesAsync(const ListTemplatesRequestT& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::ListTemplates, request, handler, context);
        }

        /**
         * <p>Retrieves information about a phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         */
        virtual Model::PhoneNumberValidateOutcome PhoneNumberValidate(const Model::PhoneNumberValidateRequest& request) const;

        /**
         * A Callable wrapper for PhoneNumberValidate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PhoneNumberValidateRequestT = Model::PhoneNumberValidateRequest>
        Model::PhoneNumberValidateOutcomeCallable PhoneNumberValidateCallable(const PhoneNumberValidateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::PhoneNumberValidate, request);
        }

        /**
         * An Async wrapper for PhoneNumberValidate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PhoneNumberValidateRequestT = Model::PhoneNumberValidateRequest>
        void PhoneNumberValidateAsync(const PhoneNumberValidateRequestT& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::PhoneNumberValidate, request, handler, context);
        }

        /**
         * <p>Creates a new event stream for an application or updates the settings of an
         * existing event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventStreamOutcome PutEventStream(const Model::PutEventStreamRequest& request) const;

        /**
         * A Callable wrapper for PutEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEventStreamRequestT = Model::PutEventStreamRequest>
        Model::PutEventStreamOutcomeCallable PutEventStreamCallable(const PutEventStreamRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::PutEventStream, request);
        }

        /**
         * An Async wrapper for PutEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEventStreamRequestT = Model::PutEventStreamRequest>
        void PutEventStreamAsync(const PutEventStreamRequestT& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::PutEventStream, request, handler, context);
        }

        /**
         * <p>Creates a new event to record for endpoints, or creates or updates endpoint
         * data that existing events are associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * A Callable wrapper for PutEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEventsRequestT = Model::PutEventsRequest>
        Model::PutEventsOutcomeCallable PutEventsCallable(const PutEventsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::PutEvents, request);
        }

        /**
         * An Async wrapper for PutEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEventsRequestT = Model::PutEventsRequest>
        void PutEventsAsync(const PutEventsRequestT& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::PutEvents, request, handler, context);
        }

        /**
         * <p>Removes one or more custom attributes, of the same attribute type, from the
         * application. Existing endpoints still have the attributes but Amazon Pinpoint
         * will stop capturing new or changed values for these attributes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesOutcome RemoveAttributes(const Model::RemoveAttributesRequest& request) const;

        /**
         * A Callable wrapper for RemoveAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveAttributesRequestT = Model::RemoveAttributesRequest>
        Model::RemoveAttributesOutcomeCallable RemoveAttributesCallable(const RemoveAttributesRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::RemoveAttributes, request);
        }

        /**
         * An Async wrapper for RemoveAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAttributesRequestT = Model::RemoveAttributesRequest>
        void RemoveAttributesAsync(const RemoveAttributesRequestT& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::RemoveAttributes, request, handler, context);
        }

        /**
         * <p>Creates and sends a direct message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessagesOutcome SendMessages(const Model::SendMessagesRequest& request) const;

        /**
         * A Callable wrapper for SendMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendMessagesRequestT = Model::SendMessagesRequest>
        Model::SendMessagesOutcomeCallable SendMessagesCallable(const SendMessagesRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::SendMessages, request);
        }

        /**
         * An Async wrapper for SendMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendMessagesRequestT = Model::SendMessagesRequest>
        void SendMessagesAsync(const SendMessagesRequestT& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::SendMessages, request, handler, context);
        }

        /**
         * <p>Send an OTP message</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendOTPMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendOTPMessageOutcome SendOTPMessage(const Model::SendOTPMessageRequest& request) const;

        /**
         * A Callable wrapper for SendOTPMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendOTPMessageRequestT = Model::SendOTPMessageRequest>
        Model::SendOTPMessageOutcomeCallable SendOTPMessageCallable(const SendOTPMessageRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::SendOTPMessage, request);
        }

        /**
         * An Async wrapper for SendOTPMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendOTPMessageRequestT = Model::SendOTPMessageRequest>
        void SendOTPMessageAsync(const SendOTPMessageRequestT& request, const SendOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::SendOTPMessage, request, handler, context);
        }

        /**
         * <p>Creates and sends a message to a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendUsersMessagesOutcome SendUsersMessages(const Model::SendUsersMessagesRequest& request) const;

        /**
         * A Callable wrapper for SendUsersMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendUsersMessagesRequestT = Model::SendUsersMessagesRequest>
        Model::SendUsersMessagesOutcomeCallable SendUsersMessagesCallable(const SendUsersMessagesRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::SendUsersMessages, request);
        }

        /**
         * An Async wrapper for SendUsersMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendUsersMessagesRequestT = Model::SendUsersMessagesRequest>
        void SendUsersMessagesAsync(const SendUsersMessagesRequestT& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::SendUsersMessages, request, handler, context);
        }

        /**
         * <p>Adds one or more tags (keys and values) to an application, campaign, message
         * template, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags (keys and values) from an application, campaign,
         * message template, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Enables the ADM channel for an application or updates the status and settings
         * of the ADM channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAdmChannelOutcome UpdateAdmChannel(const Model::UpdateAdmChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateAdmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAdmChannelRequestT = Model::UpdateAdmChannelRequest>
        Model::UpdateAdmChannelOutcomeCallable UpdateAdmChannelCallable(const UpdateAdmChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateAdmChannel, request);
        }

        /**
         * An Async wrapper for UpdateAdmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAdmChannelRequestT = Model::UpdateAdmChannelRequest>
        void UpdateAdmChannelAsync(const UpdateAdmChannelRequestT& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateAdmChannel, request, handler, context);
        }

        /**
         * <p>Enables the APNs channel for an application or updates the status and
         * settings of the APNs channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsChannelOutcome UpdateApnsChannel(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApnsChannelRequestT = Model::UpdateApnsChannelRequest>
        Model::UpdateApnsChannelOutcomeCallable UpdateApnsChannelCallable(const UpdateApnsChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateApnsChannel, request);
        }

        /**
         * An Async wrapper for UpdateApnsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApnsChannelRequestT = Model::UpdateApnsChannelRequest>
        void UpdateApnsChannelAsync(const UpdateApnsChannelRequestT& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateApnsChannel, request, handler, context);
        }

        /**
         * <p>Enables the APNs sandbox channel for an application or updates the status and
         * settings of the APNs sandbox channel for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsSandboxChannelOutcome UpdateApnsSandboxChannel(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApnsSandboxChannelRequestT = Model::UpdateApnsSandboxChannelRequest>
        Model::UpdateApnsSandboxChannelOutcomeCallable UpdateApnsSandboxChannelCallable(const UpdateApnsSandboxChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateApnsSandboxChannel, request);
        }

        /**
         * An Async wrapper for UpdateApnsSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApnsSandboxChannelRequestT = Model::UpdateApnsSandboxChannelRequest>
        void UpdateApnsSandboxChannelAsync(const UpdateApnsSandboxChannelRequestT& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateApnsSandboxChannel, request, handler, context);
        }

        /**
         * <p>Enables the APNs VoIP channel for an application or updates the status and
         * settings of the APNs VoIP channel for an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipChannelOutcome UpdateApnsVoipChannel(const Model::UpdateApnsVoipChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsVoipChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApnsVoipChannelRequestT = Model::UpdateApnsVoipChannelRequest>
        Model::UpdateApnsVoipChannelOutcomeCallable UpdateApnsVoipChannelCallable(const UpdateApnsVoipChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateApnsVoipChannel, request);
        }

        /**
         * An Async wrapper for UpdateApnsVoipChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApnsVoipChannelRequestT = Model::UpdateApnsVoipChannelRequest>
        void UpdateApnsVoipChannelAsync(const UpdateApnsVoipChannelRequestT& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateApnsVoipChannel, request, handler, context);
        }

        /**
         * <p>Enables the APNs VoIP sandbox channel for an application or updates the
         * status and settings of the APNs VoIP sandbox channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcome UpdateApnsVoipSandboxChannel(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsVoipSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApnsVoipSandboxChannelRequestT = Model::UpdateApnsVoipSandboxChannelRequest>
        Model::UpdateApnsVoipSandboxChannelOutcomeCallable UpdateApnsVoipSandboxChannelCallable(const UpdateApnsVoipSandboxChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateApnsVoipSandboxChannel, request);
        }

        /**
         * An Async wrapper for UpdateApnsVoipSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApnsVoipSandboxChannelRequestT = Model::UpdateApnsVoipSandboxChannelRequest>
        void UpdateApnsVoipSandboxChannelAsync(const UpdateApnsVoipSandboxChannelRequestT& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateApnsVoipSandboxChannel, request, handler, context);
        }

        /**
         * <p>Updates the settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationSettingsRequestT = Model::UpdateApplicationSettingsRequest>
        Model::UpdateApplicationSettingsOutcomeCallable UpdateApplicationSettingsCallable(const UpdateApplicationSettingsRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateApplicationSettings, request);
        }

        /**
         * An Async wrapper for UpdateApplicationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationSettingsRequestT = Model::UpdateApplicationSettingsRequest>
        void UpdateApplicationSettingsAsync(const UpdateApplicationSettingsRequestT& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateApplicationSettings, request, handler, context);
        }

        /**
         * <p>Enables the Baidu channel for an application or updates the status and
         * settings of the Baidu channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBaiduChannelOutcome UpdateBaiduChannel(const Model::UpdateBaiduChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateBaiduChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBaiduChannelRequestT = Model::UpdateBaiduChannelRequest>
        Model::UpdateBaiduChannelOutcomeCallable UpdateBaiduChannelCallable(const UpdateBaiduChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateBaiduChannel, request);
        }

        /**
         * An Async wrapper for UpdateBaiduChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBaiduChannelRequestT = Model::UpdateBaiduChannelRequest>
        void UpdateBaiduChannelAsync(const UpdateBaiduChannelRequestT& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateBaiduChannel, request, handler, context);
        }

        /**
         * <p>Updates the configuration and other settings for a campaign.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignRequestT = Model::UpdateCampaignRequest>
        Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const UpdateCampaignRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateCampaign, request);
        }

        /**
         * An Async wrapper for UpdateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignRequestT = Model::UpdateCampaignRequest>
        void UpdateCampaignAsync(const UpdateCampaignRequestT& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateCampaign, request, handler, context);
        }

        /**
         * <p>Enables the email channel for an application or updates the status and
         * settings of the email channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailChannelOutcome UpdateEmailChannel(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEmailChannelRequestT = Model::UpdateEmailChannelRequest>
        Model::UpdateEmailChannelOutcomeCallable UpdateEmailChannelCallable(const UpdateEmailChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateEmailChannel, request);
        }

        /**
         * An Async wrapper for UpdateEmailChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEmailChannelRequestT = Model::UpdateEmailChannelRequest>
        void UpdateEmailChannelAsync(const UpdateEmailChannelRequestT& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateEmailChannel, request, handler, context);
        }

        /**
         * <p>Updates an existing message template for messages that are sent through the
         * email channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEmailTemplateRequestT = Model::UpdateEmailTemplateRequest>
        Model::UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const UpdateEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateEmailTemplate, request);
        }

        /**
         * An Async wrapper for UpdateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEmailTemplateRequestT = Model::UpdateEmailTemplateRequest>
        void UpdateEmailTemplateAsync(const UpdateEmailTemplateRequestT& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateEmailTemplate, request, handler, context);
        }

        /**
         * <p>Creates a new endpoint for an application or updates the settings and
         * attributes of an existing endpoint for an application. You can also use this
         * operation to define custom attributes for an endpoint. If an update includes one
         * or more values for a custom attribute, Amazon Pinpoint replaces (overwrites) any
         * existing values with the new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEndpointRequestT = Model::UpdateEndpointRequest>
        Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const UpdateEndpointRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEndpointRequestT = Model::UpdateEndpointRequest>
        void UpdateEndpointAsync(const UpdateEndpointRequestT& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a new batch of endpoints for an application or updates the settings
         * and attributes of a batch of existing endpoints for an application. You can also
         * use this operation to define custom attributes for a batch of endpoints. If an
         * update includes one or more values for a custom attribute, Amazon Pinpoint
         * replaces (overwrites) any existing values with the new values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointsBatchOutcome UpdateEndpointsBatch(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpointsBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEndpointsBatchRequestT = Model::UpdateEndpointsBatchRequest>
        Model::UpdateEndpointsBatchOutcomeCallable UpdateEndpointsBatchCallable(const UpdateEndpointsBatchRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateEndpointsBatch, request);
        }

        /**
         * An Async wrapper for UpdateEndpointsBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEndpointsBatchRequestT = Model::UpdateEndpointsBatchRequest>
        void UpdateEndpointsBatchAsync(const UpdateEndpointsBatchRequestT& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateEndpointsBatch, request, handler, context);
        }

        /**
         * <p>Enables the GCM channel for an application or updates the status and settings
         * of the GCM channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGcmChannelOutcome UpdateGcmChannel(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateGcmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGcmChannelRequestT = Model::UpdateGcmChannelRequest>
        Model::UpdateGcmChannelOutcomeCallable UpdateGcmChannelCallable(const UpdateGcmChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateGcmChannel, request);
        }

        /**
         * An Async wrapper for UpdateGcmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGcmChannelRequestT = Model::UpdateGcmChannelRequest>
        void UpdateGcmChannelAsync(const UpdateGcmChannelRequestT& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateGcmChannel, request, handler, context);
        }

        /**
         * <p>Updates an existing message template for messages sent through the in-app
         * message channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInAppTemplateOutcome UpdateInAppTemplate(const Model::UpdateInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInAppTemplateRequestT = Model::UpdateInAppTemplateRequest>
        Model::UpdateInAppTemplateOutcomeCallable UpdateInAppTemplateCallable(const UpdateInAppTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateInAppTemplate, request);
        }

        /**
         * An Async wrapper for UpdateInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInAppTemplateRequestT = Model::UpdateInAppTemplateRequest>
        void UpdateInAppTemplateAsync(const UpdateInAppTemplateRequestT& request, const UpdateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateInAppTemplate, request, handler, context);
        }

        /**
         * <p>Updates the configuration and other settings for a journey.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJourneyOutcome UpdateJourney(const Model::UpdateJourneyRequest& request) const;

        /**
         * A Callable wrapper for UpdateJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJourneyRequestT = Model::UpdateJourneyRequest>
        Model::UpdateJourneyOutcomeCallable UpdateJourneyCallable(const UpdateJourneyRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateJourney, request);
        }

        /**
         * An Async wrapper for UpdateJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJourneyRequestT = Model::UpdateJourneyRequest>
        void UpdateJourneyAsync(const UpdateJourneyRequestT& request, const UpdateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateJourney, request, handler, context);
        }

        /**
         * <p>Cancels (stops) an active journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateJourneyState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJourneyStateOutcome UpdateJourneyState(const Model::UpdateJourneyStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateJourneyState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJourneyStateRequestT = Model::UpdateJourneyStateRequest>
        Model::UpdateJourneyStateOutcomeCallable UpdateJourneyStateCallable(const UpdateJourneyStateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateJourneyState, request);
        }

        /**
         * An Async wrapper for UpdateJourneyState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJourneyStateRequestT = Model::UpdateJourneyStateRequest>
        void UpdateJourneyStateAsync(const UpdateJourneyStateRequestT& request, const UpdateJourneyStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateJourneyState, request, handler, context);
        }

        /**
         * <p>Updates an existing message template for messages that are sent through a
         * push notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdatePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePushTemplateOutcome UpdatePushTemplate(const Model::UpdatePushTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdatePushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePushTemplateRequestT = Model::UpdatePushTemplateRequest>
        Model::UpdatePushTemplateOutcomeCallable UpdatePushTemplateCallable(const UpdatePushTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdatePushTemplate, request);
        }

        /**
         * An Async wrapper for UpdatePushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePushTemplateRequestT = Model::UpdatePushTemplateRequest>
        void UpdatePushTemplateAsync(const UpdatePushTemplateRequestT& request, const UpdatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdatePushTemplate, request, handler, context);
        }

        /**
         * <p>Updates an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecommenderConfigurationOutcome UpdateRecommenderConfiguration(const Model::UpdateRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRecommenderConfigurationRequestT = Model::UpdateRecommenderConfigurationRequest>
        Model::UpdateRecommenderConfigurationOutcomeCallable UpdateRecommenderConfigurationCallable(const UpdateRecommenderConfigurationRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateRecommenderConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRecommenderConfigurationRequestT = Model::UpdateRecommenderConfigurationRequest>
        void UpdateRecommenderConfigurationAsync(const UpdateRecommenderConfigurationRequestT& request, const UpdateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateRecommenderConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSegmentOutcome UpdateSegment(const Model::UpdateSegmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSegmentRequestT = Model::UpdateSegmentRequest>
        Model::UpdateSegmentOutcomeCallable UpdateSegmentCallable(const UpdateSegmentRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateSegment, request);
        }

        /**
         * An Async wrapper for UpdateSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSegmentRequestT = Model::UpdateSegmentRequest>
        void UpdateSegmentAsync(const UpdateSegmentRequestT& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateSegment, request, handler, context);
        }

        /**
         * <p>Enables the SMS channel for an application or updates the status and settings
         * of the SMS channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsChannelOutcome UpdateSmsChannel(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateSmsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSmsChannelRequestT = Model::UpdateSmsChannelRequest>
        Model::UpdateSmsChannelOutcomeCallable UpdateSmsChannelCallable(const UpdateSmsChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateSmsChannel, request);
        }

        /**
         * An Async wrapper for UpdateSmsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSmsChannelRequestT = Model::UpdateSmsChannelRequest>
        void UpdateSmsChannelAsync(const UpdateSmsChannelRequestT& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateSmsChannel, request, handler, context);
        }

        /**
         * <p>Updates an existing message template for messages that are sent through the
         * SMS channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsTemplateOutcome UpdateSmsTemplate(const Model::UpdateSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSmsTemplateRequestT = Model::UpdateSmsTemplateRequest>
        Model::UpdateSmsTemplateOutcomeCallable UpdateSmsTemplateCallable(const UpdateSmsTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateSmsTemplate, request);
        }

        /**
         * An Async wrapper for UpdateSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSmsTemplateRequestT = Model::UpdateSmsTemplateRequest>
        void UpdateSmsTemplateAsync(const UpdateSmsTemplateRequestT& request, const UpdateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateSmsTemplate, request, handler, context);
        }

        /**
         * <p>Changes the status of a specific version of a message template to
         * <i>active</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateTemplateActiveVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateActiveVersionOutcome UpdateTemplateActiveVersion(const Model::UpdateTemplateActiveVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplateActiveVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateActiveVersionRequestT = Model::UpdateTemplateActiveVersionRequest>
        Model::UpdateTemplateActiveVersionOutcomeCallable UpdateTemplateActiveVersionCallable(const UpdateTemplateActiveVersionRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateTemplateActiveVersion, request);
        }

        /**
         * An Async wrapper for UpdateTemplateActiveVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateActiveVersionRequestT = Model::UpdateTemplateActiveVersionRequest>
        void UpdateTemplateActiveVersionAsync(const UpdateTemplateActiveVersionRequestT& request, const UpdateTemplateActiveVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateTemplateActiveVersion, request, handler, context);
        }

        /**
         * <p>Enables the voice channel for an application or updates the status and
         * settings of the voice channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceChannelOutcome UpdateVoiceChannel(const Model::UpdateVoiceChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceChannelRequestT = Model::UpdateVoiceChannelRequest>
        Model::UpdateVoiceChannelOutcomeCallable UpdateVoiceChannelCallable(const UpdateVoiceChannelRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateVoiceChannel, request);
        }

        /**
         * An Async wrapper for UpdateVoiceChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceChannelRequestT = Model::UpdateVoiceChannelRequest>
        void UpdateVoiceChannelAsync(const UpdateVoiceChannelRequestT& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateVoiceChannel, request, handler, context);
        }

        /**
         * <p>Updates an existing message template for messages that are sent through the
         * voice channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceTemplateOutcome UpdateVoiceTemplate(const Model::UpdateVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceTemplateRequestT = Model::UpdateVoiceTemplateRequest>
        Model::UpdateVoiceTemplateOutcomeCallable UpdateVoiceTemplateCallable(const UpdateVoiceTemplateRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::UpdateVoiceTemplate, request);
        }

        /**
         * An Async wrapper for UpdateVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceTemplateRequestT = Model::UpdateVoiceTemplateRequest>
        void UpdateVoiceTemplateAsync(const UpdateVoiceTemplateRequestT& request, const UpdateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::UpdateVoiceTemplate, request, handler, context);
        }

        /**
         * <p>Verify an OTP</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VerifyOTPMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyOTPMessageOutcome VerifyOTPMessage(const Model::VerifyOTPMessageRequest& request) const;

        /**
         * A Callable wrapper for VerifyOTPMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyOTPMessageRequestT = Model::VerifyOTPMessageRequest>
        Model::VerifyOTPMessageOutcomeCallable VerifyOTPMessageCallable(const VerifyOTPMessageRequestT& request) const
        {
            return SubmitCallable(&PinpointClient::VerifyOTPMessage, request);
        }

        /**
         * An Async wrapper for VerifyOTPMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyOTPMessageRequestT = Model::VerifyOTPMessageRequest>
        void VerifyOTPMessageAsync(const VerifyOTPMessageRequestT& request, const VerifyOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointClient::VerifyOTPMessage, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PinpointEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PinpointClient>;
      void init(const PinpointClientConfiguration& clientConfiguration);

      PinpointClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PinpointEndpointProviderBase> m_endpointProvider;
  };

} // namespace Pinpoint
} // namespace Aws
