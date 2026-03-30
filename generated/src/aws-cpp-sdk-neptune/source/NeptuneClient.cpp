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
#include <aws/neptune/NeptuneClient.h>
#include <aws/neptune/NeptuneEndpointProvider.h>
#include <aws/neptune/NeptuneErrorMarshaller.h>
#include <aws/neptune/model/AddRoleToDBClusterRequest.h>
#include <aws/neptune/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/neptune/model/AddTagsToResourceRequest.h>
#include <aws/neptune/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/neptune/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/CopyDBClusterSnapshotRequest.h>
#include <aws/neptune/model/CopyDBParameterGroupRequest.h>
#include <aws/neptune/model/CreateDBClusterEndpointRequest.h>
#include <aws/neptune/model/CreateDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/CreateDBClusterRequest.h>
#include <aws/neptune/model/CreateDBClusterSnapshotRequest.h>
#include <aws/neptune/model/CreateDBInstanceRequest.h>
#include <aws/neptune/model/CreateDBParameterGroupRequest.h>
#include <aws/neptune/model/CreateDBSubnetGroupRequest.h>
#include <aws/neptune/model/CreateEventSubscriptionRequest.h>
#include <aws/neptune/model/CreateGlobalClusterRequest.h>
#include <aws/neptune/model/DeleteDBClusterEndpointRequest.h>
#include <aws/neptune/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/DeleteDBClusterRequest.h>
#include <aws/neptune/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/neptune/model/DeleteDBInstanceRequest.h>
#include <aws/neptune/model/DeleteDBParameterGroupRequest.h>
#include <aws/neptune/model/DeleteDBSubnetGroupRequest.h>
#include <aws/neptune/model/DeleteEventSubscriptionRequest.h>
#include <aws/neptune/model/DeleteGlobalClusterRequest.h>
#include <aws/neptune/model/DescribeDBClusterEndpointsRequest.h>
#include <aws/neptune/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/neptune/model/DescribeDBClusterParametersRequest.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotAttributesRequest.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/neptune/model/DescribeDBClustersRequest.h>
#include <aws/neptune/model/DescribeDBEngineVersionsRequest.h>
#include <aws/neptune/model/DescribeDBInstancesRequest.h>
#include <aws/neptune/model/DescribeDBParameterGroupsRequest.h>
#include <aws/neptune/model/DescribeDBParametersRequest.h>
#include <aws/neptune/model/DescribeDBSubnetGroupsRequest.h>
#include <aws/neptune/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/neptune/model/DescribeEventCategoriesRequest.h>
#include <aws/neptune/model/DescribeEventSubscriptionsRequest.h>
#include <aws/neptune/model/DescribeEventsRequest.h>
#include <aws/neptune/model/DescribeGlobalClustersRequest.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/neptune/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/neptune/model/DescribeValidDBInstanceModificationsRequest.h>
#include <aws/neptune/model/FailoverDBClusterRequest.h>
#include <aws/neptune/model/FailoverGlobalClusterRequest.h>
#include <aws/neptune/model/ListTagsForResourceRequest.h>
#include <aws/neptune/model/ModifyDBClusterEndpointRequest.h>
#include <aws/neptune/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/ModifyDBClusterRequest.h>
#include <aws/neptune/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/neptune/model/ModifyDBInstanceRequest.h>
#include <aws/neptune/model/ModifyDBParameterGroupRequest.h>
#include <aws/neptune/model/ModifyDBSubnetGroupRequest.h>
#include <aws/neptune/model/ModifyEventSubscriptionRequest.h>
#include <aws/neptune/model/ModifyGlobalClusterRequest.h>
#include <aws/neptune/model/PromoteReadReplicaDBClusterRequest.h>
#include <aws/neptune/model/RebootDBInstanceRequest.h>
#include <aws/neptune/model/RemoveFromGlobalClusterRequest.h>
#include <aws/neptune/model/RemoveRoleFromDBClusterRequest.h>
#include <aws/neptune/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/neptune/model/RemoveTagsFromResourceRequest.h>
#include <aws/neptune/model/ResetDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/ResetDBParameterGroupRequest.h>
#include <aws/neptune/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/neptune/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/neptune/model/StartDBClusterRequest.h>
#include <aws/neptune/model/StopDBClusterRequest.h>
#include <aws/neptune/model/SwitchoverGlobalClusterRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Neptune;
using namespace Aws::Neptune::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Neptune {
const char SERVICE_NAME[] = "rds";
const char ALLOCATION_TAG[] = "NeptuneClient";
}  // namespace Neptune
}  // namespace Aws
const char* NeptuneClient::GetServiceName() { return SERVICE_NAME; }
const char* NeptuneClient::GetAllocationTag() { return ALLOCATION_TAG; }

