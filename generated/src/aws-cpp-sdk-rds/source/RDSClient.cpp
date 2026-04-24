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
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/RDSClient.h>
#include <aws/rds/RDSEndpointProvider.h>
#include <aws/rds/RDSErrorMarshaller.h>
#include <aws/rds/model/AddRoleToDBClusterRequest.h>
#include <aws/rds/model/AddRoleToDBInstanceRequest.h>
#include <aws/rds/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/rds/model/AddTagsToResourceRequest.h>
#include <aws/rds/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/rds/model/AuthorizeDBSecurityGroupIngressRequest.h>
#include <aws/rds/model/BacktrackDBClusterRequest.h>
#include <aws/rds/model/CancelExportTaskRequest.h>
#include <aws/rds/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/rds/model/CopyDBClusterSnapshotRequest.h>
#include <aws/rds/model/CopyDBParameterGroupRequest.h>
#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/rds/model/CopyOptionGroupRequest.h>
#include <aws/rds/model/CreateBlueGreenDeploymentRequest.h>
#include <aws/rds/model/CreateCustomDBEngineVersionRequest.h>
#include <aws/rds/model/CreateDBClusterEndpointRequest.h>
#include <aws/rds/model/CreateDBClusterParameterGroupRequest.h>
#include <aws/rds/model/CreateDBClusterRequest.h>
#include <aws/rds/model/CreateDBClusterSnapshotRequest.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaRequest.h>
#include <aws/rds/model/CreateDBInstanceRequest.h>
#include <aws/rds/model/CreateDBParameterGroupRequest.h>
#include <aws/rds/model/CreateDBProxyEndpointRequest.h>
#include <aws/rds/model/CreateDBProxyRequest.h>
#include <aws/rds/model/CreateDBSecurityGroupRequest.h>
#include <aws/rds/model/CreateDBShardGroupRequest.h>
#include <aws/rds/model/CreateDBSnapshotRequest.h>
#include <aws/rds/model/CreateDBSubnetGroupRequest.h>
#include <aws/rds/model/CreateEventSubscriptionRequest.h>
#include <aws/rds/model/CreateGlobalClusterRequest.h>
#include <aws/rds/model/CreateIntegrationRequest.h>
#include <aws/rds/model/CreateOptionGroupRequest.h>
#include <aws/rds/model/CreateTenantDatabaseRequest.h>
#include <aws/rds/model/DeleteBlueGreenDeploymentRequest.h>
#include <aws/rds/model/DeleteCustomDBEngineVersionRequest.h>
#include <aws/rds/model/DeleteDBClusterAutomatedBackupRequest.h>
#include <aws/rds/model/DeleteDBClusterEndpointRequest.h>
#include <aws/rds/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/rds/model/DeleteDBClusterRequest.h>
#include <aws/rds/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/rds/model/DeleteDBInstanceAutomatedBackupRequest.h>
#include <aws/rds/model/DeleteDBInstanceRequest.h>
#include <aws/rds/model/DeleteDBParameterGroupRequest.h>
#include <aws/rds/model/DeleteDBProxyEndpointRequest.h>
#include <aws/rds/model/DeleteDBProxyRequest.h>
#include <aws/rds/model/DeleteDBSecurityGroupRequest.h>
#include <aws/rds/model/DeleteDBShardGroupRequest.h>
#include <aws/rds/model/DeleteDBSnapshotRequest.h>
#include <aws/rds/model/DeleteDBSubnetGroupRequest.h>
#include <aws/rds/model/DeleteEventSubscriptionRequest.h>
#include <aws/rds/model/DeleteGlobalClusterRequest.h>
#include <aws/rds/model/DeleteIntegrationRequest.h>
#include <aws/rds/model/DeleteOptionGroupRequest.h>
#include <aws/rds/model/DeleteTenantDatabaseRequest.h>
#include <aws/rds/model/DeregisterDBProxyTargetsRequest.h>
#include <aws/rds/model/DescribeAccountAttributesRequest.h>
#include <aws/rds/model/DescribeBlueGreenDeploymentsRequest.h>
#include <aws/rds/model/DescribeCertificatesRequest.h>
#include <aws/rds/model/DescribeDBClusterAutomatedBackupsRequest.h>
#include <aws/rds/model/DescribeDBClusterBacktracksRequest.h>
#include <aws/rds/model/DescribeDBClusterEndpointsRequest.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBClusterParametersRequest.h>
#include <aws/rds/model/DescribeDBClusterSnapshotAttributesRequest.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBClustersRequest.h>
#include <aws/rds/model/DescribeDBEngineVersionsRequest.h>
#include <aws/rds/model/DescribeDBInstanceAutomatedBackupsRequest.h>
#include <aws/rds/model/DescribeDBInstancesRequest.h>
#include <aws/rds/model/DescribeDBLogFilesRequest.h>
#include <aws/rds/model/DescribeDBMajorEngineVersionsRequest.h>
#include <aws/rds/model/DescribeDBParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBParametersRequest.h>
#include <aws/rds/model/DescribeDBProxiesRequest.h>
#include <aws/rds/model/DescribeDBProxyEndpointsRequest.h>
#include <aws/rds/model/DescribeDBProxyTargetGroupsRequest.h>
#include <aws/rds/model/DescribeDBProxyTargetsRequest.h>
#include <aws/rds/model/DescribeDBRecommendationsRequest.h>
#include <aws/rds/model/DescribeDBSecurityGroupsRequest.h>
#include <aws/rds/model/DescribeDBShardGroupsRequest.h>
#include <aws/rds/model/DescribeDBSnapshotAttributesRequest.h>
#include <aws/rds/model/DescribeDBSnapshotTenantDatabasesRequest.h>
#include <aws/rds/model/DescribeDBSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBSubnetGroupsRequest.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/rds/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/rds/model/DescribeEventCategoriesRequest.h>
#include <aws/rds/model/DescribeEventSubscriptionsRequest.h>
#include <aws/rds/model/DescribeEventsRequest.h>
#include <aws/rds/model/DescribeExportTasksRequest.h>
#include <aws/rds/model/DescribeGlobalClustersRequest.h>
#include <aws/rds/model/DescribeIntegrationsRequest.h>
#include <aws/rds/model/DescribeOptionGroupOptionsRequest.h>
#include <aws/rds/model/DescribeOptionGroupsRequest.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/rds/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/rds/model/DescribeReservedDBInstancesOfferingsRequest.h>
#include <aws/rds/model/DescribeReservedDBInstancesRequest.h>
#include <aws/rds/model/DescribeServerlessV2PlatformVersionsRequest.h>
#include <aws/rds/model/DescribeSourceRegionsRequest.h>
#include <aws/rds/model/DescribeTenantDatabasesRequest.h>
#include <aws/rds/model/DescribeValidDBInstanceModificationsRequest.h>
#include <aws/rds/model/DisableHttpEndpointRequest.h>
#include <aws/rds/model/DownloadDBLogFilePortionRequest.h>
#include <aws/rds/model/EnableHttpEndpointRequest.h>
#include <aws/rds/model/FailoverDBClusterRequest.h>
#include <aws/rds/model/FailoverGlobalClusterRequest.h>
#include <aws/rds/model/ListTagsForResourceRequest.h>
#include <aws/rds/model/ModifyActivityStreamRequest.h>
#include <aws/rds/model/ModifyCertificatesRequest.h>
#include <aws/rds/model/ModifyCurrentDBClusterCapacityRequest.h>
#include <aws/rds/model/ModifyCustomDBEngineVersionRequest.h>
#include <aws/rds/model/ModifyDBClusterEndpointRequest.h>
#include <aws/rds/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/rds/model/ModifyDBClusterRequest.h>
#include <aws/rds/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/rds/model/ModifyDBInstanceRequest.h>
#include <aws/rds/model/ModifyDBParameterGroupRequest.h>
#include <aws/rds/model/ModifyDBProxyEndpointRequest.h>
#include <aws/rds/model/ModifyDBProxyRequest.h>
#include <aws/rds/model/ModifyDBProxyTargetGroupRequest.h>
#include <aws/rds/model/ModifyDBRecommendationRequest.h>
#include <aws/rds/model/ModifyDBShardGroupRequest.h>
#include <aws/rds/model/ModifyDBSnapshotAttributeRequest.h>
#include <aws/rds/model/ModifyDBSnapshotRequest.h>
#include <aws/rds/model/ModifyDBSubnetGroupRequest.h>
#include <aws/rds/model/ModifyEventSubscriptionRequest.h>
#include <aws/rds/model/ModifyGlobalClusterRequest.h>
#include <aws/rds/model/ModifyIntegrationRequest.h>
#include <aws/rds/model/ModifyOptionGroupRequest.h>
#include <aws/rds/model/ModifyTenantDatabaseRequest.h>
#include <aws/rds/model/PromoteReadReplicaDBClusterRequest.h>
#include <aws/rds/model/PromoteReadReplicaRequest.h>
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingRequest.h>
#include <aws/rds/model/RebootDBClusterRequest.h>
#include <aws/rds/model/RebootDBInstanceRequest.h>
#include <aws/rds/model/RebootDBShardGroupRequest.h>
#include <aws/rds/model/RegisterDBProxyTargetsRequest.h>
#include <aws/rds/model/RemoveFromGlobalClusterRequest.h>
#include <aws/rds/model/RemoveRoleFromDBClusterRequest.h>
#include <aws/rds/model/RemoveRoleFromDBInstanceRequest.h>
#include <aws/rds/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/rds/model/RemoveTagsFromResourceRequest.h>
#include <aws/rds/model/ResetDBClusterParameterGroupRequest.h>
#include <aws/rds/model/ResetDBParameterGroupRequest.h>
#include <aws/rds/model/RestoreDBClusterFromS3Request.h>
#include <aws/rds/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/rds/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/rds/model/RestoreDBInstanceFromDBSnapshotRequest.h>
#include <aws/rds/model/RestoreDBInstanceFromS3Request.h>
#include <aws/rds/model/RestoreDBInstanceToPointInTimeRequest.h>
#include <aws/rds/model/RevokeDBSecurityGroupIngressRequest.h>
#include <aws/rds/model/StartActivityStreamRequest.h>
#include <aws/rds/model/StartDBClusterRequest.h>
#include <aws/rds/model/StartDBInstanceAutomatedBackupsReplicationRequest.h>
#include <aws/rds/model/StartDBInstanceRequest.h>
#include <aws/rds/model/StartExportTaskRequest.h>
#include <aws/rds/model/StopActivityStreamRequest.h>
#include <aws/rds/model/StopDBClusterRequest.h>
#include <aws/rds/model/StopDBInstanceAutomatedBackupsReplicationRequest.h>
#include <aws/rds/model/StopDBInstanceRequest.h>
#include <aws/rds/model/SwitchoverBlueGreenDeploymentRequest.h>
#include <aws/rds/model/SwitchoverGlobalClusterRequest.h>
#include <aws/rds/model/SwitchoverReadReplicaRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RDS;
using namespace Aws::RDS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RDS {
const char SERVICE_NAME[] = "rds";
const char ALLOCATION_TAG[] = "RDSClient";
}  // namespace RDS
}  // namespace Aws
const char* RDSClient::GetServiceName() { return SERVICE_NAME; }
const char* RDSClient::GetAllocationTag() { return ALLOCATION_TAG; }

