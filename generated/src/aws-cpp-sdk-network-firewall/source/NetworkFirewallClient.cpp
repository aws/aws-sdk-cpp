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
#include <aws/network-firewall/NetworkFirewallClient.h>
#include <aws/network-firewall/NetworkFirewallEndpointProvider.h>
#include <aws/network-firewall/NetworkFirewallErrorMarshaller.h>
#include <aws/network-firewall/model/AcceptNetworkFirewallTransitGatewayAttachmentRequest.h>
#include <aws/network-firewall/model/AssociateAvailabilityZonesRequest.h>
#include <aws/network-firewall/model/AssociateFirewallPolicyRequest.h>
#include <aws/network-firewall/model/AssociateSubnetsRequest.h>
#include <aws/network-firewall/model/AttachRuleGroupsToProxyConfigurationRequest.h>
#include <aws/network-firewall/model/CreateFirewallPolicyRequest.h>
#include <aws/network-firewall/model/CreateFirewallRequest.h>
#include <aws/network-firewall/model/CreateProxyConfigurationRequest.h>
#include <aws/network-firewall/model/CreateProxyRequest.h>
#include <aws/network-firewall/model/CreateProxyRuleGroupRequest.h>
#include <aws/network-firewall/model/CreateProxyRulesRequest.h>
#include <aws/network-firewall/model/CreateRuleGroupRequest.h>
#include <aws/network-firewall/model/CreateTLSInspectionConfigurationRequest.h>
#include <aws/network-firewall/model/CreateVpcEndpointAssociationRequest.h>
#include <aws/network-firewall/model/DeleteFirewallPolicyRequest.h>
#include <aws/network-firewall/model/DeleteFirewallRequest.h>
#include <aws/network-firewall/model/DeleteNetworkFirewallTransitGatewayAttachmentRequest.h>
#include <aws/network-firewall/model/DeleteProxyConfigurationRequest.h>
#include <aws/network-firewall/model/DeleteProxyRequest.h>
#include <aws/network-firewall/model/DeleteProxyRuleGroupRequest.h>
#include <aws/network-firewall/model/DeleteProxyRulesRequest.h>
#include <aws/network-firewall/model/DeleteResourcePolicyRequest.h>
#include <aws/network-firewall/model/DeleteRuleGroupRequest.h>
#include <aws/network-firewall/model/DeleteTLSInspectionConfigurationRequest.h>
#include <aws/network-firewall/model/DeleteVpcEndpointAssociationRequest.h>
#include <aws/network-firewall/model/DescribeFirewallMetadataRequest.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyRequest.h>
#include <aws/network-firewall/model/DescribeFirewallRequest.h>
#include <aws/network-firewall/model/DescribeFlowOperationRequest.h>
#include <aws/network-firewall/model/DescribeLoggingConfigurationRequest.h>
#include <aws/network-firewall/model/DescribeProxyConfigurationRequest.h>
#include <aws/network-firewall/model/DescribeProxyRequest.h>
#include <aws/network-firewall/model/DescribeProxyRuleGroupRequest.h>
#include <aws/network-firewall/model/DescribeProxyRuleRequest.h>
#include <aws/network-firewall/model/DescribeResourcePolicyRequest.h>
#include <aws/network-firewall/model/DescribeRuleGroupMetadataRequest.h>
#include <aws/network-firewall/model/DescribeRuleGroupRequest.h>
#include <aws/network-firewall/model/DescribeRuleGroupSummaryRequest.h>
#include <aws/network-firewall/model/DescribeTLSInspectionConfigurationRequest.h>
#include <aws/network-firewall/model/DescribeVpcEndpointAssociationRequest.h>
#include <aws/network-firewall/model/DetachRuleGroupsFromProxyConfigurationRequest.h>
#include <aws/network-firewall/model/DisassociateAvailabilityZonesRequest.h>
#include <aws/network-firewall/model/DisassociateSubnetsRequest.h>
#include <aws/network-firewall/model/GetAnalysisReportResultsRequest.h>
#include <aws/network-firewall/model/ListAnalysisReportsRequest.h>
#include <aws/network-firewall/model/ListFirewallPoliciesRequest.h>
#include <aws/network-firewall/model/ListFirewallsRequest.h>
#include <aws/network-firewall/model/ListFlowOperationResultsRequest.h>
#include <aws/network-firewall/model/ListFlowOperationsRequest.h>
#include <aws/network-firewall/model/ListProxiesRequest.h>
#include <aws/network-firewall/model/ListProxyConfigurationsRequest.h>
#include <aws/network-firewall/model/ListProxyRuleGroupsRequest.h>
#include <aws/network-firewall/model/ListRuleGroupsRequest.h>
#include <aws/network-firewall/model/ListTLSInspectionConfigurationsRequest.h>
#include <aws/network-firewall/model/ListTagsForResourceRequest.h>
#include <aws/network-firewall/model/ListVpcEndpointAssociationsRequest.h>
#include <aws/network-firewall/model/PutResourcePolicyRequest.h>
#include <aws/network-firewall/model/RejectNetworkFirewallTransitGatewayAttachmentRequest.h>
#include <aws/network-firewall/model/StartAnalysisReportRequest.h>
#include <aws/network-firewall/model/StartFlowCaptureRequest.h>
#include <aws/network-firewall/model/StartFlowFlushRequest.h>
#include <aws/network-firewall/model/TagResourceRequest.h>
#include <aws/network-firewall/model/UntagResourceRequest.h>
#include <aws/network-firewall/model/UpdateAvailabilityZoneChangeProtectionRequest.h>
#include <aws/network-firewall/model/UpdateFirewallAnalysisSettingsRequest.h>
#include <aws/network-firewall/model/UpdateFirewallDeleteProtectionRequest.h>
#include <aws/network-firewall/model/UpdateFirewallDescriptionRequest.h>
#include <aws/network-firewall/model/UpdateFirewallEncryptionConfigurationRequest.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyChangeProtectionRequest.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyRequest.h>
#include <aws/network-firewall/model/UpdateLoggingConfigurationRequest.h>
#include <aws/network-firewall/model/UpdateProxyConfigurationRequest.h>
#include <aws/network-firewall/model/UpdateProxyRequest.h>
#include <aws/network-firewall/model/UpdateProxyRuleGroupPrioritiesRequest.h>
#include <aws/network-firewall/model/UpdateProxyRulePrioritiesRequest.h>
#include <aws/network-firewall/model/UpdateProxyRuleRequest.h>
#include <aws/network-firewall/model/UpdateRuleGroupRequest.h>
#include <aws/network-firewall/model/UpdateSubnetChangeProtectionRequest.h>
#include <aws/network-firewall/model/UpdateTLSInspectionConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NetworkFirewall;
using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace NetworkFirewall {
const char SERVICE_NAME[] = "network-firewall";
const char ALLOCATION_TAG[] = "NetworkFirewallClient";
}  // namespace NetworkFirewall
}  // namespace Aws
const char* NetworkFirewallClient::GetServiceName() { return SERVICE_NAME; }
const char* NetworkFirewallClient::GetAllocationTag() { return ALLOCATION_TAG; }

