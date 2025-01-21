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


#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClient.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrorMarshaller.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointProvider.h>
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceCommerceAnalytics;
using namespace Aws::MarketplaceCommerceAnalytics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace MarketplaceCommerceAnalytics
  {
    const char ALLOCATION_TAG[] = "MarketplaceCommerceAnalyticsClient";
    const char SERVICE_NAME[] = "marketplacecommerceanalytics";
  }
}
const char* MarketplaceCommerceAnalyticsClient::GetServiceName() {return SERVICE_NAME;}
const char* MarketplaceCommerceAnalyticsClient::GetAllocationTag() {return ALLOCATION_TAG;}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration,
                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Commerce Analytics",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const AWSCredentials& credentials,
                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider,
                           const MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Commerce Analytics",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider,
                           const MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Commerce Analytics",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Marketplace Commerce Analytics",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Commerce Analytics",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Commerce Analytics",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

MarketplaceCommerceAnalyticsClient::~MarketplaceCommerceAnalyticsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase>& MarketplaceCommerceAnalyticsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MarketplaceCommerceAnalyticsClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
GenerateDataSetOutcome MarketplaceCommerceAnalyticsClient::GenerateDataSet(const GenerateDataSetRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateDataSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GenerateDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateDataSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateDataSetOutcome>(
    [&]()-> GenerateDataSetOutcome {
      return GenerateDataSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