RDSClient::RDSClient(const RDS::RDSClientConfiguration& clientConfiguration, std::shared_ptr<RDSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RDSClient::RDSClient(const AWSCredentials& credentials, std::shared_ptr<RDSEndpointProviderBase> endpointProvider,
                     const RDS::RDSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RDSClient::RDSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<RDSEndpointProviderBase> endpointProvider, const RDS::RDSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RDSClient::RDSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RDSClient::RDSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RDSClient::RDSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RDSClient::~RDSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RDSEndpointProviderBase>& RDSClient::accessEndpointProvider() { return m_endpointProvider; }

void RDSClient::init(const RDS::RDSClientConfiguration& config) {
  AWSClient::SetServiceClientName("RDS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "rds");
}

void RDSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String RDSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

RDSClient::InvokeOperationOutcome RDSClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
AddRoleToDBClusterOutcome RDSClient::AddRoleToDBCluster(const AddRoleToDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddRoleToDBClusterOutcome(result.GetResultWithOwnership())
                            : AddRoleToDBClusterOutcome(std::move(result.GetError()));
}

AddRoleToDBInstanceOutcome RDSClient::AddRoleToDBInstance(const AddRoleToDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddRoleToDBInstanceOutcome(result.GetResultWithOwnership())
                            : AddRoleToDBInstanceOutcome(std::move(result.GetError()));
}

AddSourceIdentifierToSubscriptionOutcome RDSClient::AddSourceIdentifierToSubscription(
    const AddSourceIdentifierToSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddSourceIdentifierToSubscriptionOutcome(result.GetResultWithOwnership())
                            : AddSourceIdentifierToSubscriptionOutcome(std::move(result.GetError()));
}

AddTagsToResourceOutcome RDSClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsToResourceOutcome(result.GetResultWithOwnership())
                            : AddTagsToResourceOutcome(std::move(result.GetError()));
}

ApplyPendingMaintenanceActionOutcome RDSClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ApplyPendingMaintenanceActionOutcome(result.GetResultWithOwnership())
                            : ApplyPendingMaintenanceActionOutcome(std::move(result.GetError()));
}

AuthorizeDBSecurityGroupIngressOutcome RDSClient::AuthorizeDBSecurityGroupIngress(
    const AuthorizeDBSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeDBSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : AuthorizeDBSecurityGroupIngressOutcome(std::move(result.GetError()));
}

BacktrackDBClusterOutcome RDSClient::BacktrackDBCluster(const BacktrackDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BacktrackDBClusterOutcome(result.GetResultWithOwnership())
                            : BacktrackDBClusterOutcome(std::move(result.GetError()));
}

CancelExportTaskOutcome RDSClient::CancelExportTask(const CancelExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelExportTaskOutcome(result.GetResultWithOwnership())
                            : CancelExportTaskOutcome(std::move(result.GetError()));
}

CopyDBClusterParameterGroupOutcome RDSClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : CopyDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

CopyDBClusterSnapshotOutcome RDSClient::CopyDBClusterSnapshot(const CopyDBClusterSnapshotRequest& request) const {
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet()) {
    CopyDBClusterSnapshotRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CopyDBClusterSnapshot, CoreErrors,
                                CoreErrors::ENDPOINT_RESOLUTION_FAILURE, presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    auto result = InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST);
    return result.IsSuccess() ? CopyDBClusterSnapshotOutcome(result.GetResultWithOwnership())
                              : CopyDBClusterSnapshotOutcome(std::move(result.GetError()));
  }

  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyDBClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : CopyDBClusterSnapshotOutcome(std::move(result.GetError()));
}

