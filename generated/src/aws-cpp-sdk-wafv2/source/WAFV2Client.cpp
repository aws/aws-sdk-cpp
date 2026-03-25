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
#include <aws/wafv2/WAFV2Client.h>
#include <aws/wafv2/WAFV2EndpointProvider.h>
#include <aws/wafv2/WAFV2ErrorMarshaller.h>
#include <aws/wafv2/model/AssociateWebACLRequest.h>
#include <aws/wafv2/model/CheckCapacityRequest.h>
#include <aws/wafv2/model/CreateAPIKeyRequest.h>
#include <aws/wafv2/model/CreateIPSetRequest.h>
#include <aws/wafv2/model/CreateRegexPatternSetRequest.h>
#include <aws/wafv2/model/CreateRuleGroupRequest.h>
#include <aws/wafv2/model/CreateWebACLRequest.h>
#include <aws/wafv2/model/DeleteAPIKeyRequest.h>
#include <aws/wafv2/model/DeleteFirewallManagerRuleGroupsRequest.h>
#include <aws/wafv2/model/DeleteIPSetRequest.h>
#include <aws/wafv2/model/DeleteLoggingConfigurationRequest.h>
#include <aws/wafv2/model/DeletePermissionPolicyRequest.h>
#include <aws/wafv2/model/DeleteRegexPatternSetRequest.h>
#include <aws/wafv2/model/DeleteRuleGroupRequest.h>
#include <aws/wafv2/model/DeleteWebACLRequest.h>
#include <aws/wafv2/model/DescribeAllManagedProductsRequest.h>
#include <aws/wafv2/model/DescribeManagedProductsByVendorRequest.h>
#include <aws/wafv2/model/DescribeManagedRuleGroupRequest.h>
#include <aws/wafv2/model/DisassociateWebACLRequest.h>
#include <aws/wafv2/model/GenerateMobileSdkReleaseUrlRequest.h>
#include <aws/wafv2/model/GetDecryptedAPIKeyRequest.h>
#include <aws/wafv2/model/GetIPSetRequest.h>
#include <aws/wafv2/model/GetLoggingConfigurationRequest.h>
#include <aws/wafv2/model/GetManagedRuleSetRequest.h>
#include <aws/wafv2/model/GetMobileSdkReleaseRequest.h>
#include <aws/wafv2/model/GetPermissionPolicyRequest.h>
#include <aws/wafv2/model/GetRateBasedStatementManagedKeysRequest.h>
#include <aws/wafv2/model/GetRegexPatternSetRequest.h>
#include <aws/wafv2/model/GetRuleGroupRequest.h>
#include <aws/wafv2/model/GetSampledRequestsRequest.h>
#include <aws/wafv2/model/GetTopPathStatisticsByTrafficRequest.h>
#include <aws/wafv2/model/GetWebACLForResourceRequest.h>
#include <aws/wafv2/model/GetWebACLRequest.h>
#include <aws/wafv2/model/ListAPIKeysRequest.h>
#include <aws/wafv2/model/ListAvailableManagedRuleGroupVersionsRequest.h>
#include <aws/wafv2/model/ListAvailableManagedRuleGroupsRequest.h>
#include <aws/wafv2/model/ListIPSetsRequest.h>
#include <aws/wafv2/model/ListLoggingConfigurationsRequest.h>
#include <aws/wafv2/model/ListManagedRuleSetsRequest.h>
#include <aws/wafv2/model/ListMobileSdkReleasesRequest.h>
#include <aws/wafv2/model/ListRegexPatternSetsRequest.h>
#include <aws/wafv2/model/ListResourcesForWebACLRequest.h>
#include <aws/wafv2/model/ListRuleGroupsRequest.h>
#include <aws/wafv2/model/ListTagsForResourceRequest.h>
#include <aws/wafv2/model/ListWebACLsRequest.h>
#include <aws/wafv2/model/PutLoggingConfigurationRequest.h>
#include <aws/wafv2/model/PutManagedRuleSetVersionsRequest.h>
#include <aws/wafv2/model/PutPermissionPolicyRequest.h>
#include <aws/wafv2/model/TagResourceRequest.h>
#include <aws/wafv2/model/UntagResourceRequest.h>
#include <aws/wafv2/model/UpdateIPSetRequest.h>
#include <aws/wafv2/model/UpdateManagedRuleSetVersionExpiryDateRequest.h>
#include <aws/wafv2/model/UpdateRegexPatternSetRequest.h>
#include <aws/wafv2/model/UpdateRuleGroupRequest.h>
#include <aws/wafv2/model/UpdateWebACLRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WAFV2;
using namespace Aws::WAFV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WAFV2 {
const char SERVICE_NAME[] = "wafv2";
const char ALLOCATION_TAG[] = "WAFV2Client";
}  // namespace WAFV2
}  // namespace Aws
const char* WAFV2Client::GetServiceName() { return SERVICE_NAME; }
const char* WAFV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

