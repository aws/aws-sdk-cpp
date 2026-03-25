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
#include <aws/route53resolver/Route53ResolverClient.h>
#include <aws/route53resolver/Route53ResolverEndpointProvider.h>
#include <aws/route53resolver/Route53ResolverErrorMarshaller.h>
#include <aws/route53resolver/model/AssociateFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/AssociateResolverEndpointIpAddressRequest.h>
#include <aws/route53resolver/model/AssociateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/AssociateResolverRuleRequest.h>
#include <aws/route53resolver/model/CreateFirewallDomainListRequest.h>
#include <aws/route53resolver/model/CreateFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/CreateFirewallRuleRequest.h>
#include <aws/route53resolver/model/CreateOutpostResolverRequest.h>
#include <aws/route53resolver/model/CreateResolverEndpointRequest.h>
#include <aws/route53resolver/model/CreateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/CreateResolverRuleRequest.h>
#include <aws/route53resolver/model/DeleteFirewallDomainListRequest.h>
#include <aws/route53resolver/model/DeleteFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/DeleteFirewallRuleRequest.h>
#include <aws/route53resolver/model/DeleteOutpostResolverRequest.h>
#include <aws/route53resolver/model/DeleteResolverEndpointRequest.h>
#include <aws/route53resolver/model/DeleteResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/DeleteResolverRuleRequest.h>
#include <aws/route53resolver/model/DisassociateFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressRequest.h>
#include <aws/route53resolver/model/DisassociateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/DisassociateResolverRuleRequest.h>
#include <aws/route53resolver/model/GetFirewallConfigRequest.h>
#include <aws/route53resolver/model/GetFirewallDomainListRequest.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupAssociationRequest.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupPolicyRequest.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/GetOutpostResolverRequest.h>
#include <aws/route53resolver/model/GetResolverConfigRequest.h>
#include <aws/route53resolver/model/GetResolverDnssecConfigRequest.h>
#include <aws/route53resolver/model/GetResolverEndpointRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigAssociationRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigPolicyRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/GetResolverRuleAssociationRequest.h>
#include <aws/route53resolver/model/GetResolverRulePolicyRequest.h>
#include <aws/route53resolver/model/GetResolverRuleRequest.h>
#include <aws/route53resolver/model/ImportFirewallDomainsRequest.h>
#include <aws/route53resolver/model/ListFirewallConfigsRequest.h>
#include <aws/route53resolver/model/ListFirewallDomainListsRequest.h>
#include <aws/route53resolver/model/ListFirewallDomainsRequest.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupAssociationsRequest.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupsRequest.h>
#include <aws/route53resolver/model/ListFirewallRulesRequest.h>
#include <aws/route53resolver/model/ListOutpostResolversRequest.h>
#include <aws/route53resolver/model/ListResolverConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverDnssecConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesRequest.h>
#include <aws/route53resolver/model/ListResolverEndpointsRequest.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsRequest.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsRequest.h>
#include <aws/route53resolver/model/ListResolverRulesRequest.h>
#include <aws/route53resolver/model/ListTagsForResourceRequest.h>
#include <aws/route53resolver/model/PutFirewallRuleGroupPolicyRequest.h>
#include <aws/route53resolver/model/PutResolverQueryLogConfigPolicyRequest.h>
#include <aws/route53resolver/model/PutResolverRulePolicyRequest.h>
#include <aws/route53resolver/model/TagResourceRequest.h>
#include <aws/route53resolver/model/UntagResourceRequest.h>
#include <aws/route53resolver/model/UpdateFirewallConfigRequest.h>
#include <aws/route53resolver/model/UpdateFirewallDomainsRequest.h>
#include <aws/route53resolver/model/UpdateFirewallRuleGroupAssociationRequest.h>
#include <aws/route53resolver/model/UpdateFirewallRuleRequest.h>
#include <aws/route53resolver/model/UpdateOutpostResolverRequest.h>
#include <aws/route53resolver/model/UpdateResolverConfigRequest.h>
#include <aws/route53resolver/model/UpdateResolverDnssecConfigRequest.h>
#include <aws/route53resolver/model/UpdateResolverEndpointRequest.h>
#include <aws/route53resolver/model/UpdateResolverRuleRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Resolver;
using namespace Aws::Route53Resolver::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Route53Resolver {
const char SERVICE_NAME[] = "route53resolver";
const char ALLOCATION_TAG[] = "Route53ResolverClient";
}  // namespace Route53Resolver
}  // namespace Aws
const char* Route53ResolverClient::GetServiceName() { return SERVICE_NAME; }
const char* Route53ResolverClient::GetAllocationTag() { return ALLOCATION_TAG; }

