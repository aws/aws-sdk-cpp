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
#include <aws/waf-regional/WAFRegionalClient.h>
#include <aws/waf-regional/WAFRegionalEndpointProvider.h>
#include <aws/waf-regional/WAFRegionalErrorMarshaller.h>
#include <aws/waf-regional/model/AssociateWebACLRequest.h>
#include <aws/waf-regional/model/CreateByteMatchSetRequest.h>
#include <aws/waf-regional/model/CreateGeoMatchSetRequest.h>
#include <aws/waf-regional/model/CreateIPSetRequest.h>
#include <aws/waf-regional/model/CreateRateBasedRuleRequest.h>
#include <aws/waf-regional/model/CreateRegexMatchSetRequest.h>
#include <aws/waf-regional/model/CreateRegexPatternSetRequest.h>
#include <aws/waf-regional/model/CreateRuleGroupRequest.h>
#include <aws/waf-regional/model/CreateRuleRequest.h>
#include <aws/waf-regional/model/CreateSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/CreateSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/CreateWebACLMigrationStackRequest.h>
#include <aws/waf-regional/model/CreateWebACLRequest.h>
#include <aws/waf-regional/model/CreateXssMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteByteMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteGeoMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteIPSetRequest.h>
#include <aws/waf-regional/model/DeleteLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/DeletePermissionPolicyRequest.h>
#include <aws/waf-regional/model/DeleteRateBasedRuleRequest.h>
#include <aws/waf-regional/model/DeleteRegexMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteRegexPatternSetRequest.h>
#include <aws/waf-regional/model/DeleteRuleGroupRequest.h>
#include <aws/waf-regional/model/DeleteRuleRequest.h>
#include <aws/waf-regional/model/DeleteSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/DeleteSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteWebACLRequest.h>
#include <aws/waf-regional/model/DeleteXssMatchSetRequest.h>
#include <aws/waf-regional/model/DisassociateWebACLRequest.h>
#include <aws/waf-regional/model/GetByteMatchSetRequest.h>
#include <aws/waf-regional/model/GetChangeTokenRequest.h>
#include <aws/waf-regional/model/GetChangeTokenStatusRequest.h>
#include <aws/waf-regional/model/GetGeoMatchSetRequest.h>
#include <aws/waf-regional/model/GetIPSetRequest.h>
#include <aws/waf-regional/model/GetLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/GetPermissionPolicyRequest.h>
#include <aws/waf-regional/model/GetRateBasedRuleManagedKeysRequest.h>
#include <aws/waf-regional/model/GetRateBasedRuleRequest.h>
#include <aws/waf-regional/model/GetRegexMatchSetRequest.h>
#include <aws/waf-regional/model/GetRegexPatternSetRequest.h>
#include <aws/waf-regional/model/GetRuleGroupRequest.h>
#include <aws/waf-regional/model/GetRuleRequest.h>
#include <aws/waf-regional/model/GetSampledRequestsRequest.h>
#include <aws/waf-regional/model/GetSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/GetWebACLForResourceRequest.h>
#include <aws/waf-regional/model/GetWebACLRequest.h>
#include <aws/waf-regional/model/GetXssMatchSetRequest.h>
#include <aws/waf-regional/model/ListActivatedRulesInRuleGroupRequest.h>
#include <aws/waf-regional/model/ListByteMatchSetsRequest.h>
#include <aws/waf-regional/model/ListGeoMatchSetsRequest.h>
#include <aws/waf-regional/model/ListIPSetsRequest.h>
#include <aws/waf-regional/model/ListLoggingConfigurationsRequest.h>
#include <aws/waf-regional/model/ListRateBasedRulesRequest.h>
#include <aws/waf-regional/model/ListRegexMatchSetsRequest.h>
#include <aws/waf-regional/model/ListRegexPatternSetsRequest.h>
#include <aws/waf-regional/model/ListResourcesForWebACLRequest.h>
#include <aws/waf-regional/model/ListRuleGroupsRequest.h>
#include <aws/waf-regional/model/ListRulesRequest.h>
#include <aws/waf-regional/model/ListSizeConstraintSetsRequest.h>
#include <aws/waf-regional/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/waf-regional/model/ListSubscribedRuleGroupsRequest.h>
#include <aws/waf-regional/model/ListTagsForResourceRequest.h>
#include <aws/waf-regional/model/ListWebACLsRequest.h>
#include <aws/waf-regional/model/ListXssMatchSetsRequest.h>
#include <aws/waf-regional/model/PutLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/PutPermissionPolicyRequest.h>
#include <aws/waf-regional/model/TagResourceRequest.h>
#include <aws/waf-regional/model/UntagResourceRequest.h>
#include <aws/waf-regional/model/UpdateByteMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateGeoMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateIPSetRequest.h>
#include <aws/waf-regional/model/UpdateRateBasedRuleRequest.h>
#include <aws/waf-regional/model/UpdateRegexMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateRegexPatternSetRequest.h>
#include <aws/waf-regional/model/UpdateRuleGroupRequest.h>
#include <aws/waf-regional/model/UpdateRuleRequest.h>
#include <aws/waf-regional/model/UpdateSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/UpdateSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateWebACLRequest.h>
#include <aws/waf-regional/model/UpdateXssMatchSetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WAFRegional;
using namespace Aws::WAFRegional::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WAFRegional {
const char SERVICE_NAME[] = "waf-regional";
const char ALLOCATION_TAG[] = "WAFRegionalClient";
}  // namespace WAFRegional
}  // namespace Aws
const char* WAFRegionalClient::GetServiceName() { return SERVICE_NAME; }
const char* WAFRegionalClient::GetAllocationTag() { return ALLOCATION_TAG; }

