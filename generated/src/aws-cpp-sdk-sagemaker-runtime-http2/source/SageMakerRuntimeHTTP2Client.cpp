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
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Client.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2EndpointProvider.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ErrorMarshaller.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerRuntimeHTTP2;
using namespace Aws::SageMakerRuntimeHTTP2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
const char SERVICE_NAME[] = "sagemaker";
const char ALLOCATION_TAG[] = "SageMakerRuntimeHTTP2Client";
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
const char* SageMakerRuntimeHTTP2Client::GetServiceName() { return SERVICE_NAME; }
const char* SageMakerRuntimeHTTP2Client::GetAllocationTag() { return ALLOCATION_TAG; }

SageMakerRuntimeHTTP2Client::SageMakerRuntimeHTTP2Client(
    const SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration& clientConfiguration,
    std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerRuntimeHTTP2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerRuntimeHTTP2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerRuntimeHTTP2Client::SageMakerRuntimeHTTP2Client(
    const AWSCredentials& credentials, std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase> endpointProvider,
    const SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerRuntimeHTTP2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerRuntimeHTTP2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerRuntimeHTTP2Client::SageMakerRuntimeHTTP2Client(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase> endpointProvider,
    const SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerRuntimeHTTP2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerRuntimeHTTP2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SageMakerRuntimeHTTP2Client::SageMakerRuntimeHTTP2Client(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerRuntimeHTTP2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerRuntimeHTTP2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerRuntimeHTTP2Client::SageMakerRuntimeHTTP2Client(const AWSCredentials& credentials,
                                                         const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerRuntimeHTTP2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerRuntimeHTTP2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerRuntimeHTTP2Client::SageMakerRuntimeHTTP2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerRuntimeHTTP2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerRuntimeHTTP2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SageMakerRuntimeHTTP2Client::~SageMakerRuntimeHTTP2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase>& SageMakerRuntimeHTTP2Client::accessEndpointProvider() {
  return m_endpointProvider;
}

void SageMakerRuntimeHTTP2Client::init(const SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("SageMaker Runtime HTTP2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sagemaker");
}

void SageMakerRuntimeHTTP2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

void SageMakerRuntimeHTTP2Client::InvokeEndpointWithBidirectionalStreamAsync(
    Model::InvokeEndpointWithBidirectionalStreamRequest& request,
    const InvokeEndpointWithBidirectionalStreamStreamReadyHandler& streamReadyHandler,
    const InvokeEndpointWithBidirectionalStreamResponseReceivedHandler& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(InvokeEndpointWithBidirectionalStream);
  if (!m_endpointProvider) {
    handler(this, request,
            InvokeEndpointWithBidirectionalStreamOutcome(Aws::Client::AWSError<SageMakerRuntimeHTTP2Errors>(
                SageMakerRuntimeHTTP2Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)),
            handlerContext);
    return;
  }
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeEndpointWithBidirectionalStream", "Required field: EndpointName, is not set");
    handler(this, request,
            InvokeEndpointWithBidirectionalStreamOutcome(Aws::Client::AWSError<SageMakerRuntimeHTTP2Errors>(
                SageMakerRuntimeHTTP2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false)),
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
            InvokeEndpointWithBidirectionalStreamOutcome(
                Aws::Client::AWSError<CoreErrors>(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE",
                                                  endpointResolutionOutcome.GetError().GetMessage(), false)),
            handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invocations-bidirectional-stream");

  auto eventEncoderStream = Aws::MakeShared<Model::RequestStreamEvent>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<InvokeEndpointWithBidirectionalStreamRequest>("InvokeEndpointWithBidirectionalStream", request);
  requestCopy->SetBody(eventEncoderStream);  // this becomes the body of the request
  request.SetBody(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<InvokeEndpointWithBidirectionalStreamOutcome>(
      this, endpointResolutionOutcome.GetResultWithOwnership(), requestCopy, handler, handlerContext, eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
}
