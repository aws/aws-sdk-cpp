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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateClusterOutcome(result.GetResultWithOwnership())
                            : BatchUpdateClusterOutcome(std::move(result.GetError()));
}

CopySnapshotOutcome MemoryDBClient::CopySnapshot(const CopySnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopySnapshotOutcome(result.GetResultWithOwnership()) : CopySnapshotOutcome(std::move(result.GetError()));
}

CreateACLOutcome MemoryDBClient::CreateACL(const CreateACLRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateACLOutcome(result.GetResultWithOwnership()) : CreateACLOutcome(std::move(result.GetError()));
}

CreateClusterOutcome MemoryDBClient::CreateCluster(const CreateClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterOutcome(result.GetResultWithOwnership()) : CreateClusterOutcome(std::move(result.GetError()));
}

CreateMultiRegionClusterOutcome MemoryDBClient::CreateMultiRegionCluster(const CreateMultiRegionClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMultiRegionClusterOutcome(result.GetResultWithOwnership())
                            : CreateMultiRegionClusterOutcome(std::move(result.GetError()));
}

CreateParameterGroupOutcome MemoryDBClient::CreateParameterGroup(const CreateParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateParameterGroupOutcome(std::move(result.GetError()));
}

CreateSnapshotOutcome MemoryDBClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotOutcome(result.GetResultWithOwnership()) : CreateSnapshotOutcome(std::move(result.GetError()));
}

CreateSubnetGroupOutcome MemoryDBClient::CreateSubnetGroup(const CreateSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubnetGroupOutcome(result.GetResultWithOwnership())
                            : CreateSubnetGroupOutcome(std::move(result.GetError()));
}

CreateUserOutcome MemoryDBClient::CreateUser(const CreateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserOutcome(result.GetResultWithOwnership()) : CreateUserOutcome(std::move(result.GetError()));
}

DeleteACLOutcome MemoryDBClient::DeleteACL(const DeleteACLRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteACLOutcome(result.GetResultWithOwnership()) : DeleteACLOutcome(std::move(result.GetError()));
}

DeleteClusterOutcome MemoryDBClient::DeleteCluster(const DeleteClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterOutcome(result.GetResultWithOwnership()) : DeleteClusterOutcome(std::move(result.GetError()));
}

DeleteMultiRegionClusterOutcome MemoryDBClient::DeleteMultiRegionCluster(const DeleteMultiRegionClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMultiRegionClusterOutcome(result.GetResultWithOwnership())
                            : DeleteMultiRegionClusterOutcome(std::move(result.GetError()));
}

DeleteParameterGroupOutcome MemoryDBClient::DeleteParameterGroup(const DeleteParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteParameterGroupOutcome(result.GetResultWithOwnership())
                            : DeleteParameterGroupOutcome(std::move(result.GetError()));
}

DeleteSnapshotOutcome MemoryDBClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotOutcome(result.GetResultWithOwnership()) : DeleteSnapshotOutcome(std::move(result.GetError()));
}

DeleteSubnetGroupOutcome MemoryDBClient::DeleteSubnetGroup(const DeleteSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSubnetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteSubnetGroupOutcome(std::move(result.GetError()));
}