NetworkFirewallClient::NetworkFirewallClient(const NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration,
                                             std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const AWSCredentials& credentials,
                                             std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider,
                                             const NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider,
                                             const NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NetworkFirewallClient::NetworkFirewallClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NetworkFirewallClient::~NetworkFirewallClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NetworkFirewallEndpointProviderBase>& NetworkFirewallClient::accessEndpointProvider() { return m_endpointProvider; }

void NetworkFirewallClient::init(const NetworkFirewall::NetworkFirewallClientConfiguration& config) {
  AWSClient::SetServiceClientName("Network Firewall");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "network-firewall");
}

void NetworkFirewallClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NetworkFirewallClient::InvokeOperationOutcome NetworkFirewallClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptNetworkFirewallTransitGatewayAttachmentOutcome NetworkFirewallClient::AcceptNetworkFirewallTransitGatewayAttachment(
    const AcceptNetworkFirewallTransitGatewayAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptNetworkFirewallTransitGatewayAttachmentOutcome(result.GetResultWithOwnership())
                            : AcceptNetworkFirewallTransitGatewayAttachmentOutcome(std::move(result.GetError()));
}

AssociateAvailabilityZonesOutcome NetworkFirewallClient::AssociateAvailabilityZones(
    const AssociateAvailabilityZonesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateAvailabilityZonesOutcome(result.GetResultWithOwnership())
                            : AssociateAvailabilityZonesOutcome(std::move(result.GetError()));
}

