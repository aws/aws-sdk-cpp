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
#include <aws/outposts/OutpostsClient.h>
#include <aws/outposts/OutpostsEndpointProvider.h>
#include <aws/outposts/OutpostsErrorMarshaller.h>
#include <aws/outposts/model/CancelCapacityTaskRequest.h>
#include <aws/outposts/model/CancelOrderRequest.h>
#include <aws/outposts/model/CreateOrderRequest.h>
#include <aws/outposts/model/CreateOutpostRequest.h>
#include <aws/outposts/model/CreateRenewalRequest.h>
#include <aws/outposts/model/CreateSiteRequest.h>
#include <aws/outposts/model/DeleteOutpostRequest.h>
#include <aws/outposts/model/DeleteSiteRequest.h>
#include <aws/outposts/model/GetCapacityTaskRequest.h>
#include <aws/outposts/model/GetCatalogItemRequest.h>
#include <aws/outposts/model/GetConnectionRequest.h>
#include <aws/outposts/model/GetOrderRequest.h>
#include <aws/outposts/model/GetOutpostBillingInformationRequest.h>
#include <aws/outposts/model/GetOutpostInstanceTypesRequest.h>
#include <aws/outposts/model/GetOutpostRequest.h>
#include <aws/outposts/model/GetOutpostSupportedInstanceTypesRequest.h>
#include <aws/outposts/model/GetRenewalPricingRequest.h>
#include <aws/outposts/model/GetSiteAddressRequest.h>
#include <aws/outposts/model/GetSiteRequest.h>
#include <aws/outposts/model/ListAssetInstancesRequest.h>
#include <aws/outposts/model/ListAssetsRequest.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskRequest.h>
#include <aws/outposts/model/ListCapacityTasksRequest.h>
#include <aws/outposts/model/ListCatalogItemsRequest.h>
#include <aws/outposts/model/ListOrdersRequest.h>
#include <aws/outposts/model/ListOutpostsRequest.h>
#include <aws/outposts/model/ListSitesRequest.h>
#include <aws/outposts/model/ListTagsForResourceRequest.h>
#include <aws/outposts/model/StartCapacityTaskRequest.h>
#include <aws/outposts/model/StartConnectionRequest.h>
#include <aws/outposts/model/StartOutpostDecommissionRequest.h>
#include <aws/outposts/model/TagResourceRequest.h>
#include <aws/outposts/model/UntagResourceRequest.h>
#include <aws/outposts/model/UpdateOutpostRequest.h>
#include <aws/outposts/model/UpdateSiteAddressRequest.h>
#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesRequest.h>
#include <aws/outposts/model/UpdateSiteRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Outposts;
using namespace Aws::Outposts::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Outposts {
const char SERVICE_NAME[] = "outposts";
const char ALLOCATION_TAG[] = "OutpostsClient";
}  // namespace Outposts
}  // namespace Aws
const char* OutpostsClient::GetServiceName() { return SERVICE_NAME; }
const char* OutpostsClient::GetAllocationTag() { return ALLOCATION_TAG; }

