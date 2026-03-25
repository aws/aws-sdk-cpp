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
#include <aws/shield/ShieldClient.h>
#include <aws/shield/ShieldEndpointProvider.h>
#include <aws/shield/ShieldErrorMarshaller.h>
#include <aws/shield/model/AssociateDRTLogBucketRequest.h>
#include <aws/shield/model/AssociateDRTRoleRequest.h>
#include <aws/shield/model/AssociateHealthCheckRequest.h>
#include <aws/shield/model/AssociateProactiveEngagementDetailsRequest.h>
#include <aws/shield/model/CreateProtectionGroupRequest.h>
#include <aws/shield/model/CreateProtectionRequest.h>
#include <aws/shield/model/CreateSubscriptionRequest.h>
#include <aws/shield/model/DeleteProtectionGroupRequest.h>
#include <aws/shield/model/DeleteProtectionRequest.h>
#include <aws/shield/model/DescribeAttackRequest.h>
#include <aws/shield/model/DescribeAttackStatisticsRequest.h>
#include <aws/shield/model/DescribeDRTAccessRequest.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsRequest.h>
#include <aws/shield/model/DescribeProtectionGroupRequest.h>
#include <aws/shield/model/DescribeProtectionRequest.h>
#include <aws/shield/model/DescribeSubscriptionRequest.h>
#include <aws/shield/model/DisableApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/DisableProactiveEngagementRequest.h>
#include <aws/shield/model/DisassociateDRTLogBucketRequest.h>
#include <aws/shield/model/DisassociateDRTRoleRequest.h>
#include <aws/shield/model/DisassociateHealthCheckRequest.h>
#include <aws/shield/model/EnableApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/EnableProactiveEngagementRequest.h>
#include <aws/shield/model/GetSubscriptionStateRequest.h>
#include <aws/shield/model/ListAttacksRequest.h>
#include <aws/shield/model/ListProtectionGroupsRequest.h>
#include <aws/shield/model/ListProtectionsRequest.h>
#include <aws/shield/model/ListResourcesInProtectionGroupRequest.h>
#include <aws/shield/model/ListTagsForResourceRequest.h>
#include <aws/shield/model/TagResourceRequest.h>
#include <aws/shield/model/UntagResourceRequest.h>
#include <aws/shield/model/UpdateApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsRequest.h>
#include <aws/shield/model/UpdateProtectionGroupRequest.h>
#include <aws/shield/model/UpdateSubscriptionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Shield;
using namespace Aws::Shield::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Shield {
const char SERVICE_NAME[] = "shield";
const char ALLOCATION_TAG[] = "ShieldClient";
}  // namespace Shield
}  // namespace Aws
const char* ShieldClient::GetServiceName() { return SERVICE_NAME; }
const char* ShieldClient::GetAllocationTag() { return ALLOCATION_TAG; }