NeptuneClient::NeptuneClient(const Neptune::NeptuneClientConfiguration& clientConfiguration,
                             std::shared_ptr<NeptuneEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptuneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneClient::NeptuneClient(const AWSCredentials& credentials, std::shared_ptr<NeptuneEndpointProviderBase> endpointProvider,
                             const Neptune::NeptuneClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptuneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneClient::NeptuneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<NeptuneEndpointProviderBase> endpointProvider,
                             const Neptune::NeptuneClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptuneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NeptuneClient::NeptuneClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptuneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneClient::NeptuneClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptuneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneClient::NeptuneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptuneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NeptuneClient::~NeptuneClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NeptuneEndpointProviderBase>& NeptuneClient::accessEndpointProvider() { return m_endpointProvider; }

void NeptuneClient::init(const Neptune::NeptuneClientConfiguration& config) {
  AWSClient::SetServiceClientName("Neptune");
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

void NeptuneClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String NeptuneClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                        const char* region) const {
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

NeptuneClient::InvokeOperationOutcome NeptuneClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
AddRoleToDBClusterOutcome NeptuneClient::AddRoleToDBCluster(const AddRoleToDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddRoleToDBClusterOutcome(result.GetResultWithOwnership())
                            : AddRoleToDBClusterOutcome(std::move(result.GetError()));
}

AddSourceIdentifierToSubscriptionOutcome NeptuneClient::AddSourceIdentifierToSubscription(
    const AddSourceIdentifierToSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddSourceIdentifierToSubscriptionOutcome(result.GetResultWithOwnership())
                            : AddSourceIdentifierToSubscriptionOutcome(std::move(result.GetError()));
}

AddTagsToResourceOutcome NeptuneClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsToResourceOutcome(result.GetResultWithOwnership())
                            : AddTagsToResourceOutcome(std::move(result.GetError()));
}

ApplyPendingMaintenanceActionOutcome NeptuneClient::ApplyPendingMaintenanceAction(
    const ApplyPendingMaintenanceActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ApplyPendingMaintenanceActionOutcome(result.GetResultWithOwnership())
                            : ApplyPendingMaintenanceActionOutcome(std::move(result.GetError()));
}

CopyDBClusterParameterGroupOutcome NeptuneClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : CopyDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

CopyDBClusterSnapshotOutcome NeptuneClient::CopyDBClusterSnapshot(const CopyDBClusterSnapshotRequest& request) const {
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

CopyDBParameterGroupOutcome NeptuneClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : CopyDBParameterGroupOutcome(std::move(result.GetError()));
}

CreateDBClusterOutcome NeptuneClient::CreateDBCluster(const CreateDBClusterRequest& request) const {
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

CreateDBClusterEndpointOutcome NeptuneClient::CreateDBClusterEndpoint(const CreateDBClusterEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBClusterEndpointOutcome(result.GetResultWithOwnership())
                            : CreateDBClusterEndpointOutcome(std::move(result.GetError()));
}

CreateDBClusterParameterGroupOutcome NeptuneClient::CreateDBClusterParameterGroup(
    const CreateDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

CreateDBClusterSnapshotOutcome NeptuneClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateDBClusterSnapshotOutcome(std::move(result.GetError()));
}

CreateDBInstanceOutcome NeptuneClient::CreateDBInstance(const CreateDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBInstanceOutcome(result.GetResultWithOwnership())
                            : CreateDBInstanceOutcome(std::move(result.GetError()));
}

CreateDBParameterGroupOutcome NeptuneClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBParameterGroupOutcome(std::move(result.GetError()));
}

CreateDBSubnetGroupOutcome NeptuneClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDBSubnetGroupOutcome(result.GetResultWithOwnership())
                            : CreateDBSubnetGroupOutcome(std::move(result.GetError()));
}

CreateEventSubscriptionOutcome NeptuneClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateEventSubscriptionOutcome(std::move(result.GetError()));
}

