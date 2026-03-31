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
#include <aws/odb/OdbClient.h>
#include <aws/odb/OdbEndpointProvider.h>
#include <aws/odb/OdbErrorMarshaller.h>
#include <aws/odb/model/AcceptMarketplaceRegistrationRequest.h>
#include <aws/odb/model/AssociateIamRoleToResourceRequest.h>
#include <aws/odb/model/CreateCloudAutonomousVmClusterRequest.h>
#include <aws/odb/model/CreateCloudExadataInfrastructureRequest.h>
#include <aws/odb/model/CreateCloudVmClusterRequest.h>
#include <aws/odb/model/CreateOdbNetworkRequest.h>
#include <aws/odb/model/CreateOdbPeeringConnectionRequest.h>
#include <aws/odb/model/DeleteCloudAutonomousVmClusterRequest.h>
#include <aws/odb/model/DeleteCloudExadataInfrastructureRequest.h>
#include <aws/odb/model/DeleteCloudVmClusterRequest.h>
#include <aws/odb/model/DeleteOdbNetworkRequest.h>
#include <aws/odb/model/DeleteOdbPeeringConnectionRequest.h>
#include <aws/odb/model/DisassociateIamRoleFromResourceRequest.h>
#include <aws/odb/model/GetCloudAutonomousVmClusterRequest.h>
#include <aws/odb/model/GetCloudExadataInfrastructureRequest.h>
#include <aws/odb/model/GetCloudExadataInfrastructureUnallocatedResourcesRequest.h>
#include <aws/odb/model/GetCloudVmClusterRequest.h>
#include <aws/odb/model/GetDbNodeRequest.h>
#include <aws/odb/model/GetDbServerRequest.h>
#include <aws/odb/model/GetOciOnboardingStatusRequest.h>
#include <aws/odb/model/GetOdbNetworkRequest.h>
#include <aws/odb/model/GetOdbPeeringConnectionRequest.h>
#include <aws/odb/model/InitializeServiceRequest.h>
#include <aws/odb/model/ListAutonomousVirtualMachinesRequest.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersRequest.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresRequest.h>
#include <aws/odb/model/ListCloudVmClustersRequest.h>
#include <aws/odb/model/ListDbNodesRequest.h>
#include <aws/odb/model/ListDbServersRequest.h>
#include <aws/odb/model/ListDbSystemShapesRequest.h>
#include <aws/odb/model/ListGiVersionsRequest.h>
#include <aws/odb/model/ListOdbNetworksRequest.h>
#include <aws/odb/model/ListOdbPeeringConnectionsRequest.h>
#include <aws/odb/model/ListSystemVersionsRequest.h>
#include <aws/odb/model/ListTagsForResourceRequest.h>
#include <aws/odb/model/RebootDbNodeRequest.h>
#include <aws/odb/model/StartDbNodeRequest.h>
#include <aws/odb/model/StopDbNodeRequest.h>
#include <aws/odb/model/TagResourceRequest.h>
#include <aws/odb/model/UntagResourceRequest.h>
#include <aws/odb/model/UpdateCloudExadataInfrastructureRequest.h>
#include <aws/odb/model/UpdateOdbNetworkRequest.h>
#include <aws/odb/model/UpdateOdbPeeringConnectionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::odb;
using namespace Aws::odb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace odb {
const char SERVICE_NAME[] = "odb";
const char ALLOCATION_TAG[] = "OdbClient";
}  // namespace odb
}  // namespace Aws
const char* OdbClient::GetServiceName() { return SERVICE_NAME; }
const char* OdbClient::GetAllocationTag() { return ALLOCATION_TAG; }