AssociateFirewallPolicyOutcome NetworkFirewallClient::AssociateFirewallPolicy(const AssociateFirewallPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateFirewallPolicyOutcome(result.GetResultWithOwnership())
                            : AssociateFirewallPolicyOutcome(std::move(result.GetError()));
}

AssociateSubnetsOutcome NetworkFirewallClient::AssociateSubnets(const AssociateSubnetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSubnetsOutcome(result.GetResultWithOwnership())
                            : AssociateSubnetsOutcome(std::move(result.GetError()));
}

AttachRuleGroupsToProxyConfigurationOutcome NetworkFirewallClient::AttachRuleGroupsToProxyConfiguration(
    const AttachRuleGroupsToProxyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachRuleGroupsToProxyConfigurationOutcome(result.GetResultWithOwnership())
                            : AttachRuleGroupsToProxyConfigurationOutcome(std::move(result.GetError()));
}

CreateFirewallOutcome NetworkFirewallClient::CreateFirewall(const CreateFirewallRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFirewallOutcome(result.GetResultWithOwnership()) : CreateFirewallOutcome(std::move(result.GetError()));
}

CreateFirewallPolicyOutcome NetworkFirewallClient::CreateFirewallPolicy(const CreateFirewallPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFirewallPolicyOutcome(result.GetResultWithOwnership())
                            : CreateFirewallPolicyOutcome(std::move(result.GetError()));
}

CreateProxyOutcome NetworkFirewallClient::CreateProxy(const CreateProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProxyOutcome(result.GetResultWithOwnership()) : CreateProxyOutcome(std::move(result.GetError()));
}

CreateProxyConfigurationOutcome NetworkFirewallClient::CreateProxyConfiguration(const CreateProxyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProxyConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateProxyConfigurationOutcome(std::move(result.GetError()));
}

CreateProxyRuleGroupOutcome NetworkFirewallClient::CreateProxyRuleGroup(const CreateProxyRuleGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProxyRuleGroupOutcome(result.GetResultWithOwnership())
                            : CreateProxyRuleGroupOutcome(std::move(result.GetError()));
}

CreateProxyRulesOutcome NetworkFirewallClient::CreateProxyRules(const CreateProxyRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProxyRulesOutcome(result.GetResultWithOwnership())
                            : CreateProxyRulesOutcome(std::move(result.GetError()));
}

CreateRuleGroupOutcome NetworkFirewallClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRuleGroupOutcome(result.GetResultWithOwnership())
                            : CreateRuleGroupOutcome(std::move(result.GetError()));
}

CreateTLSInspectionConfigurationOutcome NetworkFirewallClient::CreateTLSInspectionConfiguration(
    const CreateTLSInspectionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTLSInspectionConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateTLSInspectionConfigurationOutcome(std::move(result.GetError()));
}

CreateVpcEndpointAssociationOutcome NetworkFirewallClient::CreateVpcEndpointAssociation(
    const CreateVpcEndpointAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcEndpointAssociationOutcome(result.GetResultWithOwnership())
                            : CreateVpcEndpointAssociationOutcome(std::move(result.GetError()));
}