OutpostsClient::OutpostsClient(const Outposts::OutpostsClientConfiguration& clientConfiguration,
                               std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const AWSCredentials& credentials, std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider,
                               const Outposts::OutpostsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider,
                               const Outposts::OutpostsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OutpostsClient::OutpostsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OutpostsClient::~OutpostsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OutpostsEndpointProviderBase>& OutpostsClient::accessEndpointProvider() { return m_endpointProvider; }

void OutpostsClient::init(const Outposts::OutpostsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Outposts");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "outposts");
}

void OutpostsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OutpostsClient::InvokeOperationOutcome OutpostsClient::InvokeServiceOperation(
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

CancelCapacityTaskOutcome OutpostsClient::CancelCapacityTask(const CancelCapacityTaskRequest& request) const {
  if (!request.CapacityTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelCapacityTask", "Required field: CapacityTaskId, is not set");
    return CancelCapacityTaskOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CapacityTaskId]", false));
  }
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelCapacityTask", "Required field: OutpostIdentifier, is not set");
    return CancelCapacityTaskOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capacity/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapacityTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelCapacityTaskOutcome(result.GetResultWithOwnership())
                            : CancelCapacityTaskOutcome(std::move(result.GetError()));
}

CancelOrderOutcome OutpostsClient::CancelOrder(const CancelOrderRequest& request) const {
  if (!request.OrderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelOrder", "Required field: OrderId, is not set");
    return CancelOrderOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [OrderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/orders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelOrderOutcome(result.GetResultWithOwnership()) : CancelOrderOutcome(std::move(result.GetError()));
}

CreateOrderOutcome OutpostsClient::CreateOrder(const CreateOrderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/orders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOrderOutcome(result.GetResultWithOwnership()) : CreateOrderOutcome(std::move(result.GetError()));
}

CreateOutpostOutcome OutpostsClient::CreateOutpost(const CreateOutpostRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOutpostOutcome(result.GetResultWithOwnership()) : CreateOutpostOutcome(std::move(result.GetError()));
}

CreateRenewalOutcome OutpostsClient::CreateRenewal(const CreateRenewalRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/renewals");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRenewalOutcome(result.GetResultWithOwnership()) : CreateRenewalOutcome(std::move(result.GetError()));
}

CreateSiteOutcome OutpostsClient::CreateSite(const CreateSiteRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSiteOutcome(result.GetResultWithOwnership()) : CreateSiteOutcome(std::move(result.GetError()));
}

DeleteOutpostOutcome OutpostsClient::DeleteOutpost(const DeleteOutpostRequest& request) const {
  if (!request.OutpostIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOutpost", "Required field: OutpostId, is not set");
    return DeleteOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [OutpostId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOutpostOutcome(result.GetResultWithOwnership()) : DeleteOutpostOutcome(std::move(result.GetError()));
}

DeleteSiteOutcome OutpostsClient::DeleteSite(const DeleteSiteRequest& request) const {
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSite", "Required field: SiteId, is not set");
    return DeleteSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [SiteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSiteOutcome(result.GetResultWithOwnership()) : DeleteSiteOutcome(std::move(result.GetError()));
}

GetCapacityTaskOutcome OutpostsClient::GetCapacityTask(const GetCapacityTaskRequest& request) const {
  if (!request.CapacityTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCapacityTask", "Required field: CapacityTaskId, is not set");
    return GetCapacityTaskOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [CapacityTaskId]", false));
  }
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCapacityTask", "Required field: OutpostIdentifier, is not set");
    return GetCapacityTaskOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capacity/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapacityTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCapacityTaskOutcome(result.GetResultWithOwnership())
                            : GetCapacityTaskOutcome(std::move(result.GetError()));
}

GetCatalogItemOutcome OutpostsClient::GetCatalogItem(const GetCatalogItemRequest& request) const {
  if (!request.CatalogItemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCatalogItem", "Required field: CatalogItemId, is not set");
    return GetCatalogItemOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CatalogItemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog/item/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCatalogItemId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCatalogItemOutcome(result.GetResultWithOwnership()) : GetCatalogItemOutcome(std::move(result.GetError()));
}

GetConnectionOutcome OutpostsClient::GetConnection(const GetConnectionRequest& request) const {
  if (!request.ConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: ConnectionId, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectionOutcome(result.GetResultWithOwnership()) : GetConnectionOutcome(std::move(result.GetError()));
}

GetOrderOutcome OutpostsClient::GetOrder(const GetOrderRequest& request) const {
  if (!request.OrderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOrder", "Required field: OrderId, is not set");
    return GetOrderOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [OrderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/orders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrderId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOrderOutcome(result.GetResultWithOwnership()) : GetOrderOutcome(std::move(result.GetError()));
}

GetOutpostOutcome OutpostsClient::GetOutpost(const GetOutpostRequest& request) const {
  if (!request.OutpostIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOutpost", "Required field: OutpostId, is not set");
    return GetOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [OutpostId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOutpostOutcome(result.GetResultWithOwnership()) : GetOutpostOutcome(std::move(result.GetError()));
}

GetOutpostBillingInformationOutcome OutpostsClient::GetOutpostBillingInformation(const GetOutpostBillingInformationRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOutpostBillingInformation", "Required field: OutpostIdentifier, is not set");
    return GetOutpostBillingInformationOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outpost/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-information");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOutpostBillingInformationOutcome(result.GetResultWithOwnership())
                            : GetOutpostBillingInformationOutcome(std::move(result.GetError()));
}

GetOutpostInstanceTypesOutcome OutpostsClient::GetOutpostInstanceTypes(const GetOutpostInstanceTypesRequest& request) const {
  if (!request.OutpostIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOutpostInstanceTypes", "Required field: OutpostId, is not set");
    return GetOutpostInstanceTypesOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [OutpostId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/instanceTypes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOutpostInstanceTypesOutcome(result.GetResultWithOwnership())
                            : GetOutpostInstanceTypesOutcome(std::move(result.GetError()));
}

GetOutpostSupportedInstanceTypesOutcome OutpostsClient::GetOutpostSupportedInstanceTypes(
    const GetOutpostSupportedInstanceTypesRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOutpostSupportedInstanceTypes", "Required field: OutpostIdentifier, is not set");
    return GetOutpostSupportedInstanceTypesOutcome(Aws::Client::AWSError<OutpostsErrors>(
        OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/supportedInstanceTypes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOutpostSupportedInstanceTypesOutcome(result.GetResultWithOwnership())
                            : GetOutpostSupportedInstanceTypesOutcome(std::move(result.GetError()));
}

GetRenewalPricingOutcome OutpostsClient::GetRenewalPricing(const GetRenewalPricingRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRenewalPricing", "Required field: OutpostIdentifier, is not set");
    return GetRenewalPricingOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outpost/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/renewal-pricing");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRenewalPricingOutcome(result.GetResultWithOwnership())
                            : GetRenewalPricingOutcome(std::move(result.GetError()));
}

GetSiteOutcome OutpostsClient::GetSite(const GetSiteRequest& request) const {
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSite", "Required field: SiteId, is not set");
    return GetSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [SiteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSiteOutcome(result.GetResultWithOwnership()) : GetSiteOutcome(std::move(result.GetError()));
}

GetSiteAddressOutcome OutpostsClient::GetSiteAddress(const GetSiteAddressRequest& request) const {
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSiteAddress", "Required field: SiteId, is not set");
    return GetSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SiteId]", false));
  }
  if (!request.AddressTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSiteAddress", "Required field: AddressType, is not set");
    return GetSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AddressType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/address");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSiteAddressOutcome(result.GetResultWithOwnership()) : GetSiteAddressOutcome(std::move(result.GetError()));
}

ListAssetInstancesOutcome OutpostsClient::ListAssetInstances(const ListAssetInstancesRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetInstances", "Required field: OutpostIdentifier, is not set");
    return ListAssetInstancesOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assetInstances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssetInstancesOutcome(result.GetResultWithOwnership())
                            : ListAssetInstancesOutcome(std::move(result.GetError()));
}

ListAssetsOutcome OutpostsClient::ListAssets(const ListAssetsRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssets", "Required field: OutpostIdentifier, is not set");
    return ListAssetsOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssetsOutcome(result.GetResultWithOwnership()) : ListAssetsOutcome(std::move(result.GetError()));
}

ListBlockingInstancesForCapacityTaskOutcome OutpostsClient::ListBlockingInstancesForCapacityTask(
    const ListBlockingInstancesForCapacityTaskRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBlockingInstancesForCapacityTask", "Required field: OutpostIdentifier, is not set");
    return ListBlockingInstancesForCapacityTaskOutcome(Aws::Client::AWSError<OutpostsErrors>(
        OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostIdentifier]", false));
  }
  if (!request.CapacityTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBlockingInstancesForCapacityTask", "Required field: CapacityTaskId, is not set");
    return ListBlockingInstancesForCapacityTaskOutcome(Aws::Client::AWSError<OutpostsErrors>(
        OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CapacityTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capacity/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapacityTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/blockingInstances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBlockingInstancesForCapacityTaskOutcome(result.GetResultWithOwnership())
                            : ListBlockingInstancesForCapacityTaskOutcome(std::move(result.GetError()));
}

ListCapacityTasksOutcome OutpostsClient::ListCapacityTasks(const ListCapacityTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/capacity/tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCapacityTasksOutcome(result.GetResultWithOwnership())
                            : ListCapacityTasksOutcome(std::move(result.GetError()));
}

ListCatalogItemsOutcome OutpostsClient::ListCatalogItems(const ListCatalogItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog/items");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCatalogItemsOutcome(result.GetResultWithOwnership())
                            : ListCatalogItemsOutcome(std::move(result.GetError()));
}

ListOrdersOutcome OutpostsClient::ListOrders(const ListOrdersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-orders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOrdersOutcome(result.GetResultWithOwnership()) : ListOrdersOutcome(std::move(result.GetError()));
}

ListOutpostsOutcome OutpostsClient::ListOutposts(const ListOutpostsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOutpostsOutcome(result.GetResultWithOwnership()) : ListOutpostsOutcome(std::move(result.GetError()));
}

ListSitesOutcome OutpostsClient::ListSites(const ListSitesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSitesOutcome(result.GetResultWithOwnership()) : ListSitesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome OutpostsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartCapacityTaskOutcome OutpostsClient::StartCapacityTask(const StartCapacityTaskRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCapacityTask", "Required field: OutpostIdentifier, is not set");
    return StartCapacityTaskOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capacity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCapacityTaskOutcome(result.GetResultWithOwnership())
                            : StartCapacityTaskOutcome(std::move(result.GetError()));
}

StartConnectionOutcome OutpostsClient::StartConnection(const StartConnectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartConnectionOutcome(result.GetResultWithOwnership())
                            : StartConnectionOutcome(std::move(result.GetError()));
}

StartOutpostDecommissionOutcome OutpostsClient::StartOutpostDecommission(const StartOutpostDecommissionRequest& request) const {
  if (!request.OutpostIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartOutpostDecommission", "Required field: OutpostIdentifier, is not set");
    return StartOutpostDecommissionOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [OutpostIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/decommission");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartOutpostDecommissionOutcome(result.GetResultWithOwnership())
                            : StartOutpostDecommissionOutcome(std::move(result.GetError()));
}

TagResourceOutcome OutpostsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome OutpostsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateOutpostOutcome OutpostsClient::UpdateOutpost(const UpdateOutpostRequest& request) const {
  if (!request.OutpostIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOutpost", "Required field: OutpostId, is not set");
    return UpdateOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [OutpostId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateOutpostOutcome(result.GetResultWithOwnership()) : UpdateOutpostOutcome(std::move(result.GetError()));
}

UpdateSiteOutcome OutpostsClient::UpdateSite(const UpdateSiteRequest& request) const {
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSite", "Required field: SiteId, is not set");
    return UpdateSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [SiteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSiteOutcome(result.GetResultWithOwnership()) : UpdateSiteOutcome(std::move(result.GetError()));
}

UpdateSiteAddressOutcome OutpostsClient::UpdateSiteAddress(const UpdateSiteAddressRequest& request) const {
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSiteAddress", "Required field: SiteId, is not set");
    return UpdateSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SiteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/address");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSiteAddressOutcome(result.GetResultWithOwnership())
                            : UpdateSiteAddressOutcome(std::move(result.GetError()));
}

UpdateSiteRackPhysicalPropertiesOutcome OutpostsClient::UpdateSiteRackPhysicalProperties(
    const UpdateSiteRackPhysicalPropertiesRequest& request) const {
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSiteRackPhysicalProperties", "Required field: SiteId, is not set");
    return UpdateSiteRackPhysicalPropertiesOutcome(Aws::Client::AWSError<OutpostsErrors>(
        OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rackPhysicalProperties");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSiteRackPhysicalPropertiesOutcome(result.GetResultWithOwnership())
                            : UpdateSiteRackPhysicalPropertiesOutcome(std::move(result.GetError()));
}