OdbClient::OdbClient(const odb::OdbClientConfiguration& clientConfiguration, std::shared_ptr<OdbEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OdbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OdbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OdbClient::OdbClient(const AWSCredentials& credentials, std::shared_ptr<OdbEndpointProviderBase> endpointProvider,
                     const odb::OdbClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OdbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OdbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OdbClient::OdbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<OdbEndpointProviderBase> endpointProvider, const odb::OdbClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OdbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OdbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OdbClient::OdbClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OdbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OdbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OdbClient::OdbClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OdbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OdbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OdbClient::OdbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OdbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OdbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OdbClient::~OdbClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OdbEndpointProviderBase>& OdbClient::accessEndpointProvider() { return m_endpointProvider; }

void OdbClient::init(const odb::OdbClientConfiguration& config) {
  AWSClient::SetServiceClientName("odb");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "odb");
}

void OdbClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OdbClient::InvokeOperationOutcome OdbClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptMarketplaceRegistrationOutcome OdbClient::AcceptMarketplaceRegistration(const AcceptMarketplaceRegistrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptMarketplaceRegistrationOutcome(result.GetResultWithOwnership())
                            : AcceptMarketplaceRegistrationOutcome(std::move(result.GetError()));
}

AssociateIamRoleToResourceOutcome OdbClient::AssociateIamRoleToResource(const AssociateIamRoleToResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateIamRoleToResourceOutcome(result.GetResultWithOwnership())
                            : AssociateIamRoleToResourceOutcome(std::move(result.GetError()));
}

CreateCloudAutonomousVmClusterOutcome OdbClient::CreateCloudAutonomousVmCluster(
    const CreateCloudAutonomousVmClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudAutonomousVmClusterOutcome(result.GetResultWithOwnership())
                            : CreateCloudAutonomousVmClusterOutcome(std::move(result.GetError()));
}

CreateCloudExadataInfrastructureOutcome OdbClient::CreateCloudExadataInfrastructure(
    const CreateCloudExadataInfrastructureRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudExadataInfrastructureOutcome(result.GetResultWithOwnership())
                            : CreateCloudExadataInfrastructureOutcome(std::move(result.GetError()));
}

CreateCloudVmClusterOutcome OdbClient::CreateCloudVmCluster(const CreateCloudVmClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudVmClusterOutcome(result.GetResultWithOwnership())
                            : CreateCloudVmClusterOutcome(std::move(result.GetError()));
}

CreateOdbNetworkOutcome OdbClient::CreateOdbNetwork(const CreateOdbNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOdbNetworkOutcome(result.GetResultWithOwnership())
                            : CreateOdbNetworkOutcome(std::move(result.GetError()));
}

CreateOdbPeeringConnectionOutcome OdbClient::CreateOdbPeeringConnection(const CreateOdbPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOdbPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : CreateOdbPeeringConnectionOutcome(std::move(result.GetError()));
}

DeleteCloudAutonomousVmClusterOutcome OdbClient::DeleteCloudAutonomousVmCluster(
    const DeleteCloudAutonomousVmClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCloudAutonomousVmClusterOutcome(result.GetResultWithOwnership())
                            : DeleteCloudAutonomousVmClusterOutcome(std::move(result.GetError()));
}

DeleteCloudExadataInfrastructureOutcome OdbClient::DeleteCloudExadataInfrastructure(
    const DeleteCloudExadataInfrastructureRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCloudExadataInfrastructureOutcome(result.GetResultWithOwnership())
                            : DeleteCloudExadataInfrastructureOutcome(std::move(result.GetError()));
}

DeleteCloudVmClusterOutcome OdbClient::DeleteCloudVmCluster(const DeleteCloudVmClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCloudVmClusterOutcome(result.GetResultWithOwnership())
                            : DeleteCloudVmClusterOutcome(std::move(result.GetError()));
}

DeleteOdbNetworkOutcome OdbClient::DeleteOdbNetwork(const DeleteOdbNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOdbNetworkOutcome(result.GetResultWithOwnership())
                            : DeleteOdbNetworkOutcome(std::move(result.GetError()));
}

DeleteOdbPeeringConnectionOutcome OdbClient::DeleteOdbPeeringConnection(const DeleteOdbPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOdbPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteOdbPeeringConnectionOutcome(std::move(result.GetError()));
}

DisassociateIamRoleFromResourceOutcome OdbClient::DisassociateIamRoleFromResource(
    const DisassociateIamRoleFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateIamRoleFromResourceOutcome(result.GetResultWithOwnership())
                            : DisassociateIamRoleFromResourceOutcome(std::move(result.GetError()));
}

GetCloudAutonomousVmClusterOutcome OdbClient::GetCloudAutonomousVmCluster(const GetCloudAutonomousVmClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCloudAutonomousVmClusterOutcome(result.GetResultWithOwnership())
                            : GetCloudAutonomousVmClusterOutcome(std::move(result.GetError()));
}

GetCloudExadataInfrastructureOutcome OdbClient::GetCloudExadataInfrastructure(const GetCloudExadataInfrastructureRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCloudExadataInfrastructureOutcome(result.GetResultWithOwnership())
                            : GetCloudExadataInfrastructureOutcome(std::move(result.GetError()));
}

GetCloudExadataInfrastructureUnallocatedResourcesOutcome OdbClient::GetCloudExadataInfrastructureUnallocatedResources(
    const GetCloudExadataInfrastructureUnallocatedResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCloudExadataInfrastructureUnallocatedResourcesOutcome(result.GetResultWithOwnership())
                            : GetCloudExadataInfrastructureUnallocatedResourcesOutcome(std::move(result.GetError()));
}

GetCloudVmClusterOutcome OdbClient::GetCloudVmCluster(const GetCloudVmClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCloudVmClusterOutcome(result.GetResultWithOwnership())
                            : GetCloudVmClusterOutcome(std::move(result.GetError()));
}

GetDbNodeOutcome OdbClient::GetDbNode(const GetDbNodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDbNodeOutcome(result.GetResultWithOwnership()) : GetDbNodeOutcome(std::move(result.GetError()));
}

GetDbServerOutcome OdbClient::GetDbServer(const GetDbServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDbServerOutcome(result.GetResultWithOwnership()) : GetDbServerOutcome(std::move(result.GetError()));
}

GetOciOnboardingStatusOutcome OdbClient::GetOciOnboardingStatus(const GetOciOnboardingStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOciOnboardingStatusOutcome(result.GetResultWithOwnership())
                            : GetOciOnboardingStatusOutcome(std::move(result.GetError()));
}

GetOdbNetworkOutcome OdbClient::GetOdbNetwork(const GetOdbNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOdbNetworkOutcome(result.GetResultWithOwnership()) : GetOdbNetworkOutcome(std::move(result.GetError()));
}

GetOdbPeeringConnectionOutcome OdbClient::GetOdbPeeringConnection(const GetOdbPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOdbPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : GetOdbPeeringConnectionOutcome(std::move(result.GetError()));
}

InitializeServiceOutcome OdbClient::InitializeService(const InitializeServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InitializeServiceOutcome(result.GetResultWithOwnership())
                            : InitializeServiceOutcome(std::move(result.GetError()));
}

ListAutonomousVirtualMachinesOutcome OdbClient::ListAutonomousVirtualMachines(const ListAutonomousVirtualMachinesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutonomousVirtualMachinesOutcome(result.GetResultWithOwnership())
                            : ListAutonomousVirtualMachinesOutcome(std::move(result.GetError()));
}

ListCloudAutonomousVmClustersOutcome OdbClient::ListCloudAutonomousVmClusters(const ListCloudAutonomousVmClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCloudAutonomousVmClustersOutcome(result.GetResultWithOwnership())
                            : ListCloudAutonomousVmClustersOutcome(std::move(result.GetError()));
}

ListCloudExadataInfrastructuresOutcome OdbClient::ListCloudExadataInfrastructures(
    const ListCloudExadataInfrastructuresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCloudExadataInfrastructuresOutcome(result.GetResultWithOwnership())
                            : ListCloudExadataInfrastructuresOutcome(std::move(result.GetError()));
}

ListCloudVmClustersOutcome OdbClient::ListCloudVmClusters(const ListCloudVmClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCloudVmClustersOutcome(result.GetResultWithOwnership())
                            : ListCloudVmClustersOutcome(std::move(result.GetError()));
}

ListDbNodesOutcome OdbClient::ListDbNodes(const ListDbNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDbNodesOutcome(result.GetResultWithOwnership()) : ListDbNodesOutcome(std::move(result.GetError()));
}

ListDbServersOutcome OdbClient::ListDbServers(const ListDbServersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDbServersOutcome(result.GetResultWithOwnership()) : ListDbServersOutcome(std::move(result.GetError()));
}

ListDbSystemShapesOutcome OdbClient::ListDbSystemShapes(const ListDbSystemShapesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDbSystemShapesOutcome(result.GetResultWithOwnership())
                            : ListDbSystemShapesOutcome(std::move(result.GetError()));
}

ListGiVersionsOutcome OdbClient::ListGiVersions(const ListGiVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGiVersionsOutcome(result.GetResultWithOwnership()) : ListGiVersionsOutcome(std::move(result.GetError()));
}

ListOdbNetworksOutcome OdbClient::ListOdbNetworks(const ListOdbNetworksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOdbNetworksOutcome(result.GetResultWithOwnership())
                            : ListOdbNetworksOutcome(std::move(result.GetError()));
}

ListOdbPeeringConnectionsOutcome OdbClient::ListOdbPeeringConnections(const ListOdbPeeringConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOdbPeeringConnectionsOutcome(result.GetResultWithOwnership())
                            : ListOdbPeeringConnectionsOutcome(std::move(result.GetError()));
}

ListSystemVersionsOutcome OdbClient::ListSystemVersions(const ListSystemVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSystemVersionsOutcome(result.GetResultWithOwnership())
                            : ListSystemVersionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome OdbClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RebootDbNodeOutcome OdbClient::RebootDbNode(const RebootDbNodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootDbNodeOutcome(result.GetResultWithOwnership()) : RebootDbNodeOutcome(std::move(result.GetError()));
}

StartDbNodeOutcome OdbClient::StartDbNode(const StartDbNodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDbNodeOutcome(result.GetResultWithOwnership()) : StartDbNodeOutcome(std::move(result.GetError()));
}

StopDbNodeOutcome OdbClient::StopDbNode(const StopDbNodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDbNodeOutcome(result.GetResultWithOwnership()) : StopDbNodeOutcome(std::move(result.GetError()));
}

TagResourceOutcome OdbClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome OdbClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCloudExadataInfrastructureOutcome OdbClient::UpdateCloudExadataInfrastructure(
    const UpdateCloudExadataInfrastructureRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCloudExadataInfrastructureOutcome(result.GetResultWithOwnership())
                            : UpdateCloudExadataInfrastructureOutcome(std::move(result.GetError()));
}

UpdateOdbNetworkOutcome OdbClient::UpdateOdbNetwork(const UpdateOdbNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOdbNetworkOutcome(result.GetResultWithOwnership())
                            : UpdateOdbNetworkOutcome(std::move(result.GetError()));
}

UpdateOdbPeeringConnectionOutcome OdbClient::UpdateOdbPeeringConnection(const UpdateOdbPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOdbPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : UpdateOdbPeeringConnectionOutcome(std::move(result.GetError()));
}
