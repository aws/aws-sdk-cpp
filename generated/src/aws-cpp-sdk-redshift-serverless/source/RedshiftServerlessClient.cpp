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
#include <aws/redshift-serverless/RedshiftServerlessClient.h>
#include <aws/redshift-serverless/RedshiftServerlessEndpointProvider.h>
#include <aws/redshift-serverless/RedshiftServerlessErrorMarshaller.h>
#include <aws/redshift-serverless/model/ConvertRecoveryPointToSnapshotRequest.h>
#include <aws/redshift-serverless/model/CreateCustomDomainAssociationRequest.h>
#include <aws/redshift-serverless/model/CreateEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/CreateNamespaceRequest.h>
#include <aws/redshift-serverless/model/CreateReservationRequest.h>
#include <aws/redshift-serverless/model/CreateScheduledActionRequest.h>
#include <aws/redshift-serverless/model/CreateSnapshotCopyConfigurationRequest.h>
#include <aws/redshift-serverless/model/CreateSnapshotRequest.h>
#include <aws/redshift-serverless/model/CreateUsageLimitRequest.h>
#include <aws/redshift-serverless/model/CreateWorkgroupRequest.h>
#include <aws/redshift-serverless/model/DeleteCustomDomainAssociationRequest.h>
#include <aws/redshift-serverless/model/DeleteEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/DeleteNamespaceRequest.h>
#include <aws/redshift-serverless/model/DeleteResourcePolicyRequest.h>
#include <aws/redshift-serverless/model/DeleteScheduledActionRequest.h>
#include <aws/redshift-serverless/model/DeleteSnapshotCopyConfigurationRequest.h>
#include <aws/redshift-serverless/model/DeleteSnapshotRequest.h>
#include <aws/redshift-serverless/model/DeleteUsageLimitRequest.h>
#include <aws/redshift-serverless/model/DeleteWorkgroupRequest.h>
#include <aws/redshift-serverless/model/GetCredentialsRequest.h>
#include <aws/redshift-serverless/model/GetCustomDomainAssociationRequest.h>
#include <aws/redshift-serverless/model/GetEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/GetIdentityCenterAuthTokenRequest.h>
#include <aws/redshift-serverless/model/GetNamespaceRequest.h>
#include <aws/redshift-serverless/model/GetRecoveryPointRequest.h>
#include <aws/redshift-serverless/model/GetReservationOfferingRequest.h>
#include <aws/redshift-serverless/model/GetReservationRequest.h>
#include <aws/redshift-serverless/model/GetResourcePolicyRequest.h>
#include <aws/redshift-serverless/model/GetScheduledActionRequest.h>
#include <aws/redshift-serverless/model/GetSnapshotRequest.h>
#include <aws/redshift-serverless/model/GetTableRestoreStatusRequest.h>
#include <aws/redshift-serverless/model/GetTrackRequest.h>
#include <aws/redshift-serverless/model/GetUsageLimitRequest.h>
#include <aws/redshift-serverless/model/GetWorkgroupRequest.h>
#include <aws/redshift-serverless/model/ListCustomDomainAssociationsRequest.h>
#include <aws/redshift-serverless/model/ListEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/ListManagedWorkgroupsRequest.h>
#include <aws/redshift-serverless/model/ListNamespacesRequest.h>
#include <aws/redshift-serverless/model/ListRecoveryPointsRequest.h>
#include <aws/redshift-serverless/model/ListReservationOfferingsRequest.h>
#include <aws/redshift-serverless/model/ListReservationsRequest.h>
#include <aws/redshift-serverless/model/ListScheduledActionsRequest.h>
#include <aws/redshift-serverless/model/ListSnapshotCopyConfigurationsRequest.h>
#include <aws/redshift-serverless/model/ListSnapshotsRequest.h>
#include <aws/redshift-serverless/model/ListTableRestoreStatusRequest.h>
#include <aws/redshift-serverless/model/ListTagsForResourceRequest.h>
#include <aws/redshift-serverless/model/ListTracksRequest.h>
#include <aws/redshift-serverless/model/ListUsageLimitsRequest.h>
#include <aws/redshift-serverless/model/ListWorkgroupsRequest.h>
#include <aws/redshift-serverless/model/PutResourcePolicyRequest.h>
#include <aws/redshift-serverless/model/RestoreFromRecoveryPointRequest.h>
#include <aws/redshift-serverless/model/RestoreFromSnapshotRequest.h>
#include <aws/redshift-serverless/model/RestoreTableFromRecoveryPointRequest.h>
#include <aws/redshift-serverless/model/RestoreTableFromSnapshotRequest.h>
#include <aws/redshift-serverless/model/TagResourceRequest.h>
#include <aws/redshift-serverless/model/UntagResourceRequest.h>
#include <aws/redshift-serverless/model/UpdateCustomDomainAssociationRequest.h>
#include <aws/redshift-serverless/model/UpdateEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/UpdateLakehouseConfigurationRequest.h>
#include <aws/redshift-serverless/model/UpdateNamespaceRequest.h>
#include <aws/redshift-serverless/model/UpdateScheduledActionRequest.h>
#include <aws/redshift-serverless/model/UpdateSnapshotCopyConfigurationRequest.h>
#include <aws/redshift-serverless/model/UpdateSnapshotRequest.h>
#include <aws/redshift-serverless/model/UpdateUsageLimitRequest.h>
#include <aws/redshift-serverless/model/UpdateWorkgroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RedshiftServerless;
using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RedshiftServerless {
const char SERVICE_NAME[] = "redshift-serverless";
const char ALLOCATION_TAG[] = "RedshiftServerlessClient";
}  // namespace RedshiftServerless
}  // namespace Aws
const char* RedshiftServerlessClient::GetServiceName() { return SERVICE_NAME; }
const char* RedshiftServerlessClient::GetAllocationTag() { return ALLOCATION_TAG; }

