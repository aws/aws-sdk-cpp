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
#include <aws/route53globalresolver/Route53GlobalResolverClient.h>
#include <aws/route53globalresolver/Route53GlobalResolverEndpointProvider.h>
#include <aws/route53globalresolver/Route53GlobalResolverErrorMarshaller.h>
#include <aws/route53globalresolver/model/AssociateHostedZoneRequest.h>
#include <aws/route53globalresolver/model/BatchCreateFirewallRuleRequest.h>
#include <aws/route53globalresolver/model/BatchDeleteFirewallRuleRequest.h>
#include <aws/route53globalresolver/model/BatchUpdateFirewallRuleRequest.h>
#include <aws/route53globalresolver/model/CreateAccessSourceRequest.h>
#include <aws/route53globalresolver/model/CreateAccessTokenRequest.h>
#include <aws/route53globalresolver/model/CreateDNSViewRequest.h>
#include <aws/route53globalresolver/model/CreateFirewallDomainListRequest.h>
#include <aws/route53globalresolver/model/CreateFirewallRuleRequest.h>
#include <aws/route53globalresolver/model/CreateGlobalResolverRequest.h>
#include <aws/route53globalresolver/model/DeleteAccessSourceRequest.h>
#include <aws/route53globalresolver/model/DeleteAccessTokenRequest.h>
#include <aws/route53globalresolver/model/DeleteDNSViewRequest.h>
#include <aws/route53globalresolver/model/DeleteFirewallDomainListRequest.h>
#include <aws/route53globalresolver/model/DeleteFirewallRuleRequest.h>
#include <aws/route53globalresolver/model/DeleteGlobalResolverRequest.h>
#include <aws/route53globalresolver/model/DisableDNSViewRequest.h>
#include <aws/route53globalresolver/model/DisassociateHostedZoneRequest.h>
#include <aws/route53globalresolver/model/EnableDNSViewRequest.h>
#include <aws/route53globalresolver/model/GetAccessSourceRequest.h>
#include <aws/route53globalresolver/model/GetAccessTokenRequest.h>
#include <aws/route53globalresolver/model/GetDNSViewRequest.h>
#include <aws/route53globalresolver/model/GetFirewallDomainListRequest.h>
#include <aws/route53globalresolver/model/GetFirewallRuleRequest.h>
#include <aws/route53globalresolver/model/GetGlobalResolverRequest.h>
#include <aws/route53globalresolver/model/GetHostedZoneAssociationRequest.h>
#include <aws/route53globalresolver/model/GetManagedFirewallDomainListRequest.h>
#include <aws/route53globalresolver/model/ImportFirewallDomainsRequest.h>
#include <aws/route53globalresolver/model/ListAccessSourcesRequest.h>
#include <aws/route53globalresolver/model/ListAccessTokensRequest.h>
#include <aws/route53globalresolver/model/ListDNSViewsRequest.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsRequest.h>
#include <aws/route53globalresolver/model/ListFirewallDomainsRequest.h>
#include <aws/route53globalresolver/model/ListFirewallRulesRequest.h>
#include <aws/route53globalresolver/model/ListGlobalResolversRequest.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsRequest.h>
#include <aws/route53globalresolver/model/ListManagedFirewallDomainListsRequest.h>
#include <aws/route53globalresolver/model/ListTagsForResourceRequest.h>
#include <aws/route53globalresolver/model/TagResourceRequest.h>
#include <aws/route53globalresolver/model/UntagResourceRequest.h>
#include <aws/route53globalresolver/model/UpdateAccessSourceRequest.h>
#include <aws/route53globalresolver/model/UpdateAccessTokenRequest.h>
#include <aws/route53globalresolver/model/UpdateDNSViewRequest.h>
#include <aws/route53globalresolver/model/UpdateFirewallDomainsRequest.h>
#include <aws/route53globalresolver/model/UpdateFirewallRuleRequest.h>
#include <aws/route53globalresolver/model/UpdateGlobalResolverRequest.h>
#include <aws/route53globalresolver/model/UpdateHostedZoneAssociationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53GlobalResolver;
using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Route53GlobalResolver {
const char SERVICE_NAME[] = "route53globalresolver";
const char ALLOCATION_TAG[] = "Route53GlobalResolverClient";
}  // namespace Route53GlobalResolver
}  // namespace Aws
const char* Route53GlobalResolverClient::GetServiceName() { return SERVICE_NAME; }
const char* Route53GlobalResolverClient::GetAllocationTag() { return ALLOCATION_TAG; }