WAFV2Client::WAFV2Client(const WAFV2::WAFV2ClientConfiguration& clientConfiguration,
                         std::shared_ptr<WAFV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFV2Client::WAFV2Client(const AWSCredentials& credentials, std::shared_ptr<WAFV2EndpointProviderBase> endpointProvider,
                         const WAFV2::WAFV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFV2Client::WAFV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<WAFV2EndpointProviderBase> endpointProvider,
                         const WAFV2::WAFV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WAFV2Client::WAFV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFV2Client::WAFV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WAFV2Client::WAFV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WAFV2Client::~WAFV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WAFV2EndpointProviderBase>& WAFV2Client::accessEndpointProvider() { return m_endpointProvider; }

void WAFV2Client::init(const WAFV2::WAFV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("WAFV2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "wafv2");
}

void WAFV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WAFV2Client::InvokeOperationOutcome WAFV2Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateWebACLOutcome WAFV2Client::AssociateWebACL(const AssociateWebACLRequest& request) const {
  return AssociateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckCapacityOutcome WAFV2Client::CheckCapacity(const CheckCapacityRequest& request) const {
  return CheckCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAPIKeyOutcome WAFV2Client::CreateAPIKey(const CreateAPIKeyRequest& request) const {
  return CreateAPIKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIPSetOutcome WAFV2Client::CreateIPSet(const CreateIPSetRequest& request) const {
  return CreateIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegexPatternSetOutcome WAFV2Client::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const {
  return CreateRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleGroupOutcome WAFV2Client::CreateRuleGroup(const CreateRuleGroupRequest& request) const {
  return CreateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebACLOutcome WAFV2Client::CreateWebACL(const CreateWebACLRequest& request) const {
  return CreateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAPIKeyOutcome WAFV2Client::DeleteAPIKey(const DeleteAPIKeyRequest& request) const {
  return DeleteAPIKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFirewallManagerRuleGroupsOutcome WAFV2Client::DeleteFirewallManagerRuleGroups(
    const DeleteFirewallManagerRuleGroupsRequest& request) const {
  return DeleteFirewallManagerRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIPSetOutcome WAFV2Client::DeleteIPSet(const DeleteIPSetRequest& request) const {
  return DeleteIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoggingConfigurationOutcome WAFV2Client::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const {
  return DeleteLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePermissionPolicyOutcome WAFV2Client::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const {
  return DeletePermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegexPatternSetOutcome WAFV2Client::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const {
  return DeleteRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleGroupOutcome WAFV2Client::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const {
  return DeleteRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebACLOutcome WAFV2Client::DeleteWebACL(const DeleteWebACLRequest& request) const {
  return DeleteWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAllManagedProductsOutcome WAFV2Client::DescribeAllManagedProducts(const DescribeAllManagedProductsRequest& request) const {
  return DescribeAllManagedProductsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeManagedProductsByVendorOutcome WAFV2Client::DescribeManagedProductsByVendor(
    const DescribeManagedProductsByVendorRequest& request) const {
  return DescribeManagedProductsByVendorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeManagedRuleGroupOutcome WAFV2Client::DescribeManagedRuleGroup(const DescribeManagedRuleGroupRequest& request) const {
  return DescribeManagedRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateWebACLOutcome WAFV2Client::DisassociateWebACL(const DisassociateWebACLRequest& request) const {
  return DisassociateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateMobileSdkReleaseUrlOutcome WAFV2Client::GenerateMobileSdkReleaseUrl(const GenerateMobileSdkReleaseUrlRequest& request) const {
  return GenerateMobileSdkReleaseUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDecryptedAPIKeyOutcome WAFV2Client::GetDecryptedAPIKey(const GetDecryptedAPIKeyRequest& request) const {
  return GetDecryptedAPIKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIPSetOutcome WAFV2Client::GetIPSet(const GetIPSetRequest& request) const {
  return GetIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoggingConfigurationOutcome WAFV2Client::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const {
  return GetLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetManagedRuleSetOutcome WAFV2Client::GetManagedRuleSet(const GetManagedRuleSetRequest& request) const {
  return GetManagedRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMobileSdkReleaseOutcome WAFV2Client::GetMobileSdkRelease(const GetMobileSdkReleaseRequest& request) const {
  return GetMobileSdkReleaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPermissionPolicyOutcome WAFV2Client::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const {
  return GetPermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRateBasedStatementManagedKeysOutcome WAFV2Client::GetRateBasedStatementManagedKeys(
    const GetRateBasedStatementManagedKeysRequest& request) const {
  return GetRateBasedStatementManagedKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegexPatternSetOutcome WAFV2Client::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const {
  return GetRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRuleGroupOutcome WAFV2Client::GetRuleGroup(const GetRuleGroupRequest& request) const {
  return GetRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSampledRequestsOutcome WAFV2Client::GetSampledRequests(const GetSampledRequestsRequest& request) const {
  return GetSampledRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTopPathStatisticsByTrafficOutcome WAFV2Client::GetTopPathStatisticsByTraffic(const GetTopPathStatisticsByTrafficRequest& request) const {
  return GetTopPathStatisticsByTrafficOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWebACLOutcome WAFV2Client::GetWebACL(const GetWebACLRequest& request) const {
  return GetWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWebACLForResourceOutcome WAFV2Client::GetWebACLForResource(const GetWebACLForResourceRequest& request) const {
  return GetWebACLForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAPIKeysOutcome WAFV2Client::ListAPIKeys(const ListAPIKeysRequest& request) const {
  return ListAPIKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAvailableManagedRuleGroupVersionsOutcome WAFV2Client::ListAvailableManagedRuleGroupVersions(
    const ListAvailableManagedRuleGroupVersionsRequest& request) const {
  return ListAvailableManagedRuleGroupVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAvailableManagedRuleGroupsOutcome WAFV2Client::ListAvailableManagedRuleGroups(
    const ListAvailableManagedRuleGroupsRequest& request) const {
  return ListAvailableManagedRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIPSetsOutcome WAFV2Client::ListIPSets(const ListIPSetsRequest& request) const {
  return ListIPSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLoggingConfigurationsOutcome WAFV2Client::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const {
  return ListLoggingConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListManagedRuleSetsOutcome WAFV2Client::ListManagedRuleSets(const ListManagedRuleSetsRequest& request) const {
  return ListManagedRuleSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMobileSdkReleasesOutcome WAFV2Client::ListMobileSdkReleases(const ListMobileSdkReleasesRequest& request) const {
  return ListMobileSdkReleasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegexPatternSetsOutcome WAFV2Client::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const {
  return ListRegexPatternSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourcesForWebACLOutcome WAFV2Client::ListResourcesForWebACL(const ListResourcesForWebACLRequest& request) const {
  return ListResourcesForWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleGroupsOutcome WAFV2Client::ListRuleGroups(const ListRuleGroupsRequest& request) const {
  return ListRuleGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome WAFV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWebACLsOutcome WAFV2Client::ListWebACLs(const ListWebACLsRequest& request) const {
  return ListWebACLsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLoggingConfigurationOutcome WAFV2Client::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const {
  return PutLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutManagedRuleSetVersionsOutcome WAFV2Client::PutManagedRuleSetVersions(const PutManagedRuleSetVersionsRequest& request) const {
  return PutManagedRuleSetVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPermissionPolicyOutcome WAFV2Client::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const {
  return PutPermissionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome WAFV2Client::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome WAFV2Client::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIPSetOutcome WAFV2Client::UpdateIPSet(const UpdateIPSetRequest& request) const {
  return UpdateIPSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateManagedRuleSetVersionExpiryDateOutcome WAFV2Client::UpdateManagedRuleSetVersionExpiryDate(
    const UpdateManagedRuleSetVersionExpiryDateRequest& request) const {
  return UpdateManagedRuleSetVersionExpiryDateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRegexPatternSetOutcome WAFV2Client::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const {
  return UpdateRegexPatternSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleGroupOutcome WAFV2Client::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const {
  return UpdateRuleGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWebACLOutcome WAFV2Client::UpdateWebACL(const UpdateWebACLRequest& request) const {
  return UpdateWebACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
