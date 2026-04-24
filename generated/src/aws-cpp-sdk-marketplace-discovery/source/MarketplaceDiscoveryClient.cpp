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
#include <aws/marketplace-discovery/MarketplaceDiscoveryClient.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryEndpointProvider.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryErrorMarshaller.h>
#include <aws/marketplace-discovery/model/GetListingRequest.h>
#include <aws/marketplace-discovery/model/GetOfferRequest.h>
#include <aws/marketplace-discovery/model/GetOfferSetRequest.h>
#include <aws/marketplace-discovery/model/GetOfferTermsRequest.h>
#include <aws/marketplace-discovery/model/GetProductRequest.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsRequest.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsRequest.h>
#include <aws/marketplace-discovery/model/SearchFacetsRequest.h>
#include <aws/marketplace-discovery/model/SearchListingsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceDiscovery;
using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MarketplaceDiscovery {
const char SERVICE_NAME[] = "aws-marketplace";
const char ALLOCATION_TAG[] = "MarketplaceDiscoveryClient";
}  // namespace MarketplaceDiscovery
}  // namespace Aws
const char* MarketplaceDiscoveryClient::GetServiceName() { return SERVICE_NAME; }
const char* MarketplaceDiscoveryClient::GetAllocationTag() { return ALLOCATION_TAG; }

MarketplaceDiscoveryClient::MarketplaceDiscoveryClient(
    const MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration& clientConfiguration,
    std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceDiscoveryClient::MarketplaceDiscoveryClient(
    const AWSCredentials& credentials, std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase> endpointProvider,
    const MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceDiscoveryClient::MarketplaceDiscoveryClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase> endpointProvider,
    const MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MarketplaceDiscoveryClient::MarketplaceDiscoveryClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceDiscoveryClient::MarketplaceDiscoveryClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceDiscoveryClient::MarketplaceDiscoveryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MarketplaceDiscoveryClient::~MarketplaceDiscoveryClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase>& MarketplaceDiscoveryClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void MarketplaceDiscoveryClient::init(const MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration& config) {
  AWSClient::SetServiceClientName("Marketplace Discovery");
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

void MarketplaceDiscoveryClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MarketplaceDiscoveryClient::InvokeOperationOutcome MarketplaceDiscoveryClient::InvokeServiceOperation(
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

GetListingOutcome MarketplaceDiscoveryClient::GetListing(const GetListingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/getListing");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetListingOutcome(result.GetResultWithOwnership()) : GetListingOutcome(std::move(result.GetError()));
}

GetOfferOutcome MarketplaceDiscoveryClient::GetOffer(const GetOfferRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/getOffer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOfferOutcome(result.GetResultWithOwnership()) : GetOfferOutcome(std::move(result.GetError()));
}

GetOfferSetOutcome MarketplaceDiscoveryClient::GetOfferSet(const GetOfferSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/getOfferSet");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOfferSetOutcome(result.GetResultWithOwnership()) : GetOfferSetOutcome(std::move(result.GetError()));
}

GetOfferTermsOutcome MarketplaceDiscoveryClient::GetOfferTerms(const GetOfferTermsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/getOfferTerms");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOfferTermsOutcome(result.GetResultWithOwnership()) : GetOfferTermsOutcome(std::move(result.GetError()));
}

GetProductOutcome MarketplaceDiscoveryClient::GetProduct(const GetProductRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/getProduct");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProductOutcome(result.GetResultWithOwnership()) : GetProductOutcome(std::move(result.GetError()));
}

ListFulfillmentOptionsOutcome MarketplaceDiscoveryClient::ListFulfillmentOptions(const ListFulfillmentOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/listFulfillmentOptions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFulfillmentOptionsOutcome(result.GetResultWithOwnership())
                            : ListFulfillmentOptionsOutcome(std::move(result.GetError()));
}

ListPurchaseOptionsOutcome MarketplaceDiscoveryClient::ListPurchaseOptions(const ListPurchaseOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/listPurchaseOptions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPurchaseOptionsOutcome(result.GetResultWithOwnership())
                            : ListPurchaseOptionsOutcome(std::move(result.GetError()));
}

SearchFacetsOutcome MarketplaceDiscoveryClient::SearchFacets(const SearchFacetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/searchFacets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchFacetsOutcome(result.GetResultWithOwnership()) : SearchFacetsOutcome(std::move(result.GetError()));
}

SearchListingsOutcome MarketplaceDiscoveryClient::SearchListings(const SearchListingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-02-05/searchListings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchListingsOutcome(result.GetResultWithOwnership()) : SearchListingsOutcome(std::move(result.GetError()));
}