DeleteUserOutcome MemoryDBClient::DeleteUser(const DeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DescribeACLsOutcome MemoryDBClient::DescribeACLs(const DescribeACLsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeACLsOutcome(result.GetResultWithOwnership()) : DescribeACLsOutcome(std::move(result.GetError()));
}

DescribeClustersOutcome MemoryDBClient::DescribeClusters(const DescribeClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClustersOutcome(result.GetResultWithOwnership())
                            : DescribeClustersOutcome(std::move(result.GetError()));
}

DescribeEngineVersionsOutcome MemoryDBClient::DescribeEngineVersions(const DescribeEngineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEngineVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeEngineVersionsOutcome(std::move(result.GetError()));
}

DescribeEventsOutcome MemoryDBClient::DescribeEvents(const DescribeEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventsOutcome(result.GetResultWithOwnership()) : DescribeEventsOutcome(std::move(result.GetError()));
}

DescribeMultiRegionClustersOutcome MemoryDBClient::DescribeMultiRegionClusters(const DescribeMultiRegionClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMultiRegionClustersOutcome(result.GetResultWithOwnership())
                            : DescribeMultiRegionClustersOutcome(std::move(result.GetError()));
}

DescribeMultiRegionParameterGroupsOutcome MemoryDBClient::DescribeMultiRegionParameterGroups(
    const DescribeMultiRegionParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMultiRegionParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeMultiRegionParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeMultiRegionParametersOutcome MemoryDBClient::DescribeMultiRegionParameters(
    const DescribeMultiRegionParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMultiRegionParametersOutcome(result.GetResultWithOwnership())
                            : DescribeMultiRegionParametersOutcome(std::move(result.GetError()));
}

DescribeParameterGroupsOutcome MemoryDBClient::DescribeParameterGroups(const DescribeParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeParametersOutcome MemoryDBClient::DescribeParameters(const DescribeParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeParametersOutcome(result.GetResultWithOwnership())
                            : DescribeParametersOutcome(std::move(result.GetError()));
}

DescribeReservedNodesOutcome MemoryDBClient::DescribeReservedNodes(const DescribeReservedNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedNodesOutcome(result.GetResultWithOwnership())
                            : DescribeReservedNodesOutcome(std::move(result.GetError()));
}

DescribeReservedNodesOfferingsOutcome MemoryDBClient::DescribeReservedNodesOfferings(
    const DescribeReservedNodesOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedNodesOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedNodesOfferingsOutcome(std::move(result.GetError()));
}

DescribeServiceUpdatesOutcome MemoryDBClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServiceUpdatesOutcome(result.GetResultWithOwnership())
                            : DescribeServiceUpdatesOutcome(std::move(result.GetError()));
}

DescribeSnapshotsOutcome MemoryDBClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotsOutcome(std::move(result.GetError()));
}

DescribeSubnetGroupsOutcome MemoryDBClient::DescribeSubnetGroups(const DescribeSubnetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSubnetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeSubnetGroupsOutcome(std::move(result.GetError()));
}

DescribeUsersOutcome MemoryDBClient::DescribeUsers(const DescribeUsersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUsersOutcome(result.GetResultWithOwnership()) : DescribeUsersOutcome(std::move(result.GetError()));
}

FailoverShardOutcome MemoryDBClient::FailoverShard(const FailoverShardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FailoverShardOutcome(result.GetResultWithOwnership()) : FailoverShardOutcome(std::move(result.GetError()));
}

ListAllowedMultiRegionClusterUpdatesOutcome MemoryDBClient::ListAllowedMultiRegionClusterUpdates(
    const ListAllowedMultiRegionClusterUpdatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAllowedMultiRegionClusterUpdatesOutcome(result.GetResultWithOwnership())
                            : ListAllowedMultiRegionClusterUpdatesOutcome(std::move(result.GetError()));
}

ListAllowedNodeTypeUpdatesOutcome MemoryDBClient::ListAllowedNodeTypeUpdates(const ListAllowedNodeTypeUpdatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAllowedNodeTypeUpdatesOutcome(result.GetResultWithOwnership())
                            : ListAllowedNodeTypeUpdatesOutcome(std::move(result.GetError()));
}

ListTagsOutcome MemoryDBClient::ListTags(const ListTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsOutcome(result.GetResultWithOwnership()) : ListTagsOutcome(std::move(result.GetError()));
}

PurchaseReservedNodesOfferingOutcome MemoryDBClient::PurchaseReservedNodesOffering(
    const PurchaseReservedNodesOfferingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseReservedNodesOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseReservedNodesOfferingOutcome(std::move(result.GetError()));
}

ResetParameterGroupOutcome MemoryDBClient::ResetParameterGroup(const ResetParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetParameterGroupOutcome(result.GetResultWithOwnership())
                            : ResetParameterGroupOutcome(std::move(result.GetError()));
}

TagResourceOutcome MemoryDBClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome MemoryDBClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateACLOutcome MemoryDBClient::UpdateACL(const UpdateACLRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateACLOutcome(result.GetResultWithOwnership()) : UpdateACLOutcome(std::move(result.GetError()));
}

UpdateClusterOutcome MemoryDBClient::UpdateCluster(const UpdateClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClusterOutcome(result.GetResultWithOwnership()) : UpdateClusterOutcome(std::move(result.GetError()));
}

UpdateMultiRegionClusterOutcome MemoryDBClient::UpdateMultiRegionCluster(const UpdateMultiRegionClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMultiRegionClusterOutcome(result.GetResultWithOwnership())
                            : UpdateMultiRegionClusterOutcome(std::move(result.GetError()));
}

UpdateParameterGroupOutcome MemoryDBClient::UpdateParameterGroup(const UpdateParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateParameterGroupOutcome(result.GetResultWithOwnership())
                            : UpdateParameterGroupOutcome(std::move(result.GetError()));
}

UpdateSubnetGroupOutcome MemoryDBClient::UpdateSubnetGroup(const UpdateSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSubnetGroupOutcome(result.GetResultWithOwnership())
                            : UpdateSubnetGroupOutcome(std::move(result.GetError()));
}

UpdateUserOutcome MemoryDBClient::UpdateUser(const UpdateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserOutcome(result.GetResultWithOwnership()) : UpdateUserOutcome(std::move(result.GetError()));
}
