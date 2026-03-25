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
#include <aws/memorydb/MemoryDBClient.h>
#include <aws/memorydb/MemoryDBEndpointProvider.h>
#include <aws/memorydb/MemoryDBErrorMarshaller.h>
#include <aws/memorydb/model/BatchUpdateClusterRequest.h>
#include <aws/memorydb/model/CopySnapshotRequest.h>
#include <aws/memorydb/model/CreateACLRequest.h>
#include <aws/memorydb/model/CreateClusterRequest.h>
#include <aws/memorydb/model/CreateMultiRegionClusterRequest.h>
#include <aws/memorydb/model/CreateParameterGroupRequest.h>
#include <aws/memorydb/model/CreateSnapshotRequest.h>
#include <aws/memorydb/model/CreateSubnetGroupRequest.h>
#include <aws/memorydb/model/CreateUserRequest.h>
#include <aws/memorydb/model/DeleteACLRequest.h>
#include <aws/memorydb/model/DeleteClusterRequest.h>
#include <aws/memorydb/model/DeleteMultiRegionClusterRequest.h>
#include <aws/memorydb/model/DeleteParameterGroupRequest.h>
#include <aws/memorydb/model/DeleteSnapshotRequest.h>
#include <aws/memorydb/model/DeleteSubnetGroupRequest.h>
#include <aws/memorydb/model/DeleteUserRequest.h>
#include <aws/memorydb/model/DescribeACLsRequest.h>
#include <aws/memorydb/model/DescribeClustersRequest.h>
#include <aws/memorydb/model/DescribeEngineVersionsRequest.h>
#include <aws/memorydb/model/DescribeEventsRequest.h>
#include <aws/memorydb/model/DescribeMultiRegionClustersRequest.h>
#include <aws/memorydb/model/DescribeMultiRegionParameterGroupsRequest.h>
#include <aws/memorydb/model/DescribeMultiRegionParametersRequest.h>
#include <aws/memorydb/model/DescribeParameterGroupsRequest.h>
#include <aws/memorydb/model/DescribeParametersRequest.h>
#include <aws/memorydb/model/DescribeReservedNodesOfferingsRequest.h>
#include <aws/memorydb/model/DescribeReservedNodesRequest.h>
#include <aws/memorydb/model/DescribeServiceUpdatesRequest.h>
#include <aws/memorydb/model/DescribeSnapshotsRequest.h>
#include <aws/memorydb/model/DescribeSubnetGroupsRequest.h>
#include <aws/memorydb/model/DescribeUsersRequest.h>
#include <aws/memorydb/model/FailoverShardRequest.h>
#include <aws/memorydb/model/ListAllowedMultiRegionClusterUpdatesRequest.h>
#include <aws/memorydb/model/ListAllowedNodeTypeUpdatesRequest.h>
#include <aws/memorydb/model/ListTagsRequest.h>
#include <aws/memorydb/model/PurchaseReservedNodesOfferingRequest.h>
#include <aws/memorydb/model/ResetParameterGroupRequest.h>
#include <aws/memorydb/model/TagResourceRequest.h>
#include <aws/memorydb/model/UntagResourceRequest.h>
#include <aws/memorydb/model/UpdateACLRequest.h>
#include <aws/memorydb/model/UpdateClusterRequest.h>
#include <aws/memorydb/model/UpdateMultiRegionClusterRequest.h>
#include <aws/memorydb/model/UpdateParameterGroupRequest.h>
#include <aws/memorydb/model/UpdateSubnetGroupRequest.h>
#include <aws/memorydb/model/UpdateUserRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MemoryDB;
using namespace Aws::MemoryDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MemoryDB {
const char SERVICE_NAME[] = "memorydb";
const char ALLOCATION_TAG[] = "MemoryDBClient";
}  // namespace MemoryDB
}  // namespace Aws
const char* MemoryDBClient::GetServiceName() { return SERVICE_NAME; }
const char* MemoryDBClient::GetAllocationTag() { return ALLOCATION_TAG; }

