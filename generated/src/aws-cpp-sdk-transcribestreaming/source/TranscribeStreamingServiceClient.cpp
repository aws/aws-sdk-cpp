/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/event/EventStream.h>

#include <aws/transcribestreaming/TranscribeStreamingServiceClient.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrorMarshaller.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointProvider.h>
#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TranscribeStreamingService;
using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* TranscribeStreamingServiceClient::SERVICE_NAME = "transcribe";
const char* TranscribeStreamingServiceClient::ALLOCATION_TAG = "TranscribeStreamingServiceClient";

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration,
                                                                   std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const AWSCredentials& credentials,
                                                                   std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider,
                                                                   const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                   std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider,
                                                                   const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const AWSCredentials& credentials,
                                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
TranscribeStreamingServiceClient::~TranscribeStreamingServiceClient()
{
}

std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase>& TranscribeStreamingServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TranscribeStreamingServiceClient::init(const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Transcribe Streaming");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void TranscribeStreamingServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

void TranscribeStreamingServiceClient::StartCallAnalyticsStreamTranscriptionAsync(Model::StartCallAnalyticsStreamTranscriptionRequest& request,
                const StartCallAnalyticsStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartCallAnalyticsStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  if (!m_endpointProvider) {
    handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
    return;
  }
  if (!request.LanguageCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartCallAnalyticsStreamTranscription", "Required field: LanguageCode, is not set");
    handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LanguageCode]", false)), handlerContext);
    return;
  }
  if (!request.MediaSampleRateHertzHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartCallAnalyticsStreamTranscription", "Required field: MediaSampleRateHertz, is not set");
    handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaSampleRateHertz]", false)), handlerContext);
    return;
  }
  if (!request.MediaEncodingHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartCallAnalyticsStreamTranscription", "Required field: MediaEncoding, is not set");
    handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaEncoding]", false)), handlerContext);
    return;
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(Aws::Client::AWSError<CoreErrors>(
        CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/call-analytics-stream-transcription");
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  request.SetAudioStream(eventEncoderStream); // this becomes the body of the request
  auto sem = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, sem](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); sem->ReleaseAll(); });

  m_executor->Submit([this, &endpointResolutionOutcome, &request, handler, handlerContext] () mutable {
      JsonOutcome outcome = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);
      if(outcome.IsSuccess())
      {
        handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(NoResult()), handlerContext);
      }
      else
      {
        request.GetAudioStream()->Close();
        handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(outcome.GetError()), handlerContext);
      }
      return StartCallAnalyticsStreamTranscriptionOutcome(NoResult());
  });
  sem->WaitOne();
  streamReadyHandler(*request.GetAudioStream());
}
void TranscribeStreamingServiceClient::StartMedicalStreamTranscriptionAsync(Model::StartMedicalStreamTranscriptionRequest& request,
                const StartMedicalStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartMedicalStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  if (!m_endpointProvider) {
    handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
    return;
  }
  if (!request.LanguageCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalStreamTranscription", "Required field: LanguageCode, is not set");
    handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LanguageCode]", false)), handlerContext);
    return;
  }
  if (!request.MediaSampleRateHertzHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalStreamTranscription", "Required field: MediaSampleRateHertz, is not set");
    handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaSampleRateHertz]", false)), handlerContext);
    return;
  }
  if (!request.MediaEncodingHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalStreamTranscription", "Required field: MediaEncoding, is not set");
    handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaEncoding]", false)), handlerContext);
    return;
  }
  if (!request.SpecialtyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalStreamTranscription", "Required field: Specialty, is not set");
    handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Specialty]", false)), handlerContext);
    return;
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalStreamTranscription", "Required field: Type, is not set");
    handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false)), handlerContext);
    return;
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<CoreErrors>(
        CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/medical-stream-transcription");
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  request.SetAudioStream(eventEncoderStream); // this becomes the body of the request
  auto sem = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, sem](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); sem->ReleaseAll(); });

  m_executor->Submit([this, &endpointResolutionOutcome, &request, handler, handlerContext] () mutable {
      JsonOutcome outcome = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);
      if(outcome.IsSuccess())
      {
        handler(this, request, StartMedicalStreamTranscriptionOutcome(NoResult()), handlerContext);
      }
      else
      {
        request.GetAudioStream()->Close();
        handler(this, request, StartMedicalStreamTranscriptionOutcome(outcome.GetError()), handlerContext);
      }
      return StartMedicalStreamTranscriptionOutcome(NoResult());
  });
  sem->WaitOne();
  streamReadyHandler(*request.GetAudioStream());
}
void TranscribeStreamingServiceClient::StartStreamTranscriptionAsync(Model::StartStreamTranscriptionRequest& request,
                const StartStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  if (!m_endpointProvider) {
    handler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
    return;
  }
  if (!request.MediaSampleRateHertzHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamTranscription", "Required field: MediaSampleRateHertz, is not set");
    handler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaSampleRateHertz]", false)), handlerContext);
    return;
  }
  if (!request.MediaEncodingHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamTranscription", "Required field: MediaEncoding, is not set");
    handler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaEncoding]", false)), handlerContext);
    return;
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<CoreErrors>(
        CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/stream-transcription");
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  request.SetAudioStream(eventEncoderStream); // this becomes the body of the request
  auto sem = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, sem](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); sem->ReleaseAll(); });

  m_executor->Submit([this, &endpointResolutionOutcome, &request, handler, handlerContext] () mutable {
      JsonOutcome outcome = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);
      if(outcome.IsSuccess())
      {
        handler(this, request, StartStreamTranscriptionOutcome(NoResult()), handlerContext);
      }
      else
      {
        request.GetAudioStream()->Close();
        handler(this, request, StartStreamTranscriptionOutcome(outcome.GetError()), handlerContext);
      }
      return StartStreamTranscriptionOutcome(NoResult());
  });
  sem->WaitOne();
  streamReadyHandler(*request.GetAudioStream());
}