CreateGlobalClusterOutcome NeptuneClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlobalClusterOutcome(result.GetResultWithOwnership())
                            : CreateGlobalClusterOutcome(std::move(result.GetError()));
}

DeleteDBClusterOutcome NeptuneClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterOutcome(std::move(result.GetError()));
}

DeleteDBClusterEndpointOutcome NeptuneClient::DeleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterEndpointOutcome(std::move(result.GetError()));
}

DeleteDBClusterParameterGroupOutcome NeptuneClient::DeleteDBClusterParameterGroup(
    const DeleteDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

DeleteDBClusterSnapshotOutcome NeptuneClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteDBClusterSnapshotOutcome(std::move(result.GetError()));
}

DeleteDBInstanceOutcome NeptuneClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteDBInstanceOutcome(std::move(result.GetError()));
}

DeleteDBParameterGroupOutcome NeptuneClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBParameterGroupOutcome(std::move(result.GetError()));
}

DeleteDBSubnetGroupOutcome NeptuneClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDBSubnetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDBSubnetGroupOutcome(std::move(result.GetError()));
}

DeleteEventSubscriptionOutcome NeptuneClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteEventSubscriptionOutcome(std::move(result.GetError()));
}

DeleteGlobalClusterOutcome NeptuneClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGlobalClusterOutcome(result.GetResultWithOwnership())
                            : DeleteGlobalClusterOutcome(std::move(result.GetError()));
}

DescribeDBClusterEndpointsOutcome NeptuneClient::DescribeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterEndpointsOutcome(std::move(result.GetError()));
}

DescribeDBClusterParameterGroupsOutcome NeptuneClient::DescribeDBClusterParameterGroups(
    const DescribeDBClusterParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeDBClusterParametersOutcome NeptuneClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterParametersOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterParametersOutcome(std::move(result.GetError()));
}

DescribeDBClusterSnapshotAttributesOutcome NeptuneClient::DescribeDBClusterSnapshotAttributes(
    const DescribeDBClusterSnapshotAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterSnapshotAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterSnapshotAttributesOutcome(std::move(result.GetError()));
}

DescribeDBClusterSnapshotsOutcome NeptuneClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClusterSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeDBClusterSnapshotsOutcome(std::move(result.GetError()));
}

DescribeDBClustersOutcome NeptuneClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBClustersOutcome(result.GetResultWithOwnership())
                            : DescribeDBClustersOutcome(std::move(result.GetError()));
}

DescribeDBEngineVersionsOutcome NeptuneClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBEngineVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeDBEngineVersionsOutcome(std::move(result.GetError()));
}

DescribeDBInstancesOutcome NeptuneClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeDBInstancesOutcome(std::move(result.GetError()));
}

DescribeDBParameterGroupsOutcome NeptuneClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeDBParametersOutcome NeptuneClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBParametersOutcome(result.GetResultWithOwnership())
                            : DescribeDBParametersOutcome(std::move(result.GetError()));
}