CopyDBParameterGroupOutcome RDSClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : CopyDBParameterGroupOutcome(std::move(result.GetError()));
}

CopyDBSnapshotOutcome RDSClient::CopyDBSnapshot(const CopyDBSnapshotRequest& request) const {
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet()) {
    CopyDBSnapshotRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CopyDBSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    auto result = InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST);
    return result.IsSuccess() ? CopyDBSnapshotOutcome(result.GetResultWithOwnership())
                              : CopyDBSnapshotOutcome(std::move(result.GetError()));
  }

  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyDBSnapshotOutcome(result.GetResultWithOwnership()) : CopyDBSnapshotOutcome(std::move(result.GetError()));
}

CopyOptionGroupOutcome RDSClient::CopyOptionGroup(const CopyOptionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyOptionGroupOutcome(result.GetResultWithOwnership())
                            : CopyOptionGroupOutcome(std::move(result.GetError()));
}

CreateBlueGreenDeploymentOutcome RDSClient::CreateBlueGreenDeployment(const CreateBlueGreenDeploymentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBlueGreenDeploymentOutcome(result.GetResultWithOwnership())
                            : CreateBlueGreenDeploymentOutcome(std::move(result.GetError()));
}

CreateCustomDBEngineVersionOutcome RDSClient::CreateCustomDBEngineVersion(const CreateCustomDBEngineVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomDBEngineVersionOutcome(result.GetResultWithOwnership())
                            : CreateCustomDBEngineVersionOutcome(std::move(result.GetError()));
}

CreateDBClusterOutcome RDSClient::CreateDBCluster(const CreateDBClusterRequest& request) const {
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet()) {
    CreateDBClusterRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CreateDBCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    auto result = InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST);
    return result.IsSuccess() ? CreateDBClusterOutcome(result.GetResultWithOwnership())
                              : CreateDBClusterOutcome(std::move(result.GetError()));
  }

  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBClusterOutcome(result.GetResultWithOwnership())
                            : CreateDBClusterOutcome(std::move(result.GetError()));
}

CreateDBClusterEndpointOutcome RDSClient::CreateDBClusterEndpoint(const CreateDBClusterEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBClusterEndpointOutcome(result.GetResultWithOwnership())
                            : CreateDBClusterEndpointOutcome(std::move(result.GetError()));
}

CreateDBClusterParameterGroupOutcome RDSClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

CreateDBClusterSnapshotOutcome RDSClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateDBClusterSnapshotOutcome(std::move(result.GetError()));
}

CreateDBInstanceOutcome RDSClient::CreateDBInstance(const CreateDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBInstanceOutcome(result.GetResultWithOwnership())
                            : CreateDBInstanceOutcome(std::move(result.GetError()));
}

CreateDBInstanceReadReplicaOutcome RDSClient::CreateDBInstanceReadReplica(const CreateDBInstanceReadReplicaRequest& request) const {
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet()) {
    CreateDBInstanceReadReplicaRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CreateDBInstanceReadReplica, CoreErrors,
                                CoreErrors::ENDPOINT_RESOLUTION_FAILURE, presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    auto result = InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST);
    return result.IsSuccess() ? CreateDBInstanceReadReplicaOutcome(result.GetResultWithOwnership())
                              : CreateDBInstanceReadReplicaOutcome(std::move(result.GetError()));
  }

  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBInstanceReadReplicaOutcome(result.GetResultWithOwnership())
                            : CreateDBInstanceReadReplicaOutcome(std::move(result.GetError()));
}

CreateDBParameterGroupOutcome RDSClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBParameterGroupOutcome(std::move(result.GetError()));
}

CreateDBProxyOutcome RDSClient::CreateDBProxy(const CreateDBProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBProxyOutcome(result.GetResultWithOwnership()) : CreateDBProxyOutcome(std::move(result.GetError()));
}

