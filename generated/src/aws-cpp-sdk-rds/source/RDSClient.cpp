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
  return AddRoleToDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddRoleToDBInstanceOutcome RDSClient::AddRoleToDBInstance(const AddRoleToDBInstanceRequest& request) const {
  return AddRoleToDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddSourceIdentifierToSubscriptionOutcome RDSClient::AddSourceIdentifierToSubscription(
    const AddSourceIdentifierToSubscriptionRequest& request) const {
  return AddSourceIdentifierToSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsToResourceOutcome RDSClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  return AddTagsToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ApplyPendingMaintenanceActionOutcome RDSClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const {
  return ApplyPendingMaintenanceActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AuthorizeDBSecurityGroupIngressOutcome RDSClient::AuthorizeDBSecurityGroupIngress(
    const AuthorizeDBSecurityGroupIngressRequest& request) const {
  return AuthorizeDBSecurityGroupIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BacktrackDBClusterOutcome RDSClient::BacktrackDBCluster(const BacktrackDBClusterRequest& request) const {
  return BacktrackDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelExportTaskOutcome RDSClient::CancelExportTask(const CancelExportTaskRequest& request) const {
  return CancelExportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyDBClusterParameterGroupOutcome RDSClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const {
  return CopyDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
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

    return CopyDBClusterSnapshotOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return CopyDBClusterSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyDBParameterGroupOutcome RDSClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const {
  return CopyDBParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
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

    return CopyDBSnapshotOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return CopyDBSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyOptionGroupOutcome RDSClient::CopyOptionGroup(const CopyOptionGroupRequest& request) const {
  return CopyOptionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBlueGreenDeploymentOutcome RDSClient::CreateBlueGreenDeployment(const CreateBlueGreenDeploymentRequest& request) const {
  return CreateBlueGreenDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomDBEngineVersionOutcome RDSClient::CreateCustomDBEngineVersion(const CreateCustomDBEngineVersionRequest& request) const {
  return CreateCustomDBEngineVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
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

    return CreateDBClusterOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return CreateDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBClusterEndpointOutcome RDSClient::CreateDBClusterEndpoint(const CreateDBClusterEndpointRequest& request) const {
  return CreateDBClusterEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBClusterParameterGroupOutcome RDSClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const {
  return CreateDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBClusterSnapshotOutcome RDSClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const {
  return CreateDBClusterSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBInstanceOutcome RDSClient::CreateDBInstance(const CreateDBInstanceRequest& request) const {
  return CreateDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
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

    return CreateDBInstanceReadReplicaOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return CreateDBInstanceReadReplicaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBParameterGroupOutcome RDSClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const {
  return CreateDBParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBProxyOutcome RDSClient::CreateDBProxy(const CreateDBProxyRequest& request) const {
  return CreateDBProxyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBProxyEndpointOutcome RDSClient::CreateDBProxyEndpoint(const CreateDBProxyEndpointRequest& request) const {
  return CreateDBProxyEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBSecurityGroupOutcome RDSClient::CreateDBSecurityGroup(const CreateDBSecurityGroupRequest& request) const {
  return CreateDBSecurityGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBShardGroupOutcome RDSClient::CreateDBShardGroup(const CreateDBShardGroupRequest& request) const {
  return CreateDBShardGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBSnapshotOutcome RDSClient::CreateDBSnapshot(const CreateDBSnapshotRequest& request) const {
  return CreateDBSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBSubnetGroupOutcome RDSClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const {
  return CreateDBSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventSubscriptionOutcome RDSClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const {
  return CreateEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGlobalClusterOutcome RDSClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const {
  return CreateGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntegrationOutcome RDSClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  return CreateIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOptionGroupOutcome RDSClient::CreateOptionGroup(const CreateOptionGroupRequest& request) const {
  return CreateOptionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTenantDatabaseOutcome RDSClient::CreateTenantDatabase(const CreateTenantDatabaseRequest& request) const {
  return CreateTenantDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBlueGreenDeploymentOutcome RDSClient::DeleteBlueGreenDeployment(const DeleteBlueGreenDeploymentRequest& request) const {
  return DeleteBlueGreenDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomDBEngineVersionOutcome RDSClient::DeleteCustomDBEngineVersion(const DeleteCustomDBEngineVersionRequest& request) const {
  return DeleteCustomDBEngineVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterOutcome RDSClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const {
  return DeleteDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterAutomatedBackupOutcome RDSClient::DeleteDBClusterAutomatedBackup(
    const DeleteDBClusterAutomatedBackupRequest& request) const {
  return DeleteDBClusterAutomatedBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterEndpointOutcome RDSClient::DeleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest& request) const {
  return DeleteDBClusterEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterParameterGroupOutcome RDSClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const {
  return DeleteDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterSnapshotOutcome RDSClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const {
  return DeleteDBClusterSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBInstanceOutcome RDSClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const {
  return DeleteDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBInstanceAutomatedBackupOutcome RDSClient::DeleteDBInstanceAutomatedBackup(
    const DeleteDBInstanceAutomatedBackupRequest& request) const {
  return DeleteDBInstanceAutomatedBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBParameterGroupOutcome RDSClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const {
  return DeleteDBParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBProxyOutcome RDSClient::DeleteDBProxy(const DeleteDBProxyRequest& request) const {
  return DeleteDBProxyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBProxyEndpointOutcome RDSClient::DeleteDBProxyEndpoint(const DeleteDBProxyEndpointRequest& request) const {
  return DeleteDBProxyEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBSecurityGroupOutcome RDSClient::DeleteDBSecurityGroup(const DeleteDBSecurityGroupRequest& request) const {
  return DeleteDBSecurityGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBShardGroupOutcome RDSClient::DeleteDBShardGroup(const DeleteDBShardGroupRequest& request) const {
  return DeleteDBShardGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBSnapshotOutcome RDSClient::DeleteDBSnapshot(const DeleteDBSnapshotRequest& request) const {
  return DeleteDBSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBSubnetGroupOutcome RDSClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const {
  return DeleteDBSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventSubscriptionOutcome RDSClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const {
  return DeleteEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGlobalClusterOutcome RDSClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const {
  return DeleteGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIntegrationOutcome RDSClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  return DeleteIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOptionGroupOutcome RDSClient::DeleteOptionGroup(const DeleteOptionGroupRequest& request) const {
  return DeleteOptionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTenantDatabaseOutcome RDSClient::DeleteTenantDatabase(const DeleteTenantDatabaseRequest& request) const {
  return DeleteTenantDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterDBProxyTargetsOutcome RDSClient::DeregisterDBProxyTargets(const DeregisterDBProxyTargetsRequest& request) const {
  return DeregisterDBProxyTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountAttributesOutcome RDSClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const {
  return DescribeAccountAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBlueGreenDeploymentsOutcome RDSClient::DescribeBlueGreenDeployments(const DescribeBlueGreenDeploymentsRequest& request) const {
  return DescribeBlueGreenDeploymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCertificatesOutcome RDSClient::DescribeCertificates(const DescribeCertificatesRequest& request) const {
  return DescribeCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterAutomatedBackupsOutcome RDSClient::DescribeDBClusterAutomatedBackups(
    const DescribeDBClusterAutomatedBackupsRequest& request) const {
  return DescribeDBClusterAutomatedBackupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterBacktracksOutcome RDSClient::DescribeDBClusterBacktracks(const DescribeDBClusterBacktracksRequest& request) const {
  return DescribeDBClusterBacktracksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterEndpointsOutcome RDSClient::DescribeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest& request) const {
  return DescribeDBClusterEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterParameterGroupsOutcome RDSClient::DescribeDBClusterParameterGroups(
    const DescribeDBClusterParameterGroupsRequest& request) const {
  return DescribeDBClusterParameterGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterParametersOutcome RDSClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const {
  return DescribeDBClusterParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterSnapshotAttributesOutcome RDSClient::DescribeDBClusterSnapshotAttributes(
    const DescribeDBClusterSnapshotAttributesRequest& request) const {
  return DescribeDBClusterSnapshotAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterSnapshotsOutcome RDSClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const {
  return DescribeDBClusterSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClustersOutcome RDSClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const {
  return DescribeDBClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBEngineVersionsOutcome RDSClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const {
  return DescribeDBEngineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBInstanceAutomatedBackupsOutcome RDSClient::DescribeDBInstanceAutomatedBackups(
    const DescribeDBInstanceAutomatedBackupsRequest& request) const {
  return DescribeDBInstanceAutomatedBackupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBInstancesOutcome RDSClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const {
  return DescribeDBInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBLogFilesOutcome RDSClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest& request) const {
  return DescribeDBLogFilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBMajorEngineVersionsOutcome RDSClient::DescribeDBMajorEngineVersions(const DescribeDBMajorEngineVersionsRequest& request) const {
  return DescribeDBMajorEngineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBParameterGroupsOutcome RDSClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const {
  return DescribeDBParameterGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBParametersOutcome RDSClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const {
  return DescribeDBParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBProxiesOutcome RDSClient::DescribeDBProxies(const DescribeDBProxiesRequest& request) const {
  return DescribeDBProxiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBProxyEndpointsOutcome RDSClient::DescribeDBProxyEndpoints(const DescribeDBProxyEndpointsRequest& request) const {
  return DescribeDBProxyEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBProxyTargetGroupsOutcome RDSClient::DescribeDBProxyTargetGroups(const DescribeDBProxyTargetGroupsRequest& request) const {
  return DescribeDBProxyTargetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBProxyTargetsOutcome RDSClient::DescribeDBProxyTargets(const DescribeDBProxyTargetsRequest& request) const {
  return DescribeDBProxyTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBRecommendationsOutcome RDSClient::DescribeDBRecommendations(const DescribeDBRecommendationsRequest& request) const {
  return DescribeDBRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBSecurityGroupsOutcome RDSClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest& request) const {
  return DescribeDBSecurityGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBShardGroupsOutcome RDSClient::DescribeDBShardGroups(const DescribeDBShardGroupsRequest& request) const {
  return DescribeDBShardGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBSnapshotAttributesOutcome RDSClient::DescribeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest& request) const {
  return DescribeDBSnapshotAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBSnapshotTenantDatabasesOutcome RDSClient::DescribeDBSnapshotTenantDatabases(
    const DescribeDBSnapshotTenantDatabasesRequest& request) const {
  return DescribeDBSnapshotTenantDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBSnapshotsOutcome RDSClient::DescribeDBSnapshots(const DescribeDBSnapshotsRequest& request) const {
  return DescribeDBSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBSubnetGroupsOutcome RDSClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const {
  return DescribeDBSubnetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEngineDefaultClusterParametersOutcome RDSClient::DescribeEngineDefaultClusterParameters(
    const DescribeEngineDefaultClusterParametersRequest& request) const {
  return DescribeEngineDefaultClusterParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEngineDefaultParametersOutcome RDSClient::DescribeEngineDefaultParameters(
    const DescribeEngineDefaultParametersRequest& request) const {
  return DescribeEngineDefaultParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventCategoriesOutcome RDSClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const {
  return DescribeEventCategoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventSubscriptionsOutcome RDSClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const {
  return DescribeEventSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome RDSClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExportTasksOutcome RDSClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const {
  return DescribeExportTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGlobalClustersOutcome RDSClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const {
  return DescribeGlobalClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIntegrationsOutcome RDSClient::DescribeIntegrations(const DescribeIntegrationsRequest& request) const {
  return DescribeIntegrationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOptionGroupOptionsOutcome RDSClient::DescribeOptionGroupOptions(const DescribeOptionGroupOptionsRequest& request) const {
  return DescribeOptionGroupOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOptionGroupsOutcome RDSClient::DescribeOptionGroups(const DescribeOptionGroupsRequest& request) const {
  return DescribeOptionGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrderableDBInstanceOptionsOutcome RDSClient::DescribeOrderableDBInstanceOptions(
    const DescribeOrderableDBInstanceOptionsRequest& request) const {
  return DescribeOrderableDBInstanceOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePendingMaintenanceActionsOutcome RDSClient::DescribePendingMaintenanceActions(
    const DescribePendingMaintenanceActionsRequest& request) const {
  return DescribePendingMaintenanceActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedDBInstancesOutcome RDSClient::DescribeReservedDBInstances(const DescribeReservedDBInstancesRequest& request) const {
  return DescribeReservedDBInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedDBInstancesOfferingsOutcome RDSClient::DescribeReservedDBInstancesOfferings(
    const DescribeReservedDBInstancesOfferingsRequest& request) const {
  return DescribeReservedDBInstancesOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSourceRegionsOutcome RDSClient::DescribeSourceRegions(const DescribeSourceRegionsRequest& request) const {
  return DescribeSourceRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTenantDatabasesOutcome RDSClient::DescribeTenantDatabases(const DescribeTenantDatabasesRequest& request) const {
  return DescribeTenantDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeValidDBInstanceModificationsOutcome RDSClient::DescribeValidDBInstanceModifications(
    const DescribeValidDBInstanceModificationsRequest& request) const {
  return DescribeValidDBInstanceModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableHttpEndpointOutcome RDSClient::DisableHttpEndpoint(const DisableHttpEndpointRequest& request) const {
  return DisableHttpEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DownloadDBLogFilePortionOutcome RDSClient::DownloadDBLogFilePortion(const DownloadDBLogFilePortionRequest& request) const {
  return DownloadDBLogFilePortionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableHttpEndpointOutcome RDSClient::EnableHttpEndpoint(const EnableHttpEndpointRequest& request) const {
  return EnableHttpEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

FailoverDBClusterOutcome RDSClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const {
  return FailoverDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

FailoverGlobalClusterOutcome RDSClient::FailoverGlobalCluster(const FailoverGlobalClusterRequest& request) const {
  return FailoverGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome RDSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyActivityStreamOutcome RDSClient::ModifyActivityStream(const ModifyActivityStreamRequest& request) const {
  return ModifyActivityStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCertificatesOutcome RDSClient::ModifyCertificates(const ModifyCertificatesRequest& request) const {
  return ModifyCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCurrentDBClusterCapacityOutcome RDSClient::ModifyCurrentDBClusterCapacity(
    const ModifyCurrentDBClusterCapacityRequest& request) const {
  return ModifyCurrentDBClusterCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCustomDBEngineVersionOutcome RDSClient::ModifyCustomDBEngineVersion(const ModifyCustomDBEngineVersionRequest& request) const {
  return ModifyCustomDBEngineVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBClusterOutcome RDSClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const {
  return ModifyDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBClusterEndpointOutcome RDSClient::ModifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest& request) const {
  return ModifyDBClusterEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBClusterParameterGroupOutcome RDSClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const {
  return ModifyDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBClusterSnapshotAttributeOutcome RDSClient::ModifyDBClusterSnapshotAttribute(
    const ModifyDBClusterSnapshotAttributeRequest& request) const {
  return ModifyDBClusterSnapshotAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBInstanceOutcome RDSClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const {
  return ModifyDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBParameterGroupOutcome RDSClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const {
  return ModifyDBParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBProxyOutcome RDSClient::ModifyDBProxy(const ModifyDBProxyRequest& request) const {
  return ModifyDBProxyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBProxyEndpointOutcome RDSClient::ModifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest& request) const {
  return ModifyDBProxyEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBProxyTargetGroupOutcome RDSClient::ModifyDBProxyTargetGroup(const ModifyDBProxyTargetGroupRequest& request) const {
  return ModifyDBProxyTargetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBRecommendationOutcome RDSClient::ModifyDBRecommendation(const ModifyDBRecommendationRequest& request) const {
  return ModifyDBRecommendationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBShardGroupOutcome RDSClient::ModifyDBShardGroup(const ModifyDBShardGroupRequest& request) const {
  return ModifyDBShardGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBSnapshotOutcome RDSClient::ModifyDBSnapshot(const ModifyDBSnapshotRequest& request) const {
  return ModifyDBSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBSnapshotAttributeOutcome RDSClient::ModifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest& request) const {
  return ModifyDBSnapshotAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBSubnetGroupOutcome RDSClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const {
  return ModifyDBSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyEventSubscriptionOutcome RDSClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const {
  return ModifyEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyGlobalClusterOutcome RDSClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const {
  return ModifyGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyIntegrationOutcome RDSClient::ModifyIntegration(const ModifyIntegrationRequest& request) const {
  return ModifyIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyOptionGroupOutcome RDSClient::ModifyOptionGroup(const ModifyOptionGroupRequest& request) const {
  return ModifyOptionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyTenantDatabaseOutcome RDSClient::ModifyTenantDatabase(const ModifyTenantDatabaseRequest& request) const {
  return ModifyTenantDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PromoteReadReplicaOutcome RDSClient::PromoteReadReplica(const PromoteReadReplicaRequest& request) const {
  return PromoteReadReplicaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PromoteReadReplicaDBClusterOutcome RDSClient::PromoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest& request) const {
  return PromoteReadReplicaDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PurchaseReservedDBInstancesOfferingOutcome RDSClient::PurchaseReservedDBInstancesOffering(
    const PurchaseReservedDBInstancesOfferingRequest& request) const {
  return PurchaseReservedDBInstancesOfferingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootDBClusterOutcome RDSClient::RebootDBCluster(const RebootDBClusterRequest& request) const {
  return RebootDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootDBInstanceOutcome RDSClient::RebootDBInstance(const RebootDBInstanceRequest& request) const {
  return RebootDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootDBShardGroupOutcome RDSClient::RebootDBShardGroup(const RebootDBShardGroupRequest& request) const {
  return RebootDBShardGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterDBProxyTargetsOutcome RDSClient::RegisterDBProxyTargets(const RegisterDBProxyTargetsRequest& request) const {
  return RegisterDBProxyTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveFromGlobalClusterOutcome RDSClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const {
  return RemoveFromGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveRoleFromDBClusterOutcome RDSClient::RemoveRoleFromDBCluster(const RemoveRoleFromDBClusterRequest& request) const {
  return RemoveRoleFromDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveRoleFromDBInstanceOutcome RDSClient::RemoveRoleFromDBInstance(const RemoveRoleFromDBInstanceRequest& request) const {
  return RemoveRoleFromDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveSourceIdentifierFromSubscriptionOutcome RDSClient::RemoveSourceIdentifierFromSubscription(
    const RemoveSourceIdentifierFromSubscriptionRequest& request) const {
  return RemoveSourceIdentifierFromSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromResourceOutcome RDSClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  return RemoveTagsFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetDBClusterParameterGroupOutcome RDSClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const {
  return ResetDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetDBParameterGroupOutcome RDSClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const {
  return ResetDBParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBClusterFromS3Outcome RDSClient::RestoreDBClusterFromS3(const RestoreDBClusterFromS3Request& request) const {
  return RestoreDBClusterFromS3Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBClusterFromSnapshotOutcome RDSClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const {
  return RestoreDBClusterFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBClusterToPointInTimeOutcome RDSClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const {
  return RestoreDBClusterToPointInTimeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBInstanceFromDBSnapshotOutcome RDSClient::RestoreDBInstanceFromDBSnapshot(
    const RestoreDBInstanceFromDBSnapshotRequest& request) const {
  return RestoreDBInstanceFromDBSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBInstanceFromS3Outcome RDSClient::RestoreDBInstanceFromS3(const RestoreDBInstanceFromS3Request& request) const {
  return RestoreDBInstanceFromS3Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBInstanceToPointInTimeOutcome RDSClient::RestoreDBInstanceToPointInTime(
    const RestoreDBInstanceToPointInTimeRequest& request) const {
  return RestoreDBInstanceToPointInTimeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeDBSecurityGroupIngressOutcome RDSClient::RevokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest& request) const {
  return RevokeDBSecurityGroupIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartActivityStreamOutcome RDSClient::StartActivityStream(const StartActivityStreamRequest& request) const {
  return StartActivityStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDBClusterOutcome RDSClient::StartDBCluster(const StartDBClusterRequest& request) const {
  return StartDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDBInstanceOutcome RDSClient::StartDBInstance(const StartDBInstanceRequest& request) const {
  return StartDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
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

    return StartDBInstanceAutomatedBackupsReplicationOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return StartDBInstanceAutomatedBackupsReplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExportTaskOutcome RDSClient::StartExportTask(const StartExportTaskRequest& request) const {
  return StartExportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopActivityStreamOutcome RDSClient::StopActivityStream(const StopActivityStreamRequest& request) const {
  return StopActivityStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDBClusterOutcome RDSClient::StopDBCluster(const StopDBClusterRequest& request) const {
  return StopDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDBInstanceOutcome RDSClient::StopDBInstance(const StopDBInstanceRequest& request) const {
  return StopDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDBInstanceAutomatedBackupsReplicationOutcome RDSClient::StopDBInstanceAutomatedBackupsReplication(
    const StopDBInstanceAutomatedBackupsReplicationRequest& request) const {
  return StopDBInstanceAutomatedBackupsReplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SwitchoverBlueGreenDeploymentOutcome RDSClient::SwitchoverBlueGreenDeployment(const SwitchoverBlueGreenDeploymentRequest& request) const {
  return SwitchoverBlueGreenDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SwitchoverGlobalClusterOutcome RDSClient::SwitchoverGlobalCluster(const SwitchoverGlobalClusterRequest& request) const {
  return SwitchoverGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SwitchoverReadReplicaOutcome RDSClient::SwitchoverReadReplica(const SwitchoverReadReplicaRequest& request) const {
  return SwitchoverReadReplicaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
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
