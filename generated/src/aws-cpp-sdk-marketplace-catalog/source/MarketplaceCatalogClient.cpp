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
#include <aws/marketplace-catalog/MarketplaceCatalogClient.h>
#include <aws/marketplace-catalog/MarketplaceCatalogEndpointProvider.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrorMarshaller.h>
#include <aws/marketplace-catalog/model/BatchDescribeEntitiesRequest.h>
#include <aws/marketplace-catalog/model/CancelChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DeleteResourcePolicyRequest.h>
#include <aws/marketplace-catalog/model/DescribeChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DescribeEntityRequest.h>
#include <aws/marketplace-catalog/model/GetResourcePolicyRequest.h>
#include <aws/marketplace-catalog/model/ListChangeSetsRequest.h>
#include <aws/marketplace-catalog/model/ListEntitiesRequest.h>
#include <aws/marketplace-catalog/model/ListTagsForResourceRequest.h>
#include <aws/marketplace-catalog/model/PutResourcePolicyRequest.h>
#include <aws/marketplace-catalog/model/StartChangeSetRequest.h>
#include <aws/marketplace-catalog/model/TagResourceRequest.h>
#include <aws/marketplace-catalog/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceCatalog;
using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MarketplaceCatalog {
const char SERVICE_NAME[] = "aws-marketplace";
const char ALLOCATION_TAG[] = "MarketplaceCatalogClient";
}  // namespace MarketplaceCatalog
}  // namespace Aws
const char* MarketplaceCatalogClient::GetServiceName() { return SERVICE_NAME; }
const char* MarketplaceCatalogClient::GetAllocationTag() { return ALLOCATION_TAG; }

MarketplaceCatalogClient::MarketplaceCatalogClient(const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider,
                                                   const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider,
                                                   const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MarketplaceCatalogClient::MarketplaceCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MarketplaceCatalogClient::~MarketplaceCatalogClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MarketplaceCatalogEndpointProviderBase>& MarketplaceCatalogClient::accessEndpointProvider() { return m_endpointProvider; }

void MarketplaceCatalogClient::init(const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& config) {
  AWSClient::SetServiceClientName("Marketplace Catalog");
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

void MarketplaceCatalogClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MarketplaceCatalogClient::InvokeOperationOutcome MarketplaceCatalogClient::InvokeServiceOperation(
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

BatchDescribeEntitiesOutcome MarketplaceCatalogClient::BatchDescribeEntities(const BatchDescribeEntitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchDescribeEntities");
  };

  return BatchDescribeEntitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelChangeSetOutcome MarketplaceCatalogClient::CancelChangeSet(const CancelChangeSetRequest& request) const {
  if (!request.CatalogHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: Catalog, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: ChangeSetId, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CancelChangeSet");
  };

  return CancelChangeSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

DeleteResourcePolicyOutcome MarketplaceCatalogClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteResourcePolicy");
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeChangeSetOutcome MarketplaceCatalogClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const {
  if (!request.CatalogHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: Catalog, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: ChangeSetId, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeChangeSet");
  };

  return DescribeChangeSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeEntityOutcome MarketplaceCatalogClient::DescribeEntity(const DescribeEntityRequest& request) const {
  if (!request.CatalogHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: Catalog, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.EntityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: EntityId, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeEntity");
  };

  return DescribeEntityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcePolicyOutcome MarketplaceCatalogClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(
        MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetResourcePolicy");
  };

  return GetResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChangeSetsOutcome MarketplaceCatalogClient::ListChangeSets(const ListChangeSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListChangeSets");
  };

  return ListChangeSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntitiesOutcome MarketplaceCatalogClient::ListEntities(const ListEntitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListEntities");
  };

  return ListEntitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome MarketplaceCatalogClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome MarketplaceCatalogClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutResourcePolicy");
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartChangeSetOutcome MarketplaceCatalogClient::StartChangeSet(const StartChangeSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartChangeSet");
  };

  return StartChangeSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MarketplaceCatalogClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MarketplaceCatalogClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