RedshiftServerlessClient::RedshiftServerlessClient(const RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider,
                                                   const RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider,
                                                   const RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RedshiftServerlessClient::RedshiftServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RedshiftServerlessClient::~RedshiftServerlessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RedshiftServerlessEndpointProviderBase>& RedshiftServerlessClient::accessEndpointProvider() { return m_endpointProvider; }

void RedshiftServerlessClient::init(const RedshiftServerless::RedshiftServerlessClientConfiguration& config) {
  AWSClient::SetServiceClientName("Redshift Serverless");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "redshift-serverless");
}

void RedshiftServerlessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RedshiftServerlessClient::InvokeOperationOutcome RedshiftServerlessClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

ConvertRecoveryPointToSnapshotOutcome RedshiftServerlessClient::ConvertRecoveryPointToSnapshot(
    const ConvertRecoveryPointToSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ConvertRecoveryPointToSnapshotOutcome(result.GetResultWithOwnership())
                            : ConvertRecoveryPointToSnapshotOutcome(std::move(result.GetError()));
}

CreateCustomDomainAssociationOutcome RedshiftServerlessClient::CreateCustomDomainAssociation(
    const CreateCustomDomainAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomDomainAssociationOutcome(result.GetResultWithOwnership())
                            : CreateCustomDomainAssociationOutcome(std::move(result.GetError()));
}

CreateEndpointAccessOutcome RedshiftServerlessClient::CreateEndpointAccess(const CreateEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEndpointAccessOutcome(result.GetResultWithOwnership())
                            : CreateEndpointAccessOutcome(std::move(result.GetError()));
}

CreateNamespaceOutcome RedshiftServerlessClient::CreateNamespace(const CreateNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNamespaceOutcome(result.GetResultWithOwnership())
                            : CreateNamespaceOutcome(std::move(result.GetError()));
}

CreateReservationOutcome RedshiftServerlessClient::CreateReservation(const CreateReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReservationOutcome(result.GetResultWithOwnership())
                            : CreateReservationOutcome(std::move(result.GetError()));
}

CreateScheduledActionOutcome RedshiftServerlessClient::CreateScheduledAction(const CreateScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScheduledActionOutcome(result.GetResultWithOwnership())
                            : CreateScheduledActionOutcome(std::move(result.GetError()));
}

CreateSnapshotOutcome RedshiftServerlessClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotOutcome(result.GetResultWithOwnership()) : CreateSnapshotOutcome(std::move(result.GetError()));
}

CreateSnapshotCopyConfigurationOutcome RedshiftServerlessClient::CreateSnapshotCopyConfiguration(
    const CreateSnapshotCopyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotCopyConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateSnapshotCopyConfigurationOutcome(std::move(result.GetError()));
}

