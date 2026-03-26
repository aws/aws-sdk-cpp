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
  return AcceptMarketplaceRegistrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateIamRoleToResourceOutcome OdbClient::AssociateIamRoleToResource(const AssociateIamRoleToResourceRequest& request) const {
  return AssociateIamRoleToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCloudAutonomousVmClusterOutcome OdbClient::CreateCloudAutonomousVmCluster(
    const CreateCloudAutonomousVmClusterRequest& request) const {
  return CreateCloudAutonomousVmClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCloudExadataInfrastructureOutcome OdbClient::CreateCloudExadataInfrastructure(
    const CreateCloudExadataInfrastructureRequest& request) const {
  return CreateCloudExadataInfrastructureOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCloudVmClusterOutcome OdbClient::CreateCloudVmCluster(const CreateCloudVmClusterRequest& request) const {
  return CreateCloudVmClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOdbNetworkOutcome OdbClient::CreateOdbNetwork(const CreateOdbNetworkRequest& request) const {
  return CreateOdbNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOdbPeeringConnectionOutcome OdbClient::CreateOdbPeeringConnection(const CreateOdbPeeringConnectionRequest& request) const {
  return CreateOdbPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCloudAutonomousVmClusterOutcome OdbClient::DeleteCloudAutonomousVmCluster(
    const DeleteCloudAutonomousVmClusterRequest& request) const {
  return DeleteCloudAutonomousVmClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCloudExadataInfrastructureOutcome OdbClient::DeleteCloudExadataInfrastructure(
    const DeleteCloudExadataInfrastructureRequest& request) const {
  return DeleteCloudExadataInfrastructureOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCloudVmClusterOutcome OdbClient::DeleteCloudVmCluster(const DeleteCloudVmClusterRequest& request) const {
  return DeleteCloudVmClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOdbNetworkOutcome OdbClient::DeleteOdbNetwork(const DeleteOdbNetworkRequest& request) const {
  return DeleteOdbNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOdbPeeringConnectionOutcome OdbClient::DeleteOdbPeeringConnection(const DeleteOdbPeeringConnectionRequest& request) const {
  return DeleteOdbPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateIamRoleFromResourceOutcome OdbClient::DisassociateIamRoleFromResource(
    const DisassociateIamRoleFromResourceRequest& request) const {
  return DisassociateIamRoleFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCloudAutonomousVmClusterOutcome OdbClient::GetCloudAutonomousVmCluster(const GetCloudAutonomousVmClusterRequest& request) const {
  return GetCloudAutonomousVmClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCloudExadataInfrastructureOutcome OdbClient::GetCloudExadataInfrastructure(const GetCloudExadataInfrastructureRequest& request) const {
  return GetCloudExadataInfrastructureOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCloudExadataInfrastructureUnallocatedResourcesOutcome OdbClient::GetCloudExadataInfrastructureUnallocatedResources(
    const GetCloudExadataInfrastructureUnallocatedResourcesRequest& request) const {
  return GetCloudExadataInfrastructureUnallocatedResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCloudVmClusterOutcome OdbClient::GetCloudVmCluster(const GetCloudVmClusterRequest& request) const {
  return GetCloudVmClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDbNodeOutcome OdbClient::GetDbNode(const GetDbNodeRequest& request) const {
  return GetDbNodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDbServerOutcome OdbClient::GetDbServer(const GetDbServerRequest& request) const {
  return GetDbServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOciOnboardingStatusOutcome OdbClient::GetOciOnboardingStatus(const GetOciOnboardingStatusRequest& request) const {
  return GetOciOnboardingStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOdbNetworkOutcome OdbClient::GetOdbNetwork(const GetOdbNetworkRequest& request) const {
  return GetOdbNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOdbPeeringConnectionOutcome OdbClient::GetOdbPeeringConnection(const GetOdbPeeringConnectionRequest& request) const {
  return GetOdbPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InitializeServiceOutcome OdbClient::InitializeService(const InitializeServiceRequest& request) const {
  return InitializeServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAutonomousVirtualMachinesOutcome OdbClient::ListAutonomousVirtualMachines(const ListAutonomousVirtualMachinesRequest& request) const {
  return ListAutonomousVirtualMachinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCloudAutonomousVmClustersOutcome OdbClient::ListCloudAutonomousVmClusters(const ListCloudAutonomousVmClustersRequest& request) const {
  return ListCloudAutonomousVmClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCloudExadataInfrastructuresOutcome OdbClient::ListCloudExadataInfrastructures(
    const ListCloudExadataInfrastructuresRequest& request) const {
  return ListCloudExadataInfrastructuresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCloudVmClustersOutcome OdbClient::ListCloudVmClusters(const ListCloudVmClustersRequest& request) const {
  return ListCloudVmClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDbNodesOutcome OdbClient::ListDbNodes(const ListDbNodesRequest& request) const {
  return ListDbNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDbServersOutcome OdbClient::ListDbServers(const ListDbServersRequest& request) const {
  return ListDbServersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDbSystemShapesOutcome OdbClient::ListDbSystemShapes(const ListDbSystemShapesRequest& request) const {
  return ListDbSystemShapesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGiVersionsOutcome OdbClient::ListGiVersions(const ListGiVersionsRequest& request) const {
  return ListGiVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOdbNetworksOutcome OdbClient::ListOdbNetworks(const ListOdbNetworksRequest& request) const {
  return ListOdbNetworksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOdbPeeringConnectionsOutcome OdbClient::ListOdbPeeringConnections(const ListOdbPeeringConnectionsRequest& request) const {
  return ListOdbPeeringConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSystemVersionsOutcome OdbClient::ListSystemVersions(const ListSystemVersionsRequest& request) const {
  return ListSystemVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome OdbClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootDbNodeOutcome OdbClient::RebootDbNode(const RebootDbNodeRequest& request) const {
  return RebootDbNodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDbNodeOutcome OdbClient::StartDbNode(const StartDbNodeRequest& request) const {
  return StartDbNodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDbNodeOutcome OdbClient::StopDbNode(const StopDbNodeRequest& request) const {
  return StopDbNodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome OdbClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome OdbClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCloudExadataInfrastructureOutcome OdbClient::UpdateCloudExadataInfrastructure(
    const UpdateCloudExadataInfrastructureRequest& request) const {
  return UpdateCloudExadataInfrastructureOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOdbNetworkOutcome OdbClient::UpdateOdbNetwork(const UpdateOdbNetworkRequest& request) const {
  return UpdateOdbNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOdbPeeringConnectionOutcome OdbClient::UpdateOdbPeeringConnection(const UpdateOdbPeeringConnectionRequest& request) const {
  return UpdateOdbPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