DeleteFirewallOutcome NetworkFirewallClient::DeleteFirewall(const DeleteFirewallRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFirewallOutcome(result.GetResultWithOwnership()) : DeleteFirewallOutcome(std::move(result.GetError()));
}

DeleteFirewallPolicyOutcome NetworkFirewallClient::DeleteFirewallPolicy(const DeleteFirewallPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFirewallPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteFirewallPolicyOutcome(std::move(result.GetError()));
}

DeleteNetworkFirewallTransitGatewayAttachmentOutcome NetworkFirewallClient::DeleteNetworkFirewallTransitGatewayAttachment(
    const DeleteNetworkFirewallTransitGatewayAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkFirewallTransitGatewayAttachmentOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkFirewallTransitGatewayAttachmentOutcome(std::move(result.GetError()));
}

DeleteProxyOutcome NetworkFirewallClient::DeleteProxy(const DeleteProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProxyOutcome(result.GetResultWithOwnership()) : DeleteProxyOutcome(std::move(result.GetError()));
}

DeleteProxyConfigurationOutcome NetworkFirewallClient::DeleteProxyConfiguration(const DeleteProxyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProxyConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteProxyConfigurationOutcome(std::move(result.GetError()));
}

DeleteProxyRuleGroupOutcome NetworkFirewallClient::DeleteProxyRuleGroup(const DeleteProxyRuleGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProxyRuleGroupOutcome(result.GetResultWithOwnership())
                            : DeleteProxyRuleGroupOutcome(std::move(result.GetError()));
}

DeleteProxyRulesOutcome NetworkFirewallClient::DeleteProxyRules(const DeleteProxyRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProxyRulesOutcome(result.GetResultWithOwnership())
                            : DeleteProxyRulesOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome NetworkFirewallClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteRuleGroupOutcome NetworkFirewallClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRuleGroupOutcome(result.GetResultWithOwnership())
                            : DeleteRuleGroupOutcome(std::move(result.GetError()));
}

DeleteTLSInspectionConfigurationOutcome NetworkFirewallClient::DeleteTLSInspectionConfiguration(
    const DeleteTLSInspectionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTLSInspectionConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteTLSInspectionConfigurationOutcome(std::move(result.GetError()));
}

DeleteVpcEndpointAssociationOutcome NetworkFirewallClient::DeleteVpcEndpointAssociation(
    const DeleteVpcEndpointAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcEndpointAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteVpcEndpointAssociationOutcome(std::move(result.GetError()));
}

DescribeFirewallOutcome NetworkFirewallClient::DescribeFirewall(const DescribeFirewallRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFirewallOutcome(result.GetResultWithOwnership())
                            : DescribeFirewallOutcome(std::move(result.GetError()));
}

DescribeFirewallMetadataOutcome NetworkFirewallClient::DescribeFirewallMetadata(const DescribeFirewallMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFirewallMetadataOutcome(result.GetResultWithOwnership())
                            : DescribeFirewallMetadataOutcome(std::move(result.GetError()));
}

DescribeFirewallPolicyOutcome NetworkFirewallClient::DescribeFirewallPolicy(const DescribeFirewallPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFirewallPolicyOutcome(result.GetResultWithOwnership())
                            : DescribeFirewallPolicyOutcome(std::move(result.GetError()));
}

DescribeFlowOperationOutcome NetworkFirewallClient::DescribeFlowOperation(const DescribeFlowOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFlowOperationOutcome(result.GetResultWithOwnership())
                            : DescribeFlowOperationOutcome(std::move(result.GetError()));
}

DescribeLoggingConfigurationOutcome NetworkFirewallClient::DescribeLoggingConfiguration(
    const DescribeLoggingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLoggingConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeLoggingConfigurationOutcome(std::move(result.GetError()));
}

DescribeProxyOutcome NetworkFirewallClient::DescribeProxy(const DescribeProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProxyOutcome(result.GetResultWithOwnership()) : DescribeProxyOutcome(std::move(result.GetError()));
}