CreateDBProxyEndpointOutcome RDSClient::CreateDBProxyEndpoint(const CreateDBProxyEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBProxyEndpointOutcome(result.GetResultWithOwnership())
                            : CreateDBProxyEndpointOutcome(std::move(result.GetError()));
}

CreateDBSecurityGroupOutcome RDSClient::CreateDBSecurityGroup(const CreateDBSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBSecurityGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBSecurityGroupOutcome(std::move(result.GetError()));
}

CreateDBShardGroupOutcome RDSClient::CreateDBShardGroup(const CreateDBShardGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBShardGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBShardGroupOutcome(std::move(result.GetError()));
}

CreateDBSnapshotOutcome RDSClient::CreateDBSnapshot(const CreateDBSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateDBSnapshotOutcome(std::move(result.GetError()));
}

CreateDBSubnetGroupOutcome RDSClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBSubnetGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBSubnetGroupOutcome(std::move(result.GetError()));
}

CreateEventSubscriptionOutcome RDSClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateEventSubscriptionOutcome(std::move(result.GetError()));
}

CreateGlobalClusterOutcome RDSClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlobalClusterOutcome(result.GetResultWithOwnership())
                            : CreateGlobalClusterOutcome(std::move(result.GetError()));
}

CreateIntegrationOutcome RDSClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationOutcome(std::move(result.GetError()));
}

CreateOptionGroupOutcome RDSClient::CreateOptionGroup(const CreateOptionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOptionGroupOutcome(result.GetResultWithOwnership())
                            : CreateOptionGroupOutcome(std::move(result.GetError()));
}

CreateTenantDatabaseOutcome RDSClient::CreateTenantDatabase(const CreateTenantDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTenantDatabaseOutcome(result.GetResultWithOwnership())
                            : CreateTenantDatabaseOutcome(std::move(result.GetError()));
}

DeleteBlueGreenDeploymentOutcome RDSClient::DeleteBlueGreenDeployment(const DeleteBlueGreenDeploymentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBlueGreenDeploymentOutcome(result.GetResultWithOwnership())
                            : DeleteBlueGreenDeploymentOutcome(std::move(result.GetError()));
}

DeleteCustomDBEngineVersionOutcome RDSClient::DeleteCustomDBEngineVersion(const DeleteCustomDBEngineVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCustomDBEngineVersionOutcome(result.GetResultWithOwnership())
                            : DeleteCustomDBEngineVersionOutcome(std::move(result.GetError()));
}

DeleteDBClusterOutcome RDSClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterOutcome(std::move(result.GetError()));
}

DeleteDBClusterAutomatedBackupOutcome RDSClient::DeleteDBClusterAutomatedBackup(
    const DeleteDBClusterAutomatedBackupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterAutomatedBackupOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterAutomatedBackupOutcome(std::move(result.GetError()));
}

DeleteDBClusterEndpointOutcome RDSClient::DeleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterEndpointOutcome(std::move(result.GetError()));
}

DeleteDBClusterParameterGroupOutcome RDSClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

DeleteDBClusterSnapshotOutcome RDSClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterSnapshotOutcome(std::move(result.GetError()));
}

DeleteDBInstanceOutcome RDSClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteDBInstanceOutcome(std::move(result.GetError()));
}

DeleteDBInstanceAutomatedBackupOutcome RDSClient::DeleteDBInstanceAutomatedBackup(
    const DeleteDBInstanceAutomatedBackupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBInstanceAutomatedBackupOutcome(result.GetResultWithOwnership())
                            : DeleteDBInstanceAutomatedBackupOutcome(std::move(result.GetError()));
}

DeleteDBParameterGroupOutcome RDSClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBParameterGroupOutcome(std::move(result.GetError()));
}

DeleteDBProxyOutcome RDSClient::DeleteDBProxy(const DeleteDBProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBProxyOutcome(result.GetResultWithOwnership()) : DeleteDBProxyOutcome(std::move(result.GetError()));
}

DeleteDBProxyEndpointOutcome RDSClient::DeleteDBProxyEndpoint(const DeleteDBProxyEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBProxyEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteDBProxyEndpointOutcome(std::move(result.GetError()));
}

DeleteDBSecurityGroupOutcome RDSClient::DeleteDBSecurityGroup(const DeleteDBSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBSecurityGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBSecurityGroupOutcome(std::move(result.GetError()));
}

DeleteDBShardGroupOutcome RDSClient::DeleteDBShardGroup(const DeleteDBShardGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBShardGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBShardGroupOutcome(std::move(result.GetError()));
}

DeleteDBSnapshotOutcome RDSClient::DeleteDBSnapshot(const DeleteDBSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteDBSnapshotOutcome(std::move(result.GetError()));
}

DeleteDBSubnetGroupOutcome RDSClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBSubnetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBSubnetGroupOutcome(std::move(result.GetError()));
}

DeleteEventSubscriptionOutcome RDSClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteEventSubscriptionOutcome(std::move(result.GetError()));
}

DeleteGlobalClusterOutcome RDSClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGlobalClusterOutcome(result.GetResultWithOwnership())
                            : DeleteGlobalClusterOutcome(std::move(result.GetError()));
}

DeleteIntegrationOutcome RDSClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationOutcome(std::move(result.GetError()));
}

DeleteOptionGroupOutcome RDSClient::DeleteOptionGroup(const DeleteOptionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOptionGroupOutcome(result.GetResultWithOwnership())
                            : DeleteOptionGroupOutcome(std::move(result.GetError()));
}

DeleteTenantDatabaseOutcome RDSClient::DeleteTenantDatabase(const DeleteTenantDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTenantDatabaseOutcome(result.GetResultWithOwnership())
                            : DeleteTenantDatabaseOutcome(std::move(result.GetError()));
}

DeregisterDBProxyTargetsOutcome RDSClient::DeregisterDBProxyTargets(const DeregisterDBProxyTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterDBProxyTargetsOutcome(result.GetResultWithOwnership())
                            : DeregisterDBProxyTargetsOutcome(std::move(result.GetError()));
}

DescribeAccountAttributesOutcome RDSClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAttributesOutcome(std::move(result.GetError()));
}

DescribeBlueGreenDeploymentsOutcome RDSClient::DescribeBlueGreenDeployments(const DescribeBlueGreenDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBlueGreenDeploymentsOutcome(result.GetResultWithOwnership())
                            : DescribeBlueGreenDeploymentsOutcome(std::move(result.GetError()));
}