CreateUsageLimitOutcome RedshiftServerlessClient::CreateUsageLimit(const CreateUsageLimitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUsageLimitOutcome(result.GetResultWithOwnership())
                            : CreateUsageLimitOutcome(std::move(result.GetError()));
}

CreateWorkgroupOutcome RedshiftServerlessClient::CreateWorkgroup(const CreateWorkgroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkgroupOutcome(result.GetResultWithOwnership())
                            : CreateWorkgroupOutcome(std::move(result.GetError()));
}

DeleteCustomDomainAssociationOutcome RedshiftServerlessClient::DeleteCustomDomainAssociation(
    const DeleteCustomDomainAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCustomDomainAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteCustomDomainAssociationOutcome(std::move(result.GetError()));
}

DeleteEndpointAccessOutcome RedshiftServerlessClient::DeleteEndpointAccess(const DeleteEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEndpointAccessOutcome(result.GetResultWithOwnership())
                            : DeleteEndpointAccessOutcome(std::move(result.GetError()));
}

DeleteNamespaceOutcome RedshiftServerlessClient::DeleteNamespace(const DeleteNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNamespaceOutcome(result.GetResultWithOwnership())
                            : DeleteNamespaceOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome RedshiftServerlessClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteScheduledActionOutcome RedshiftServerlessClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteScheduledActionOutcome(result.GetResultWithOwnership())
                            : DeleteScheduledActionOutcome(std::move(result.GetError()));
}

DeleteSnapshotOutcome RedshiftServerlessClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotOutcome(result.GetResultWithOwnership()) : DeleteSnapshotOutcome(std::move(result.GetError()));
}

DeleteSnapshotCopyConfigurationOutcome RedshiftServerlessClient::DeleteSnapshotCopyConfiguration(
    const DeleteSnapshotCopyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotCopyConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteSnapshotCopyConfigurationOutcome(std::move(result.GetError()));
}

DeleteUsageLimitOutcome RedshiftServerlessClient::DeleteUsageLimit(const DeleteUsageLimitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUsageLimitOutcome(result.GetResultWithOwnership())
                            : DeleteUsageLimitOutcome(std::move(result.GetError()));
}

DeleteWorkgroupOutcome RedshiftServerlessClient::DeleteWorkgroup(const DeleteWorkgroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkgroupOutcome(result.GetResultWithOwnership())
                            : DeleteWorkgroupOutcome(std::move(result.GetError()));
}

GetCredentialsOutcome RedshiftServerlessClient::GetCredentials(const GetCredentialsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCredentialsOutcome(result.GetResultWithOwnership()) : GetCredentialsOutcome(std::move(result.GetError()));
}

GetCustomDomainAssociationOutcome RedshiftServerlessClient::GetCustomDomainAssociation(
    const GetCustomDomainAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCustomDomainAssociationOutcome(result.GetResultWithOwnership())
                            : GetCustomDomainAssociationOutcome(std::move(result.GetError()));
}

GetEndpointAccessOutcome RedshiftServerlessClient::GetEndpointAccess(const GetEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEndpointAccessOutcome(result.GetResultWithOwnership())
                            : GetEndpointAccessOutcome(std::move(result.GetError()));
}

GetIdentityCenterAuthTokenOutcome RedshiftServerlessClient::GetIdentityCenterAuthToken(
    const GetIdentityCenterAuthTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIdentityCenterAuthTokenOutcome(result.GetResultWithOwnership())
                            : GetIdentityCenterAuthTokenOutcome(std::move(result.GetError()));
}

GetNamespaceOutcome RedshiftServerlessClient::GetNamespace(const GetNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetNamespaceOutcome(result.GetResultWithOwnership()) : GetNamespaceOutcome(std::move(result.GetError()));
}

GetRecoveryPointOutcome RedshiftServerlessClient::GetRecoveryPoint(const GetRecoveryPointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRecoveryPointOutcome(result.GetResultWithOwnership())
                            : GetRecoveryPointOutcome(std::move(result.GetError()));
}

GetReservationOutcome RedshiftServerlessClient::GetReservation(const GetReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetReservationOutcome(result.GetResultWithOwnership()) : GetReservationOutcome(std::move(result.GetError()));
}