ShieldClient::ShieldClient(const Shield::ShieldClientConfiguration& clientConfiguration,
                           std::shared_ptr<ShieldEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ShieldClient::ShieldClient(const AWSCredentials& credentials, std::shared_ptr<ShieldEndpointProviderBase> endpointProvider,
                           const Shield::ShieldClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ShieldClient::ShieldClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ShieldEndpointProviderBase> endpointProvider,
                           const Shield::ShieldClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ShieldClient::ShieldClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ShieldClient::ShieldClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ShieldClient::ShieldClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ShieldClient::~ShieldClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ShieldEndpointProviderBase>& ShieldClient::accessEndpointProvider() { return m_endpointProvider; }

void ShieldClient::init(const Shield::ShieldClientConfiguration& config) {
  AWSClient::SetServiceClientName("Shield");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "shield");
}

void ShieldClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ShieldClient::InvokeOperationOutcome ShieldClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateDRTLogBucketOutcome ShieldClient::AssociateDRTLogBucket(const AssociateDRTLogBucketRequest& request) const {
  return AssociateDRTLogBucketOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateDRTRoleOutcome ShieldClient::AssociateDRTRole(const AssociateDRTRoleRequest& request) const {
  return AssociateDRTRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateHealthCheckOutcome ShieldClient::AssociateHealthCheck(const AssociateHealthCheckRequest& request) const {
  return AssociateHealthCheckOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateProactiveEngagementDetailsOutcome ShieldClient::AssociateProactiveEngagementDetails(
    const AssociateProactiveEngagementDetailsRequest& request) const {
  return AssociateProactiveEngagementDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProtectionOutcome ShieldClient::CreateProtection(const CreateProtectionRequest& request) const {
  return CreateProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProtectionGroupOutcome ShieldClient::CreateProtectionGroup(const CreateProtectionGroupRequest& request) const {
  return CreateProtectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriptionOutcome ShieldClient::CreateSubscription(const CreateSubscriptionRequest& request) const {
  return CreateSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProtectionOutcome ShieldClient::DeleteProtection(const DeleteProtectionRequest& request) const {
  return DeleteProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProtectionGroupOutcome ShieldClient::DeleteProtectionGroup(const DeleteProtectionGroupRequest& request) const {
  return DeleteProtectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAttackOutcome ShieldClient::DescribeAttack(const DescribeAttackRequest& request) const {
  return DescribeAttackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAttackStatisticsOutcome ShieldClient::DescribeAttackStatistics(const DescribeAttackStatisticsRequest& request) const {
  return DescribeAttackStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDRTAccessOutcome ShieldClient::DescribeDRTAccess(const DescribeDRTAccessRequest& request) const {
  return DescribeDRTAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEmergencyContactSettingsOutcome ShieldClient::DescribeEmergencyContactSettings(
    const DescribeEmergencyContactSettingsRequest& request) const {
  return DescribeEmergencyContactSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProtectionOutcome ShieldClient::DescribeProtection(const DescribeProtectionRequest& request) const {
  return DescribeProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProtectionGroupOutcome ShieldClient::DescribeProtectionGroup(const DescribeProtectionGroupRequest& request) const {
  return DescribeProtectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSubscriptionOutcome ShieldClient::DescribeSubscription(const DescribeSubscriptionRequest& request) const {
  return DescribeSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableApplicationLayerAutomaticResponseOutcome ShieldClient::DisableApplicationLayerAutomaticResponse(
    const DisableApplicationLayerAutomaticResponseRequest& request) const {
  return DisableApplicationLayerAutomaticResponseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableProactiveEngagementOutcome ShieldClient::DisableProactiveEngagement(const DisableProactiveEngagementRequest& request) const {
  return DisableProactiveEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateDRTLogBucketOutcome ShieldClient::DisassociateDRTLogBucket(const DisassociateDRTLogBucketRequest& request) const {
  return DisassociateDRTLogBucketOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateDRTRoleOutcome ShieldClient::DisassociateDRTRole(const DisassociateDRTRoleRequest& request) const {
  return DisassociateDRTRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateHealthCheckOutcome ShieldClient::DisassociateHealthCheck(const DisassociateHealthCheckRequest& request) const {
  return DisassociateHealthCheckOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableApplicationLayerAutomaticResponseOutcome ShieldClient::EnableApplicationLayerAutomaticResponse(
    const EnableApplicationLayerAutomaticResponseRequest& request) const {
  return EnableApplicationLayerAutomaticResponseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableProactiveEngagementOutcome ShieldClient::EnableProactiveEngagement(const EnableProactiveEngagementRequest& request) const {
  return EnableProactiveEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSubscriptionStateOutcome ShieldClient::GetSubscriptionState(const GetSubscriptionStateRequest& request) const {
  return GetSubscriptionStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAttacksOutcome ShieldClient::ListAttacks(const ListAttacksRequest& request) const {
  return ListAttacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProtectionGroupsOutcome ShieldClient::ListProtectionGroups(const ListProtectionGroupsRequest& request) const {
  return ListProtectionGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProtectionsOutcome ShieldClient::ListProtections(const ListProtectionsRequest& request) const {
  return ListProtectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourcesInProtectionGroupOutcome ShieldClient::ListResourcesInProtectionGroup(
    const ListResourcesInProtectionGroupRequest& request) const {
  return ListResourcesInProtectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ShieldClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ShieldClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ShieldClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationLayerAutomaticResponseOutcome ShieldClient::UpdateApplicationLayerAutomaticResponse(
    const UpdateApplicationLayerAutomaticResponseRequest& request) const {
  return UpdateApplicationLayerAutomaticResponseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEmergencyContactSettingsOutcome ShieldClient::UpdateEmergencyContactSettings(
    const UpdateEmergencyContactSettingsRequest& request) const {
  return UpdateEmergencyContactSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProtectionGroupOutcome ShieldClient::UpdateProtectionGroup(const UpdateProtectionGroupRequest& request) const {
  return UpdateProtectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSubscriptionOutcome ShieldClient::UpdateSubscription(const UpdateSubscriptionRequest& request) const {
  return UpdateSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