DescribeCertificatesOutcome RDSClient::DescribeCertificates(const DescribeCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCertificatesOutcome(result.GetResultWithOwnership())
                            : DescribeCertificatesOutcome(std::move(result.GetError()));
}

DescribeDBClusterAutomatedBackupsOutcome RDSClient::DescribeDBClusterAutomatedBackups(
    const DescribeDBClusterAutomatedBackupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterAutomatedBackupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterAutomatedBackupsOutcome(std::move(result.GetError()));
}

DescribeDBClusterBacktracksOutcome RDSClient::DescribeDBClusterBacktracks(const DescribeDBClusterBacktracksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterBacktracksOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterBacktracksOutcome(std::move(result.GetError()));
}

DescribeDBClusterEndpointsOutcome RDSClient::DescribeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterEndpointsOutcome(std::move(result.GetError()));
}

DescribeDBClusterParameterGroupsOutcome RDSClient::DescribeDBClusterParameterGroups(
    const DescribeDBClusterParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeDBClusterParametersOutcome RDSClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterParametersOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterParametersOutcome(std::move(result.GetError()));
}

DescribeDBClusterSnapshotAttributesOutcome RDSClient::DescribeDBClusterSnapshotAttributes(
    const DescribeDBClusterSnapshotAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterSnapshotAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterSnapshotAttributesOutcome(std::move(result.GetError()));
}

DescribeDBClusterSnapshotsOutcome RDSClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterSnapshotsOutcome(std::move(result.GetError()));
}

DescribeDBClustersOutcome RDSClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClustersOutcome(result.GetResultWithOwnership())
                            : DescribeDBClustersOutcome(std::move(result.GetError()));
}

DescribeDBEngineVersionsOutcome RDSClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBEngineVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeDBEngineVersionsOutcome(std::move(result.GetError()));
}

DescribeDBInstanceAutomatedBackupsOutcome RDSClient::DescribeDBInstanceAutomatedBackups(
    const DescribeDBInstanceAutomatedBackupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBInstanceAutomatedBackupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBInstanceAutomatedBackupsOutcome(std::move(result.GetError()));
}

DescribeDBInstancesOutcome RDSClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeDBInstancesOutcome(std::move(result.GetError()));
}

DescribeDBLogFilesOutcome RDSClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBLogFilesOutcome(result.GetResultWithOwnership())
                            : DescribeDBLogFilesOutcome(std::move(result.GetError()));
}

DescribeDBMajorEngineVersionsOutcome RDSClient::DescribeDBMajorEngineVersions(const DescribeDBMajorEngineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBMajorEngineVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeDBMajorEngineVersionsOutcome(std::move(result.GetError()));
}

DescribeDBParameterGroupsOutcome RDSClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeDBParametersOutcome RDSClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBParametersOutcome(result.GetResultWithOwnership())
                            : DescribeDBParametersOutcome(std::move(result.GetError()));
}

DescribeDBProxiesOutcome RDSClient::DescribeDBProxies(const DescribeDBProxiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBProxiesOutcome(result.GetResultWithOwnership())
                            : DescribeDBProxiesOutcome(std::move(result.GetError()));
}

DescribeDBProxyEndpointsOutcome RDSClient::DescribeDBProxyEndpoints(const DescribeDBProxyEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBProxyEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeDBProxyEndpointsOutcome(std::move(result.GetError()));
}

DescribeDBProxyTargetGroupsOutcome RDSClient::DescribeDBProxyTargetGroups(const DescribeDBProxyTargetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBProxyTargetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBProxyTargetGroupsOutcome(std::move(result.GetError()));
}

DescribeDBProxyTargetsOutcome RDSClient::DescribeDBProxyTargets(const DescribeDBProxyTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBProxyTargetsOutcome(result.GetResultWithOwnership())
                            : DescribeDBProxyTargetsOutcome(std::move(result.GetError()));
}

DescribeDBRecommendationsOutcome RDSClient::DescribeDBRecommendations(const DescribeDBRecommendationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBRecommendationsOutcome(result.GetResultWithOwnership())
                            : DescribeDBRecommendationsOutcome(std::move(result.GetError()));
}

DescribeDBSecurityGroupsOutcome RDSClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBSecurityGroupsOutcome(std::move(result.GetError()));
}

DescribeDBShardGroupsOutcome RDSClient::DescribeDBShardGroups(const DescribeDBShardGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBShardGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBShardGroupsOutcome(std::move(result.GetError()));
}

DescribeDBSnapshotAttributesOutcome RDSClient::DescribeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBSnapshotAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeDBSnapshotAttributesOutcome(std::move(result.GetError()));
}

DescribeDBSnapshotTenantDatabasesOutcome RDSClient::DescribeDBSnapshotTenantDatabases(
    const DescribeDBSnapshotTenantDatabasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBSnapshotTenantDatabasesOutcome(result.GetResultWithOwnership())
                            : DescribeDBSnapshotTenantDatabasesOutcome(std::move(result.GetError()));
}

DescribeDBSnapshotsOutcome RDSClient::DescribeDBSnapshots(const DescribeDBSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeDBSnapshotsOutcome(std::move(result.GetError()));
}

DescribeDBSubnetGroupsOutcome RDSClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBSubnetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBSubnetGroupsOutcome(std::move(result.GetError()));
}

DescribeEngineDefaultClusterParametersOutcome RDSClient::DescribeEngineDefaultClusterParameters(
    const DescribeEngineDefaultClusterParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEngineDefaultClusterParametersOutcome(result.GetResultWithOwnership())
                            : DescribeEngineDefaultClusterParametersOutcome(std::move(result.GetError()));
}

DescribeEngineDefaultParametersOutcome RDSClient::DescribeEngineDefaultParameters(
    const DescribeEngineDefaultParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEngineDefaultParametersOutcome(result.GetResultWithOwnership())
                            : DescribeEngineDefaultParametersOutcome(std::move(result.GetError()));
}

DescribeEventCategoriesOutcome RDSClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventCategoriesOutcome(result.GetResultWithOwnership())
                            : DescribeEventCategoriesOutcome(std::move(result.GetError()));
}

