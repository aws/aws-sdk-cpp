/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/core/client/AWSClientEventStreamingAsyncTask.h>
#include <aws/core/utils/event/EventStream.h>

#include <aws/transcribestreaming/TranscribeStreamingServiceClient.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrorMarshaller.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointProvider.h>
#include <aws/transcribestreaming/model/GetMedicalScribeStreamRequest.h>
#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartMedicalScribeStreamRequest.h>
#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TranscribeStreamingService;
using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace TranscribeStreamingService
  {
    const char ALLOCATION_TAG[] = "TranscribeStreamingServiceClient";
    const char SERVICE_NAME[] = "transcribe";
  }
}
const char* TranscribeStreamingServiceClient::GetServiceName() {return SERVICE_NAME;}
const char* TranscribeStreamingServiceClient::GetAllocationTag() {return ALLOCATION_TAG;}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration,
                           std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Transcribe Streaming",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const AWSCredentials& credentials,
                           std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider,
                           const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Transcribe Streaming",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider,
                           const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Transcribe Streaming",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Transcribe Streaming",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Transcribe Streaming",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Transcribe Streaming",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

TranscribeStreamingServiceClient::~TranscribeStreamingServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase>& TranscribeStreamingServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TranscribeStreamingServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
GetMedicalScribeStreamOutcome TranscribeStreamingServiceClient::GetMedicalScribeStream(const GetMedicalScribeStreamRequest& request) const
{
  AWS_OPERATION_GUARD(GetMedicalScribeStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMedicalScribeStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMedicalScribeStream", "Required field: SessionId, is not set");
    return GetMedicalScribeStreamOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMedicalScribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMedicalScribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMedicalScribeStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMedicalScribeStreamOutcome>(
    [&]()-> GetMedicalScribeStreamOutcome {
      return GetMedicalScribeStreamOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/medical-scribe-stream/");
      resolvedEndpoint.AddPathSegment(request.GetSessionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

void TranscribeStreamingServiceClient::StartCallAnalyticsStreamTranscriptionAsync(Model::StartCallAnalyticsStreamTranscriptionRequest& request,
                const StartCallAnalyticsStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartCallAnalyticsStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  AWS_ASYNC_OPERATION_GUARD(StartCallAnalyticsStreamTranscription);
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
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  if (!request.GetHeadersReceivedEventHandler()) {
    request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
      AWS_CHECK_PTR("StartCallAnalyticsStreamTranscription", response);
      if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
        initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
      }
    });
  }

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  request.SetAudioStream(eventEncoderStream); // this becomes the body of the request
  auto streamReadySemaphore = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, streamReadySemaphore](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); streamReadySemaphore->ReleaseAll(); });
  m_clientConfiguration.executor->Submit([this, &request, handler, handlerContext,  eventEncoderStream, streamReadySemaphore] () mutable {
    auto eventStreamHandler = [&](std::shared_ptr<Aws::Utils::Event::EventStreamEncoder> encoder) -> void{
      eventEncoderStream->SetEncoder(encoder);
    };
    JsonOutcome outcome = MakeEventStreamRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/call-analytics-stream-transcription");
      },
      std::move(eventStreamHandler));
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
  streamReadySemaphore->WaitOne();
  streamReadyHandler(*request.GetAudioStream());
}
void TranscribeStreamingServiceClient::StartMedicalScribeStreamAsync(Model::StartMedicalScribeStreamRequest& request,
                const StartMedicalScribeStreamStreamReadyHandler& streamReadyHandler,
                const StartMedicalScribeStreamResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  AWS_ASYNC_OPERATION_GUARD(StartMedicalScribeStream);
  if (!m_endpointProvider) {
    handler(this, request, StartMedicalScribeStreamOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
    return;
  }
  if (!request.LanguageCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeStream", "Required field: LanguageCode, is not set");
    handler(this, request, StartMedicalScribeStreamOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LanguageCode]", false)), handlerContext);
    return;
  }
  if (!request.MediaSampleRateHertzHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeStream", "Required field: MediaSampleRateHertz, is not set");
    handler(this, request, StartMedicalScribeStreamOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaSampleRateHertz]", false)), handlerContext);
    return;
  }
  if (!request.MediaEncodingHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeStream", "Required field: MediaEncoding, is not set");
    handler(this, request, StartMedicalScribeStreamOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaEncoding]", false)), handlerContext);
    return;
  }
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  if (!request.GetHeadersReceivedEventHandler()) {
    request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
      AWS_CHECK_PTR("StartMedicalScribeStream", response);
      if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
        initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
      }
    });
  }

  auto eventEncoderStream = Aws::MakeShared<Model::MedicalScribeInputStream>(ALLOCATION_TAG);
  request.SetInputStream(eventEncoderStream); // this becomes the body of the request
  auto streamReadySemaphore = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, streamReadySemaphore](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); streamReadySemaphore->ReleaseAll(); });
  m_clientConfiguration.executor->Submit([this, &request, handler, handlerContext,  eventEncoderStream, streamReadySemaphore] () mutable {
    auto eventStreamHandler = [&](std::shared_ptr<Aws::Utils::Event::EventStreamEncoder> encoder) -> void{
      eventEncoderStream->SetEncoder(encoder);
    };
    JsonOutcome outcome = MakeEventStreamRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/medical-scribe-stream");
      },
      std::move(eventStreamHandler));
      if(outcome.IsSuccess())
      {
        handler(this, request, StartMedicalScribeStreamOutcome(NoResult()), handlerContext);
      }
      else
      {
        request.GetInputStream()->Close();
        handler(this, request, StartMedicalScribeStreamOutcome(outcome.GetError()), handlerContext);
      }
      return StartMedicalScribeStreamOutcome(NoResult());
  });
  streamReadySemaphore->WaitOne();
  streamReadyHandler(*request.GetInputStream());
}
void TranscribeStreamingServiceClient::StartMedicalStreamTranscriptionAsync(Model::StartMedicalStreamTranscriptionRequest& request,
                const StartMedicalStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartMedicalStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  AWS_ASYNC_OPERATION_GUARD(StartMedicalStreamTranscription);
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
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  if (!request.GetHeadersReceivedEventHandler()) {
    request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
      AWS_CHECK_PTR("StartMedicalStreamTranscription", response);
      if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
        initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
      }
    });
  }

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  request.SetAudioStream(eventEncoderStream); // this becomes the body of the request
  auto streamReadySemaphore = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, streamReadySemaphore](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); streamReadySemaphore->ReleaseAll(); });
  m_clientConfiguration.executor->Submit([this, &request, handler, handlerContext,  eventEncoderStream, streamReadySemaphore] () mutable {
    auto eventStreamHandler = [&](std::shared_ptr<Aws::Utils::Event::EventStreamEncoder> encoder) -> void{
      eventEncoderStream->SetEncoder(encoder);
    };
    JsonOutcome outcome = MakeEventStreamRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/medical-stream-transcription");
      },
      std::move(eventStreamHandler));
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
  streamReadySemaphore->WaitOne();
  streamReadyHandler(*request.GetAudioStream());
}
void TranscribeStreamingServiceClient::StartStreamTranscriptionAsync(Model::StartStreamTranscriptionRequest& request,
                const StartStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartStreamTranscriptionResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  AWS_ASYNC_OPERATION_GUARD(StartStreamTranscription);
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
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  if (!request.GetHeadersReceivedEventHandler()) {
    request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
      AWS_CHECK_PTR("StartStreamTranscription", response);
      if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
        initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
      }
    });
  }

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  request.SetAudioStream(eventEncoderStream); // this becomes the body of the request
  auto streamReadySemaphore = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, streamReadySemaphore](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); streamReadySemaphore->ReleaseAll(); });
  m_clientConfiguration.executor->Submit([this, &request, handler, handlerContext,  eventEncoderStream, streamReadySemaphore] () mutable {
    auto eventStreamHandler = [&](std::shared_ptr<Aws::Utils::Event::EventStreamEncoder> encoder) -> void{
      eventEncoderStream->SetEncoder(encoder);
    };
    JsonOutcome outcome = MakeEventStreamRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/stream-transcription");
      },
      std::move(eventStreamHandler));
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
  streamReadySemaphore->WaitOne();
  streamReadyHandler(*request.GetAudioStream());
}

