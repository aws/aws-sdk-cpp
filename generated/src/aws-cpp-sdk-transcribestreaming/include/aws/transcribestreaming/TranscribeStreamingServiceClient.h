/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceServiceClientModel.h>

namespace Aws
{
namespace TranscribeStreamingService
{
  /**
   * <p>Amazon Transcribe streaming offers four main types of real-time
   * transcription: <b>Standard</b>, <b>Medical</b>, <b>Call Analytics</b>, and
   * <b>Health Scribe</b>.</p> <ul> <li> <p> <b>Standard transcriptions</b> are the
   * most common option. Refer to for details.</p> </li> <li> <p> <b>Medical
   * transcriptions</b> are tailored to medical professionals and incorporate medical
   * terms. A common use case for this service is transcribing doctor-patient
   * dialogue in real time, so doctors can focus on their patient instead of taking
   * notes. Refer to for details.</p> </li> <li> <p> <b>Call Analytics
   * transcriptions</b> are designed for use with call center audio on two different
   * channels; if you're looking for insight into customer service calls, use this
   * option. Refer to for details.</p> </li> <li> <p> <b>HealthScribe
   * transcriptions</b> are designed to automatically create clinical notes from
   * patient-clinician conversations using generative AI. Refer to [here] for
   * details.</p> </li> </ul>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscribeStreamingServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TranscribeStreamingServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TranscribeStreamingServiceClientConfiguration ClientConfigurationType;
      typedef TranscribeStreamingServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration = Aws::TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration(),
                                         std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                         std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider = nullptr,
                                         const Aws::TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration = Aws::TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeStreamingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider = nullptr,
                                         const Aws::TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration = Aws::TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeStreamingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TranscribeStreamingServiceClient();

        /**
         * <p>Provides details about the specified Amazon Web Services HealthScribe
         * streaming session. To view the status of the streaming session, check the
         * <code>StreamStatus</code> field in the response. To get the details of
         * post-stream analytics, including its status, check the
         * <code>PostStreamAnalyticsResult</code> field in the response. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/GetMedicalScribeStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMedicalScribeStreamOutcome GetMedicalScribeStream(const Model::GetMedicalScribeStreamRequest& request) const;

        /**
         * A Callable wrapper for GetMedicalScribeStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMedicalScribeStreamRequestT = Model::GetMedicalScribeStreamRequest>
        Model::GetMedicalScribeStreamOutcomeCallable GetMedicalScribeStreamCallable(const GetMedicalScribeStreamRequestT& request) const
        {
            return SubmitCallable(&TranscribeStreamingServiceClient::GetMedicalScribeStream, request);
        }

        /**
         * An Async wrapper for GetMedicalScribeStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMedicalScribeStreamRequestT = Model::GetMedicalScribeStreamRequest>
        void GetMedicalScribeStreamAsync(const GetMedicalScribeStreamRequestT& request, const GetMedicalScribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranscribeStreamingServiceClient::GetMedicalScribeStream, request, handler, context);
        }

        /**
         * <p>Starts a bidirectional HTTP/2 or WebSocket stream where audio is streamed to
         * Amazon Transcribe and the transcription results are streamed to your
         * application. Use this operation for <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics.html">Call
         * Analytics</a> transcriptions.</p> <p>The following parameters are required:</p>
         * <ul> <li> <p> <code>language-code</code> or <code>identify-language</code> </p>
         * </li> <li> <p> <code>media-encoding</code> </p> </li> <li> <p>
         * <code>sample-rate</code> </p> </li> </ul> <p>For more information on streaming
         * with Amazon Transcribe, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html">Transcribing
         * streaming audio</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/StartCallAnalyticsStreamTranscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The handler is triggered when the request is finished.
         */
        virtual void StartCallAnalyticsStreamTranscriptionAsync(Model::StartCallAnalyticsStreamTranscriptionRequest& request,
                const StartCallAnalyticsStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartCallAnalyticsStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

        /**
         * <p>Starts a bidirectional HTTP/2 stream, where audio is streamed to Amazon Web
         * Services HealthScribe and the transcription results are streamed to your
         * application.</p> <p>When you start a stream, you first specify the stream
         * configuration in a <code>MedicalScribeConfigurationEvent</code>. This event
         * includes channel definitions, encryption settings, medical scribe context, and
         * post-stream analytics settings, such as the output configuration for aggregated
         * transcript and clinical note generation. These are additional streaming session
         * configurations beyond those provided in your initial start request headers.
         * Whether you are starting a new session or resuming an existing session, your
         * first event must be a <code>MedicalScribeConfigurationEvent</code>. </p> <p>
         * After you send a <code>MedicalScribeConfigurationEvent</code>, you start
         * <code>AudioEvents</code> and Amazon Web Services HealthScribe responds with
         * real-time transcription results. When you are finished, to start processing the
         * results with the post-stream analytics, send a
         * <code>MedicalScribeSessionControlEvent</code> with a <code>Type</code> of
         * <code>END_OF_SESSION</code> and Amazon Web Services HealthScribe starts the
         * analytics. </p> <p>You can pause or resume streaming. To pause streaming,
         * complete the input stream without sending the
         * <code>MedicalScribeSessionControlEvent</code>. To resume streaming, call the
         * <code>StartMedicalScribeStream</code> and specify the same SessionId you used to
         * start the stream. </p> <p>The following parameters are required:</p> <ul> <li>
         * <p> <code>language-code</code> </p> </li> <li> <p> <code>media-encoding</code>
         * </p> </li> <li> <p> <code>media-sample-rate-hertz</code> </p> </li> </ul> <p/>
         * <p>For more information on streaming with Amazon Web Services HealthScribe, see
         * <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/health-scribe-streaming.html">Amazon
         * Web Services HealthScribe</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/StartMedicalScribeStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The handler is triggered when the request is finished.
         */
        virtual void StartMedicalScribeStreamAsync(Model::StartMedicalScribeStreamRequest& request,
                const StartMedicalScribeStreamStreamReadyHandler& streamReadyHandler,
                const StartMedicalScribeStreamResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

        /**
         * <p>Starts a bidirectional HTTP/2 or WebSocket stream where audio is streamed to
         * Amazon Transcribe Medical and the transcription results are streamed to your
         * application.</p> <p>The following parameters are required:</p> <ul> <li> <p>
         * <code>language-code</code> </p> </li> <li> <p> <code>media-encoding</code> </p>
         * </li> <li> <p> <code>sample-rate</code> </p> </li> </ul> <p>For more information
         * on streaming with Amazon Transcribe Medical, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html">Transcribing
         * streaming audio</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/StartMedicalStreamTranscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The handler is triggered when the request is finished.
         */
        virtual void StartMedicalStreamTranscriptionAsync(Model::StartMedicalStreamTranscriptionRequest& request,
                const StartMedicalStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartMedicalStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

        /**
         * <p>Starts a bidirectional HTTP/2 or WebSocket stream where audio is streamed to
         * Amazon Transcribe and the transcription results are streamed to your
         * application.</p> <p>The following parameters are required:</p> <ul> <li> <p>
         * <code>language-code</code> or <code>identify-language</code> or
         * <code>identify-multiple-language</code> </p> </li> <li> <p>
         * <code>media-encoding</code> </p> </li> <li> <p> <code>sample-rate</code> </p>
         * </li> </ul> <p>For more information on streaming with Amazon Transcribe, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html">Transcribing
         * streaming audio</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/StartStreamTranscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The handler is triggered when the request is finished.
         */
        virtual void StartStreamTranscriptionAsync(Model::StartStreamTranscriptionRequest& request,
                const StartStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TranscribeStreamingServiceClient>;
      void init(const TranscribeStreamingServiceClientConfiguration& clientConfiguration);

      TranscribeStreamingServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace TranscribeStreamingService
} // namespace Aws
