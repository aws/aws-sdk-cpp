/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingClient.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingEndpointProvider.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingErrorMarshaller.h>
#include <aws/test-new-service-sdk-testing/model/GetFooRequest.h>
#include <aws/test-new-service-sdk-testing/model/GetFoosRequest.h>
#include <aws/test-new-service-sdk-testing/model/PublishFoosRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TestNewServiceSDKTesting;
using namespace Aws::TestNewServiceSDKTesting::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace TestNewServiceSDKTesting {
const char SERVICE_NAME[] = "testnewservicesdktesting";
const char ALLOCATION_TAG[] = "TestNewServiceSDKTestingClient";
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
const char* TestNewServiceSDKTestingClient::GetServiceName() { return SERVICE_NAME; }
const char* TestNewServiceSDKTestingClient::GetAllocationTag() { return ALLOCATION_TAG; }

TestNewServiceSDKTestingClient::TestNewServiceSDKTestingClient(
    const TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration& clientConfiguration,
    std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TestNewServiceSDKTestingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TestNewServiceSDKTestingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TestNewServiceSDKTestingClient::TestNewServiceSDKTestingClient(
    const AWSCredentials& credentials, std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase> endpointProvider,
    const TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TestNewServiceSDKTestingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TestNewServiceSDKTestingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TestNewServiceSDKTestingClient::TestNewServiceSDKTestingClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase> endpointProvider,
    const TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TestNewServiceSDKTestingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TestNewServiceSDKTestingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TestNewServiceSDKTestingClient::TestNewServiceSDKTestingClient(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TestNewServiceSDKTestingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TestNewServiceSDKTestingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TestNewServiceSDKTestingClient::TestNewServiceSDKTestingClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TestNewServiceSDKTestingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TestNewServiceSDKTestingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TestNewServiceSDKTestingClient::TestNewServiceSDKTestingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TestNewServiceSDKTestingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TestNewServiceSDKTestingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TestNewServiceSDKTestingClient::~TestNewServiceSDKTestingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase>& TestNewServiceSDKTestingClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void TestNewServiceSDKTestingClient::init(const TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration& config) {
  AWSClient::SetServiceClientName("Test New Service SDK Testing");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "testnewservicesdktesting");
}

void TestNewServiceSDKTestingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetFooOutcome TestNewServiceSDKTestingClient::GetFoo(const GetFooRequest& request) const {
  AWS_OPERATION_GUARD(GetFoo);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFoo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetFoo, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFoo, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFoo",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFooOutcome>(
      [&]() -> GetFooOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFoo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        return GetFooOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFoosOutcome TestNewServiceSDKTestingClient::GetFoos(const GetFoosRequest& request) const {
  AWS_OPERATION_GUARD(GetFoos);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFoos, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetFoos, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFoos, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFoos",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFoosOutcome>(
      [&]() -> GetFoosOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFoos, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        return GetFoosOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

void TestNewServiceSDKTestingClient::PublishFoosAsync(Model::PublishFoosRequest& request,
                                                      const PublishFoosStreamReadyHandler& streamReadyHandler,
                                                      const PublishFoosResponseReceivedHandler& handler,
                                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(PublishFoos);
  if (!m_endpointProvider) {
    handler(this, request,
            PublishFoosOutcome(Aws::Client::AWSError<TestNewServiceSDKTestingErrors>(
                TestNewServiceSDKTestingErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)),
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
            PublishFoosOutcome(Aws::Client::AWSError<CoreErrors>(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE",
                                                                 endpointResolutionOutcome.GetError().GetMessage(), false)),
            handlerContext);
    return;
  }
  JsonOutcome outcome =
      MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);

  auto eventEncoderStream = Aws::MakeShared<Model::PublishEvents>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<PublishFoosRequest>("PublishFoos", request);
  requestCopy->SetMessages(eventEncoderStream);  // this becomes the body of the request
  request.SetMessages(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<PublishFoosOutcome>(this, endpointResolutionOutcome.GetResultWithOwnership(),
                                                                          requestCopy, handler, handlerContext, eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
}
