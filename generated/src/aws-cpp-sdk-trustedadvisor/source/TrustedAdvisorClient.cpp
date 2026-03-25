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
#include <aws/trustedadvisor/TrustedAdvisorClient.h>
#include <aws/trustedadvisor/TrustedAdvisorEndpointProvider.h>
#include <aws/trustedadvisor/TrustedAdvisorErrorMarshaller.h>
#include <aws/trustedadvisor/model/BatchUpdateRecommendationResourceExclusionRequest.h>
#include <aws/trustedadvisor/model/GetOrganizationRecommendationRequest.h>
#include <aws/trustedadvisor/model/GetRecommendationRequest.h>
#include <aws/trustedadvisor/model/ListChecksRequest.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsRequest.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesRequest.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationsRequest.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesRequest.h>
#include <aws/trustedadvisor/model/ListRecommendationsRequest.h>
#include <aws/trustedadvisor/model/UpdateOrganizationRecommendationLifecycleRequest.h>
#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TrustedAdvisor;
using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace TrustedAdvisor {
const char SERVICE_NAME[] = "trustedadvisor";
const char ALLOCATION_TAG[] = "TrustedAdvisorClient";
}  // namespace TrustedAdvisor
}  // namespace Aws
const char* TrustedAdvisorClient::GetServiceName() { return SERVICE_NAME; }
const char* TrustedAdvisorClient::GetAllocationTag() { return ALLOCATION_TAG; }

TrustedAdvisorClient::TrustedAdvisorClient(const TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration,
                                           std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TrustedAdvisorClient::TrustedAdvisorClient(const AWSCredentials& credentials,
                                           std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider,
                                           const TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TrustedAdvisorClient::TrustedAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider,
                                           const TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TrustedAdvisorClient::TrustedAdvisorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TrustedAdvisorClient::TrustedAdvisorClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TrustedAdvisorClient::TrustedAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TrustedAdvisorClient::~TrustedAdvisorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TrustedAdvisorEndpointProviderBase>& TrustedAdvisorClient::accessEndpointProvider() { return m_endpointProvider; }

void TrustedAdvisorClient::init(const TrustedAdvisor::TrustedAdvisorClientConfiguration& config) {
  AWSClient::SetServiceClientName("TrustedAdvisor");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "trustedadvisor");
}

void TrustedAdvisorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TrustedAdvisorClient::InvokeOperationOutcome TrustedAdvisorClient::InvokeServiceOperation(
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

BatchUpdateRecommendationResourceExclusionOutcome TrustedAdvisorClient::BatchUpdateRecommendationResourceExclusion(
    const BatchUpdateRecommendationResourceExclusionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/batch-update-recommendation-resource-exclusion");
  };

  return BatchUpdateRecommendationResourceExclusionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

GetOrganizationRecommendationOutcome TrustedAdvisorClient::GetOrganizationRecommendation(
    const GetOrganizationRecommendationRequest& request) const {
  if (!request.OrganizationRecommendationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOrganizationRecommendation", "Required field: OrganizationRecommendationIdentifier, is not set");
    return GetOrganizationRecommendationOutcome(
        Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                    "Missing required field [OrganizationRecommendationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/organization-recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationRecommendationIdentifier());
  };

  return GetOrganizationRecommendationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRecommendationOutcome TrustedAdvisorClient::GetRecommendation(const GetRecommendationRequest& request) const {
  if (!request.RecommendationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommendation", "Required field: RecommendationIdentifier, is not set");
    return GetRecommendationOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(
        TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommendationIdentifier());
  };

  return GetRecommendationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChecksOutcome TrustedAdvisorClient::ListChecks(const ListChecksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/checks");
  };

  return ListChecksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrganizationRecommendationAccountsOutcome TrustedAdvisorClient::ListOrganizationRecommendationAccounts(
    const ListOrganizationRecommendationAccountsRequest& request) const {
  if (!request.OrganizationRecommendationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOrganizationRecommendationAccounts", "Required field: OrganizationRecommendationIdentifier, is not set");
    return ListOrganizationRecommendationAccountsOutcome(
        Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                    "Missing required field [OrganizationRecommendationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/organization-recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationRecommendationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return ListOrganizationRecommendationAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrganizationRecommendationResourcesOutcome TrustedAdvisorClient::ListOrganizationRecommendationResources(
    const ListOrganizationRecommendationResourcesRequest& request) const {
  if (!request.OrganizationRecommendationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOrganizationRecommendationResources", "Required field: OrganizationRecommendationIdentifier, is not set");
    return ListOrganizationRecommendationResourcesOutcome(
        Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                    "Missing required field [OrganizationRecommendationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/organization-recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationRecommendationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  };

  return ListOrganizationRecommendationResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrganizationRecommendationsOutcome TrustedAdvisorClient::ListOrganizationRecommendations(
    const ListOrganizationRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/organization-recommendations");
  };

  return ListOrganizationRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecommendationResourcesOutcome TrustedAdvisorClient::ListRecommendationResources(
    const ListRecommendationResourcesRequest& request) const {
  if (!request.RecommendationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendationResources", "Required field: RecommendationIdentifier, is not set");
    return ListRecommendationResourcesOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(
        TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommendationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  };

  return ListRecommendationResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecommendationsOutcome TrustedAdvisorClient::ListRecommendations(const ListRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommendations");
  };

  return ListRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

UpdateOrganizationRecommendationLifecycleOutcome TrustedAdvisorClient::UpdateOrganizationRecommendationLifecycle(
    const UpdateOrganizationRecommendationLifecycleRequest& request) const {
  if (!request.OrganizationRecommendationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOrganizationRecommendationLifecycle", "Required field: OrganizationRecommendationIdentifier, is not set");
    return UpdateOrganizationRecommendationLifecycleOutcome(
        Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                    "Missing required field [OrganizationRecommendationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/organization-recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationRecommendationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycle");
  };

  return UpdateOrganizationRecommendationLifecycleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRecommendationLifecycleOutcome TrustedAdvisorClient::UpdateRecommendationLifecycle(
    const UpdateRecommendationLifecycleRequest& request) const {
  if (!request.RecommendationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecommendationLifecycle", "Required field: RecommendationIdentifier, is not set");
    return UpdateRecommendationLifecycleOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(
        TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommendationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycle");
  };

  return UpdateRecommendationLifecycleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