DescribeProxyConfigurationOutcome NetworkFirewallClient::DescribeProxyConfiguration(
    const DescribeProxyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProxyConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeProxyConfigurationOutcome(std::move(result.GetError()));
}

DescribeProxyRuleOutcome NetworkFirewallClient::DescribeProxyRule(const DescribeProxyRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProxyRuleOutcome(result.GetResultWithOwnership())
                            : DescribeProxyRuleOutcome(std::move(result.GetError()));
}

DescribeProxyRuleGroupOutcome NetworkFirewallClient::DescribeProxyRuleGroup(const DescribeProxyRuleGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProxyRuleGroupOutcome(result.GetResultWithOwnership())
                            : DescribeProxyRuleGroupOutcome(std::move(result.GetError()));
}

DescribeResourcePolicyOutcome NetworkFirewallClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DescribeResourcePolicyOutcome(std::move(result.GetError()));
}

DescribeRuleGroupOutcome NetworkFirewallClient::DescribeRuleGroup(const DescribeRuleGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRuleGroupOutcome(result.GetResultWithOwnership())
                            : DescribeRuleGroupOutcome(std::move(result.GetError()));
}

DescribeRuleGroupMetadataOutcome NetworkFirewallClient::DescribeRuleGroupMetadata(const DescribeRuleGroupMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRuleGroupMetadataOutcome(result.GetResultWithOwnership())
                            : DescribeRuleGroupMetadataOutcome(std::move(result.GetError()));
}

DescribeRuleGroupSummaryOutcome NetworkFirewallClient::DescribeRuleGroupSummary(const DescribeRuleGroupSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRuleGroupSummaryOutcome(result.GetResultWithOwnership())
                            : DescribeRuleGroupSummaryOutcome(std::move(result.GetError()));
}

