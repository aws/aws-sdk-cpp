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
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClient.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementEndpointProvider.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementErrorMarshaller.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareRequest.h>
#include <aws/partnercentral-revenue-measurement/model/CreateRevenueAttributionRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationsTaskRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueShareAllocationsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueSharesRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-revenue-measurement/model/StartRevenueAttributionAllocationsTaskRequest.h>
#include <aws/partnercentral-revenue-measurement/model/TagResourceRequest.h>
#include <aws/partnercentral-revenue-measurement/model/UntagResourceRequest.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateMarketplaceRevenueShareAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateRevenueAttributionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PartnerCentralRevenueMeasurement;
using namespace Aws::PartnerCentralRevenueMeasurement::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
const char SERVICE_NAME[] = "partnercentral";
const char ALLOCATION_TAG[] = "PartnerCentralRevenueMeasurementClient";
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
const char* PartnerCentralRevenueMeasurementClient::GetServiceName() { return SERVICE_NAME; }
const char* PartnerCentralRevenueMeasurementClient::GetAllocationTag() { return ALLOCATION_TAG; }

PartnerCentralRevenueMeasurementClient::PartnerCentralRevenueMeasurementClient(
    const PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration& clientConfiguration,
    std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase> endpointProvider)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<PartnerCentralRevenueMeasurementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralRevenueMeasurementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralRevenueMeasurementClient::PartnerCentralRevenueMeasurementClient(
    const AWSCredentials& credentials, std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase> endpointProvider,
    const PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralRevenueMeasurementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralRevenueMeasurementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralRevenueMeasurementClient::PartnerCentralRevenueMeasurementClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase> endpointProvider,
    const PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralRevenueMeasurementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralRevenueMeasurementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PartnerCentralRevenueMeasurementClient::PartnerCentralRevenueMeasurementClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<PartnerCentralRevenueMeasurementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralRevenueMeasurementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralRevenueMeasurementClient::PartnerCentralRevenueMeasurementClient(const AWSCredentials& credentials,
                                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralRevenueMeasurementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralRevenueMeasurementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralRevenueMeasurementClient::PartnerCentralRevenueMeasurementClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralRevenueMeasurementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralRevenueMeasurementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PartnerCentralRevenueMeasurementClient::~PartnerCentralRevenueMeasurementClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase>& PartnerCentralRevenueMeasurementClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void PartnerCentralRevenueMeasurementClient::init(
    const PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration& config) {
  AWSClient::SetServiceClientName("PartnerCentral Revenue Measurement");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "partnercentral");
}

void PartnerCentralRevenueMeasurementClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PartnerCentralRevenueMeasurementClient::InvokeOperationOutcome PartnerCentralRevenueMeasurementClient::InvokeServiceOperation(
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

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/PartnerCentralRevenueMeasurement/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateMarketplaceRevenueShareOutcome PartnerCentralRevenueMeasurementClient::CreateMarketplaceRevenueShare(
    const CreateMarketplaceRevenueShareRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMarketplaceRevenueShareOutcome(result.GetResultWithOwnership())
                            : CreateMarketplaceRevenueShareOutcome(std::move(result.GetError()));
}

CreateMarketplaceRevenueShareAllocationOutcome PartnerCentralRevenueMeasurementClient::CreateMarketplaceRevenueShareAllocation(
    const CreateMarketplaceRevenueShareAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMarketplaceRevenueShareAllocationOutcome(result.GetResultWithOwnership())
                            : CreateMarketplaceRevenueShareAllocationOutcome(std::move(result.GetError()));
}

CreateRevenueAttributionOutcome PartnerCentralRevenueMeasurementClient::CreateRevenueAttribution(
    const CreateRevenueAttributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRevenueAttributionOutcome(result.GetResultWithOwnership())
                            : CreateRevenueAttributionOutcome(std::move(result.GetError()));
}

GetMarketplaceRevenueShareOutcome PartnerCentralRevenueMeasurementClient::GetMarketplaceRevenueShare(
    const GetMarketplaceRevenueShareRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMarketplaceRevenueShareOutcome(result.GetResultWithOwnership())
                            : GetMarketplaceRevenueShareOutcome(std::move(result.GetError()));
}

GetMarketplaceRevenueShareAllocationOutcome PartnerCentralRevenueMeasurementClient::GetMarketplaceRevenueShareAllocation(
    const GetMarketplaceRevenueShareAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMarketplaceRevenueShareAllocationOutcome(result.GetResultWithOwnership())
                            : GetMarketplaceRevenueShareAllocationOutcome(std::move(result.GetError()));
}

GetRevenueAttributionOutcome PartnerCentralRevenueMeasurementClient::GetRevenueAttribution(
    const GetRevenueAttributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRevenueAttributionOutcome(result.GetResultWithOwnership())
                            : GetRevenueAttributionOutcome(std::move(result.GetError()));
}

GetRevenueAttributionAllocationOutcome PartnerCentralRevenueMeasurementClient::GetRevenueAttributionAllocation(
    const GetRevenueAttributionAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRevenueAttributionAllocationOutcome(result.GetResultWithOwnership())
                            : GetRevenueAttributionAllocationOutcome(std::move(result.GetError()));
}

GetRevenueAttributionAllocationsTaskOutcome PartnerCentralRevenueMeasurementClient::GetRevenueAttributionAllocationsTask(
    const GetRevenueAttributionAllocationsTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRevenueAttributionAllocationsTaskOutcome(result.GetResultWithOwnership())
                            : GetRevenueAttributionAllocationsTaskOutcome(std::move(result.GetError()));
}

ListMarketplaceRevenueShareAllocationsOutcome PartnerCentralRevenueMeasurementClient::ListMarketplaceRevenueShareAllocations(
    const ListMarketplaceRevenueShareAllocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMarketplaceRevenueShareAllocationsOutcome(result.GetResultWithOwnership())
                            : ListMarketplaceRevenueShareAllocationsOutcome(std::move(result.GetError()));
}

ListMarketplaceRevenueSharesOutcome PartnerCentralRevenueMeasurementClient::ListMarketplaceRevenueShares(
    const ListMarketplaceRevenueSharesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMarketplaceRevenueSharesOutcome(result.GetResultWithOwnership())
                            : ListMarketplaceRevenueSharesOutcome(std::move(result.GetError()));
}

ListRevenueAttributionAllocationsOutcome PartnerCentralRevenueMeasurementClient::ListRevenueAttributionAllocations(
    const ListRevenueAttributionAllocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRevenueAttributionAllocationsOutcome(result.GetResultWithOwnership())
                            : ListRevenueAttributionAllocationsOutcome(std::move(result.GetError()));
}

ListRevenueAttributionsOutcome PartnerCentralRevenueMeasurementClient::ListRevenueAttributions(
    const ListRevenueAttributionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRevenueAttributionsOutcome(result.GetResultWithOwnership())
                            : ListRevenueAttributionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PartnerCentralRevenueMeasurementClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartRevenueAttributionAllocationsTaskOutcome PartnerCentralRevenueMeasurementClient::StartRevenueAttributionAllocationsTask(
    const StartRevenueAttributionAllocationsTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRevenueAttributionAllocationsTaskOutcome(result.GetResultWithOwnership())
                            : StartRevenueAttributionAllocationsTaskOutcome(std::move(result.GetError()));
}

TagResourceOutcome PartnerCentralRevenueMeasurementClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome PartnerCentralRevenueMeasurementClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMarketplaceRevenueShareAllocationOutcome PartnerCentralRevenueMeasurementClient::UpdateMarketplaceRevenueShareAllocation(
    const UpdateMarketplaceRevenueShareAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMarketplaceRevenueShareAllocationOutcome(result.GetResultWithOwnership())
                            : UpdateMarketplaceRevenueShareAllocationOutcome(std::move(result.GetError()));
}

UpdateRevenueAttributionOutcome PartnerCentralRevenueMeasurementClient::UpdateRevenueAttribution(
    const UpdateRevenueAttributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRevenueAttributionOutcome(result.GetResultWithOwnership())
                            : UpdateRevenueAttributionOutcome(std::move(result.GetError()));
}