Route53GlobalResolverClient::Route53GlobalResolverClient(
    const Route53GlobalResolver::Route53GlobalResolverClientConfiguration& clientConfiguration,
    std::shared_ptr<Route53GlobalResolverEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53GlobalResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53GlobalResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53GlobalResolverClient::Route53GlobalResolverClient(
    const AWSCredentials& credentials, std::shared_ptr<Route53GlobalResolverEndpointProviderBase> endpointProvider,
    const Route53GlobalResolver::Route53GlobalResolverClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53GlobalResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53GlobalResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53GlobalResolverClient::Route53GlobalResolverClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<Route53GlobalResolverEndpointProviderBase> endpointProvider,
    const Route53GlobalResolver::Route53GlobalResolverClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53GlobalResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53GlobalResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53GlobalResolverClient::Route53GlobalResolverClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53GlobalResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53GlobalResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53GlobalResolverClient::Route53GlobalResolverClient(const AWSCredentials& credentials,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53GlobalResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53GlobalResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53GlobalResolverClient::Route53GlobalResolverClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53GlobalResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53GlobalResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Route53GlobalResolverClient::~Route53GlobalResolverClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Route53GlobalResolverEndpointProviderBase>& Route53GlobalResolverClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void Route53GlobalResolverClient::init(const Route53GlobalResolver::Route53GlobalResolverClientConfiguration& config) {
  AWSClient::SetServiceClientName("Route53GlobalResolver");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "route53globalresolver");
}

void Route53GlobalResolverClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Route53GlobalResolverClient::InvokeOperationOutcome Route53GlobalResolverClient::InvokeServiceOperation(
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

AssociateHostedZoneOutcome Route53GlobalResolverClient::AssociateHostedZone(const AssociateHostedZoneRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateHostedZone", "Required field: HostedZoneId, is not set");
    return AssociateHostedZoneOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hosted-zone-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateHostedZoneOutcome(result.GetResultWithOwnership())
                            : AssociateHostedZoneOutcome(std::move(result.GetError()));
}

BatchCreateFirewallRuleOutcome Route53GlobalResolverClient::BatchCreateFirewallRule(const BatchCreateFirewallRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules/batch-create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateFirewallRuleOutcome(result.GetResultWithOwnership())
                            : BatchCreateFirewallRuleOutcome(std::move(result.GetError()));
}

BatchDeleteFirewallRuleOutcome Route53GlobalResolverClient::BatchDeleteFirewallRule(const BatchDeleteFirewallRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules/batch-delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteFirewallRuleOutcome(result.GetResultWithOwnership())
                            : BatchDeleteFirewallRuleOutcome(std::move(result.GetError()));
}

BatchUpdateFirewallRuleOutcome Route53GlobalResolverClient::BatchUpdateFirewallRule(const BatchUpdateFirewallRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules/batch-update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateFirewallRuleOutcome(result.GetResultWithOwnership())
                            : BatchUpdateFirewallRuleOutcome(std::move(result.GetError()));
}

CreateAccessSourceOutcome Route53GlobalResolverClient::CreateAccessSource(const CreateAccessSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-sources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessSourceOutcome(result.GetResultWithOwnership())
                            : CreateAccessSourceOutcome(std::move(result.GetError()));
}

CreateAccessTokenOutcome Route53GlobalResolverClient::CreateAccessToken(const CreateAccessTokenRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccessToken", "Required field: DnsViewId, is not set");
    return CreateAccessTokenOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDnsViewId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessTokenOutcome(result.GetResultWithOwnership())
                            : CreateAccessTokenOutcome(std::move(result.GetError()));
}

CreateDNSViewOutcome Route53GlobalResolverClient::CreateDNSView(const CreateDNSViewRequest& request) const {
  if (!request.GlobalResolverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDNSView", "Required field: GlobalResolverId, is not set");
    return CreateDNSViewOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalResolverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dns-views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalResolverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDNSViewOutcome(result.GetResultWithOwnership()) : CreateDNSViewOutcome(std::move(result.GetError()));
}

CreateFirewallDomainListOutcome Route53GlobalResolverClient::CreateFirewallDomainList(
    const CreateFirewallDomainListRequest& request) const {
  if (!request.GlobalResolverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFirewallDomainList", "Required field: GlobalResolverId, is not set");
    return CreateFirewallDomainListOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalResolverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalResolverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFirewallDomainListOutcome(result.GetResultWithOwnership())
                            : CreateFirewallDomainListOutcome(std::move(result.GetError()));
}

CreateFirewallRuleOutcome Route53GlobalResolverClient::CreateFirewallRule(const CreateFirewallRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFirewallRuleOutcome(result.GetResultWithOwnership())
                            : CreateFirewallRuleOutcome(std::move(result.GetError()));
}

CreateGlobalResolverOutcome Route53GlobalResolverClient::CreateGlobalResolver(const CreateGlobalResolverRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-resolver");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlobalResolverOutcome(result.GetResultWithOwnership())
                            : CreateGlobalResolverOutcome(std::move(result.GetError()));
}

DeleteAccessSourceOutcome Route53GlobalResolverClient::DeleteAccessSource(const DeleteAccessSourceRequest& request) const {
  if (!request.AccessSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessSource", "Required field: AccessSourceId, is not set");
    return DeleteAccessSourceOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessSourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessSourceOutcome(result.GetResultWithOwnership())
                            : DeleteAccessSourceOutcome(std::move(result.GetError()));
}

DeleteAccessTokenOutcome Route53GlobalResolverClient::DeleteAccessToken(const DeleteAccessTokenRequest& request) const {
  if (!request.AccessTokenIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessToken", "Required field: AccessTokenId, is not set");
    return DeleteAccessTokenOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessTokenId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessTokenId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessTokenOutcome(result.GetResultWithOwnership())
                            : DeleteAccessTokenOutcome(std::move(result.GetError()));
}

DeleteDNSViewOutcome Route53GlobalResolverClient::DeleteDNSView(const DeleteDNSViewRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDNSView", "Required field: DnsViewId, is not set");
    return DeleteDNSViewOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dns-views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDnsViewId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDNSViewOutcome(result.GetResultWithOwnership()) : DeleteDNSViewOutcome(std::move(result.GetError()));
}

DeleteFirewallDomainListOutcome Route53GlobalResolverClient::DeleteFirewallDomainList(
    const DeleteFirewallDomainListRequest& request) const {
  if (!request.FirewallDomainListIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFirewallDomainList", "Required field: FirewallDomainListId, is not set");
    return DeleteFirewallDomainListOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallDomainListId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallDomainListId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFirewallDomainListOutcome(result.GetResultWithOwnership())
                            : DeleteFirewallDomainListOutcome(std::move(result.GetError()));
}

DeleteFirewallRuleOutcome Route53GlobalResolverClient::DeleteFirewallRule(const DeleteFirewallRuleRequest& request) const {
  if (!request.FirewallRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFirewallRule", "Required field: FirewallRuleId, is not set");
    return DeleteFirewallRuleOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFirewallRuleOutcome(result.GetResultWithOwnership())
                            : DeleteFirewallRuleOutcome(std::move(result.GetError()));
}

DeleteGlobalResolverOutcome Route53GlobalResolverClient::DeleteGlobalResolver(const DeleteGlobalResolverRequest& request) const {
  if (!request.GlobalResolverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGlobalResolver", "Required field: GlobalResolverId, is not set");
    return DeleteGlobalResolverOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalResolverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-resolver/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalResolverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGlobalResolverOutcome(result.GetResultWithOwnership())
                            : DeleteGlobalResolverOutcome(std::move(result.GetError()));
}

DisableDNSViewOutcome Route53GlobalResolverClient::DisableDNSView(const DisableDNSViewRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableDNSView", "Required field: DnsViewId, is not set");
    return DisableDNSViewOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dns-views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDnsViewId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? DisableDNSViewOutcome(result.GetResultWithOwnership()) : DisableDNSViewOutcome(std::move(result.GetError()));
}

DisassociateHostedZoneOutcome Route53GlobalResolverClient::DisassociateHostedZone(const DisassociateHostedZoneRequest& request) const {
  if (!request.HostedZoneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateHostedZone", "Required field: HostedZoneId, is not set");
    return DisassociateHostedZoneOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateHostedZone", "Required field: ResourceArn, is not set");
    return DisassociateHostedZoneOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hosted-zone-associations/hosted-zone/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-arn/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateHostedZoneOutcome(result.GetResultWithOwnership())
                            : DisassociateHostedZoneOutcome(std::move(result.GetError()));
}

EnableDNSViewOutcome Route53GlobalResolverClient::EnableDNSView(const EnableDNSViewRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableDNSView", "Required field: DnsViewId, is not set");
    return EnableDNSViewOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dns-views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDnsViewId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? EnableDNSViewOutcome(result.GetResultWithOwnership()) : EnableDNSViewOutcome(std::move(result.GetError()));
}

GetAccessSourceOutcome Route53GlobalResolverClient::GetAccessSource(const GetAccessSourceRequest& request) const {
  if (!request.AccessSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessSource", "Required field: AccessSourceId, is not set");
    return GetAccessSourceOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessSourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessSourceOutcome(result.GetResultWithOwnership())
                            : GetAccessSourceOutcome(std::move(result.GetError()));
}

GetAccessTokenOutcome Route53GlobalResolverClient::GetAccessToken(const GetAccessTokenRequest& request) const {
  if (!request.AccessTokenIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessToken", "Required field: AccessTokenId, is not set");
    return GetAccessTokenOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessTokenId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessTokenId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessTokenOutcome(result.GetResultWithOwnership()) : GetAccessTokenOutcome(std::move(result.GetError()));
}

GetDNSViewOutcome Route53GlobalResolverClient::GetDNSView(const GetDNSViewRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDNSView", "Required field: DnsViewId, is not set");
    return GetDNSViewOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dns-views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDnsViewId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDNSViewOutcome(result.GetResultWithOwnership()) : GetDNSViewOutcome(std::move(result.GetError()));
}

GetFirewallDomainListOutcome Route53GlobalResolverClient::GetFirewallDomainList(const GetFirewallDomainListRequest& request) const {
  if (!request.FirewallDomainListIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFirewallDomainList", "Required field: FirewallDomainListId, is not set");
    return GetFirewallDomainListOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallDomainListId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallDomainListId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFirewallDomainListOutcome(result.GetResultWithOwnership())
                            : GetFirewallDomainListOutcome(std::move(result.GetError()));
}

GetFirewallRuleOutcome Route53GlobalResolverClient::GetFirewallRule(const GetFirewallRuleRequest& request) const {
  if (!request.FirewallRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFirewallRule", "Required field: FirewallRuleId, is not set");
    return GetFirewallRuleOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFirewallRuleOutcome(result.GetResultWithOwnership())
                            : GetFirewallRuleOutcome(std::move(result.GetError()));
}

GetGlobalResolverOutcome Route53GlobalResolverClient::GetGlobalResolver(const GetGlobalResolverRequest& request) const {
  if (!request.GlobalResolverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGlobalResolver", "Required field: GlobalResolverId, is not set");
    return GetGlobalResolverOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalResolverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-resolver/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalResolverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGlobalResolverOutcome(result.GetResultWithOwnership())
                            : GetGlobalResolverOutcome(std::move(result.GetError()));
}

GetHostedZoneAssociationOutcome Route53GlobalResolverClient::GetHostedZoneAssociation(
    const GetHostedZoneAssociationRequest& request) const {
  if (!request.HostedZoneAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHostedZoneAssociation", "Required field: HostedZoneAssociationId, is not set");
    return GetHostedZoneAssociationOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hosted-zone-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetHostedZoneAssociationOutcome(result.GetResultWithOwnership())
                            : GetHostedZoneAssociationOutcome(std::move(result.GetError()));
}

GetManagedFirewallDomainListOutcome Route53GlobalResolverClient::GetManagedFirewallDomainList(
    const GetManagedFirewallDomainListRequest& request) const {
  if (!request.ManagedFirewallDomainListIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedFirewallDomainList", "Required field: ManagedFirewallDomainListId, is not set");
    return GetManagedFirewallDomainListOutcome(
        Aws::Client::AWSError<Route53GlobalResolverErrors>(Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                           "Missing required field [ManagedFirewallDomainListId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedFirewallDomainListId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedFirewallDomainListOutcome(result.GetResultWithOwnership())
                            : GetManagedFirewallDomainListOutcome(std::move(result.GetError()));
}

ImportFirewallDomainsOutcome Route53GlobalResolverClient::ImportFirewallDomains(const ImportFirewallDomainsRequest& request) const {
  if (!request.FirewallDomainListIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportFirewallDomains", "Required field: FirewallDomainListId, is not set");
    return ImportFirewallDomainsOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallDomainListId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallDomainListId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/s3_file_url");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? ImportFirewallDomainsOutcome(result.GetResultWithOwnership())
                            : ImportFirewallDomainsOutcome(std::move(result.GetError()));
}

ListAccessSourcesOutcome Route53GlobalResolverClient::ListAccessSources(const ListAccessSourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-sources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessSourcesOutcome(result.GetResultWithOwnership())
                            : ListAccessSourcesOutcome(std::move(result.GetError()));
}

ListAccessTokensOutcome Route53GlobalResolverClient::ListAccessTokens(const ListAccessTokensRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessTokens", "Required field: DnsViewId, is not set");
    return ListAccessTokensOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/dns-view/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDnsViewId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessTokensOutcome(result.GetResultWithOwnership())
                            : ListAccessTokensOutcome(std::move(result.GetError()));
}

ListDNSViewsOutcome Route53GlobalResolverClient::ListDNSViews(const ListDNSViewsRequest& request) const {
  if (!request.GlobalResolverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDNSViews", "Required field: GlobalResolverId, is not set");
    return ListDNSViewsOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalResolverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dns-views/resolver/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalResolverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDNSViewsOutcome(result.GetResultWithOwnership()) : ListDNSViewsOutcome(std::move(result.GetError()));
}

ListFirewallDomainListsOutcome Route53GlobalResolverClient::ListFirewallDomainLists(const ListFirewallDomainListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-domain-lists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFirewallDomainListsOutcome(result.GetResultWithOwnership())
                            : ListFirewallDomainListsOutcome(std::move(result.GetError()));
}

ListFirewallDomainsOutcome Route53GlobalResolverClient::ListFirewallDomains(const ListFirewallDomainsRequest& request) const {
  if (!request.FirewallDomainListIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFirewallDomains", "Required field: FirewallDomainListId, is not set");
    return ListFirewallDomainsOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallDomainListId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallDomainListId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFirewallDomainsOutcome(result.GetResultWithOwnership())
                            : ListFirewallDomainsOutcome(std::move(result.GetError()));
}

ListFirewallRulesOutcome Route53GlobalResolverClient::ListFirewallRules(const ListFirewallRulesRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFirewallRules", "Required field: DnsViewId, is not set");
    return ListFirewallRulesOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFirewallRulesOutcome(result.GetResultWithOwnership())
                            : ListFirewallRulesOutcome(std::move(result.GetError()));
}

ListGlobalResolversOutcome Route53GlobalResolverClient::ListGlobalResolvers(const ListGlobalResolversRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-resolver");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGlobalResolversOutcome(result.GetResultWithOwnership())
                            : ListGlobalResolversOutcome(std::move(result.GetError()));
}

ListHostedZoneAssociationsOutcome Route53GlobalResolverClient::ListHostedZoneAssociations(
    const ListHostedZoneAssociationsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHostedZoneAssociations", "Required field: ResourceArn, is not set");
    return ListHostedZoneAssociationsOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hosted-zone-associations/resource-arn/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListHostedZoneAssociationsOutcome(result.GetResultWithOwnership())
                            : ListHostedZoneAssociationsOutcome(std::move(result.GetError()));
}

ListManagedFirewallDomainListsOutcome Route53GlobalResolverClient::ListManagedFirewallDomainLists(
    const ListManagedFirewallDomainListsRequest& request) const {
  if (!request.ManagedFirewallDomainListTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListManagedFirewallDomainLists", "Required field: ManagedFirewallDomainListType, is not set");
    return ListManagedFirewallDomainListsOutcome(
        Aws::Client::AWSError<Route53GlobalResolverErrors>(Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                           "Missing required field [ManagedFirewallDomainListType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-managed-firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedFirewallDomainListType());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedFirewallDomainListsOutcome(result.GetResultWithOwnership())
                            : ListManagedFirewallDomainListsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome Route53GlobalResolverClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-all-tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome Route53GlobalResolverClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tag-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome Route53GlobalResolverClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untag-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAccessSourceOutcome Route53GlobalResolverClient::UpdateAccessSource(const UpdateAccessSourceRequest& request) const {
  if (!request.AccessSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessSource", "Required field: AccessSourceId, is not set");
    return UpdateAccessSourceOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessSourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAccessSourceOutcome(result.GetResultWithOwnership())
                            : UpdateAccessSourceOutcome(std::move(result.GetError()));
}

UpdateAccessTokenOutcome Route53GlobalResolverClient::UpdateAccessToken(const UpdateAccessTokenRequest& request) const {
  if (!request.AccessTokenIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessToken", "Required field: AccessTokenId, is not set");
    return UpdateAccessTokenOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessTokenId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessTokenId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAccessTokenOutcome(result.GetResultWithOwnership())
                            : UpdateAccessTokenOutcome(std::move(result.GetError()));
}

UpdateDNSViewOutcome Route53GlobalResolverClient::UpdateDNSView(const UpdateDNSViewRequest& request) const {
  if (!request.DnsViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDNSView", "Required field: DnsViewId, is not set");
    return UpdateDNSViewOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DnsViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dns-views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDnsViewId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDNSViewOutcome(result.GetResultWithOwnership()) : UpdateDNSViewOutcome(std::move(result.GetError()));
}

UpdateFirewallDomainsOutcome Route53GlobalResolverClient::UpdateFirewallDomains(const UpdateFirewallDomainsRequest& request) const {
  if (!request.FirewallDomainListIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFirewallDomains", "Required field: FirewallDomainListId, is not set");
    return UpdateFirewallDomainsOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallDomainListId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-domain-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallDomainListId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateFirewallDomainsOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallDomainsOutcome(std::move(result.GetError()));
}

UpdateFirewallRuleOutcome Route53GlobalResolverClient::UpdateFirewallRule(const UpdateFirewallRuleRequest& request) const {
  if (!request.FirewallRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFirewallRule", "Required field: FirewallRuleId, is not set");
    return UpdateFirewallRuleOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FirewallRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/firewall-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFirewallRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateFirewallRuleOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallRuleOutcome(std::move(result.GetError()));
}

UpdateGlobalResolverOutcome Route53GlobalResolverClient::UpdateGlobalResolver(const UpdateGlobalResolverRequest& request) const {
  if (!request.GlobalResolverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGlobalResolver", "Required field: GlobalResolverId, is not set");
    return UpdateGlobalResolverOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalResolverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-resolver/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalResolverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGlobalResolverOutcome(result.GetResultWithOwnership())
                            : UpdateGlobalResolverOutcome(std::move(result.GetError()));
}

UpdateHostedZoneAssociationOutcome Route53GlobalResolverClient::UpdateHostedZoneAssociation(
    const UpdateHostedZoneAssociationRequest& request) const {
  if (!request.HostedZoneAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateHostedZoneAssociation", "Required field: HostedZoneAssociationId, is not set");
    return UpdateHostedZoneAssociationOutcome(Aws::Client::AWSError<Route53GlobalResolverErrors>(
        Route53GlobalResolverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hosted-zone-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHostedZoneAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateHostedZoneAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateHostedZoneAssociationOutcome(std::move(result.GetError()));
}