DescribeTLSInspectionConfigurationOutcome NetworkFirewallClient::DescribeTLSInspectionConfiguration(
    const DescribeTLSInspectionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTLSInspectionConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeTLSInspectionConfigurationOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointAssociationOutcome NetworkFirewallClient::DescribeVpcEndpointAssociation(
    const DescribeVpcEndpointAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointAssociationOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointAssociationOutcome(std::move(result.GetError()));
}

DetachRuleGroupsFromProxyConfigurationOutcome NetworkFirewallClient::DetachRuleGroupsFromProxyConfiguration(
    const DetachRuleGroupsFromProxyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachRuleGroupsFromProxyConfigurationOutcome(result.GetResultWithOwnership())
                            : DetachRuleGroupsFromProxyConfigurationOutcome(std::move(result.GetError()));
}

DisassociateAvailabilityZonesOutcome NetworkFirewallClient::DisassociateAvailabilityZones(
    const DisassociateAvailabilityZonesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateAvailabilityZonesOutcome(result.GetResultWithOwnership())
                            : DisassociateAvailabilityZonesOutcome(std::move(result.GetError()));
}

DisassociateSubnetsOutcome NetworkFirewallClient::DisassociateSubnets(const DisassociateSubnetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateSubnetsOutcome(result.GetResultWithOwnership())
                            : DisassociateSubnetsOutcome(std::move(result.GetError()));
}

GetAnalysisReportResultsOutcome NetworkFirewallClient::GetAnalysisReportResults(const GetAnalysisReportResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAnalysisReportResultsOutcome(result.GetResultWithOwnership())
                            : GetAnalysisReportResultsOutcome(std::move(result.GetError()));
}

ListAnalysisReportsOutcome NetworkFirewallClient::ListAnalysisReports(const ListAnalysisReportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAnalysisReportsOutcome(result.GetResultWithOwnership())
                            : ListAnalysisReportsOutcome(std::move(result.GetError()));
}

ListFirewallPoliciesOutcome NetworkFirewallClient::ListFirewallPolicies(const ListFirewallPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFirewallPoliciesOutcome(result.GetResultWithOwnership())
                            : ListFirewallPoliciesOutcome(std::move(result.GetError()));
}

ListFirewallsOutcome NetworkFirewallClient::ListFirewalls(const ListFirewallsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFirewallsOutcome(result.GetResultWithOwnership()) : ListFirewallsOutcome(std::move(result.GetError()));
}

ListFlowOperationResultsOutcome NetworkFirewallClient::ListFlowOperationResults(const ListFlowOperationResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFlowOperationResultsOutcome(result.GetResultWithOwnership())
                            : ListFlowOperationResultsOutcome(std::move(result.GetError()));
}

ListFlowOperationsOutcome NetworkFirewallClient::ListFlowOperations(const ListFlowOperationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFlowOperationsOutcome(result.GetResultWithOwnership())
                            : ListFlowOperationsOutcome(std::move(result.GetError()));
}

ListProxiesOutcome NetworkFirewallClient::ListProxies(const ListProxiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProxiesOutcome(result.GetResultWithOwnership()) : ListProxiesOutcome(std::move(result.GetError()));
}

ListProxyConfigurationsOutcome NetworkFirewallClient::ListProxyConfigurations(const ListProxyConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProxyConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListProxyConfigurationsOutcome(std::move(result.GetError()));
}

ListProxyRuleGroupsOutcome NetworkFirewallClient::ListProxyRuleGroups(const ListProxyRuleGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProxyRuleGroupsOutcome(result.GetResultWithOwnership())
                            : ListProxyRuleGroupsOutcome(std::move(result.GetError()));
}

ListRuleGroupsOutcome NetworkFirewallClient::ListRuleGroups(const ListRuleGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRuleGroupsOutcome(result.GetResultWithOwnership()) : ListRuleGroupsOutcome(std::move(result.GetError()));
}

ListTLSInspectionConfigurationsOutcome NetworkFirewallClient::ListTLSInspectionConfigurations(
    const ListTLSInspectionConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTLSInspectionConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListTLSInspectionConfigurationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome NetworkFirewallClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListVpcEndpointAssociationsOutcome NetworkFirewallClient::ListVpcEndpointAssociations(
    const ListVpcEndpointAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListVpcEndpointAssociationsOutcome(result.GetResultWithOwnership())
                            : ListVpcEndpointAssociationsOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome NetworkFirewallClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

RejectNetworkFirewallTransitGatewayAttachmentOutcome NetworkFirewallClient::RejectNetworkFirewallTransitGatewayAttachment(
    const RejectNetworkFirewallTransitGatewayAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectNetworkFirewallTransitGatewayAttachmentOutcome(result.GetResultWithOwnership())
                            : RejectNetworkFirewallTransitGatewayAttachmentOutcome(std::move(result.GetError()));
}

StartAnalysisReportOutcome NetworkFirewallClient::StartAnalysisReport(const StartAnalysisReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAnalysisReportOutcome(result.GetResultWithOwnership())
                            : StartAnalysisReportOutcome(std::move(result.GetError()));
}

StartFlowCaptureOutcome NetworkFirewallClient::StartFlowCapture(const StartFlowCaptureRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFlowCaptureOutcome(result.GetResultWithOwnership())
                            : StartFlowCaptureOutcome(std::move(result.GetError()));
}

StartFlowFlushOutcome NetworkFirewallClient::StartFlowFlush(const StartFlowFlushRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFlowFlushOutcome(result.GetResultWithOwnership()) : StartFlowFlushOutcome(std::move(result.GetError()));
}

TagResourceOutcome NetworkFirewallClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome NetworkFirewallClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAvailabilityZoneChangeProtectionOutcome NetworkFirewallClient::UpdateAvailabilityZoneChangeProtection(
    const UpdateAvailabilityZoneChangeProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAvailabilityZoneChangeProtectionOutcome(result.GetResultWithOwnership())
                            : UpdateAvailabilityZoneChangeProtectionOutcome(std::move(result.GetError()));
}

UpdateFirewallAnalysisSettingsOutcome NetworkFirewallClient::UpdateFirewallAnalysisSettings(
    const UpdateFirewallAnalysisSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFirewallAnalysisSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallAnalysisSettingsOutcome(std::move(result.GetError()));
}

UpdateFirewallDeleteProtectionOutcome NetworkFirewallClient::UpdateFirewallDeleteProtection(
    const UpdateFirewallDeleteProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFirewallDeleteProtectionOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallDeleteProtectionOutcome(std::move(result.GetError()));
}

UpdateFirewallDescriptionOutcome NetworkFirewallClient::UpdateFirewallDescription(const UpdateFirewallDescriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFirewallDescriptionOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallDescriptionOutcome(std::move(result.GetError()));
}

UpdateFirewallEncryptionConfigurationOutcome NetworkFirewallClient::UpdateFirewallEncryptionConfiguration(
    const UpdateFirewallEncryptionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFirewallEncryptionConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallEncryptionConfigurationOutcome(std::move(result.GetError()));
}

UpdateFirewallPolicyOutcome NetworkFirewallClient::UpdateFirewallPolicy(const UpdateFirewallPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFirewallPolicyOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallPolicyOutcome(std::move(result.GetError()));
}

UpdateFirewallPolicyChangeProtectionOutcome NetworkFirewallClient::UpdateFirewallPolicyChangeProtection(
    const UpdateFirewallPolicyChangeProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFirewallPolicyChangeProtectionOutcome(result.GetResultWithOwnership())
                            : UpdateFirewallPolicyChangeProtectionOutcome(std::move(result.GetError()));
}

UpdateLoggingConfigurationOutcome NetworkFirewallClient::UpdateLoggingConfiguration(
    const UpdateLoggingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLoggingConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateLoggingConfigurationOutcome(std::move(result.GetError()));
}

UpdateProxyOutcome NetworkFirewallClient::UpdateProxy(const UpdateProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyOutcome(result.GetResultWithOwnership()) : UpdateProxyOutcome(std::move(result.GetError()));
}

UpdateProxyConfigurationOutcome NetworkFirewallClient::UpdateProxyConfiguration(const UpdateProxyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateProxyConfigurationOutcome(std::move(result.GetError()));
}

UpdateProxyRuleOutcome NetworkFirewallClient::UpdateProxyRule(const UpdateProxyRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyRuleOutcome(result.GetResultWithOwnership())
                            : UpdateProxyRuleOutcome(std::move(result.GetError()));
}

UpdateProxyRuleGroupPrioritiesOutcome NetworkFirewallClient::UpdateProxyRuleGroupPriorities(
    const UpdateProxyRuleGroupPrioritiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyRuleGroupPrioritiesOutcome(result.GetResultWithOwnership())
                            : UpdateProxyRuleGroupPrioritiesOutcome(std::move(result.GetError()));
}

UpdateProxyRulePrioritiesOutcome NetworkFirewallClient::UpdateProxyRulePriorities(const UpdateProxyRulePrioritiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyRulePrioritiesOutcome(result.GetResultWithOwnership())
                            : UpdateProxyRulePrioritiesOutcome(std::move(result.GetError()));
}

UpdateRuleGroupOutcome NetworkFirewallClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRuleGroupOutcome(result.GetResultWithOwnership())
                            : UpdateRuleGroupOutcome(std::move(result.GetError()));
}

UpdateSubnetChangeProtectionOutcome NetworkFirewallClient::UpdateSubnetChangeProtection(
    const UpdateSubnetChangeProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSubnetChangeProtectionOutcome(result.GetResultWithOwnership())
                            : UpdateSubnetChangeProtectionOutcome(std::move(result.GetError()));
}

UpdateTLSInspectionConfigurationOutcome NetworkFirewallClient::UpdateTLSInspectionConfiguration(
    const UpdateTLSInspectionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTLSInspectionConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateTLSInspectionConfigurationOutcome(std::move(result.GetError()));
}
