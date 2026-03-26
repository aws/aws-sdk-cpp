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
#include <aws/securityhub/SecurityHubClient.h>
#include <aws/securityhub/SecurityHubEndpointProvider.h>
#include <aws/securityhub/SecurityHubErrorMarshaller.h>
#include <aws/securityhub/model/AcceptAdministratorInvitationRequest.h>
#include <aws/securityhub/model/BatchDeleteAutomationRulesRequest.h>
#include <aws/securityhub/model/BatchDisableStandardsRequest.h>
#include <aws/securityhub/model/BatchEnableStandardsRequest.h>
#include <aws/securityhub/model/BatchGetAutomationRulesRequest.h>
#include <aws/securityhub/model/BatchGetConfigurationPolicyAssociationsRequest.h>
#include <aws/securityhub/model/BatchGetSecurityControlsRequest.h>
#include <aws/securityhub/model/BatchGetStandardsControlAssociationsRequest.h>
#include <aws/securityhub/model/BatchImportFindingsRequest.h>
#include <aws/securityhub/model/BatchUpdateAutomationRulesRequest.h>
#include <aws/securityhub/model/BatchUpdateFindingsRequest.h>
#include <aws/securityhub/model/BatchUpdateFindingsV2Request.h>
#include <aws/securityhub/model/BatchUpdateStandardsControlAssociationsRequest.h>
#include <aws/securityhub/model/CreateActionTargetRequest.h>
#include <aws/securityhub/model/CreateAggregatorV2Request.h>
#include <aws/securityhub/model/CreateAutomationRuleRequest.h>
#include <aws/securityhub/model/CreateAutomationRuleV2Request.h>
#include <aws/securityhub/model/CreateConfigurationPolicyRequest.h>
#include <aws/securityhub/model/CreateConnectorV2Request.h>
#include <aws/securityhub/model/CreateFindingAggregatorRequest.h>
#include <aws/securityhub/model/CreateInsightRequest.h>
#include <aws/securityhub/model/CreateMembersRequest.h>
#include <aws/securityhub/model/CreateTicketV2Request.h>
#include <aws/securityhub/model/DeclineInvitationsRequest.h>
#include <aws/securityhub/model/DeleteActionTargetRequest.h>
#include <aws/securityhub/model/DeleteAggregatorV2Request.h>
#include <aws/securityhub/model/DeleteAutomationRuleV2Request.h>
#include <aws/securityhub/model/DeleteConfigurationPolicyRequest.h>
#include <aws/securityhub/model/DeleteConnectorV2Request.h>
#include <aws/securityhub/model/DeleteFindingAggregatorRequest.h>
#include <aws/securityhub/model/DeleteInsightRequest.h>
#include <aws/securityhub/model/DeleteInvitationsRequest.h>
#include <aws/securityhub/model/DeleteMembersRequest.h>
#include <aws/securityhub/model/DescribeActionTargetsRequest.h>
#include <aws/securityhub/model/DescribeHubRequest.h>
#include <aws/securityhub/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/securityhub/model/DescribeProductsRequest.h>
#include <aws/securityhub/model/DescribeProductsV2Request.h>
#include <aws/securityhub/model/DescribeSecurityHubV2Request.h>
#include <aws/securityhub/model/DescribeStandardsControlsRequest.h>
#include <aws/securityhub/model/DescribeStandardsRequest.h>
#include <aws/securityhub/model/DisableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/securityhub/model/DisableSecurityHubRequest.h>
#include <aws/securityhub/model/DisableSecurityHubV2Request.h>
#include <aws/securityhub/model/DisassociateFromAdministratorAccountRequest.h>
#include <aws/securityhub/model/DisassociateMembersRequest.h>
#include <aws/securityhub/model/EnableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/securityhub/model/EnableSecurityHubRequest.h>
#include <aws/securityhub/model/EnableSecurityHubV2Request.h>
#include <aws/securityhub/model/GetAdministratorAccountRequest.h>
#include <aws/securityhub/model/GetAggregatorV2Request.h>
#include <aws/securityhub/model/GetAutomationRuleV2Request.h>
#include <aws/securityhub/model/GetConfigurationPolicyAssociationRequest.h>
#include <aws/securityhub/model/GetConfigurationPolicyRequest.h>
#include <aws/securityhub/model/GetConnectorV2Request.h>
#include <aws/securityhub/model/GetEnabledStandardsRequest.h>
#include <aws/securityhub/model/GetFindingAggregatorRequest.h>
#include <aws/securityhub/model/GetFindingHistoryRequest.h>
#include <aws/securityhub/model/GetFindingStatisticsV2Request.h>
#include <aws/securityhub/model/GetFindingsRequest.h>
#include <aws/securityhub/model/GetFindingsTrendsV2Request.h>
#include <aws/securityhub/model/GetFindingsV2Request.h>
#include <aws/securityhub/model/GetInsightResultsRequest.h>
#include <aws/securityhub/model/GetInsightsRequest.h>
#include <aws/securityhub/model/GetInvitationsCountRequest.h>
#include <aws/securityhub/model/GetMembersRequest.h>
#include <aws/securityhub/model/GetResourcesStatisticsV2Request.h>
#include <aws/securityhub/model/GetResourcesTrendsV2Request.h>
#include <aws/securityhub/model/GetResourcesV2Request.h>
#include <aws/securityhub/model/GetSecurityControlDefinitionRequest.h>
#include <aws/securityhub/model/InviteMembersRequest.h>
#include <aws/securityhub/model/ListAggregatorsV2Request.h>
#include <aws/securityhub/model/ListAutomationRulesRequest.h>
#include <aws/securityhub/model/ListAutomationRulesV2Request.h>
#include <aws/securityhub/model/ListConfigurationPoliciesRequest.h>
#include <aws/securityhub/model/ListConfigurationPolicyAssociationsRequest.h>
#include <aws/securityhub/model/ListConnectorsV2Request.h>
#include <aws/securityhub/model/ListEnabledProductsForImportRequest.h>
#include <aws/securityhub/model/ListFindingAggregatorsRequest.h>
#include <aws/securityhub/model/ListInvitationsRequest.h>
#include <aws/securityhub/model/ListMembersRequest.h>
#include <aws/securityhub/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/securityhub/model/ListSecurityControlDefinitionsRequest.h>
#include <aws/securityhub/model/ListStandardsControlAssociationsRequest.h>
#include <aws/securityhub/model/ListTagsForResourceRequest.h>
#include <aws/securityhub/model/RegisterConnectorV2Request.h>
#include <aws/securityhub/model/StartConfigurationPolicyAssociationRequest.h>
#include <aws/securityhub/model/StartConfigurationPolicyDisassociationRequest.h>
#include <aws/securityhub/model/TagResourceRequest.h>
#include <aws/securityhub/model/UntagResourceRequest.h>
#include <aws/securityhub/model/UpdateActionTargetRequest.h>
#include <aws/securityhub/model/UpdateAggregatorV2Request.h>
#include <aws/securityhub/model/UpdateAutomationRuleV2Request.h>
#include <aws/securityhub/model/UpdateConfigurationPolicyRequest.h>
#include <aws/securityhub/model/UpdateConnectorV2Request.h>
#include <aws/securityhub/model/UpdateFindingAggregatorRequest.h>
#include <aws/securityhub/model/UpdateFindingsRequest.h>
#include <aws/securityhub/model/UpdateInsightRequest.h>
#include <aws/securityhub/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/securityhub/model/UpdateSecurityControlRequest.h>
#include <aws/securityhub/model/UpdateSecurityHubConfigurationRequest.h>
#include <aws/securityhub/model/UpdateStandardsControlRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityHub;
using namespace Aws::SecurityHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SecurityHub {
const char SERVICE_NAME[] = "securityhub";
const char ALLOCATION_TAG[] = "SecurityHubClient";
}  // namespace SecurityHub
}  // namespace Aws
const char* SecurityHubClient::GetServiceName() { return SERVICE_NAME; }
const char* SecurityHubClient::GetAllocationTag() { return ALLOCATION_TAG; }

