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

  return CancelCapacityTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CancelOrderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOrderOutcome OutpostsClient::CreateOrder(const CreateOrderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/orders");
  };

  return CreateOrderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOutpostOutcome OutpostsClient::CreateOutpost(const CreateOutpostRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts");
  };

  return CreateOutpostOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSiteOutcome OutpostsClient::CreateSite(const CreateSiteRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  };

  return CreateSiteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteOutpostOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteSiteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return GetCapacityTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetCatalogItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetOrderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetOutpostOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetOutpostBillingInformationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetOutpostInstanceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetOutpostSupportedInstanceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSiteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSiteAddressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAssetInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListBlockingInstancesForCapacityTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCapacityTasksOutcome OutpostsClient::ListCapacityTasks(const ListCapacityTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/capacity/tasks");
  };

  return ListCapacityTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCatalogItemsOutcome OutpostsClient::ListCatalogItems(const ListCatalogItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog/items");
  };

  return ListCatalogItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrdersOutcome OutpostsClient::ListOrders(const ListOrdersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-orders");
  };

  return ListOrdersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOutpostsOutcome OutpostsClient::ListOutposts(const ListOutpostsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/outposts");
  };

  return ListOutpostsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSitesOutcome OutpostsClient::ListSites(const ListSitesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  };

  return ListSitesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return StartCapacityTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartConnectionOutcome OutpostsClient::StartConnection(const StartConnectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  };

  return StartConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StartOutpostDecommissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateOutpostOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateSiteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateSiteAddressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateSiteRackPhysicalPropertiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
