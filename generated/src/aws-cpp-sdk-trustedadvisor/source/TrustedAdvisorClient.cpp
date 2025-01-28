/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/trustedadvisor/TrustedAdvisorClient.h>
#include <aws/trustedadvisor/TrustedAdvisorErrorMarshaller.h>
#include <aws/trustedadvisor/TrustedAdvisorEndpointProvider.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TrustedAdvisor;
using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace TrustedAdvisor
  {
    const char ALLOCATION_TAG[] = "TrustedAdvisorClient";
    const char SERVICE_NAME[] = "trustedadvisor";
  }
}
const char* TrustedAdvisorClient::GetServiceName() {return SERVICE_NAME;}
const char* TrustedAdvisorClient::GetAllocationTag() {return ALLOCATION_TAG;}

TrustedAdvisorClient::TrustedAdvisorClient(const TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration,
                           std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "TrustedAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

TrustedAdvisorClient::TrustedAdvisorClient(const AWSCredentials& credentials,
                           std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider,
                           const TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "TrustedAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

TrustedAdvisorClient::TrustedAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider,
                           const TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "TrustedAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
TrustedAdvisorClient::TrustedAdvisorClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "TrustedAdvisor",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

TrustedAdvisorClient::TrustedAdvisorClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "TrustedAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

TrustedAdvisorClient::TrustedAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "TrustedAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TrustedAdvisorErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TrustedAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

TrustedAdvisorClient::~TrustedAdvisorClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<TrustedAdvisorEndpointProviderBase>& TrustedAdvisorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TrustedAdvisorClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
BatchUpdateRecommendationResourceExclusionOutcome TrustedAdvisorClient::BatchUpdateRecommendationResourceExclusion(const BatchUpdateRecommendationResourceExclusionRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpdateRecommendationResourceExclusion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateRecommendationResourceExclusion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchUpdateRecommendationResourceExclusion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchUpdateRecommendationResourceExclusion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchUpdateRecommendationResourceExclusion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchUpdateRecommendationResourceExclusionOutcome>(
    [&]()-> BatchUpdateRecommendationResourceExclusionOutcome {
      return BatchUpdateRecommendationResourceExclusionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/batch-update-recommendation-resource-exclusion");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOrganizationRecommendationOutcome TrustedAdvisorClient::GetOrganizationRecommendation(const GetOrganizationRecommendationRequest& request) const
{
  AWS_OPERATION_GUARD(GetOrganizationRecommendation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOrganizationRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrganizationRecommendationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOrganizationRecommendation", "Required field: OrganizationRecommendationIdentifier, is not set");
    return GetOrganizationRecommendationOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationRecommendationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetOrganizationRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOrganizationRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOrganizationRecommendation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOrganizationRecommendationOutcome>(
    [&]()-> GetOrganizationRecommendationOutcome {
      return GetOrganizationRecommendationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/organization-recommendations/");
      resolvedEndpoint.AddPathSegment(request.GetOrganizationRecommendationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRecommendationOutcome TrustedAdvisorClient::GetRecommendation(const GetRecommendationRequest& request) const
{
  AWS_OPERATION_GUARD(GetRecommendation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecommendationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendation", "Required field: RecommendationIdentifier, is not set");
    return GetRecommendationOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRecommendation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRecommendationOutcome>(
    [&]()-> GetRecommendationOutcome {
      return GetRecommendationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/recommendations/");
      resolvedEndpoint.AddPathSegment(request.GetRecommendationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChecksOutcome TrustedAdvisorClient::ListChecks(const ListChecksRequest& request) const
{
  AWS_OPERATION_GUARD(ListChecks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListChecks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChecks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChecks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChecksOutcome>(
    [&]()-> ListChecksOutcome {
      return ListChecksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/checks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOrganizationRecommendationAccountsOutcome TrustedAdvisorClient::ListOrganizationRecommendationAccounts(const ListOrganizationRecommendationAccountsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOrganizationRecommendationAccounts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizationRecommendationAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrganizationRecommendationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListOrganizationRecommendationAccounts", "Required field: OrganizationRecommendationIdentifier, is not set");
    return ListOrganizationRecommendationAccountsOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationRecommendationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListOrganizationRecommendationAccounts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOrganizationRecommendationAccounts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOrganizationRecommendationAccounts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOrganizationRecommendationAccountsOutcome>(
    [&]()-> ListOrganizationRecommendationAccountsOutcome {
      return ListOrganizationRecommendationAccountsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/organization-recommendations/");
      resolvedEndpoint.AddPathSegment(request.GetOrganizationRecommendationIdentifier());
      resolvedEndpoint.AddPathSegments("/accounts");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOrganizationRecommendationResourcesOutcome TrustedAdvisorClient::ListOrganizationRecommendationResources(const ListOrganizationRecommendationResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListOrganizationRecommendationResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizationRecommendationResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrganizationRecommendationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListOrganizationRecommendationResources", "Required field: OrganizationRecommendationIdentifier, is not set");
    return ListOrganizationRecommendationResourcesOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationRecommendationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListOrganizationRecommendationResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOrganizationRecommendationResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOrganizationRecommendationResources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOrganizationRecommendationResourcesOutcome>(
    [&]()-> ListOrganizationRecommendationResourcesOutcome {
      return ListOrganizationRecommendationResourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/organization-recommendations/");
      resolvedEndpoint.AddPathSegment(request.GetOrganizationRecommendationIdentifier());
      resolvedEndpoint.AddPathSegments("/resources");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOrganizationRecommendationsOutcome TrustedAdvisorClient::ListOrganizationRecommendations(const ListOrganizationRecommendationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOrganizationRecommendations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizationRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListOrganizationRecommendations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOrganizationRecommendations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOrganizationRecommendations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOrganizationRecommendationsOutcome>(
    [&]()-> ListOrganizationRecommendationsOutcome {
      return ListOrganizationRecommendationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/organization-recommendations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecommendationResourcesOutcome TrustedAdvisorClient::ListRecommendationResources(const ListRecommendationResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRecommendationResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecommendationResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecommendationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendationResources", "Required field: RecommendationIdentifier, is not set");
    return ListRecommendationResourcesOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRecommendationResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecommendationResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecommendationResources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecommendationResourcesOutcome>(
    [&]()-> ListRecommendationResourcesOutcome {
      return ListRecommendationResourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/recommendations/");
      resolvedEndpoint.AddPathSegment(request.GetRecommendationIdentifier());
      resolvedEndpoint.AddPathSegments("/resources");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecommendationsOutcome TrustedAdvisorClient::ListRecommendations(const ListRecommendationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRecommendations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRecommendations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecommendations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecommendations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecommendationsOutcome>(
    [&]()-> ListRecommendationsOutcome {
      return ListRecommendationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/recommendations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateOrganizationRecommendationLifecycleOutcome TrustedAdvisorClient::UpdateOrganizationRecommendationLifecycle(const UpdateOrganizationRecommendationLifecycleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateOrganizationRecommendationLifecycle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOrganizationRecommendationLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrganizationRecommendationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOrganizationRecommendationLifecycle", "Required field: OrganizationRecommendationIdentifier, is not set");
    return UpdateOrganizationRecommendationLifecycleOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationRecommendationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateOrganizationRecommendationLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateOrganizationRecommendationLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateOrganizationRecommendationLifecycle",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateOrganizationRecommendationLifecycleOutcome>(
    [&]()-> UpdateOrganizationRecommendationLifecycleOutcome {
      return UpdateOrganizationRecommendationLifecycleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/organization-recommendations/");
      resolvedEndpoint.AddPathSegment(request.GetOrganizationRecommendationIdentifier());
      resolvedEndpoint.AddPathSegments("/lifecycle");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRecommendationLifecycleOutcome TrustedAdvisorClient::UpdateRecommendationLifecycle(const UpdateRecommendationLifecycleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRecommendationLifecycle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecommendationLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecommendationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecommendationLifecycle", "Required field: RecommendationIdentifier, is not set");
    return UpdateRecommendationLifecycleOutcome(Aws::Client::AWSError<TrustedAdvisorErrors>(TrustedAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRecommendationLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRecommendationLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRecommendationLifecycle",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRecommendationLifecycleOutcome>(
    [&]()-> UpdateRecommendationLifecycleOutcome {
      return UpdateRecommendationLifecycleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/recommendations/");
      resolvedEndpoint.AddPathSegment(request.GetRecommendationIdentifier());
      resolvedEndpoint.AddPathSegments("/lifecycle");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