SecurityHubClient::SecurityHubClient(const SecurityHub::SecurityHubClientConfiguration& clientConfiguration,
                                     std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const AWSCredentials& credentials, std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider,
                                     const SecurityHub::SecurityHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider,
                                     const SecurityHub::SecurityHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SecurityHubClient::SecurityHubClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SecurityHubClient::~SecurityHubClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SecurityHubEndpointProviderBase>& SecurityHubClient::accessEndpointProvider() { return m_endpointProvider; }

void SecurityHubClient::init(const SecurityHub::SecurityHubClientConfiguration& config) {
  AWSClient::SetServiceClientName("SecurityHub");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "securityhub");
}

void SecurityHubClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SecurityHubClient::InvokeOperationOutcome SecurityHubClient::InvokeServiceOperation(
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

AcceptAdministratorInvitationOutcome SecurityHubClient::AcceptAdministratorInvitation(
    const AcceptAdministratorInvitationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  };

  return AcceptAdministratorInvitationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteAutomationRulesOutcome SecurityHubClient::BatchDeleteAutomationRules(const BatchDeleteAutomationRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrules/delete");
  };

  return BatchDeleteAutomationRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisableStandardsOutcome SecurityHubClient::BatchDisableStandards(const BatchDisableStandardsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/standards/deregister");
  };

  return BatchDisableStandardsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchEnableStandardsOutcome SecurityHubClient::BatchEnableStandards(const BatchEnableStandardsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/standards/register");
  };

  return BatchEnableStandardsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetAutomationRulesOutcome SecurityHubClient::BatchGetAutomationRules(const BatchGetAutomationRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrules/get");
  };

  return BatchGetAutomationRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetConfigurationPolicyAssociationsOutcome SecurityHubClient::BatchGetConfigurationPolicyAssociations(
    const BatchGetConfigurationPolicyAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicyAssociation/batchget");
  };

  return BatchGetConfigurationPolicyAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetSecurityControlsOutcome SecurityHubClient::BatchGetSecurityControls(const BatchGetSecurityControlsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/securityControls/batchGet");
  };

  return BatchGetSecurityControlsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetStandardsControlAssociationsOutcome SecurityHubClient::BatchGetStandardsControlAssociations(
    const BatchGetStandardsControlAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/batchGet");
  };

  return BatchGetStandardsControlAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchImportFindingsOutcome SecurityHubClient::BatchImportFindings(const BatchImportFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/import");
  };

  return BatchImportFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateAutomationRulesOutcome SecurityHubClient::BatchUpdateAutomationRules(const BatchUpdateAutomationRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrules/update");
  };

  return BatchUpdateAutomationRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

BatchUpdateFindingsOutcome SecurityHubClient::BatchUpdateFindings(const BatchUpdateFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/batchupdate");
  };

  return BatchUpdateFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

BatchUpdateFindingsV2Outcome SecurityHubClient::BatchUpdateFindingsV2(const BatchUpdateFindingsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsv2/batchupdatev2");
  };

  return BatchUpdateFindingsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

BatchUpdateStandardsControlAssociationsOutcome SecurityHubClient::BatchUpdateStandardsControlAssociations(
    const BatchUpdateStandardsControlAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return BatchUpdateStandardsControlAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateActionTargetOutcome SecurityHubClient::CreateActionTarget(const CreateActionTargetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets");
  };

  return CreateActionTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAggregatorV2Outcome SecurityHubClient::CreateAggregatorV2(const CreateAggregatorV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatorv2/create");
  };

  return CreateAggregatorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAutomationRuleOutcome SecurityHubClient::CreateAutomationRule(const CreateAutomationRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrules/create");
  };

  return CreateAutomationRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAutomationRuleV2Outcome SecurityHubClient::CreateAutomationRuleV2(const CreateAutomationRuleV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrulesv2/create");
  };

  return CreateAutomationRuleV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationPolicyOutcome SecurityHubClient::CreateConfigurationPolicy(const CreateConfigurationPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicy/create");
  };

  return CreateConfigurationPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectorV2Outcome SecurityHubClient::CreateConnectorV2(const CreateConnectorV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectorsv2");
  };

  return CreateConnectorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFindingAggregatorOutcome SecurityHubClient::CreateFindingAggregator(const CreateFindingAggregatorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/create");
  };

  return CreateFindingAggregatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInsightOutcome SecurityHubClient::CreateInsight(const CreateInsightRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights");
  };

  return CreateInsightOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMembersOutcome SecurityHubClient::CreateMembers(const CreateMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  return CreateMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTicketV2Outcome SecurityHubClient::CreateTicketV2(const CreateTicketV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ticketsv2");
  };

  return CreateTicketV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeclineInvitationsOutcome SecurityHubClient::DeclineInvitations(const DeclineInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/decline");
  };

  return DeclineInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteActionTargetOutcome SecurityHubClient::DeleteActionTarget(const DeleteActionTargetRequest& request) const {
  if (!request.ActionTargetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteActionTarget", "Required field: ActionTargetArn, is not set");
    return DeleteActionTargetOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ActionTargetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetActionTargetArn());
  };

  return DeleteActionTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAggregatorV2Outcome SecurityHubClient::DeleteAggregatorV2(const DeleteAggregatorV2Request& request) const {
  if (!request.AggregatorV2ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAggregatorV2", "Required field: AggregatorV2Arn, is not set");
    return DeleteAggregatorV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AggregatorV2Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatorv2/delete/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetAggregatorV2Arn());
  };

  return DeleteAggregatorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAutomationRuleV2Outcome SecurityHubClient::DeleteAutomationRuleV2(const DeleteAutomationRuleV2Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomationRuleV2", "Required field: Identifier, is not set");
    return DeleteAutomationRuleV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrulesv2/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteAutomationRuleV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfigurationPolicyOutcome SecurityHubClient::DeleteConfigurationPolicy(const DeleteConfigurationPolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationPolicy", "Required field: Identifier, is not set");
    return DeleteConfigurationPolicyOutcome(Aws::Client::AWSError<SecurityHubErrors>(
        SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteConfigurationPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConnectorV2Outcome SecurityHubClient::DeleteConnectorV2(const DeleteConnectorV2Request& request) const {
  if (!request.ConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectorV2", "Required field: ConnectorId, is not set");
    return DeleteConnectorV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectorsv2/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetConnectorId());
  };

  return DeleteConnectorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFindingAggregatorOutcome SecurityHubClient::DeleteFindingAggregator(const DeleteFindingAggregatorRequest& request) const {
  if (!request.FindingAggregatorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFindingAggregator", "Required field: FindingAggregatorArn, is not set");
    return DeleteFindingAggregatorOutcome(Aws::Client::AWSError<SecurityHubErrors>(
        SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingAggregatorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/delete/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetFindingAggregatorArn());
  };

  return DeleteFindingAggregatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInsightOutcome SecurityHubClient::DeleteInsight(const DeleteInsightRequest& request) const {
  if (!request.InsightArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInsight", "Required field: InsightArn, is not set");
    return DeleteInsightOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InsightArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetInsightArn());
  };

  return DeleteInsightOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInvitationsOutcome SecurityHubClient::DeleteInvitations(const DeleteInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/delete");
  };

  return DeleteInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMembersOutcome SecurityHubClient::DeleteMembers(const DeleteMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/delete");
  };

  return DeleteMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeActionTargetsOutcome SecurityHubClient::DescribeActionTargets(const DescribeActionTargetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets/get");
  };

  return DescribeActionTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHubOutcome SecurityHubClient::DescribeHub(const DescribeHubRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return DescribeHubOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeOrganizationConfigurationOutcome SecurityHubClient::DescribeOrganizationConfiguration(
    const DescribeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/configuration");
  };

  return DescribeOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeProductsOutcome SecurityHubClient::DescribeProducts(const DescribeProductsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products");
  };

  return DescribeProductsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeProductsV2Outcome SecurityHubClient::DescribeProductsV2(const DescribeProductsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/productsV2");
  };

  return DescribeProductsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeSecurityHubV2Outcome SecurityHubClient::DescribeSecurityHubV2(const DescribeSecurityHubV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hubv2");
  };

  return DescribeSecurityHubV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeStandardsOutcome SecurityHubClient::DescribeStandards(const DescribeStandardsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/standards");
  };

  return DescribeStandardsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeStandardsControlsOutcome SecurityHubClient::DescribeStandardsControls(const DescribeStandardsControlsRequest& request) const {
  if (!request.StandardsSubscriptionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeStandardsControls", "Required field: StandardsSubscriptionArn, is not set");
    return DescribeStandardsControlsOutcome(Aws::Client::AWSError<SecurityHubErrors>(
        SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StandardsSubscriptionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/standards/controls/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetStandardsSubscriptionArn());
  };

  return DescribeStandardsControlsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisableImportFindingsForProductOutcome SecurityHubClient::DisableImportFindingsForProduct(
    const DisableImportFindingsForProductRequest& request) const {
  if (!request.ProductSubscriptionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableImportFindingsForProduct", "Required field: ProductSubscriptionArn, is not set");
    return DisableImportFindingsForProductOutcome(Aws::Client::AWSError<SecurityHubErrors>(
        SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductSubscriptionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/productSubscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetProductSubscriptionArn());
  };

  return DisableImportFindingsForProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisableOrganizationAdminAccountOutcome SecurityHubClient::DisableOrganizationAdminAccount(
    const DisableOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/admin/disable");
  };

  return DisableOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableSecurityHubOutcome SecurityHubClient::DisableSecurityHub(const DisableSecurityHubRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return DisableSecurityHubOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisableSecurityHubV2Outcome SecurityHubClient::DisableSecurityHubV2(const DisableSecurityHubV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hubv2");
  };

  return DisableSecurityHubV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateFromAdministratorAccountOutcome SecurityHubClient::DisassociateFromAdministratorAccount(
    const DisassociateFromAdministratorAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator/disassociate");
  };

  return DisassociateFromAdministratorAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateMembersOutcome SecurityHubClient::DisassociateMembers(const DisassociateMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/disassociate");
  };

  return DisassociateMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableImportFindingsForProductOutcome SecurityHubClient::EnableImportFindingsForProduct(
    const EnableImportFindingsForProductRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/productSubscriptions");
  };

  return EnableImportFindingsForProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableOrganizationAdminAccountOutcome SecurityHubClient::EnableOrganizationAdminAccount(
    const EnableOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/admin/enable");
  };

  return EnableOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableSecurityHubOutcome SecurityHubClient::EnableSecurityHub(const EnableSecurityHubRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return EnableSecurityHubOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableSecurityHubV2Outcome SecurityHubClient::EnableSecurityHubV2(const EnableSecurityHubV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hubv2");
  };

  return EnableSecurityHubV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAdministratorAccountOutcome SecurityHubClient::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  };

  return GetAdministratorAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAggregatorV2Outcome SecurityHubClient::GetAggregatorV2(const GetAggregatorV2Request& request) const {
  if (!request.AggregatorV2ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAggregatorV2", "Required field: AggregatorV2Arn, is not set");
    return GetAggregatorV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AggregatorV2Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatorv2/get/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetAggregatorV2Arn());
  };

  return GetAggregatorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAutomationRuleV2Outcome SecurityHubClient::GetAutomationRuleV2(const GetAutomationRuleV2Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomationRuleV2", "Required field: Identifier, is not set");
    return GetAutomationRuleV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrulesv2/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetAutomationRuleV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfigurationPolicyOutcome SecurityHubClient::GetConfigurationPolicy(const GetConfigurationPolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationPolicy", "Required field: Identifier, is not set");
    return GetConfigurationPolicyOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicy/get/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetConfigurationPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfigurationPolicyAssociationOutcome SecurityHubClient::GetConfigurationPolicyAssociation(
    const GetConfigurationPolicyAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicyAssociation/get");
  };

  return GetConfigurationPolicyAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectorV2Outcome SecurityHubClient::GetConnectorV2(const GetConnectorV2Request& request) const {
  if (!request.ConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectorV2", "Required field: ConnectorId, is not set");
    return GetConnectorV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectorsv2/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetConnectorId());
  };

  return GetConnectorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnabledStandardsOutcome SecurityHubClient::GetEnabledStandards(const GetEnabledStandardsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/standards/get");
  };

  return GetEnabledStandardsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFindingAggregatorOutcome SecurityHubClient::GetFindingAggregator(const GetFindingAggregatorRequest& request) const {
  if (!request.FindingAggregatorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindingAggregator", "Required field: FindingAggregatorArn, is not set");
    return GetFindingAggregatorOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FindingAggregatorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/get/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetFindingAggregatorArn());
  };

  return GetFindingAggregatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingHistoryOutcome SecurityHubClient::GetFindingHistory(const GetFindingHistoryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingHistory/get");
  };

  return GetFindingHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFindingStatisticsV2Outcome SecurityHubClient::GetFindingStatisticsV2(const GetFindingStatisticsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsv2/statistics");
  };

  return GetFindingStatisticsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFindingsOutcome SecurityHubClient::GetFindings(const GetFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  };

  return GetFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFindingsTrendsV2Outcome SecurityHubClient::GetFindingsTrendsV2(const GetFindingsTrendsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsTrendsv2");
  };

  return GetFindingsTrendsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFindingsV2Outcome SecurityHubClient::GetFindingsV2(const GetFindingsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsv2");
  };

  return GetFindingsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInsightResultsOutcome SecurityHubClient::GetInsightResults(const GetInsightResultsRequest& request) const {
  if (!request.InsightArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInsightResults", "Required field: InsightArn, is not set");
    return GetInsightResultsOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InsightArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/results/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetInsightArn());
  };

  return GetInsightResultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInsightsOutcome SecurityHubClient::GetInsights(const GetInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/get");
  };

  return GetInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInvitationsCountOutcome SecurityHubClient::GetInvitationsCount(const GetInvitationsCountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/count");
  };

  return GetInvitationsCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMembersOutcome SecurityHubClient::GetMembers(const GetMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/get");
  };

  return GetMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcesStatisticsV2Outcome SecurityHubClient::GetResourcesStatisticsV2(const GetResourcesStatisticsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesv2/statistics");
  };

  return GetResourcesStatisticsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcesTrendsV2Outcome SecurityHubClient::GetResourcesTrendsV2(const GetResourcesTrendsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesTrendsv2");
  };

  return GetResourcesTrendsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcesV2Outcome SecurityHubClient::GetResourcesV2(const GetResourcesV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesv2");
  };

  return GetResourcesV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSecurityControlDefinitionOutcome SecurityHubClient::GetSecurityControlDefinition(
    const GetSecurityControlDefinitionRequest& request) const {
  if (!request.SecurityControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSecurityControlDefinition", "Required field: SecurityControlId, is not set");
    return GetSecurityControlDefinitionOutcome(Aws::Client::AWSError<SecurityHubErrors>(
        SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/securityControl/definition");
  };

  return GetSecurityControlDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

InviteMembersOutcome SecurityHubClient::InviteMembers(const InviteMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/invite");
  };

  return InviteMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAggregatorsV2Outcome SecurityHubClient::ListAggregatorsV2(const ListAggregatorsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatorv2/list");
  };

  return ListAggregatorsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAutomationRulesOutcome SecurityHubClient::ListAutomationRules(const ListAutomationRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrules/list");
  };

  return ListAutomationRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAutomationRulesV2Outcome SecurityHubClient::ListAutomationRulesV2(const ListAutomationRulesV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrulesv2/list");
  };

  return ListAutomationRulesV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationPoliciesOutcome SecurityHubClient::ListConfigurationPolicies(const ListConfigurationPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicy/list");
  };

  return ListConfigurationPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationPolicyAssociationsOutcome SecurityHubClient::ListConfigurationPolicyAssociations(
    const ListConfigurationPolicyAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicyAssociation/list");
  };

  return ListConfigurationPolicyAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectorsV2Outcome SecurityHubClient::ListConnectorsV2(const ListConnectorsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectorsv2");
  };

  return ListConnectorsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnabledProductsForImportOutcome SecurityHubClient::ListEnabledProductsForImport(
    const ListEnabledProductsForImportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/productSubscriptions");
  };

  return ListEnabledProductsForImportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFindingAggregatorsOutcome SecurityHubClient::ListFindingAggregators(const ListFindingAggregatorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/list");
  };

  return ListFindingAggregatorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInvitationsOutcome SecurityHubClient::ListInvitations(const ListInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  };

  return ListInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMembersOutcome SecurityHubClient::ListMembers(const ListMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  return ListMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrganizationAdminAccountsOutcome SecurityHubClient::ListOrganizationAdminAccounts(
    const ListOrganizationAdminAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/admin");
  };

  return ListOrganizationAdminAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityControlDefinitionsOutcome SecurityHubClient::ListSecurityControlDefinitions(
    const ListSecurityControlDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/securityControls/definitions");
  };

  return ListSecurityControlDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListStandardsControlAssociationsOutcome SecurityHubClient::ListStandardsControlAssociations(
    const ListStandardsControlAssociationsRequest& request) const {
  if (!request.SecurityControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStandardsControlAssociations", "Required field: SecurityControlId, is not set");
    return ListStandardsControlAssociationsOutcome(Aws::Client::AWSError<SecurityHubErrors>(
        SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListStandardsControlAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome SecurityHubClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterConnectorV2Outcome SecurityHubClient::RegisterConnectorV2(const RegisterConnectorV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectorsv2/register");
  };

  return RegisterConnectorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartConfigurationPolicyAssociationOutcome SecurityHubClient::StartConfigurationPolicyAssociation(
    const StartConfigurationPolicyAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicyAssociation/associate");
  };

  return StartConfigurationPolicyAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartConfigurationPolicyDisassociationOutcome SecurityHubClient::StartConfigurationPolicyDisassociation(
    const StartConfigurationPolicyDisassociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicyAssociation/disassociate");
  };

  return StartConfigurationPolicyDisassociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SecurityHubClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SecurityHubClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateActionTargetOutcome SecurityHubClient::UpdateActionTarget(const UpdateActionTargetRequest& request) const {
  if (!request.ActionTargetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateActionTarget", "Required field: ActionTargetArn, is not set");
    return UpdateActionTargetOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ActionTargetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetActionTargetArn());
  };

  return UpdateActionTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAggregatorV2Outcome SecurityHubClient::UpdateAggregatorV2(const UpdateAggregatorV2Request& request) const {
  if (!request.AggregatorV2ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAggregatorV2", "Required field: AggregatorV2Arn, is not set");
    return UpdateAggregatorV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AggregatorV2Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatorv2/update/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetAggregatorV2Arn());
  };

  return UpdateAggregatorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAutomationRuleV2Outcome SecurityHubClient::UpdateAutomationRuleV2(const UpdateAutomationRuleV2Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAutomationRuleV2", "Required field: Identifier, is not set");
    return UpdateAutomationRuleV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automationrulesv2/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateAutomationRuleV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConfigurationPolicyOutcome SecurityHubClient::UpdateConfigurationPolicy(const UpdateConfigurationPolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationPolicy", "Required field: Identifier, is not set");
    return UpdateConfigurationPolicyOutcome(Aws::Client::AWSError<SecurityHubErrors>(
        SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationPolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateConfigurationPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConnectorV2Outcome SecurityHubClient::UpdateConnectorV2(const UpdateConnectorV2Request& request) const {
  if (!request.ConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectorV2", "Required field: ConnectorId, is not set");
    return UpdateConnectorV2Outcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectorsv2/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetConnectorId());
  };

  return UpdateConnectorV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateFindingAggregatorOutcome SecurityHubClient::UpdateFindingAggregator(const UpdateFindingAggregatorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/update");
  };

  return UpdateFindingAggregatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateFindingsOutcome SecurityHubClient::UpdateFindings(const UpdateFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  };

  return UpdateFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateInsightOutcome SecurityHubClient::UpdateInsight(const UpdateInsightRequest& request) const {
  if (!request.InsightArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInsight", "Required field: InsightArn, is not set");
    return UpdateInsightOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InsightArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetInsightArn());
  };

  return UpdateInsightOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateOrganizationConfigurationOutcome SecurityHubClient::UpdateOrganizationConfiguration(
    const UpdateOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/configuration");
  };

  return UpdateOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSecurityControlOutcome SecurityHubClient::UpdateSecurityControl(const UpdateSecurityControlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/securityControl/update");
  };

  return UpdateSecurityControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSecurityHubConfigurationOutcome SecurityHubClient::UpdateSecurityHubConfiguration(
    const UpdateSecurityHubConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return UpdateSecurityHubConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateStandardsControlOutcome SecurityHubClient::UpdateStandardsControl(const UpdateStandardsControlRequest& request) const {
  if (!request.StandardsControlArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStandardsControl", "Required field: StandardsControlArn, is not set");
    return UpdateStandardsControlOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [StandardsControlArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/standards/control/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetStandardsControlArn());
  };

  return UpdateStandardsControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