GetReservationOfferingOutcome RedshiftServerlessClient::GetReservationOffering(const GetReservationOfferingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetReservationOfferingOutcome(result.GetResultWithOwnership())
                            : GetReservationOfferingOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome RedshiftServerlessClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

GetScheduledActionOutcome RedshiftServerlessClient::GetScheduledAction(const GetScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetScheduledActionOutcome(result.GetResultWithOwnership())
                            : GetScheduledActionOutcome(std::move(result.GetError()));
}

GetSnapshotOutcome RedshiftServerlessClient::GetSnapshot(const GetSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSnapshotOutcome(result.GetResultWithOwnership()) : GetSnapshotOutcome(std::move(result.GetError()));
}

GetTableRestoreStatusOutcome RedshiftServerlessClient::GetTableRestoreStatus(const GetTableRestoreStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTableRestoreStatusOutcome(result.GetResultWithOwnership())
                            : GetTableRestoreStatusOutcome(std::move(result.GetError()));
}

GetTrackOutcome RedshiftServerlessClient::GetTrack(const GetTrackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTrackOutcome(result.GetResultWithOwnership()) : GetTrackOutcome(std::move(result.GetError()));
}

GetUsageLimitOutcome RedshiftServerlessClient::GetUsageLimit(const GetUsageLimitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUsageLimitOutcome(result.GetResultWithOwnership()) : GetUsageLimitOutcome(std::move(result.GetError()));
}

GetWorkgroupOutcome RedshiftServerlessClient::GetWorkgroup(const GetWorkgroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkgroupOutcome(result.GetResultWithOwnership()) : GetWorkgroupOutcome(std::move(result.GetError()));
}

ListCustomDomainAssociationsOutcome RedshiftServerlessClient::ListCustomDomainAssociations(
    const ListCustomDomainAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCustomDomainAssociationsOutcome(result.GetResultWithOwnership())
                            : ListCustomDomainAssociationsOutcome(std::move(result.GetError()));
}

ListEndpointAccessOutcome RedshiftServerlessClient::ListEndpointAccess(const ListEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEndpointAccessOutcome(result.GetResultWithOwnership())
                            : ListEndpointAccessOutcome(std::move(result.GetError()));
}

ListManagedWorkgroupsOutcome RedshiftServerlessClient::ListManagedWorkgroups(const ListManagedWorkgroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListManagedWorkgroupsOutcome(result.GetResultWithOwnership())
                            : ListManagedWorkgroupsOutcome(std::move(result.GetError()));
}

ListNamespacesOutcome RedshiftServerlessClient::ListNamespaces(const ListNamespacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNamespacesOutcome(result.GetResultWithOwnership()) : ListNamespacesOutcome(std::move(result.GetError()));
}

ListRecoveryPointsOutcome RedshiftServerlessClient::ListRecoveryPoints(const ListRecoveryPointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRecoveryPointsOutcome(result.GetResultWithOwnership())
                            : ListRecoveryPointsOutcome(std::move(result.GetError()));
}

ListReservationOfferingsOutcome RedshiftServerlessClient::ListReservationOfferings(const ListReservationOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReservationOfferingsOutcome(result.GetResultWithOwnership())
                            : ListReservationOfferingsOutcome(std::move(result.GetError()));
}

ListReservationsOutcome RedshiftServerlessClient::ListReservations(const ListReservationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReservationsOutcome(result.GetResultWithOwnership())
                            : ListReservationsOutcome(std::move(result.GetError()));
}

ListScheduledActionsOutcome RedshiftServerlessClient::ListScheduledActions(const ListScheduledActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListScheduledActionsOutcome(result.GetResultWithOwnership())
                            : ListScheduledActionsOutcome(std::move(result.GetError()));
}

ListSnapshotCopyConfigurationsOutcome RedshiftServerlessClient::ListSnapshotCopyConfigurations(
    const ListSnapshotCopyConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSnapshotCopyConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListSnapshotCopyConfigurationsOutcome(std::move(result.GetError()));
}

ListSnapshotsOutcome RedshiftServerlessClient::ListSnapshots(const ListSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSnapshotsOutcome(result.GetResultWithOwnership()) : ListSnapshotsOutcome(std::move(result.GetError()));
}

ListTableRestoreStatusOutcome RedshiftServerlessClient::ListTableRestoreStatus(const ListTableRestoreStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTableRestoreStatusOutcome(result.GetResultWithOwnership())
                            : ListTableRestoreStatusOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome RedshiftServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTracksOutcome RedshiftServerlessClient::ListTracks(const ListTracksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTracksOutcome(result.GetResultWithOwnership()) : ListTracksOutcome(std::move(result.GetError()));
}

ListUsageLimitsOutcome RedshiftServerlessClient::ListUsageLimits(const ListUsageLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsageLimitsOutcome(result.GetResultWithOwnership())
                            : ListUsageLimitsOutcome(std::move(result.GetError()));
}

ListWorkgroupsOutcome RedshiftServerlessClient::ListWorkgroups(const ListWorkgroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkgroupsOutcome(result.GetResultWithOwnership()) : ListWorkgroupsOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome RedshiftServerlessClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

RestoreFromRecoveryPointOutcome RedshiftServerlessClient::RestoreFromRecoveryPoint(const RestoreFromRecoveryPointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreFromRecoveryPointOutcome(result.GetResultWithOwnership())
                            : RestoreFromRecoveryPointOutcome(std::move(result.GetError()));
}

RestoreFromSnapshotOutcome RedshiftServerlessClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreFromSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreFromSnapshotOutcome(std::move(result.GetError()));
}

RestoreTableFromRecoveryPointOutcome RedshiftServerlessClient::RestoreTableFromRecoveryPoint(
    const RestoreTableFromRecoveryPointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreTableFromRecoveryPointOutcome(result.GetResultWithOwnership())
                            : RestoreTableFromRecoveryPointOutcome(std::move(result.GetError()));
}

RestoreTableFromSnapshotOutcome RedshiftServerlessClient::RestoreTableFromSnapshot(const RestoreTableFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreTableFromSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreTableFromSnapshotOutcome(std::move(result.GetError()));
}

TagResourceOutcome RedshiftServerlessClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome RedshiftServerlessClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCustomDomainAssociationOutcome RedshiftServerlessClient::UpdateCustomDomainAssociation(
    const UpdateCustomDomainAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCustomDomainAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateCustomDomainAssociationOutcome(std::move(result.GetError()));
}

UpdateEndpointAccessOutcome RedshiftServerlessClient::UpdateEndpointAccess(const UpdateEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEndpointAccessOutcome(result.GetResultWithOwnership())
                            : UpdateEndpointAccessOutcome(std::move(result.GetError()));
}

UpdateLakehouseConfigurationOutcome RedshiftServerlessClient::UpdateLakehouseConfiguration(
    const UpdateLakehouseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLakehouseConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateLakehouseConfigurationOutcome(std::move(result.GetError()));
}

UpdateNamespaceOutcome RedshiftServerlessClient::UpdateNamespace(const UpdateNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateNamespaceOutcome(result.GetResultWithOwnership())
                            : UpdateNamespaceOutcome(std::move(result.GetError()));
}

UpdateScheduledActionOutcome RedshiftServerlessClient::UpdateScheduledAction(const UpdateScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateScheduledActionOutcome(result.GetResultWithOwnership())
                            : UpdateScheduledActionOutcome(std::move(result.GetError()));
}

UpdateSnapshotOutcome RedshiftServerlessClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSnapshotOutcome(result.GetResultWithOwnership()) : UpdateSnapshotOutcome(std::move(result.GetError()));
}

UpdateSnapshotCopyConfigurationOutcome RedshiftServerlessClient::UpdateSnapshotCopyConfiguration(
    const UpdateSnapshotCopyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSnapshotCopyConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateSnapshotCopyConfigurationOutcome(std::move(result.GetError()));
}

UpdateUsageLimitOutcome RedshiftServerlessClient::UpdateUsageLimit(const UpdateUsageLimitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUsageLimitOutcome(result.GetResultWithOwnership())
                            : UpdateUsageLimitOutcome(std::move(result.GetError()));
}

UpdateWorkgroupOutcome RedshiftServerlessClient::UpdateWorkgroup(const UpdateWorkgroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkgroupOutcome(result.GetResultWithOwnership())
                            : UpdateWorkgroupOutcome(std::move(result.GetError()));
}
