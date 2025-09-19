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
    const char SERVICE_NAME[] = "transcribe";
    const char ALLOCATION_TAG[] = "TranscribeStreamingServiceClient";
  }
}
const char* TranscribeStreamingServiceClient::GetServiceName() {return SERVICE_NAME;}
const char* TranscribeStreamingServiceClient::GetAllocationTag() {return ALLOCATION_TAG;}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& clientConfiguration,
                                                                   std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG))
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
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG))
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
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
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
    m_endpointProvider(Aws::MakeShared<TranscribeStreamingServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
TranscribeStreamingServiceClient::~TranscribeStreamingServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<TranscribeStreamingServiceEndpointProviderBase>& TranscribeStreamingServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TranscribeStreamingServiceClient::init(const TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Transcribe Streaming");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMedicalScribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMedicalScribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMedicalScribeStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMedicalScribeStreamOutcome>(
    [&]()-> GetMedicalScribeStreamOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMedicalScribeStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/medical-scribe-stream/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      return GetMedicalScribeStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, StartCallAnalyticsStreamTranscriptionOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/call-analytics-stream-transcription");

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<StartCallAnalyticsStreamTranscriptionRequest>("StartCallAnalyticsStreamTranscription", request);
  requestCopy->SetAudioStream(eventEncoderStream); // this becomes the body of the request
  request.SetAudioStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<StartCallAnalyticsStreamTranscriptionOutcome>(this,
                                         endpointResolutionOutcome.GetResultWithOwnership(),
                                         requestCopy,
                                         handler,
                                         handlerContext,
                                         eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
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
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, StartMedicalScribeStreamOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/medical-scribe-stream");

  auto eventEncoderStream = Aws::MakeShared<Model::MedicalScribeInputStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<StartMedicalScribeStreamRequest>("StartMedicalScribeStream", request);
  requestCopy->SetInputStream(eventEncoderStream); // this becomes the body of the request
  request.SetInputStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<StartMedicalScribeStreamOutcome>(this,
                                         endpointResolutionOutcome.GetResultWithOwnership(),
                                         requestCopy,
                                         handler,
                                         handlerContext,
                                         eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
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
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, StartMedicalStreamTranscriptionOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/medical-stream-transcription");

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<StartMedicalStreamTranscriptionRequest>("StartMedicalStreamTranscription", request);
  requestCopy->SetAudioStream(eventEncoderStream); // this becomes the body of the request
  request.SetAudioStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<StartMedicalStreamTranscriptionOutcome>(this,
                                         endpointResolutionOutcome.GetResultWithOwnership(),
                                         requestCopy,
                                         handler,
                                         handlerContext,
                                         eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
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
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/stream-transcription");

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<StartStreamTranscriptionRequest>("StartStreamTranscription", request);
  requestCopy->SetAudioStream(eventEncoderStream); // this becomes the body of the request
  request.SetAudioStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<StartStreamTranscriptionOutcome>(this,
                                         endpointResolutionOutcome.GetResultWithOwnership(),
                                         requestCopy,
                                         handler,
                                         handlerContext,
                                         eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
}
