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
  return AcceptNetworkFirewallTransitGatewayAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateAvailabilityZonesOutcome NetworkFirewallClient::AssociateAvailabilityZones(
    const AssociateAvailabilityZonesRequest& request) const {
  return AssociateAvailabilityZonesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateFirewallPolicyOutcome NetworkFirewallClient::AssociateFirewallPolicy(const AssociateFirewallPolicyRequest& request) const {
  return AssociateFirewallPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSubnetsOutcome NetworkFirewallClient::AssociateSubnets(const AssociateSubnetsRequest& request) const {
  return AssociateSubnetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachRuleGroupsToProxyConfigurationOutcome NetworkFirewallClient::AttachRuleGroupsToProxyConfiguration(
    const AttachRuleGroupsToProxyConfigurationRequest& request) const {
  return AttachRuleGroupsToProxyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFirewallOutcome NetworkFirewallClient::CreateFirewall(const CreateFirewallRequest& request) const {
  return CreateFirewallOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFirewallPolicyOutcome NetworkFirewallClient::CreateFirewallPolicy(const CreateFirewallPolicyRequest& request) const {
  return CreateFirewallPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProxyOutcome NetworkFirewallClient::CreateProxy(const CreateProxyRequest& request) const {
  return CreateProxyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProxyConfigurationOutcome NetworkFirewallClient::CreateProxyConfiguration(const CreateProxyConfigurationRequest& request) const {
  return CreateProxyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProxyRuleGroupOutcome NetworkFirewallClient::CreateProxyRuleGroup(const CreateProxyRuleGroupRequest& request) const {
  return CreateProxyRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProxyRulesOutcome NetworkFirewallClient::CreateProxyRules(const CreateProxyRulesRequest& request) const {
  return CreateProxyRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleGroupOutcome NetworkFirewallClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const {
  return CreateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTLSInspectionConfigurationOutcome NetworkFirewallClient::CreateTLSInspectionConfiguration(
    const CreateTLSInspectionConfigurationRequest& request) const {
  return CreateTLSInspectionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcEndpointAssociationOutcome NetworkFirewallClient::CreateVpcEndpointAssociation(
    const CreateVpcEndpointAssociationRequest& request) const {
  return CreateVpcEndpointAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFirewallOutcome NetworkFirewallClient::DeleteFirewall(const DeleteFirewallRequest& request) const {
  return DeleteFirewallOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFirewallPolicyOutcome NetworkFirewallClient::DeleteFirewallPolicy(const DeleteFirewallPolicyRequest& request) const {
  return DeleteFirewallPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNetworkFirewallTransitGatewayAttachmentOutcome NetworkFirewallClient::DeleteNetworkFirewallTransitGatewayAttachment(
    const DeleteNetworkFirewallTransitGatewayAttachmentRequest& request) const {
  return DeleteNetworkFirewallTransitGatewayAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProxyOutcome NetworkFirewallClient::DeleteProxy(const DeleteProxyRequest& request) const {
  return DeleteProxyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProxyConfigurationOutcome NetworkFirewallClient::DeleteProxyConfiguration(const DeleteProxyConfigurationRequest& request) const {
  return DeleteProxyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProxyRuleGroupOutcome NetworkFirewallClient::DeleteProxyRuleGroup(const DeleteProxyRuleGroupRequest& request) const {
  return DeleteProxyRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProxyRulesOutcome NetworkFirewallClient::DeleteProxyRules(const DeleteProxyRulesRequest& request) const {
  return DeleteProxyRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome NetworkFirewallClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleGroupOutcome NetworkFirewallClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const {
  return DeleteRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTLSInspectionConfigurationOutcome NetworkFirewallClient::DeleteTLSInspectionConfiguration(
    const DeleteTLSInspectionConfigurationRequest& request) const {
  return DeleteTLSInspectionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVpcEndpointAssociationOutcome NetworkFirewallClient::DeleteVpcEndpointAssociation(
    const DeleteVpcEndpointAssociationRequest& request) const {
  return DeleteVpcEndpointAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFirewallOutcome NetworkFirewallClient::DescribeFirewall(const DescribeFirewallRequest& request) const {
  return DescribeFirewallOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFirewallMetadataOutcome NetworkFirewallClient::DescribeFirewallMetadata(const DescribeFirewallMetadataRequest& request) const {
  return DescribeFirewallMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFirewallPolicyOutcome NetworkFirewallClient::DescribeFirewallPolicy(const DescribeFirewallPolicyRequest& request) const {
  return DescribeFirewallPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFlowOperationOutcome NetworkFirewallClient::DescribeFlowOperation(const DescribeFlowOperationRequest& request) const {
  return DescribeFlowOperationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoggingConfigurationOutcome NetworkFirewallClient::DescribeLoggingConfiguration(
    const DescribeLoggingConfigurationRequest& request) const {
  return DescribeLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProxyOutcome NetworkFirewallClient::DescribeProxy(const DescribeProxyRequest& request) const {
  return DescribeProxyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProxyConfigurationOutcome NetworkFirewallClient::DescribeProxyConfiguration(
    const DescribeProxyConfigurationRequest& request) const {
  return DescribeProxyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProxyRuleOutcome NetworkFirewallClient::DescribeProxyRule(const DescribeProxyRuleRequest& request) const {
  return DescribeProxyRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProxyRuleGroupOutcome NetworkFirewallClient::DescribeProxyRuleGroup(const DescribeProxyRuleGroupRequest& request) const {
  return DescribeProxyRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourcePolicyOutcome NetworkFirewallClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const {
  return DescribeResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRuleGroupOutcome NetworkFirewallClient::DescribeRuleGroup(const DescribeRuleGroupRequest& request) const {
  return DescribeRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRuleGroupMetadataOutcome NetworkFirewallClient::DescribeRuleGroupMetadata(const DescribeRuleGroupMetadataRequest& request) const {
  return DescribeRuleGroupMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRuleGroupSummaryOutcome NetworkFirewallClient::DescribeRuleGroupSummary(const DescribeRuleGroupSummaryRequest& request) const {
  return DescribeRuleGroupSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTLSInspectionConfigurationOutcome NetworkFirewallClient::DescribeTLSInspectionConfiguration(
    const DescribeTLSInspectionConfigurationRequest& request) const {
  return DescribeTLSInspectionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointAssociationOutcome NetworkFirewallClient::DescribeVpcEndpointAssociation(
    const DescribeVpcEndpointAssociationRequest& request) const {
  return DescribeVpcEndpointAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachRuleGroupsFromProxyConfigurationOutcome NetworkFirewallClient::DetachRuleGroupsFromProxyConfiguration(
    const DetachRuleGroupsFromProxyConfigurationRequest& request) const {
  return DetachRuleGroupsFromProxyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateAvailabilityZonesOutcome NetworkFirewallClient::DisassociateAvailabilityZones(
    const DisassociateAvailabilityZonesRequest& request) const {
  return DisassociateAvailabilityZonesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSubnetsOutcome NetworkFirewallClient::DisassociateSubnets(const DisassociateSubnetsRequest& request) const {
  return DisassociateSubnetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAnalysisReportResultsOutcome NetworkFirewallClient::GetAnalysisReportResults(const GetAnalysisReportResultsRequest& request) const {
  return GetAnalysisReportResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAnalysisReportsOutcome NetworkFirewallClient::ListAnalysisReports(const ListAnalysisReportsRequest& request) const {
  return ListAnalysisReportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallPoliciesOutcome NetworkFirewallClient::ListFirewallPolicies(const ListFirewallPoliciesRequest& request) const {
  return ListFirewallPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFirewallsOutcome NetworkFirewallClient::ListFirewalls(const ListFirewallsRequest& request) const {
  return ListFirewallsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFlowOperationResultsOutcome NetworkFirewallClient::ListFlowOperationResults(const ListFlowOperationResultsRequest& request) const {
  return ListFlowOperationResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFlowOperationsOutcome NetworkFirewallClient::ListFlowOperations(const ListFlowOperationsRequest& request) const {
  return ListFlowOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProxiesOutcome NetworkFirewallClient::ListProxies(const ListProxiesRequest& request) const {
  return ListProxiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProxyConfigurationsOutcome NetworkFirewallClient::ListProxyConfigurations(const ListProxyConfigurationsRequest& request) const {
  return ListProxyConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProxyRuleGroupsOutcome NetworkFirewallClient::ListProxyRuleGroups(const ListProxyRuleGroupsRequest& request) const {
  return ListProxyRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleGroupsOutcome NetworkFirewallClient::ListRuleGroups(const ListRuleGroupsRequest& request) const {
  return ListRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTLSInspectionConfigurationsOutcome NetworkFirewallClient::ListTLSInspectionConfigurations(
    const ListTLSInspectionConfigurationsRequest& request) const {
  return ListTLSInspectionConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome NetworkFirewallClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVpcEndpointAssociationsOutcome NetworkFirewallClient::ListVpcEndpointAssociations(
    const ListVpcEndpointAssociationsRequest& request) const {
  return ListVpcEndpointAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome NetworkFirewallClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectNetworkFirewallTransitGatewayAttachmentOutcome NetworkFirewallClient::RejectNetworkFirewallTransitGatewayAttachment(
    const RejectNetworkFirewallTransitGatewayAttachmentRequest& request) const {
  return RejectNetworkFirewallTransitGatewayAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAnalysisReportOutcome NetworkFirewallClient::StartAnalysisReport(const StartAnalysisReportRequest& request) const {
  return StartAnalysisReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFlowCaptureOutcome NetworkFirewallClient::StartFlowCapture(const StartFlowCaptureRequest& request) const {
  return StartFlowCaptureOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFlowFlushOutcome NetworkFirewallClient::StartFlowFlush(const StartFlowFlushRequest& request) const {
  return StartFlowFlushOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome NetworkFirewallClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome NetworkFirewallClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAvailabilityZoneChangeProtectionOutcome NetworkFirewallClient::UpdateAvailabilityZoneChangeProtection(
    const UpdateAvailabilityZoneChangeProtectionRequest& request) const {
  return UpdateAvailabilityZoneChangeProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallAnalysisSettingsOutcome NetworkFirewallClient::UpdateFirewallAnalysisSettings(
    const UpdateFirewallAnalysisSettingsRequest& request) const {
  return UpdateFirewallAnalysisSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallDeleteProtectionOutcome NetworkFirewallClient::UpdateFirewallDeleteProtection(
    const UpdateFirewallDeleteProtectionRequest& request) const {
  return UpdateFirewallDeleteProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallDescriptionOutcome NetworkFirewallClient::UpdateFirewallDescription(const UpdateFirewallDescriptionRequest& request) const {
  return UpdateFirewallDescriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallEncryptionConfigurationOutcome NetworkFirewallClient::UpdateFirewallEncryptionConfiguration(
    const UpdateFirewallEncryptionConfigurationRequest& request) const {
  return UpdateFirewallEncryptionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallPolicyOutcome NetworkFirewallClient::UpdateFirewallPolicy(const UpdateFirewallPolicyRequest& request) const {
  return UpdateFirewallPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFirewallPolicyChangeProtectionOutcome NetworkFirewallClient::UpdateFirewallPolicyChangeProtection(
    const UpdateFirewallPolicyChangeProtectionRequest& request) const {
  return UpdateFirewallPolicyChangeProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLoggingConfigurationOutcome NetworkFirewallClient::UpdateLoggingConfiguration(
    const UpdateLoggingConfigurationRequest& request) const {
  return UpdateLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProxyOutcome NetworkFirewallClient::UpdateProxy(const UpdateProxyRequest& request) const {
  return UpdateProxyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProxyConfigurationOutcome NetworkFirewallClient::UpdateProxyConfiguration(const UpdateProxyConfigurationRequest& request) const {
  return UpdateProxyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProxyRuleOutcome NetworkFirewallClient::UpdateProxyRule(const UpdateProxyRuleRequest& request) const {
  return UpdateProxyRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProxyRuleGroupPrioritiesOutcome NetworkFirewallClient::UpdateProxyRuleGroupPriorities(
    const UpdateProxyRuleGroupPrioritiesRequest& request) const {
  return UpdateProxyRuleGroupPrioritiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProxyRulePrioritiesOutcome NetworkFirewallClient::UpdateProxyRulePriorities(const UpdateProxyRulePrioritiesRequest& request) const {
  return UpdateProxyRulePrioritiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleGroupOutcome NetworkFirewallClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const {
  return UpdateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSubnetChangeProtectionOutcome NetworkFirewallClient::UpdateSubnetChangeProtection(
    const UpdateSubnetChangeProtectionRequest& request) const {
  return UpdateSubnetChangeProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTLSInspectionConfigurationOutcome NetworkFirewallClient::UpdateTLSInspectionConfiguration(
    const UpdateTLSInspectionConfigurationRequest& request) const {
  return UpdateTLSInspectionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
