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
#include <aws/waf/WAFClient.h>
#include <aws/waf/WAFEndpointProvider.h>
#include <aws/waf/WAFErrorMarshaller.h>
#include <aws/waf/model/CreateByteMatchSetRequest.h>
#include <aws/waf/model/CreateGeoMatchSetRequest.h>
#include <aws/waf/model/CreateIPSetRequest.h>
#include <aws/waf/model/CreateRateBasedRuleRequest.h>
#include <aws/waf/model/CreateRegexMatchSetRequest.h>
#include <aws/waf/model/CreateRegexPatternSetRequest.h>
#include <aws/waf/model/CreateRuleGroupRequest.h>
#include <aws/waf/model/CreateRuleRequest.h>
#include <aws/waf/model/CreateSizeConstraintSetRequest.h>
#include <aws/waf/model/CreateSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/CreateWebACLMigrationStackRequest.h>
#include <aws/waf/model/CreateWebACLRequest.h>
#include <aws/waf/model/CreateXssMatchSetRequest.h>
#include <aws/waf/model/DeleteByteMatchSetRequest.h>
#include <aws/waf/model/DeleteGeoMatchSetRequest.h>
#include <aws/waf/model/DeleteIPSetRequest.h>
#include <aws/waf/model/DeleteLoggingConfigurationRequest.h>
#include <aws/waf/model/DeletePermissionPolicyRequest.h>
#include <aws/waf/model/DeleteRateBasedRuleRequest.h>
#include <aws/waf/model/DeleteRegexMatchSetRequest.h>
#include <aws/waf/model/DeleteRegexPatternSetRequest.h>
#include <aws/waf/model/DeleteRuleGroupRequest.h>
#include <aws/waf/model/DeleteRuleRequest.h>
#include <aws/waf/model/DeleteSizeConstraintSetRequest.h>
#include <aws/waf/model/DeleteSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/DeleteWebACLRequest.h>
#include <aws/waf/model/DeleteXssMatchSetRequest.h>
#include <aws/waf/model/GetByteMatchSetRequest.h>
#include <aws/waf/model/GetChangeTokenRequest.h>
#include <aws/waf/model/GetChangeTokenStatusRequest.h>
#include <aws/waf/model/GetGeoMatchSetRequest.h>
#include <aws/waf/model/GetIPSetRequest.h>
#include <aws/waf/model/GetLoggingConfigurationRequest.h>
#include <aws/waf/model/GetPermissionPolicyRequest.h>
#include <aws/waf/model/GetRateBasedRuleManagedKeysRequest.h>
#include <aws/waf/model/GetRateBasedRuleRequest.h>
#include <aws/waf/model/GetRegexMatchSetRequest.h>
#include <aws/waf/model/GetRegexPatternSetRequest.h>
#include <aws/waf/model/GetRuleGroupRequest.h>
#include <aws/waf/model/GetRuleRequest.h>
#include <aws/waf/model/GetSampledRequestsRequest.h>
#include <aws/waf/model/GetSizeConstraintSetRequest.h>
#include <aws/waf/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/GetWebACLRequest.h>
#include <aws/waf/model/GetXssMatchSetRequest.h>
#include <aws/waf/model/ListActivatedRulesInRuleGroupRequest.h>
#include <aws/waf/model/ListByteMatchSetsRequest.h>
#include <aws/waf/model/ListGeoMatchSetsRequest.h>
#include <aws/waf/model/ListIPSetsRequest.h>
#include <aws/waf/model/ListLoggingConfigurationsRequest.h>
#include <aws/waf/model/ListRateBasedRulesRequest.h>
#include <aws/waf/model/ListRegexMatchSetsRequest.h>
#include <aws/waf/model/ListRegexPatternSetsRequest.h>
#include <aws/waf/model/ListRuleGroupsRequest.h>
#include <aws/waf/model/ListRulesRequest.h>
#include <aws/waf/model/ListSizeConstraintSetsRequest.h>
#include <aws/waf/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/waf/model/ListSubscribedRuleGroupsRequest.h>
#include <aws/waf/model/ListTagsForResourceRequest.h>
#include <aws/waf/model/ListWebACLsRequest.h>
#include <aws/waf/model/ListXssMatchSetsRequest.h>
#include <aws/waf/model/PutLoggingConfigurationRequest.h>
#include <aws/waf/model/PutPermissionPolicyRequest.h>
#include <aws/waf/model/TagResourceRequest.h>
#include <aws/waf/model/UntagResourceRequest.h>
#include <aws/waf/model/UpdateByteMatchSetRequest.h>
#include <aws/waf/model/UpdateGeoMatchSetRequest.h>
#include <aws/waf/model/UpdateIPSetRequest.h>
#include <aws/waf/model/UpdateRateBasedRuleRequest.h>
#include <aws/waf/model/UpdateRegexMatchSetRequest.h>
#include <aws/waf/model/UpdateRegexPatternSetRequest.h>
#include <aws/waf/model/UpdateRuleGroupRequest.h>
#include <aws/waf/model/UpdateRuleRequest.h>
#include <aws/waf/model/UpdateSizeConstraintSetRequest.h>
#include <aws/waf/model/UpdateSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/UpdateWebACLRequest.h>
#include <aws/waf/model/UpdateXssMatchSetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WAF;
using namespace Aws::WAF::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WAF {
const char SERVICE_NAME[] = "waf";
const char ALLOCATION_TAG[] = "WAFClient";
}  // namespace WAF
}  // namespace Aws
const char* WAFClient::GetServiceName() { return SERVICE_NAME; }
const char* WAFClient::GetAllocationTag() { return ALLOCATION_TAG; }

