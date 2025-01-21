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


#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceClient.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrorMarshaller.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceEndpointProvider.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceEntitlementService;
using namespace Aws::MarketplaceEntitlementService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace MarketplaceEntitlementService
  {
    const char ALLOCATION_TAG[] = "MarketplaceEntitlementServiceClient";
    const char SERVICE_NAME[] = "aws-marketplace";
  }
}
const char* MarketplaceEntitlementServiceClient::GetServiceName() {return SERVICE_NAME;}
const char* MarketplaceEntitlementServiceClient::GetAllocationTag() {return ALLOCATION_TAG;}

MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(const MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration,
                           std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Entitlement Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceEntitlementServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(const AWSCredentials& credentials,
                           std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider,
                           const MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Entitlement Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceEntitlementServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider,
                           const MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Entitlement Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceEntitlementServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Marketplace Entitlement Service",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<MarketplaceEntitlementServiceErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Entitlement Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceEntitlementServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Entitlement Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceEntitlementServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

MarketplaceEntitlementServiceClient::~MarketplaceEntitlementServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase>& MarketplaceEntitlementServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MarketplaceEntitlementServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
GetEntitlementsOutcome MarketplaceEntitlementServiceClient::GetEntitlements(const GetEntitlementsRequest& request) const
{
  AWS_OPERATION_GUARD(GetEntitlements);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEntitlements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEntitlements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEntitlements",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEntitlementsOutcome>(
    [&]()-> GetEntitlementsOutcome {
      return GetEntitlementsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