WAFRegionalClient::WAFRegionalClient(const WAFRegional::WAFRegionalClientConfiguration& clientConfiguration,
                                     std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const AWSCredentials& credentials, std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider,
                                     const WAFRegional::WAFRegionalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider,
                                     const WAFRegional::WAFRegionalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WAFRegionalClient::WAFRegionalClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WAFRegionalClient::~WAFRegionalClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WAFRegionalEndpointProviderBase>& WAFRegionalClient::accessEndpointProvider() { return m_endpointProvider; }

void WAFRegionalClient::init(const WAFRegional::WAFRegionalClientConfiguration& config) {
  AWSClient::SetServiceClientName("WAF Regional");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "waf-regional");
}

void WAFRegionalClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WAFRegionalClient::InvokeOperationOutcome WAFRegionalClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateWebACLOutcome WAFRegionalClient::AssociateWebACL(const AssociateWebACLRequest& request) const {
  return AssociateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateByteMatchSetOutcome WAFRegionalClient::CreateByteMatchSet(const CreateByteMatchSetRequest& request) const {
  return CreateByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGeoMatchSetOutcome WAFRegionalClient::CreateGeoMatchSet(const CreateGeoMatchSetRequest& request) const {
  return CreateGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIPSetOutcome WAFRegionalClient::CreateIPSet(const CreateIPSetRequest& request) const {
  return CreateIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRateBasedRuleOutcome WAFRegionalClient::CreateRateBasedRule(const CreateRateBasedRuleRequest& request) const {
  return CreateRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegexMatchSetOutcome WAFRegionalClient::CreateRegexMatchSet(const CreateRegexMatchSetRequest& request) const {
  return CreateRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegexPatternSetOutcome WAFRegionalClient::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const {
  return CreateRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleOutcome WAFRegionalClient::CreateRule(const CreateRuleRequest& request) const {
  return CreateRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleGroupOutcome WAFRegionalClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const {
  return CreateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSizeConstraintSetOutcome WAFRegionalClient::CreateSizeConstraintSet(const CreateSizeConstraintSetRequest& request) const {
  return CreateSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSqlInjectionMatchSetOutcome WAFRegionalClient::CreateSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest& request) const {
  return CreateSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebACLOutcome WAFRegionalClient::CreateWebACL(const CreateWebACLRequest& request) const {
  return CreateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebACLMigrationStackOutcome WAFRegionalClient::CreateWebACLMigrationStack(const CreateWebACLMigrationStackRequest& request) const {
  return CreateWebACLMigrationStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateXssMatchSetOutcome WAFRegionalClient::CreateXssMatchSet(const CreateXssMatchSetRequest& request) const {
  return CreateXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteByteMatchSetOutcome WAFRegionalClient::DeleteByteMatchSet(const DeleteByteMatchSetRequest& request) const {
  return DeleteByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGeoMatchSetOutcome WAFRegionalClient::DeleteGeoMatchSet(const DeleteGeoMatchSetRequest& request) const {
  return DeleteGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIPSetOutcome WAFRegionalClient::DeleteIPSet(const DeleteIPSetRequest& request) const {
  return DeleteIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoggingConfigurationOutcome WAFRegionalClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const {
  return DeleteLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePermissionPolicyOutcome WAFRegionalClient::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const {
  return DeletePermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRateBasedRuleOutcome WAFRegionalClient::DeleteRateBasedRule(const DeleteRateBasedRuleRequest& request) const {
  return DeleteRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegexMatchSetOutcome WAFRegionalClient::DeleteRegexMatchSet(const DeleteRegexMatchSetRequest& request) const {
  return DeleteRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegexPatternSetOutcome WAFRegionalClient::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const {
  return DeleteRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleOutcome WAFRegionalClient::DeleteRule(const DeleteRuleRequest& request) const {
  return DeleteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleGroupOutcome WAFRegionalClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const {
  return DeleteRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSizeConstraintSetOutcome WAFRegionalClient::DeleteSizeConstraintSet(const DeleteSizeConstraintSetRequest& request) const {
  return DeleteSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSqlInjectionMatchSetOutcome WAFRegionalClient::DeleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest& request) const {
  return DeleteSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebACLOutcome WAFRegionalClient::DeleteWebACL(const DeleteWebACLRequest& request) const {
  return DeleteWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteXssMatchSetOutcome WAFRegionalClient::DeleteXssMatchSet(const DeleteXssMatchSetRequest& request) const {
  return DeleteXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateWebACLOutcome WAFRegionalClient::DisassociateWebACL(const DisassociateWebACLRequest& request) const {
  return DisassociateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetByteMatchSetOutcome WAFRegionalClient::GetByteMatchSet(const GetByteMatchSetRequest& request) const {
  return GetByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetChangeTokenOutcome WAFRegionalClient::GetChangeToken(const GetChangeTokenRequest& request) const {
  return GetChangeTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetChangeTokenStatusOutcome WAFRegionalClient::GetChangeTokenStatus(const GetChangeTokenStatusRequest& request) const {
  return GetChangeTokenStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGeoMatchSetOutcome WAFRegionalClient::GetGeoMatchSet(const GetGeoMatchSetRequest& request) const {
  return GetGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIPSetOutcome WAFRegionalClient::GetIPSet(const GetIPSetRequest& request) const {
  return GetIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoggingConfigurationOutcome WAFRegionalClient::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const {
  return GetLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPermissionPolicyOutcome WAFRegionalClient::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const {
  return GetPermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRateBasedRuleOutcome WAFRegionalClient::GetRateBasedRule(const GetRateBasedRuleRequest& request) const {
  return GetRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRateBasedRuleManagedKeysOutcome WAFRegionalClient::GetRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest& request) const {
  return GetRateBasedRuleManagedKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegexMatchSetOutcome WAFRegionalClient::GetRegexMatchSet(const GetRegexMatchSetRequest& request) const {
  return GetRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegexPatternSetOutcome WAFRegionalClient::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const {
  return GetRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRuleOutcome WAFRegionalClient::GetRule(const GetRuleRequest& request) const {
  return GetRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRuleGroupOutcome WAFRegionalClient::GetRuleGroup(const GetRuleGroupRequest& request) const {
  return GetRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSampledRequestsOutcome WAFRegionalClient::GetSampledRequests(const GetSampledRequestsRequest& request) const {
  return GetSampledRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSizeConstraintSetOutcome WAFRegionalClient::GetSizeConstraintSet(const GetSizeConstraintSetRequest& request) const {
  return GetSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSqlInjectionMatchSetOutcome WAFRegionalClient::GetSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest& request) const {
  return GetSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWebACLOutcome WAFRegionalClient::GetWebACL(const GetWebACLRequest& request) const {
  return GetWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWebACLForResourceOutcome WAFRegionalClient::GetWebACLForResource(const GetWebACLForResourceRequest& request) const {
  return GetWebACLForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetXssMatchSetOutcome WAFRegionalClient::GetXssMatchSet(const GetXssMatchSetRequest& request) const {
  return GetXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListActivatedRulesInRuleGroupOutcome WAFRegionalClient::ListActivatedRulesInRuleGroup(
    const ListActivatedRulesInRuleGroupRequest& request) const {
  return ListActivatedRulesInRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListByteMatchSetsOutcome WAFRegionalClient::ListByteMatchSets(const ListByteMatchSetsRequest& request) const {
  return ListByteMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGeoMatchSetsOutcome WAFRegionalClient::ListGeoMatchSets(const ListGeoMatchSetsRequest& request) const {
  return ListGeoMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIPSetsOutcome WAFRegionalClient::ListIPSets(const ListIPSetsRequest& request) const {
  return ListIPSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLoggingConfigurationsOutcome WAFRegionalClient::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const {
  return ListLoggingConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRateBasedRulesOutcome WAFRegionalClient::ListRateBasedRules(const ListRateBasedRulesRequest& request) const {
  return ListRateBasedRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegexMatchSetsOutcome WAFRegionalClient::ListRegexMatchSets(const ListRegexMatchSetsRequest& request) const {
  return ListRegexMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegexPatternSetsOutcome WAFRegionalClient::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const {
  return ListRegexPatternSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourcesForWebACLOutcome WAFRegionalClient::ListResourcesForWebACL(const ListResourcesForWebACLRequest& request) const {
  return ListResourcesForWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleGroupsOutcome WAFRegionalClient::ListRuleGroups(const ListRuleGroupsRequest& request) const {
  return ListRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRulesOutcome WAFRegionalClient::ListRules(const ListRulesRequest& request) const {
  return ListRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSizeConstraintSetsOutcome WAFRegionalClient::ListSizeConstraintSets(const ListSizeConstraintSetsRequest& request) const {
  return ListSizeConstraintSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSqlInjectionMatchSetsOutcome WAFRegionalClient::ListSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest& request) const {
  return ListSqlInjectionMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSubscribedRuleGroupsOutcome WAFRegionalClient::ListSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest& request) const {
  return ListSubscribedRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome WAFRegionalClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWebACLsOutcome WAFRegionalClient::ListWebACLs(const ListWebACLsRequest& request) const {
  return ListWebACLsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListXssMatchSetsOutcome WAFRegionalClient::ListXssMatchSets(const ListXssMatchSetsRequest& request) const {
  return ListXssMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLoggingConfigurationOutcome WAFRegionalClient::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const {
  return PutLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPermissionPolicyOutcome WAFRegionalClient::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const {
  return PutPermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome WAFRegionalClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome WAFRegionalClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateByteMatchSetOutcome WAFRegionalClient::UpdateByteMatchSet(const UpdateByteMatchSetRequest& request) const {
  return UpdateByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGeoMatchSetOutcome WAFRegionalClient::UpdateGeoMatchSet(const UpdateGeoMatchSetRequest& request) const {
  return UpdateGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIPSetOutcome WAFRegionalClient::UpdateIPSet(const UpdateIPSetRequest& request) const {
  return UpdateIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRateBasedRuleOutcome WAFRegionalClient::UpdateRateBasedRule(const UpdateRateBasedRuleRequest& request) const {
  return UpdateRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRegexMatchSetOutcome WAFRegionalClient::UpdateRegexMatchSet(const UpdateRegexMatchSetRequest& request) const {
  return UpdateRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRegexPatternSetOutcome WAFRegionalClient::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const {
  return UpdateRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleOutcome WAFRegionalClient::UpdateRule(const UpdateRuleRequest& request) const {
  return UpdateRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleGroupOutcome WAFRegionalClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const {
  return UpdateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSizeConstraintSetOutcome WAFRegionalClient::UpdateSizeConstraintSet(const UpdateSizeConstraintSetRequest& request) const {
  return UpdateSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSqlInjectionMatchSetOutcome WAFRegionalClient::UpdateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest& request) const {
  return UpdateSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWebACLOutcome WAFRegionalClient::UpdateWebACL(const UpdateWebACLRequest& request) const {
  return UpdateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateXssMatchSetOutcome WAFRegionalClient::UpdateXssMatchSet(const UpdateXssMatchSetRequest& request) const {
  return UpdateXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