WAFClient::WAFClient(const WAF::WAFClientConfiguration& clientConfiguration, std::shared_ptr<WAFEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFClient::WAFClient(const AWSCredentials& credentials, std::shared_ptr<WAFEndpointProviderBase> endpointProvider,
                     const WAF::WAFClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFClient::WAFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<WAFEndpointProviderBase> endpointProvider, const WAF::WAFClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WAFClient::WAFClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFClient::WAFClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFClient::WAFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WAFClient::~WAFClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WAFEndpointProviderBase>& WAFClient::accessEndpointProvider() { return m_endpointProvider; }

void WAFClient::init(const WAF::WAFClientConfiguration& config) {
  AWSClient::SetServiceClientName("WAF");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "waf");
}

void WAFClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WAFClient::InvokeOperationOutcome WAFClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateByteMatchSetOutcome WAFClient::CreateByteMatchSet(const CreateByteMatchSetRequest& request) const {
  return CreateByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGeoMatchSetOutcome WAFClient::CreateGeoMatchSet(const CreateGeoMatchSetRequest& request) const {
  return CreateGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIPSetOutcome WAFClient::CreateIPSet(const CreateIPSetRequest& request) const {
  return CreateIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRateBasedRuleOutcome WAFClient::CreateRateBasedRule(const CreateRateBasedRuleRequest& request) const {
  return CreateRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegexMatchSetOutcome WAFClient::CreateRegexMatchSet(const CreateRegexMatchSetRequest& request) const {
  return CreateRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegexPatternSetOutcome WAFClient::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const {
  return CreateRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleOutcome WAFClient::CreateRule(const CreateRuleRequest& request) const {
  return CreateRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleGroupOutcome WAFClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const {
  return CreateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSizeConstraintSetOutcome WAFClient::CreateSizeConstraintSet(const CreateSizeConstraintSetRequest& request) const {
  return CreateSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSqlInjectionMatchSetOutcome WAFClient::CreateSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest& request) const {
  return CreateSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebACLOutcome WAFClient::CreateWebACL(const CreateWebACLRequest& request) const {
  return CreateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebACLMigrationStackOutcome WAFClient::CreateWebACLMigrationStack(const CreateWebACLMigrationStackRequest& request) const {
  return CreateWebACLMigrationStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateXssMatchSetOutcome WAFClient::CreateXssMatchSet(const CreateXssMatchSetRequest& request) const {
  return CreateXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteByteMatchSetOutcome WAFClient::DeleteByteMatchSet(const DeleteByteMatchSetRequest& request) const {
  return DeleteByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGeoMatchSetOutcome WAFClient::DeleteGeoMatchSet(const DeleteGeoMatchSetRequest& request) const {
  return DeleteGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIPSetOutcome WAFClient::DeleteIPSet(const DeleteIPSetRequest& request) const {
  return DeleteIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoggingConfigurationOutcome WAFClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const {
  return DeleteLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePermissionPolicyOutcome WAFClient::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const {
  return DeletePermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRateBasedRuleOutcome WAFClient::DeleteRateBasedRule(const DeleteRateBasedRuleRequest& request) const {
  return DeleteRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegexMatchSetOutcome WAFClient::DeleteRegexMatchSet(const DeleteRegexMatchSetRequest& request) const {
  return DeleteRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegexPatternSetOutcome WAFClient::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const {
  return DeleteRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleOutcome WAFClient::DeleteRule(const DeleteRuleRequest& request) const {
  return DeleteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleGroupOutcome WAFClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const {
  return DeleteRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSizeConstraintSetOutcome WAFClient::DeleteSizeConstraintSet(const DeleteSizeConstraintSetRequest& request) const {
  return DeleteSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSqlInjectionMatchSetOutcome WAFClient::DeleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest& request) const {
  return DeleteSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebACLOutcome WAFClient::DeleteWebACL(const DeleteWebACLRequest& request) const {
  return DeleteWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteXssMatchSetOutcome WAFClient::DeleteXssMatchSet(const DeleteXssMatchSetRequest& request) const {
  return DeleteXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetByteMatchSetOutcome WAFClient::GetByteMatchSet(const GetByteMatchSetRequest& request) const {
  return GetByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetChangeTokenOutcome WAFClient::GetChangeToken(const GetChangeTokenRequest& request) const {
  return GetChangeTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetChangeTokenStatusOutcome WAFClient::GetChangeTokenStatus(const GetChangeTokenStatusRequest& request) const {
  return GetChangeTokenStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGeoMatchSetOutcome WAFClient::GetGeoMatchSet(const GetGeoMatchSetRequest& request) const {
  return GetGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIPSetOutcome WAFClient::GetIPSet(const GetIPSetRequest& request) const {
  return GetIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoggingConfigurationOutcome WAFClient::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const {
  return GetLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPermissionPolicyOutcome WAFClient::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const {
  return GetPermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRateBasedRuleOutcome WAFClient::GetRateBasedRule(const GetRateBasedRuleRequest& request) const {
  return GetRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRateBasedRuleManagedKeysOutcome WAFClient::GetRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest& request) const {
  return GetRateBasedRuleManagedKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegexMatchSetOutcome WAFClient::GetRegexMatchSet(const GetRegexMatchSetRequest& request) const {
  return GetRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegexPatternSetOutcome WAFClient::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const {
  return GetRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRuleOutcome WAFClient::GetRule(const GetRuleRequest& request) const {
  return GetRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRuleGroupOutcome WAFClient::GetRuleGroup(const GetRuleGroupRequest& request) const {
  return GetRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSampledRequestsOutcome WAFClient::GetSampledRequests(const GetSampledRequestsRequest& request) const {
  return GetSampledRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSizeConstraintSetOutcome WAFClient::GetSizeConstraintSet(const GetSizeConstraintSetRequest& request) const {
  return GetSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSqlInjectionMatchSetOutcome WAFClient::GetSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest& request) const {
  return GetSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWebACLOutcome WAFClient::GetWebACL(const GetWebACLRequest& request) const {
  return GetWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetXssMatchSetOutcome WAFClient::GetXssMatchSet(const GetXssMatchSetRequest& request) const {
  return GetXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListActivatedRulesInRuleGroupOutcome WAFClient::ListActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest& request) const {
  return ListActivatedRulesInRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListByteMatchSetsOutcome WAFClient::ListByteMatchSets(const ListByteMatchSetsRequest& request) const {
  return ListByteMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGeoMatchSetsOutcome WAFClient::ListGeoMatchSets(const ListGeoMatchSetsRequest& request) const {
  return ListGeoMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIPSetsOutcome WAFClient::ListIPSets(const ListIPSetsRequest& request) const {
  return ListIPSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLoggingConfigurationsOutcome WAFClient::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const {
  return ListLoggingConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRateBasedRulesOutcome WAFClient::ListRateBasedRules(const ListRateBasedRulesRequest& request) const {
  return ListRateBasedRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegexMatchSetsOutcome WAFClient::ListRegexMatchSets(const ListRegexMatchSetsRequest& request) const {
  return ListRegexMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegexPatternSetsOutcome WAFClient::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const {
  return ListRegexPatternSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleGroupsOutcome WAFClient::ListRuleGroups(const ListRuleGroupsRequest& request) const {
  return ListRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRulesOutcome WAFClient::ListRules(const ListRulesRequest& request) const {
  return ListRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSizeConstraintSetsOutcome WAFClient::ListSizeConstraintSets(const ListSizeConstraintSetsRequest& request) const {
  return ListSizeConstraintSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSqlInjectionMatchSetsOutcome WAFClient::ListSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest& request) const {
  return ListSqlInjectionMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSubscribedRuleGroupsOutcome WAFClient::ListSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest& request) const {
  return ListSubscribedRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome WAFClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWebACLsOutcome WAFClient::ListWebACLs(const ListWebACLsRequest& request) const {
  return ListWebACLsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListXssMatchSetsOutcome WAFClient::ListXssMatchSets(const ListXssMatchSetsRequest& request) const {
  return ListXssMatchSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLoggingConfigurationOutcome WAFClient::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const {
  return PutLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPermissionPolicyOutcome WAFClient::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const {
  return PutPermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome WAFClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome WAFClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateByteMatchSetOutcome WAFClient::UpdateByteMatchSet(const UpdateByteMatchSetRequest& request) const {
  return UpdateByteMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGeoMatchSetOutcome WAFClient::UpdateGeoMatchSet(const UpdateGeoMatchSetRequest& request) const {
  return UpdateGeoMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIPSetOutcome WAFClient::UpdateIPSet(const UpdateIPSetRequest& request) const {
  return UpdateIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRateBasedRuleOutcome WAFClient::UpdateRateBasedRule(const UpdateRateBasedRuleRequest& request) const {
  return UpdateRateBasedRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRegexMatchSetOutcome WAFClient::UpdateRegexMatchSet(const UpdateRegexMatchSetRequest& request) const {
  return UpdateRegexMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRegexPatternSetOutcome WAFClient::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const {
  return UpdateRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleOutcome WAFClient::UpdateRule(const UpdateRuleRequest& request) const {
  return UpdateRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleGroupOutcome WAFClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const {
  return UpdateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSizeConstraintSetOutcome WAFClient::UpdateSizeConstraintSet(const UpdateSizeConstraintSetRequest& request) const {
  return UpdateSizeConstraintSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSqlInjectionMatchSetOutcome WAFClient::UpdateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest& request) const {
  return UpdateSqlInjectionMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWebACLOutcome WAFClient::UpdateWebACL(const UpdateWebACLRequest& request) const {
  return UpdateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateXssMatchSetOutcome WAFClient::UpdateXssMatchSet(const UpdateXssMatchSetRequest& request) const {
  return UpdateXssMatchSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