DescribeDBSubnetGroupsOutcome NeptuneClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDBSubnetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeDBSubnetGroupsOutcome(std::move(result.GetError()));
}

DescribeEngineDefaultClusterParametersOutcome NeptuneClient::DescribeEngineDefaultClusterParameters(
    const DescribeEngineDefaultClusterParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEngineDefaultClusterParametersOutcome(result.GetResultWithOwnership())
                            : DescribeEngineDefaultClusterParametersOutcome(std::move(result.GetError()));
}

DescribeEngineDefaultParametersOutcome NeptuneClient::DescribeEngineDefaultParameters(
    const DescribeEngineDefaultParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEngineDefaultParametersOutcome(result.GetResultWithOwnership())
                            : DescribeEngineDefaultParametersOutcome(std::move(result.GetError()));
}

DescribeEventCategoriesOutcome NeptuneClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventCategoriesOutcome(result.GetResultWithOwnership())
                            : DescribeEventCategoriesOutcome(std::move(result.GetError()));
}

DescribeEventSubscriptionsOutcome NeptuneClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventSubscriptionsOutcome(result.GetResultWithOwnership())
                            : DescribeEventSubscriptionsOutcome(std::move(result.GetError()));
}

DescribeEventsOutcome NeptuneClient::DescribeEvents(const DescribeEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventsOutcome(result.GetResultWithOwnership()) : DescribeEventsOutcome(std::move(result.GetError()));
}

DescribeGlobalClustersOutcome NeptuneClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGlobalClustersOutcome(result.GetResultWithOwnership())
                            : DescribeGlobalClustersOutcome(std::move(result.GetError()));
}

DescribeOrderableDBInstanceOptionsOutcome NeptuneClient::DescribeOrderableDBInstanceOptions(
    const DescribeOrderableDBInstanceOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrderableDBInstanceOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeOrderableDBInstanceOptionsOutcome(std::move(result.GetError()));
}

DescribePendingMaintenanceActionsOutcome NeptuneClient::DescribePendingMaintenanceActions(
    const DescribePendingMaintenanceActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePendingMaintenanceActionsOutcome(result.GetResultWithOwnership())
                            : DescribePendingMaintenanceActionsOutcome(std::move(result.GetError()));
}

DescribeValidDBInstanceModificationsOutcome NeptuneClient::DescribeValidDBInstanceModifications(
    const DescribeValidDBInstanceModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeValidDBInstanceModificationsOutcome(result.GetResultWithOwnership())
                            : DescribeValidDBInstanceModificationsOutcome(std::move(result.GetError()));
}

FailoverDBClusterOutcome NeptuneClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FailoverDBClusterOutcome(result.GetResultWithOwnership())
                            : FailoverDBClusterOutcome(std::move(result.GetError()));
}

FailoverGlobalClusterOutcome NeptuneClient::FailoverGlobalCluster(const FailoverGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FailoverGlobalClusterOutcome(result.GetResultWithOwnership())
                            : FailoverGlobalClusterOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome NeptuneClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ModifyDBClusterOutcome NeptuneClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterOutcome(std::move(result.GetError()));
}

ModifyDBClusterEndpointOutcome NeptuneClient::ModifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterEndpointOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterEndpointOutcome(std::move(result.GetError()));
}

ModifyDBClusterParameterGroupOutcome NeptuneClient::ModifyDBClusterParameterGroup(
    const ModifyDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

ModifyDBClusterSnapshotAttributeOutcome NeptuneClient::ModifyDBClusterSnapshotAttribute(
    const ModifyDBClusterSnapshotAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBClusterSnapshotAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyDBClusterSnapshotAttributeOutcome(std::move(result.GetError()));
}

ModifyDBInstanceOutcome NeptuneClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBInstanceOutcome(result.GetResultWithOwnership())
                            : ModifyDBInstanceOutcome(std::move(result.GetError()));
}

