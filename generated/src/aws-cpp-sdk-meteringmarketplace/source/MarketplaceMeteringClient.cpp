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
#include <aws/meteringmarketplace/MarketplaceMeteringClient.h>
#include <aws/meteringmarketplace/MarketplaceMeteringEndpointProvider.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrorMarshaller.h>
#include <aws/meteringmarketplace/model/BatchMeterUsageRequest.h>
#include <aws/meteringmarketplace/model/MeterUsageRequest.h>
#include <aws/meteringmarketplace/model/RegisterUsageRequest.h>
#include <aws/meteringmarketplace/model/ResolveCustomerRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceMetering;
using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MarketplaceMetering {
const char SERVICE_NAME[] = "aws-marketplace";
const char ALLOCATION_TAG[] = "MarketplaceMeteringClient";
}  // namespace MarketplaceMetering
}  // namespace Aws
const char* MarketplaceMeteringClient::GetServiceName() { return SERVICE_NAME; }
const char* MarketplaceMeteringClient::GetAllocationTag() { return ALLOCATION_TAG; }

MarketplaceMeteringClient::MarketplaceMeteringClient(const MarketplaceMetering::MarketplaceMeteringClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<MarketplaceMeteringEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceMeteringEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceMeteringClient::MarketplaceMeteringClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<MarketplaceMeteringEndpointProviderBase> endpointProvider,
                                                     const MarketplaceMetering::MarketplaceMeteringClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceMeteringEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceMeteringClient::MarketplaceMeteringClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<MarketplaceMeteringEndpointProviderBase> endpointProvider,
                                                     const MarketplaceMetering::MarketplaceMeteringClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceMeteringEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MarketplaceMeteringClient::MarketplaceMeteringClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceMeteringEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceMeteringClient::MarketplaceMeteringClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceMeteringEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceMeteringClient::MarketplaceMeteringClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceMeteringEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MarketplaceMeteringClient::~MarketplaceMeteringClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MarketplaceMeteringEndpointProviderBase>& MarketplaceMeteringClient::accessEndpointProvider() { return m_endpointProvider; }

void MarketplaceMeteringClient::init(const MarketplaceMetering::MarketplaceMeteringClientConfiguration& config) {
  AWSClient::SetServiceClientName("Marketplace Metering");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "aws-marketplace");
}

void MarketplaceMeteringClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MarketplaceMeteringClient::InvokeOperationOutcome MarketplaceMeteringClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchMeterUsageOutcome MarketplaceMeteringClient::BatchMeterUsage(const BatchMeterUsageRequest& request) const {
  return BatchMeterUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MeterUsageOutcome MarketplaceMeteringClient::MeterUsage(const MeterUsageRequest& request) const {
  return MeterUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterUsageOutcome MarketplaceMeteringClient::RegisterUsage(const RegisterUsageRequest& request) const {
  return RegisterUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResolveCustomerOutcome MarketplaceMeteringClient::ResolveCustomer(const ResolveCustomerRequest& request) const {
  return ResolveCustomerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
