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
  return ConvertRecoveryPointToSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomDomainAssociationOutcome RedshiftServerlessClient::CreateCustomDomainAssociation(
    const CreateCustomDomainAssociationRequest& request) const {
  return CreateCustomDomainAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEndpointAccessOutcome RedshiftServerlessClient::CreateEndpointAccess(const CreateEndpointAccessRequest& request) const {
  return CreateEndpointAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNamespaceOutcome RedshiftServerlessClient::CreateNamespace(const CreateNamespaceRequest& request) const {
  return CreateNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReservationOutcome RedshiftServerlessClient::CreateReservation(const CreateReservationRequest& request) const {
  return CreateReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateScheduledActionOutcome RedshiftServerlessClient::CreateScheduledAction(const CreateScheduledActionRequest& request) const {
  return CreateScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotOutcome RedshiftServerlessClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  return CreateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotCopyConfigurationOutcome RedshiftServerlessClient::CreateSnapshotCopyConfiguration(
    const CreateSnapshotCopyConfigurationRequest& request) const {
  return CreateSnapshotCopyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUsageLimitOutcome RedshiftServerlessClient::CreateUsageLimit(const CreateUsageLimitRequest& request) const {
  return CreateUsageLimitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkgroupOutcome RedshiftServerlessClient::CreateWorkgroup(const CreateWorkgroupRequest& request) const {
  return CreateWorkgroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomDomainAssociationOutcome RedshiftServerlessClient::DeleteCustomDomainAssociation(
    const DeleteCustomDomainAssociationRequest& request) const {
  return DeleteCustomDomainAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEndpointAccessOutcome RedshiftServerlessClient::DeleteEndpointAccess(const DeleteEndpointAccessRequest& request) const {
  return DeleteEndpointAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNamespaceOutcome RedshiftServerlessClient::DeleteNamespace(const DeleteNamespaceRequest& request) const {
  return DeleteNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome RedshiftServerlessClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteScheduledActionOutcome RedshiftServerlessClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const {
  return DeleteScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSnapshotOutcome RedshiftServerlessClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  return DeleteSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSnapshotCopyConfigurationOutcome RedshiftServerlessClient::DeleteSnapshotCopyConfiguration(
    const DeleteSnapshotCopyConfigurationRequest& request) const {
  return DeleteSnapshotCopyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUsageLimitOutcome RedshiftServerlessClient::DeleteUsageLimit(const DeleteUsageLimitRequest& request) const {
  return DeleteUsageLimitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkgroupOutcome RedshiftServerlessClient::DeleteWorkgroup(const DeleteWorkgroupRequest& request) const {
  return DeleteWorkgroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCredentialsOutcome RedshiftServerlessClient::GetCredentials(const GetCredentialsRequest& request) const {
  return GetCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCustomDomainAssociationOutcome RedshiftServerlessClient::GetCustomDomainAssociation(
    const GetCustomDomainAssociationRequest& request) const {
  return GetCustomDomainAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEndpointAccessOutcome RedshiftServerlessClient::GetEndpointAccess(const GetEndpointAccessRequest& request) const {
  return GetEndpointAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityCenterAuthTokenOutcome RedshiftServerlessClient::GetIdentityCenterAuthToken(
    const GetIdentityCenterAuthTokenRequest& request) const {
  return GetIdentityCenterAuthTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNamespaceOutcome RedshiftServerlessClient::GetNamespace(const GetNamespaceRequest& request) const {
  return GetNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRecoveryPointOutcome RedshiftServerlessClient::GetRecoveryPoint(const GetRecoveryPointRequest& request) const {
  return GetRecoveryPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReservationOutcome RedshiftServerlessClient::GetReservation(const GetReservationRequest& request) const {
  return GetReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReservationOfferingOutcome RedshiftServerlessClient::GetReservationOffering(const GetReservationOfferingRequest& request) const {
  return GetReservationOfferingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome RedshiftServerlessClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetScheduledActionOutcome RedshiftServerlessClient::GetScheduledAction(const GetScheduledActionRequest& request) const {
  return GetScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSnapshotOutcome RedshiftServerlessClient::GetSnapshot(const GetSnapshotRequest& request) const {
  return GetSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableRestoreStatusOutcome RedshiftServerlessClient::GetTableRestoreStatus(const GetTableRestoreStatusRequest& request) const {
  return GetTableRestoreStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTrackOutcome RedshiftServerlessClient::GetTrack(const GetTrackRequest& request) const {
  return GetTrackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUsageLimitOutcome RedshiftServerlessClient::GetUsageLimit(const GetUsageLimitRequest& request) const {
  return GetUsageLimitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkgroupOutcome RedshiftServerlessClient::GetWorkgroup(const GetWorkgroupRequest& request) const {
  return GetWorkgroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomDomainAssociationsOutcome RedshiftServerlessClient::ListCustomDomainAssociations(
    const ListCustomDomainAssociationsRequest& request) const {
  return ListCustomDomainAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEndpointAccessOutcome RedshiftServerlessClient::ListEndpointAccess(const ListEndpointAccessRequest& request) const {
  return ListEndpointAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListManagedWorkgroupsOutcome RedshiftServerlessClient::ListManagedWorkgroups(const ListManagedWorkgroupsRequest& request) const {
  return ListManagedWorkgroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNamespacesOutcome RedshiftServerlessClient::ListNamespaces(const ListNamespacesRequest& request) const {
  return ListNamespacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecoveryPointsOutcome RedshiftServerlessClient::ListRecoveryPoints(const ListRecoveryPointsRequest& request) const {
  return ListRecoveryPointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReservationOfferingsOutcome RedshiftServerlessClient::ListReservationOfferings(const ListReservationOfferingsRequest& request) const {
  return ListReservationOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReservationsOutcome RedshiftServerlessClient::ListReservations(const ListReservationsRequest& request) const {
  return ListReservationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListScheduledActionsOutcome RedshiftServerlessClient::ListScheduledActions(const ListScheduledActionsRequest& request) const {
  return ListScheduledActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSnapshotCopyConfigurationsOutcome RedshiftServerlessClient::ListSnapshotCopyConfigurations(
    const ListSnapshotCopyConfigurationsRequest& request) const {
  return ListSnapshotCopyConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSnapshotsOutcome RedshiftServerlessClient::ListSnapshots(const ListSnapshotsRequest& request) const {
  return ListSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTableRestoreStatusOutcome RedshiftServerlessClient::ListTableRestoreStatus(const ListTableRestoreStatusRequest& request) const {
  return ListTableRestoreStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome RedshiftServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTracksOutcome RedshiftServerlessClient::ListTracks(const ListTracksRequest& request) const {
  return ListTracksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsageLimitsOutcome RedshiftServerlessClient::ListUsageLimits(const ListUsageLimitsRequest& request) const {
  return ListUsageLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkgroupsOutcome RedshiftServerlessClient::ListWorkgroups(const ListWorkgroupsRequest& request) const {
  return ListWorkgroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome RedshiftServerlessClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreFromRecoveryPointOutcome RedshiftServerlessClient::RestoreFromRecoveryPoint(const RestoreFromRecoveryPointRequest& request) const {
  return RestoreFromRecoveryPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreFromSnapshotOutcome RedshiftServerlessClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const {
  return RestoreFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreTableFromRecoveryPointOutcome RedshiftServerlessClient::RestoreTableFromRecoveryPoint(
    const RestoreTableFromRecoveryPointRequest& request) const {
  return RestoreTableFromRecoveryPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreTableFromSnapshotOutcome RedshiftServerlessClient::RestoreTableFromSnapshot(const RestoreTableFromSnapshotRequest& request) const {
  return RestoreTableFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome RedshiftServerlessClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome RedshiftServerlessClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCustomDomainAssociationOutcome RedshiftServerlessClient::UpdateCustomDomainAssociation(
    const UpdateCustomDomainAssociationRequest& request) const {
  return UpdateCustomDomainAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEndpointAccessOutcome RedshiftServerlessClient::UpdateEndpointAccess(const UpdateEndpointAccessRequest& request) const {
  return UpdateEndpointAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLakehouseConfigurationOutcome RedshiftServerlessClient::UpdateLakehouseConfiguration(
    const UpdateLakehouseConfigurationRequest& request) const {
  return UpdateLakehouseConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNamespaceOutcome RedshiftServerlessClient::UpdateNamespace(const UpdateNamespaceRequest& request) const {
  return UpdateNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateScheduledActionOutcome RedshiftServerlessClient::UpdateScheduledAction(const UpdateScheduledActionRequest& request) const {
  return UpdateScheduledActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSnapshotOutcome RedshiftServerlessClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const {
  return UpdateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSnapshotCopyConfigurationOutcome RedshiftServerlessClient::UpdateSnapshotCopyConfiguration(
    const UpdateSnapshotCopyConfigurationRequest& request) const {
  return UpdateSnapshotCopyConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUsageLimitOutcome RedshiftServerlessClient::UpdateUsageLimit(const UpdateUsageLimitRequest& request) const {
  return UpdateUsageLimitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkgroupOutcome RedshiftServerlessClient::UpdateWorkgroup(const UpdateWorkgroupRequest& request) const {
  return UpdateWorkgroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