ModifyDBParameterGroupOutcome NeptuneClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBParameterGroupOutcome(std::move(result.GetError()));
}

ModifyDBSubnetGroupOutcome NeptuneClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDBSubnetGroupOutcome(result.GetResultWithOwnership())
                            : ModifyDBSubnetGroupOutcome(std::move(result.GetError()));
}

ModifyEventSubscriptionOutcome NeptuneClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : ModifyEventSubscriptionOutcome(std::move(result.GetError()));
}

ModifyGlobalClusterOutcome NeptuneClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyGlobalClusterOutcome(result.GetResultWithOwnership())
                            : ModifyGlobalClusterOutcome(std::move(result.GetError()));
}

PromoteReadReplicaDBClusterOutcome NeptuneClient::PromoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PromoteReadReplicaDBClusterOutcome(result.GetResultWithOwnership())
                            : PromoteReadReplicaDBClusterOutcome(std::move(result.GetError()));
}

RebootDBInstanceOutcome NeptuneClient::RebootDBInstance(const RebootDBInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootDBInstanceOutcome(result.GetResultWithOwnership())
                            : RebootDBInstanceOutcome(std::move(result.GetError()));
}

RemoveFromGlobalClusterOutcome NeptuneClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveFromGlobalClusterOutcome(result.GetResultWithOwnership())
                            : RemoveFromGlobalClusterOutcome(std::move(result.GetError()));
}

RemoveRoleFromDBClusterOutcome NeptuneClient::RemoveRoleFromDBCluster(const RemoveRoleFromDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveRoleFromDBClusterOutcome(result.GetResultWithOwnership())
                            : RemoveRoleFromDBClusterOutcome(std::move(result.GetError()));
}

RemoveSourceIdentifierFromSubscriptionOutcome NeptuneClient::RemoveSourceIdentifierFromSubscription(
    const RemoveSourceIdentifierFromSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveSourceIdentifierFromSubscriptionOutcome(result.GetResultWithOwnership())
                            : RemoveSourceIdentifierFromSubscriptionOutcome(std::move(result.GetError()));
}

RemoveTagsFromResourceOutcome NeptuneClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsFromResourceOutcome(result.GetResultWithOwnership())
                            : RemoveTagsFromResourceOutcome(std::move(result.GetError()));
}

ResetDBClusterParameterGroupOutcome NeptuneClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetDBClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : ResetDBClusterParameterGroupOutcome(std::move(result.GetError()));
}

ResetDBParameterGroupOutcome NeptuneClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetDBParameterGroupOutcome(result.GetResultWithOwnership())
                            : ResetDBParameterGroupOutcome(std::move(result.GetError()));
}

RestoreDBClusterFromSnapshotOutcome NeptuneClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBClusterFromSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreDBClusterFromSnapshotOutcome(std::move(result.GetError()));
}

RestoreDBClusterToPointInTimeOutcome NeptuneClient::RestoreDBClusterToPointInTime(
    const RestoreDBClusterToPointInTimeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreDBClusterToPointInTimeOutcome(result.GetResultWithOwnership())
                            : RestoreDBClusterToPointInTimeOutcome(std::move(result.GetError()));
}

StartDBClusterOutcome NeptuneClient::StartDBCluster(const StartDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDBClusterOutcome(result.GetResultWithOwnership()) : StartDBClusterOutcome(std::move(result.GetError()));
}

StopDBClusterOutcome NeptuneClient::StopDBCluster(const StopDBClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDBClusterOutcome(result.GetResultWithOwnership()) : StopDBClusterOutcome(std::move(result.GetError()));
}

SwitchoverGlobalClusterOutcome NeptuneClient::SwitchoverGlobalCluster(const SwitchoverGlobalClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SwitchoverGlobalClusterOutcome(result.GetResultWithOwnership())
                            : SwitchoverGlobalClusterOutcome(std::move(result.GetError()));
}