Route53ResolverClient::Route53ResolverClient(const Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration,
                                             std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const AWSCredentials& credentials,
                                             std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider,
                                             const Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider,
                                             const Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53ResolverClient::Route53ResolverClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Route53ResolverClient::~Route53ResolverClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Route53ResolverEndpointProviderBase>& Route53ResolverClient::accessEndpointProvider() { return m_endpointProvider; }

void Route53ResolverClient::init(const Route53Resolver::Route53ResolverClientConfiguration& config) {
  AWSClient::SetServiceClientName("Route53Resolver");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "route53resolver");
}

void Route53ResolverClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Route53ResolverClient::InvokeOperationOutcome Route53ResolverClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateFirewallRuleGroupOutcome Route53ResolverClient::AssociateFirewallRuleGroup(
    const AssociateFirewallRuleGroupRequest& request) const {
  return AssociateFirewallRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateResolverEndpointIpAddressOutcome Route53ResolverClient::AssociateResolverEndpointIpAddress(
    const AssociateResolverEndpointIpAddressRequest& request) const {
  return AssociateResolverEndpointIpAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateResolverQueryLogConfigOutcome Route53ResolverClient::AssociateResolverQueryLogConfig(
    const AssociateResolverQueryLogConfigRequest& request) const {
  return AssociateResolverQueryLogConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateResolverRuleOutcome Route53ResolverClient::AssociateResolverRule(const AssociateResolverRuleRequest& request) const {
  return AssociateResolverRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFirewallDomainListOutcome Route53ResolverClient::CreateFirewallDomainList(const CreateFirewallDomainListRequest& request) const {
  return CreateFirewallDomainListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFirewallRuleOutcome Route53ResolverClient::CreateFirewallRule(const CreateFirewallRuleRequest& request) const {
  return CreateFirewallRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFirewallRuleGroupOutcome Route53ResolverClient::CreateFirewallRuleGroup(const CreateFirewallRuleGroupRequest& request) const {
  return CreateFirewallRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOutpostResolverOutcome Route53ResolverClient::CreateOutpostResolver(const CreateOutpostResolverRequest& request) const {
  return CreateOutpostResolverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResolverEndpointOutcome Route53ResolverClient::CreateResolverEndpoint(const CreateResolverEndpointRequest& request) const {
  return CreateResolverEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResolverQueryLogConfigOutcome Route53ResolverClient::CreateResolverQueryLogConfig(
    const CreateResolverQueryLogConfigRequest& request) const {
  return CreateResolverQueryLogConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResolverRuleOutcome Route53ResolverClient::CreateResolverRule(const CreateResolverRuleRequest& request) const {
  return CreateResolverRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFirewallDomainListOutcome Route53ResolverClient::DeleteFirewallDomainList(const DeleteFirewallDomainListRequest& request) const {
  return DeleteFirewallDomainListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFirewallRuleOutcome Route53ResolverClient::DeleteFirewallRule(const DeleteFirewallRuleRequest& request) const {
  return DeleteFirewallRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFirewallRuleGroupOutcome Route53ResolverClient::DeleteFirewallRuleGroup(const DeleteFirewallRuleGroupRequest& request) const {
  return DeleteFirewallRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOutpostResolverOutcome Route53ResolverClient::DeleteOutpostResolver(const DeleteOutpostResolverRequest& request) const {
  return DeleteOutpostResolverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResolverEndpointOutcome Route53ResolverClient::DeleteResolverEndpoint(const DeleteResolverEndpointRequest& request) const {
  return DeleteResolverEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResolverQueryLogConfigOutcome Route53ResolverClient::DeleteResolverQueryLogConfig(
    const DeleteResolverQueryLogConfigRequest& request) const {
  return DeleteResolverQueryLogConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResolverRuleOutcome Route53ResolverClient::DeleteResolverRule(const DeleteResolverRuleRequest& request) const {
  return DeleteResolverRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFirewallRuleGroupOutcome Route53ResolverClient::DisassociateFirewallRuleGroup(
    const DisassociateFirewallRuleGroupRequest& request) const {
  return DisassociateFirewallRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateResolverEndpointIpAddressOutcome Route53ResolverClient::DisassociateResolverEndpointIpAddress(
    const DisassociateResolverEndpointIpAddressRequest& request) const {
  return DisassociateResolverEndpointIpAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateResolverQueryLogConfigOutcome Route53ResolverClient::DisassociateResolverQueryLogConfig(
    const DisassociateResolverQueryLogConfigRequest& request) const {
  return DisassociateResolverQueryLogConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateResolverRuleOutcome Route53ResolverClient::DisassociateResolverRule(const DisassociateResolverRuleRequest& request) const {
  return DisassociateResolverRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFirewallConfigOutcome Route53ResolverClient::GetFirewallConfig(const GetFirewallConfigRequest& request) const {
  return GetFirewallConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFirewallDomainListOutcome Route53ResolverClient::GetFirewallDomainList(const GetFirewallDomainListRequest& request) const {
  return GetFirewallDomainListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFirewallRuleGroupOutcome Route53ResolverClient::GetFirewallRuleGroup(const GetFirewallRuleGroupRequest& request) const {
  return GetFirewallRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFirewallRuleGroupAssociationOutcome Route53ResolverClient::GetFirewallRuleGroupAssociation(
    const GetFirewallRuleGroupAssociationRequest& request) const {
  return GetFirewallRuleGroupAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFirewallRuleGroupPolicyOutcome Route53ResolverClient::GetFirewallRuleGroupPolicy(
    const GetFirewallRuleGroupPolicyRequest& request) const {
  return GetFirewallRuleGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOutpostResolverOutcome Route53ResolverClient::GetOutpostResolver(const GetOutpostResolverRequest& request) const {
  return GetOutpostResolverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverConfigOutcome Route53ResolverClient::GetResolverConfig(const GetResolverConfigRequest& request) const {
  return GetResolverConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverDnssecConfigOutcome Route53ResolverClient::GetResolverDnssecConfig(const GetResolverDnssecConfigRequest& request) const {
  return GetResolverDnssecConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverEndpointOutcome Route53ResolverClient::GetResolverEndpoint(const GetResolverEndpointRequest& request) const {
  return GetResolverEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverQueryLogConfigOutcome Route53ResolverClient::GetResolverQueryLogConfig(const GetResolverQueryLogConfigRequest& request) const {
  return GetResolverQueryLogConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverQueryLogConfigAssociationOutcome Route53ResolverClient::GetResolverQueryLogConfigAssociation(
    const GetResolverQueryLogConfigAssociationRequest& request) const {
  return GetResolverQueryLogConfigAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverQueryLogConfigPolicyOutcome Route53ResolverClient::GetResolverQueryLogConfigPolicy(
    const GetResolverQueryLogConfigPolicyRequest& request) const {
  return GetResolverQueryLogConfigPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverRuleOutcome Route53ResolverClient::GetResolverRule(const GetResolverRuleRequest& request) const {
  return GetResolverRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverRuleAssociationOutcome Route53ResolverClient::GetResolverRuleAssociation(
    const GetResolverRuleAssociationRequest& request) const {
  return GetResolverRuleAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResolverRulePolicyOutcome Route53ResolverClient::GetResolverRulePolicy(const GetResolverRulePolicyRequest& request) const {
  return GetResolverRulePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportFirewallDomainsOutcome Route53ResolverClient::ImportFirewallDomains(const ImportFirewallDomainsRequest& request) const {
  return ImportFirewallDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallConfigsOutcome Route53ResolverClient::ListFirewallConfigs(const ListFirewallConfigsRequest& request) const {
  return ListFirewallConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallDomainListsOutcome Route53ResolverClient::ListFirewallDomainLists(const ListFirewallDomainListsRequest& request) const {
  return ListFirewallDomainListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallDomainsOutcome Route53ResolverClient::ListFirewallDomains(const ListFirewallDomainsRequest& request) const {
  return ListFirewallDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallRuleGroupAssociationsOutcome Route53ResolverClient::ListFirewallRuleGroupAssociations(
    const ListFirewallRuleGroupAssociationsRequest& request) const {
  return ListFirewallRuleGroupAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallRuleGroupsOutcome Route53ResolverClient::ListFirewallRuleGroups(const ListFirewallRuleGroupsRequest& request) const {
  return ListFirewallRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallRulesOutcome Route53ResolverClient::ListFirewallRules(const ListFirewallRulesRequest& request) const {
  return ListFirewallRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOutpostResolversOutcome Route53ResolverClient::ListOutpostResolvers(const ListOutpostResolversRequest& request) const {
  return ListOutpostResolversOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverConfigsOutcome Route53ResolverClient::ListResolverConfigs(const ListResolverConfigsRequest& request) const {
  return ListResolverConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverDnssecConfigsOutcome Route53ResolverClient::ListResolverDnssecConfigs(const ListResolverDnssecConfigsRequest& request) const {
  return ListResolverDnssecConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverEndpointIpAddressesOutcome Route53ResolverClient::ListResolverEndpointIpAddresses(
    const ListResolverEndpointIpAddressesRequest& request) const {
  return ListResolverEndpointIpAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverEndpointsOutcome Route53ResolverClient::ListResolverEndpoints(const ListResolverEndpointsRequest& request) const {
  return ListResolverEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverQueryLogConfigAssociationsOutcome Route53ResolverClient::ListResolverQueryLogConfigAssociations(
    const ListResolverQueryLogConfigAssociationsRequest& request) const {
  return ListResolverQueryLogConfigAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverQueryLogConfigsOutcome Route53ResolverClient::ListResolverQueryLogConfigs(
    const ListResolverQueryLogConfigsRequest& request) const {
  return ListResolverQueryLogConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverRuleAssociationsOutcome Route53ResolverClient::ListResolverRuleAssociations(
    const ListResolverRuleAssociationsRequest& request) const {
  return ListResolverRuleAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResolverRulesOutcome Route53ResolverClient::ListResolverRules(const ListResolverRulesRequest& request) const {
  return ListResolverRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome Route53ResolverClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutFirewallRuleGroupPolicyOutcome Route53ResolverClient::PutFirewallRuleGroupPolicy(
    const PutFirewallRuleGroupPolicyRequest& request) const {
  return PutFirewallRuleGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResolverQueryLogConfigPolicyOutcome Route53ResolverClient::PutResolverQueryLogConfigPolicy(
    const PutResolverQueryLogConfigPolicyRequest& request) const {
  return PutResolverQueryLogConfigPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResolverRulePolicyOutcome Route53ResolverClient::PutResolverRulePolicy(const PutResolverRulePolicyRequest& request) const {
  return PutResolverRulePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome Route53ResolverClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome Route53ResolverClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallConfigOutcome Route53ResolverClient::UpdateFirewallConfig(const UpdateFirewallConfigRequest& request) const {
  return UpdateFirewallConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallDomainsOutcome Route53ResolverClient::UpdateFirewallDomains(const UpdateFirewallDomainsRequest& request) const {
  return UpdateFirewallDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallRuleOutcome Route53ResolverClient::UpdateFirewallRule(const UpdateFirewallRuleRequest& request) const {
  return UpdateFirewallRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallRuleGroupAssociationOutcome Route53ResolverClient::UpdateFirewallRuleGroupAssociation(
    const UpdateFirewallRuleGroupAssociationRequest& request) const {
  return UpdateFirewallRuleGroupAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOutpostResolverOutcome Route53ResolverClient::UpdateOutpostResolver(const UpdateOutpostResolverRequest& request) const {
  return UpdateOutpostResolverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResolverConfigOutcome Route53ResolverClient::UpdateResolverConfig(const UpdateResolverConfigRequest& request) const {
  return UpdateResolverConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResolverDnssecConfigOutcome Route53ResolverClient::UpdateResolverDnssecConfig(
    const UpdateResolverDnssecConfigRequest& request) const {
  return UpdateResolverDnssecConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResolverEndpointOutcome Route53ResolverClient::UpdateResolverEndpoint(const UpdateResolverEndpointRequest& request) const {
  return UpdateResolverEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResolverRuleOutcome Route53ResolverClient::UpdateResolverRule(const UpdateResolverRuleRequest& request) const {
  return UpdateResolverRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