MemoryDBClient::MemoryDBClient(const MemoryDB::MemoryDBClientConfiguration& clientConfiguration,
                               std::shared_ptr<MemoryDBEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MemoryDBClient::MemoryDBClient(const AWSCredentials& credentials, std::shared_ptr<MemoryDBEndpointProviderBase> endpointProvider,
                               const MemoryDB::MemoryDBClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MemoryDBClient::MemoryDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<MemoryDBEndpointProviderBase> endpointProvider,
                               const MemoryDB::MemoryDBClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MemoryDBClient::MemoryDBClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MemoryDBClient::MemoryDBClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MemoryDBClient::MemoryDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MemoryDBClient::~MemoryDBClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MemoryDBEndpointProviderBase>& MemoryDBClient::accessEndpointProvider() { return m_endpointProvider; }

void MemoryDBClient::init(const MemoryDB::MemoryDBClientConfiguration& config) {
  AWSClient::SetServiceClientName("MemoryDB");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "memorydb");
}

void MemoryDBClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MemoryDBClient::InvokeOperationOutcome MemoryDBClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

BatchUpdateClusterOutcome MemoryDBClient::BatchUpdateCluster(const BatchUpdateClusterRequest& request) const {
  return BatchUpdateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopySnapshotOutcome MemoryDBClient::CopySnapshot(const CopySnapshotRequest& request) const {
  return CopySnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateACLOutcome MemoryDBClient::CreateACL(const CreateACLRequest& request) const {
  return CreateACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome MemoryDBClient::CreateCluster(const CreateClusterRequest& request) const {
  return CreateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMultiRegionClusterOutcome MemoryDBClient::CreateMultiRegionCluster(const CreateMultiRegionClusterRequest& request) const {
  return CreateMultiRegionClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateParameterGroupOutcome MemoryDBClient::CreateParameterGroup(const CreateParameterGroupRequest& request) const {
  return CreateParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotOutcome MemoryDBClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  return CreateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubnetGroupOutcome MemoryDBClient::CreateSubnetGroup(const CreateSubnetGroupRequest& request) const {
  return CreateSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome MemoryDBClient::CreateUser(const CreateUserRequest& request) const {
  return CreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteACLOutcome MemoryDBClient::DeleteACL(const DeleteACLRequest& request) const {
  return DeleteACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome MemoryDBClient::DeleteCluster(const DeleteClusterRequest& request) const {
  return DeleteClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMultiRegionClusterOutcome MemoryDBClient::DeleteMultiRegionCluster(const DeleteMultiRegionClusterRequest& request) const {
  return DeleteMultiRegionClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteParameterGroupOutcome MemoryDBClient::DeleteParameterGroup(const DeleteParameterGroupRequest& request) const {
  return DeleteParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSnapshotOutcome MemoryDBClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  return DeleteSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSubnetGroupOutcome MemoryDBClient::DeleteSubnetGroup(const DeleteSubnetGroupRequest& request) const {
  return DeleteSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome MemoryDBClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeACLsOutcome MemoryDBClient::DescribeACLs(const DescribeACLsRequest& request) const {
  return DescribeACLsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClustersOutcome MemoryDBClient::DescribeClusters(const DescribeClustersRequest& request) const {
  return DescribeClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEngineVersionsOutcome MemoryDBClient::DescribeEngineVersions(const DescribeEngineVersionsRequest& request) const {
  return DescribeEngineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome MemoryDBClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMultiRegionClustersOutcome MemoryDBClient::DescribeMultiRegionClusters(const DescribeMultiRegionClustersRequest& request) const {
  return DescribeMultiRegionClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMultiRegionParameterGroupsOutcome MemoryDBClient::DescribeMultiRegionParameterGroups(
    const DescribeMultiRegionParameterGroupsRequest& request) const {
  return DescribeMultiRegionParameterGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMultiRegionParametersOutcome MemoryDBClient::DescribeMultiRegionParameters(
    const DescribeMultiRegionParametersRequest& request) const {
  return DescribeMultiRegionParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeParameterGroupsOutcome MemoryDBClient::DescribeParameterGroups(const DescribeParameterGroupsRequest& request) const {
  return DescribeParameterGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeParametersOutcome MemoryDBClient::DescribeParameters(const DescribeParametersRequest& request) const {
  return DescribeParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedNodesOutcome MemoryDBClient::DescribeReservedNodes(const DescribeReservedNodesRequest& request) const {
  return DescribeReservedNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedNodesOfferingsOutcome MemoryDBClient::DescribeReservedNodesOfferings(
    const DescribeReservedNodesOfferingsRequest& request) const {
  return DescribeReservedNodesOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServiceUpdatesOutcome MemoryDBClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const {
  return DescribeServiceUpdatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotsOutcome MemoryDBClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  return DescribeSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSubnetGroupsOutcome MemoryDBClient::DescribeSubnetGroups(const DescribeSubnetGroupsRequest& request) const {
  return DescribeSubnetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUsersOutcome MemoryDBClient::DescribeUsers(const DescribeUsersRequest& request) const {
  return DescribeUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

FailoverShardOutcome MemoryDBClient::FailoverShard(const FailoverShardRequest& request) const {
  return FailoverShardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAllowedMultiRegionClusterUpdatesOutcome MemoryDBClient::ListAllowedMultiRegionClusterUpdates(
    const ListAllowedMultiRegionClusterUpdatesRequest& request) const {
  return ListAllowedMultiRegionClusterUpdatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAllowedNodeTypeUpdatesOutcome MemoryDBClient::ListAllowedNodeTypeUpdates(const ListAllowedNodeTypeUpdatesRequest& request) const {
  return ListAllowedNodeTypeUpdatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsOutcome MemoryDBClient::ListTags(const ListTagsRequest& request) const {
  return ListTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PurchaseReservedNodesOfferingOutcome MemoryDBClient::PurchaseReservedNodesOffering(
    const PurchaseReservedNodesOfferingRequest& request) const {
  return PurchaseReservedNodesOfferingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetParameterGroupOutcome MemoryDBClient::ResetParameterGroup(const ResetParameterGroupRequest& request) const {
  return ResetParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MemoryDBClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MemoryDBClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateACLOutcome MemoryDBClient::UpdateACL(const UpdateACLRequest& request) const {
  return UpdateACLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterOutcome MemoryDBClient::UpdateCluster(const UpdateClusterRequest& request) const {
  return UpdateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMultiRegionClusterOutcome MemoryDBClient::UpdateMultiRegionCluster(const UpdateMultiRegionClusterRequest& request) const {
  return UpdateMultiRegionClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateParameterGroupOutcome MemoryDBClient::UpdateParameterGroup(const UpdateParameterGroupRequest& request) const {
  return UpdateParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSubnetGroupOutcome MemoryDBClient::UpdateSubnetGroup(const UpdateSubnetGroupRequest& request) const {
  return UpdateSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserOutcome MemoryDBClient::UpdateUser(const UpdateUserRequest& request) const {
  return UpdateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