DescribeEventSubscriptionsOutcome RDSClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventSubscriptionsOutcome(result.GetResultWithOwnership())
                            : DescribeEventSubscriptionsOutcome(std::move(result.GetError()));
}

DescribeEventsOutcome RDSClient::DescribeEvents(const DescribeEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventsOutcome(result.GetResultWithOwnership()) : DescribeEventsOutcome(std::move(result.GetError()));
}

DescribeExportTasksOutcome RDSClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExportTasksOutcome(result.GetResultWithOwnership())
                            : DescribeExportTasksOutcome(std::move(result.GetError()));
}

DescribeGlobalClustersOutcome RDSClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGlobalClustersOutcome(result.GetResultWithOwnership())
                            : DescribeGlobalClustersOutcome(std::move(result.GetError()));
}

DescribeIntegrationsOutcome RDSClient::DescribeIntegrations(const DescribeIntegrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIntegrationsOutcome(result.GetResultWithOwnership())
                            : DescribeIntegrationsOutcome(std::move(result.GetError()));
}

DescribeOptionGroupOptionsOutcome RDSClient::DescribeOptionGroupOptions(const DescribeOptionGroupOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOptionGroupOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeOptionGroupOptionsOutcome(std::move(result.GetError()));
}

DescribeOptionGroupsOutcome RDSClient::DescribeOptionGroups(const DescribeOptionGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOptionGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeOptionGroupsOutcome(std::move(result.GetError()));
}

DescribeOrderableDBInstanceOptionsOutcome RDSClient::DescribeOrderableDBInstanceOptions(
    const DescribeOrderableDBInstanceOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrderableDBInstanceOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeOrderableDBInstanceOptionsOutcome(std::move(result.GetError()));
}

DescribePendingMaintenanceActionsOutcome RDSClient::DescribePendingMaintenanceActions(
    const DescribePendingMaintenanceActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePendingMaintenanceActionsOutcome(result.GetResultWithOwnership())
                            : DescribePendingMaintenanceActionsOutcome(std::move(result.GetError()));
}

DescribeReservedDBInstancesOutcome RDSClient::DescribeReservedDBInstances(const DescribeReservedDBInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedDBInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeReservedDBInstancesOutcome(std::move(result.GetError()));
}

DescribeReservedDBInstancesOfferingsOutcome RDSClient::DescribeReservedDBInstancesOfferings(
    const DescribeReservedDBInstancesOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedDBInstancesOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedDBInstancesOfferingsOutcome(std::move(result.GetError()));
}

DescribeServerlessV2PlatformVersionsOutcome RDSClient::DescribeServerlessV2PlatformVersions(
    const DescribeServerlessV2PlatformVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServerlessV2PlatformVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeServerlessV2PlatformVersionsOutcome(std::move(result.GetError()));
}

DescribeSourceRegionsOutcome RDSClient::DescribeSourceRegions(const DescribeSourceRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSourceRegionsOutcome(result.GetResultWithOwnership())
                            : DescribeSourceRegionsOutcome(std::move(result.GetError()));
}

DescribeTenantDatabasesOutcome RDSClient::DescribeTenantDatabases(const DescribeTenantDatabasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTenantDatabasesOutcome(result.GetResultWithOwnership())
                            : DescribeTenantDatabasesOutcome(std::move(result.GetError()));
}

DescribeValidDBInstanceModificationsOutcome RDSClient::DescribeValidDBInstanceModifications(
    const DescribeValidDBInstanceModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeValidDBInstanceModificationsOutcome(result.GetResultWithOwnership())
                            : DescribeValidDBInstanceModificationsOutcome(std::move(result.GetError()));
}

DisableHttpEndpointOutcome RDSClient::DisableHttpEndpoint(const DisableHttpEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableHttpEndpointOutcome(result.GetResultWithOwnership())
                            : DisableHttpEndpointOutcome(std::move(result.GetError()));
}

DownloadDBLogFilePortionOutcome RDSClient::DownloadDBLogFilePortion(const DownloadDBLogFilePortionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DownloadDBLogFilePortionOutcome(result.GetResultWithOwnership())
                            : DownloadDBLogFilePortionOutcome(std::move(result.GetError()));
}

EnableHttpEndpointOutcome RDSClient::EnableHttpEndpoint(const EnableHttpEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableHttpEndpointOutcome(result.GetResultWithOwnership())
                            : EnableHttpEndpointOutcome(std::move(result.GetError()));
}

FailoverDBClusterOutcome RDSClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FailoverDBClusterOutcome(result.GetResultWithOwnership())
                            : FailoverDBClusterOutcome(std::move(result.GetError()));
}

FailoverGlobalClusterOutcome RDSClient::FailoverGlobalCluster(const FailoverGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FailoverGlobalClusterOutcome(result.GetResultWithOwnership())
                            : FailoverGlobalClusterOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome RDSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ModifyActivityStreamOutcome RDSClient::ModifyActivityStream(const ModifyActivityStreamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyActivityStreamOutcome(result.GetResultWithOwnership())
                            : ModifyActivityStreamOutcome(std::move(result.GetError()));
}

ModifyCertificatesOutcome RDSClient::ModifyCertificates(const ModifyCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCertificatesOutcome(result.GetResultWithOwnership())
                            : ModifyCertificatesOutcome(std::move(result.GetError()));
}

ModifyCurrentDBClusterCapacityOutcome RDSClient::ModifyCurrentDBClusterCapacity(
    const ModifyCurrentDBClusterCapacityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCurrentDBClusterCapacityOutcome(result.GetResultWithOwnership())
                            : ModifyCurrentDBClusterCapacityOutcome(std::move(result.GetError()));
}

ModifyCustomDBEngineVersionOutcome RDSClient::ModifyCustomDBEngineVersion(const ModifyCustomDBEngineVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCustomDBEngineVersionOutcome(result.GetResultWithOwnership())
                            : ModifyCustomDBEngineVersionOutcome(std::move(result.GetError()));
}

ModifyDBClusterOutcome RDSClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterOutcome(std::move(result.GetError()));
}

ModifyDBClusterEndpointOutcome RDSClient::ModifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterEndpointOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterEndpointOutcome(std::move(result.GetError()));
}

ModifyDBClusterParameterGroupOutcome RDSClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

