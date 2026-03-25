/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSClientEventStreamingAsyncTask.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/polly/PollyClient.h>
#include <aws/polly/PollyEndpointProvider.h>
#include <aws/polly/PollyErrorMarshaller.h>
#include <aws/polly/model/DeleteLexiconRequest.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/polly/model/GetLexiconRequest.h>
#include <aws/polly/model/GetSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/ListLexiconsRequest.h>
#include <aws/polly/model/ListSpeechSynthesisTasksRequest.h>
#include <aws/polly/model/PutLexiconRequest.h>
#include <aws/polly/model/StartSpeechSynthesisStreamRequest.h>
#include <aws/polly/model/StartSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/SynthesizeSpeechRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Polly;
using namespace Aws::Polly::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Polly {
const char SERVICE_NAME[] = "polly";
const char ALLOCATION_TAG[] = "PollyClient";
}  // namespace Polly
}  // namespace Aws
const char* PollyClient::GetServiceName() { return SERVICE_NAME; }
const char* PollyClient::GetAllocationTag() { return ALLOCATION_TAG; }

PollyClient::PollyClient(const Polly::PollyClientConfiguration& clientConfiguration,
                         std::shared_ptr<PollyEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const AWSCredentials& credentials, std::shared_ptr<PollyEndpointProviderBase> endpointProvider,
                         const Polly::PollyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<PollyEndpointProviderBase> endpointProvider,
                         const Polly::PollyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PollyClient::PollyClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PollyClient::~PollyClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PollyEndpointProviderBase>& PollyClient::accessEndpointProvider() { return m_endpointProvider; }

void PollyClient::init(const Polly::PollyClientConfiguration& config) {
  AWSClient::SetServiceClientName("Polly");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "polly");
}

void PollyClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PollyClient::InvokeOperationOutcome PollyClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

DeleteLexiconOutcome PollyClient::DeleteLexicon(const DeleteLexiconRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLexicon", "Required field: Name, is not set");
    return DeleteLexiconOutcome(
        Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteLexiconOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeVoicesOutcome PollyClient::DescribeVoices(const DescribeVoicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/voices");
  };

  return DescribeVoicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLexiconOutcome PollyClient::GetLexicon(const GetLexiconRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLexicon", "Required field: Name, is not set");
    return GetLexiconOutcome(
        Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetLexiconOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSpeechSynthesisTaskOutcome PollyClient::GetSpeechSynthesisTask(const GetSpeechSynthesisTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpeechSynthesisTask", "Required field: TaskId, is not set");
    return GetSpeechSynthesisTaskOutcome(
        Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/synthesisTasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  return GetSpeechSynthesisTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLexiconsOutcome PollyClient::ListLexicons(const ListLexiconsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons");
  };

  return ListLexiconsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSpeechSynthesisTasksOutcome PollyClient::ListSpeechSynthesisTasks(const ListSpeechSynthesisTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/synthesisTasks");
  };

  return ListSpeechSynthesisTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutLexiconOutcome PollyClient::PutLexicon(const PutLexiconRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutLexicon", "Required field: Name, is not set");
    return PutLexiconOutcome(
        Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return PutLexiconOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

void PollyClient::StartSpeechSynthesisStreamAsync(Model::StartSpeechSynthesisStreamRequest& request,
                                                  const StartSpeechSynthesisStreamStreamReadyHandler& streamReadyHandler,
                                                  const StartSpeechSynthesisStreamResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(StartSpeechSynthesisStream);
  if (!m_endpointProvider) {
    handler(this, request,
            StartSpeechSynthesisStreamOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
                                                                                 "Endpoint provider is not initialized", false)),
            handlerContext);
    return;
  }
  if (!request.EngineHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSpeechSynthesisStream", "Required field: Engine, is not set");
    handler(this, request,
            StartSpeechSynthesisStreamOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Engine]", false)),
            handlerContext);
    return;
  }
  if (!request.OutputFormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSpeechSynthesisStream", "Required field: OutputFormat, is not set");
    handler(this, request,
            StartSpeechSynthesisStreamOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [OutputFormat]", false)),
            handlerContext);
    return;
  }
  if (!request.VoiceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSpeechSynthesisStream", "Required field: VoiceId, is not set");
    handler(this, request,
            StartSpeechSynthesisStreamOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [VoiceId]", false)),
            handlerContext);
    return;
  }
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request,
            StartSpeechSynthesisStreamOutcome(Aws::Client::AWSError<CoreErrors>(CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                                                                "ENDPOINT_RESOLUTION_FAILURE",
                                                                                endpointResolutionOutcome.GetError().GetMessage(), false)),
            handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/synthesisStream");

  auto eventEncoderStream = Aws::MakeShared<Model::StartSpeechSynthesisStreamActionStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<StartSpeechSynthesisStreamRequest>("StartSpeechSynthesisStream", request);
  requestCopy->SetActionStream(eventEncoderStream);  // this becomes the body of the request
  request.SetActionStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<StartSpeechSynthesisStreamOutcome>(
      this, endpointResolutionOutcome.GetResultWithOwnership(), requestCopy, handler, handlerContext, eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
}
StartSpeechSynthesisTaskOutcome PollyClient::StartSpeechSynthesisTask(const StartSpeechSynthesisTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/synthesisTasks");
  };

  return StartSpeechSynthesisTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SynthesizeSpeechOutcome PollyClient::SynthesizeSpeech(const SynthesizeSpeechRequest& request) const {
  AWS_OPERATION_GUARD(SynthesizeSpeech);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SynthesizeSpeech, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SynthesizeSpeech, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SynthesizeSpeech, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SynthesizeSpeech",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SynthesizeSpeechOutcome>(
      [&]() -> SynthesizeSpeechOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SynthesizeSpeech, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/speech");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? SynthesizeSpeechOutcome(SynthesizeSpeechResult(result.GetResultWithOwnership()))
                                  : SynthesizeSpeechOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