ModifyDBClusterSnapshotAttributeOutcome RDSClient::ModifyDBClusterSnapshotAttribute(
    const ModifyDBClusterSnapshotAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterSnapshotAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterSnapshotAttributeOutcome(std::move(result.GetError()));
}

ModifyDBInstanceOutcome RDSClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBInstanceOutcome(result.GetResultWithOwnership())
                            : ModifyDBInstanceOutcome(std::move(result.GetError()));
}

ModifyDBParameterGroupOutcome RDSClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBParameterGroupOutcome(std::move(result.GetError()));
}

ModifyDBProxyOutcome RDSClient::ModifyDBProxy(const ModifyDBProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBProxyOutcome(result.GetResultWithOwnership()) : ModifyDBProxyOutcome(std::move(result.GetError()));
}

ModifyDBProxyEndpointOutcome RDSClient::ModifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBProxyEndpointOutcome(result.GetResultWithOwnership())
                            : ModifyDBProxyEndpointOutcome(std::move(result.GetError()));
}

ModifyDBProxyTargetGroupOutcome RDSClient::ModifyDBProxyTargetGroup(const ModifyDBProxyTargetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBProxyTargetGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBProxyTargetGroupOutcome(std::move(result.GetError()));
}

ModifyDBRecommendationOutcome RDSClient::ModifyDBRecommendation(const ModifyDBRecommendationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBRecommendationOutcome(result.GetResultWithOwnership())
                            : ModifyDBRecommendationOutcome(std::move(result.GetError()));
}

ModifyDBShardGroupOutcome RDSClient::ModifyDBShardGroup(const ModifyDBShardGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBShardGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBShardGroupOutcome(std::move(result.GetError()));
}

ModifyDBSnapshotOutcome RDSClient::ModifyDBSnapshot(const ModifyDBSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBSnapshotOutcome(result.GetResultWithOwnership())
                            : ModifyDBSnapshotOutcome(std::move(result.GetError()));
}

ModifyDBSnapshotAttributeOutcome RDSClient::ModifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBSnapshotAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyDBSnapshotAttributeOutcome(std::move(result.GetError()));
}

ModifyDBSubnetGroupOutcome RDSClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBSubnetGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBSubnetGroupOutcome(std::move(result.GetError()));
}

ModifyEventSubscriptionOutcome RDSClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : ModifyEventSubscriptionOutcome(std::move(result.GetError()));
}

ModifyGlobalClusterOutcome RDSClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyGlobalClusterOutcome(result.GetResultWithOwnership())
                            : ModifyGlobalClusterOutcome(std::move(result.GetError()));
}

ModifyIntegrationOutcome RDSClient::ModifyIntegration(const ModifyIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIntegrationOutcome(result.GetResultWithOwnership())
                            : ModifyIntegrationOutcome(std::move(result.GetError()));
}

ModifyOptionGroupOutcome RDSClient::ModifyOptionGroup(const ModifyOptionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyOptionGroupOutcome(result.GetResultWithOwnership())
                            : ModifyOptionGroupOutcome(std::move(result.GetError()));
}

ModifyTenantDatabaseOutcome RDSClient::ModifyTenantDatabase(const ModifyTenantDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTenantDatabaseOutcome(result.GetResultWithOwnership())
                            : ModifyTenantDatabaseOutcome(std::move(result.GetError()));
}

PromoteReadReplicaOutcome RDSClient::PromoteReadReplica(const PromoteReadReplicaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PromoteReadReplicaOutcome(result.GetResultWithOwnership())
                            : PromoteReadReplicaOutcome(std::move(result.GetError()));
}

PromoteReadReplicaDBClusterOutcome RDSClient::PromoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PromoteReadReplicaDBClusterOutcome(result.GetResultWithOwnership())
                            : PromoteReadReplicaDBClusterOutcome(std::move(result.GetError()));
}

PurchaseReservedDBInstancesOfferingOutcome RDSClient::PurchaseReservedDBInstancesOffering(
    const PurchaseReservedDBInstancesOfferingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseReservedDBInstancesOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseReservedDBInstancesOfferingOutcome(std::move(result.GetError()));
}

RebootDBClusterOutcome RDSClient::RebootDBCluster(const RebootDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootDBClusterOutcome(result.GetResultWithOwnership())
                            : RebootDBClusterOutcome(std::move(result.GetError()));
}

RebootDBInstanceOutcome RDSClient::RebootDBInstance(const RebootDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootDBInstanceOutcome(result.GetResultWithOwnership())
                            : RebootDBInstanceOutcome(std::move(result.GetError()));
}

RebootDBShardGroupOutcome RDSClient::RebootDBShardGroup(const RebootDBShardGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootDBShardGroupOutcome(result.GetResultWithOwnership())
                            : RebootDBShardGroupOutcome(std::move(result.GetError()));
}

RegisterDBProxyTargetsOutcome RDSClient::RegisterDBProxyTargets(const RegisterDBProxyTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterDBProxyTargetsOutcome(result.GetResultWithOwnership())
                            : RegisterDBProxyTargetsOutcome(std::move(result.GetError()));
}

RemoveFromGlobalClusterOutcome RDSClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveFromGlobalClusterOutcome(result.GetResultWithOwnership())
                            : RemoveFromGlobalClusterOutcome(std::move(result.GetError()));
}

RemoveRoleFromDBClusterOutcome RDSClient::RemoveRoleFromDBCluster(const RemoveRoleFromDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveRoleFromDBClusterOutcome(result.GetResultWithOwnership())
                            : RemoveRoleFromDBClusterOutcome(std::move(result.GetError()));
}

RemoveRoleFromDBInstanceOutcome RDSClient::RemoveRoleFromDBInstance(const RemoveRoleFromDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveRoleFromDBInstanceOutcome(result.GetResultWithOwnership())
                            : RemoveRoleFromDBInstanceOutcome(std::move(result.GetError()));
}

RemoveSourceIdentifierFromSubscriptionOutcome RDSClient::RemoveSourceIdentifierFromSubscription(
    const RemoveSourceIdentifierFromSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveSourceIdentifierFromSubscriptionOutcome(result.GetResultWithOwnership())
                            : RemoveSourceIdentifierFromSubscriptionOutcome(std::move(result.GetError()));
}

RemoveTagsFromResourceOutcome RDSClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsFromResourceOutcome(result.GetResultWithOwnership())
                            : RemoveTagsFromResourceOutcome(std::move(result.GetError()));
}

ResetDBClusterParameterGroupOutcome RDSClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : ResetDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

ResetDBParameterGroupOutcome RDSClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : ResetDBParameterGroupOutcome(std::move(result.GetError()));
}

RestoreDBClusterFromS3Outcome RDSClient::RestoreDBClusterFromS3(const RestoreDBClusterFromS3Request& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBClusterFromS3Outcome(result.GetResultWithOwnership())
                            : RestoreDBClusterFromS3Outcome(std::move(result.GetError()));
}

RestoreDBClusterFromSnapshotOutcome RDSClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBClusterFromSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreDBClusterFromSnapshotOutcome(std::move(result.GetError()));
}

RestoreDBClusterToPointInTimeOutcome RDSClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBClusterToPointInTimeOutcome(result.GetResultWithOwnership())
                            : RestoreDBClusterToPointInTimeOutcome(std::move(result.GetError()));
}

RestoreDBInstanceFromDBSnapshotOutcome RDSClient::RestoreDBInstanceFromDBSnapshot(
    const RestoreDBInstanceFromDBSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBInstanceFromDBSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreDBInstanceFromDBSnapshotOutcome(std::move(result.GetError()));
}

RestoreDBInstanceFromS3Outcome RDSClient::RestoreDBInstanceFromS3(const RestoreDBInstanceFromS3Request& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBInstanceFromS3Outcome(result.GetResultWithOwnership())
                            : RestoreDBInstanceFromS3Outcome(std::move(result.GetError()));
}

RestoreDBInstanceToPointInTimeOutcome RDSClient::RestoreDBInstanceToPointInTime(
    const RestoreDBInstanceToPointInTimeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBInstanceToPointInTimeOutcome(result.GetResultWithOwnership())
                            : RestoreDBInstanceToPointInTimeOutcome(std::move(result.GetError()));
}

RevokeDBSecurityGroupIngressOutcome RDSClient::RevokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeDBSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : RevokeDBSecurityGroupIngressOutcome(std::move(result.GetError()));
}

StartActivityStreamOutcome RDSClient::StartActivityStream(const StartActivityStreamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartActivityStreamOutcome(result.GetResultWithOwnership())
                            : StartActivityStreamOutcome(std::move(result.GetError()));
}

StartDBClusterOutcome RDSClient::StartDBCluster(const StartDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDBClusterOutcome(result.GetResultWithOwnership()) : StartDBClusterOutcome(std::move(result.GetError()));
}

StartDBInstanceOutcome RDSClient::StartDBInstance(const StartDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDBInstanceOutcome(result.GetResultWithOwnership())
                            : StartDBInstanceOutcome(std::move(result.GetError()));
}

StartDBInstanceAutomatedBackupsReplicationOutcome RDSClient::StartDBInstanceAutomatedBackupsReplication(
    const StartDBInstanceAutomatedBackupsReplicationRequest& request) const {
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet()) {
    StartDBInstanceAutomatedBackupsReplicationRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, StartDBInstanceAutomatedBackupsReplication, CoreErrors,
                                CoreErrors::ENDPOINT_RESOLUTION_FAILURE, presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    auto result = InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST);
    return result.IsSuccess() ? StartDBInstanceAutomatedBackupsReplicationOutcome(result.GetResultWithOwnership())
                              : StartDBInstanceAutomatedBackupsReplicationOutcome(std::move(result.GetError()));
  }

  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDBInstanceAutomatedBackupsReplicationOutcome(result.GetResultWithOwnership())
                            : StartDBInstanceAutomatedBackupsReplicationOutcome(std::move(result.GetError()));
}

StartExportTaskOutcome RDSClient::StartExportTask(const StartExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartExportTaskOutcome(result.GetResultWithOwnership())
                            : StartExportTaskOutcome(std::move(result.GetError()));
}

StopActivityStreamOutcome RDSClient::StopActivityStream(const StopActivityStreamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopActivityStreamOutcome(result.GetResultWithOwnership())
                            : StopActivityStreamOutcome(std::move(result.GetError()));
}

StopDBClusterOutcome RDSClient::StopDBCluster(const StopDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDBClusterOutcome(result.GetResultWithOwnership()) : StopDBClusterOutcome(std::move(result.GetError()));
}

StopDBInstanceOutcome RDSClient::StopDBInstance(const StopDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDBInstanceOutcome(result.GetResultWithOwnership()) : StopDBInstanceOutcome(std::move(result.GetError()));
}

StopDBInstanceAutomatedBackupsReplicationOutcome RDSClient::StopDBInstanceAutomatedBackupsReplication(
    const StopDBInstanceAutomatedBackupsReplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDBInstanceAutomatedBackupsReplicationOutcome(result.GetResultWithOwnership())
                            : StopDBInstanceAutomatedBackupsReplicationOutcome(std::move(result.GetError()));
}

SwitchoverBlueGreenDeploymentOutcome RDSClient::SwitchoverBlueGreenDeployment(const SwitchoverBlueGreenDeploymentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SwitchoverBlueGreenDeploymentOutcome(result.GetResultWithOwnership())
                            : SwitchoverBlueGreenDeploymentOutcome(std::move(result.GetError()));
}

SwitchoverGlobalClusterOutcome RDSClient::SwitchoverGlobalCluster(const SwitchoverGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SwitchoverGlobalClusterOutcome(result.GetResultWithOwnership())
                            : SwitchoverGlobalClusterOutcome(std::move(result.GetError()));
}

SwitchoverReadReplicaOutcome RDSClient::SwitchoverReadReplica(const SwitchoverReadReplicaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SwitchoverReadReplicaOutcome(result.GetResultWithOwnership())
                            : SwitchoverReadReplicaOutcome(std::move(result.GetError()));
}

Aws::String RDSClient::GenerateConnectAuthToken(const char* dbHostName, const char* dbRegion, unsigned port, const char* dbUserName) const {
  Aws::StringStream ss;
  ss << "http://" << dbHostName << ":" << port;
  URI uri(ss.str());
  uri.AddQueryStringParameter("Action", "connect");
  uri.AddQueryStringParameter("DBUser", dbUserName);
  auto url = GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, dbRegion, "rds-db", 900 /*15 minutes*/);
  Aws::Utils::StringUtils::Replace(url, "http://", "");

  return url;
}
