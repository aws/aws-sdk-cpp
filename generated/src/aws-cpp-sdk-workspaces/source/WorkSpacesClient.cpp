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
#include <aws/workspaces/WorkSpacesClient.h>
#include <aws/workspaces/WorkSpacesEndpointProvider.h>
#include <aws/workspaces/WorkSpacesErrorMarshaller.h>
#include <aws/workspaces/model/AcceptAccountLinkInvitationRequest.h>
#include <aws/workspaces/model/AssociateConnectionAliasRequest.h>
#include <aws/workspaces/model/AssociateIpGroupsRequest.h>
#include <aws/workspaces/model/AssociateWorkspaceApplicationRequest.h>
#include <aws/workspaces/model/AuthorizeIpRulesRequest.h>
#include <aws/workspaces/model/CopyWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateAccountLinkInvitationRequest.h>
#include <aws/workspaces/model/CreateConnectClientAddInRequest.h>
#include <aws/workspaces/model/CreateConnectionAliasRequest.h>
#include <aws/workspaces/model/CreateIpGroupRequest.h>
#include <aws/workspaces/model/CreateStandbyWorkspacesRequest.h>
#include <aws/workspaces/model/CreateTagsRequest.h>
#include <aws/workspaces/model/CreateUpdatedWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateWorkspaceBundleRequest.h>
#include <aws/workspaces/model/CreateWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateWorkspacesPoolRequest.h>
#include <aws/workspaces/model/CreateWorkspacesRequest.h>
#include <aws/workspaces/model/DeleteAccountLinkInvitationRequest.h>
#include <aws/workspaces/model/DeleteClientBrandingRequest.h>
#include <aws/workspaces/model/DeleteConnectClientAddInRequest.h>
#include <aws/workspaces/model/DeleteConnectionAliasRequest.h>
#include <aws/workspaces/model/DeleteIpGroupRequest.h>
#include <aws/workspaces/model/DeleteTagsRequest.h>
#include <aws/workspaces/model/DeleteWorkspaceBundleRequest.h>
#include <aws/workspaces/model/DeleteWorkspaceImageRequest.h>
#include <aws/workspaces/model/DeployWorkspaceApplicationsRequest.h>
#include <aws/workspaces/model/DeregisterWorkspaceDirectoryRequest.h>
#include <aws/workspaces/model/DescribeAccountModificationsRequest.h>
#include <aws/workspaces/model/DescribeAccountRequest.h>
#include <aws/workspaces/model/DescribeApplicationAssociationsRequest.h>
#include <aws/workspaces/model/DescribeApplicationsRequest.h>
#include <aws/workspaces/model/DescribeBundleAssociationsRequest.h>
#include <aws/workspaces/model/DescribeClientBrandingRequest.h>
#include <aws/workspaces/model/DescribeClientPropertiesRequest.h>
#include <aws/workspaces/model/DescribeConnectClientAddInsRequest.h>
#include <aws/workspaces/model/DescribeConnectionAliasPermissionsRequest.h>
#include <aws/workspaces/model/DescribeConnectionAliasesRequest.h>
#include <aws/workspaces/model/DescribeCustomWorkspaceImageImportRequest.h>
#include <aws/workspaces/model/DescribeImageAssociationsRequest.h>
#include <aws/workspaces/model/DescribeIpGroupsRequest.h>
#include <aws/workspaces/model/DescribeTagsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceAssociationsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceImagePermissionsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceImagesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceSnapshotsRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesPoolSessionsRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesPoolsRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesRequest.h>
#include <aws/workspaces/model/DisassociateConnectionAliasRequest.h>
#include <aws/workspaces/model/DisassociateIpGroupsRequest.h>
#include <aws/workspaces/model/DisassociateWorkspaceApplicationRequest.h>
#include <aws/workspaces/model/GetAccountLinkRequest.h>
#include <aws/workspaces/model/ImportClientBrandingRequest.h>
#include <aws/workspaces/model/ImportCustomWorkspaceImageRequest.h>
#include <aws/workspaces/model/ImportWorkspaceImageRequest.h>
#include <aws/workspaces/model/ListAccountLinksRequest.h>
#include <aws/workspaces/model/ListAvailableManagementCidrRangesRequest.h>
#include <aws/workspaces/model/MigrateWorkspaceRequest.h>
#include <aws/workspaces/model/ModifyAccountRequest.h>
#include <aws/workspaces/model/ModifyCertificateBasedAuthPropertiesRequest.h>
#include <aws/workspaces/model/ModifyClientPropertiesRequest.h>
#include <aws/workspaces/model/ModifyEndpointEncryptionModeRequest.h>
#include <aws/workspaces/model/ModifySamlPropertiesRequest.h>
#include <aws/workspaces/model/ModifySelfservicePermissionsRequest.h>
#include <aws/workspaces/model/ModifyStreamingPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceAccessPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceCreationPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceStateRequest.h>
#include <aws/workspaces/model/RebootWorkspacesRequest.h>
#include <aws/workspaces/model/RebuildWorkspacesRequest.h>
#include <aws/workspaces/model/RegisterWorkspaceDirectoryRequest.h>
#include <aws/workspaces/model/RejectAccountLinkInvitationRequest.h>
#include <aws/workspaces/model/RestoreWorkspaceRequest.h>
#include <aws/workspaces/model/RevokeIpRulesRequest.h>
#include <aws/workspaces/model/StartWorkspacesPoolRequest.h>
#include <aws/workspaces/model/StartWorkspacesRequest.h>
#include <aws/workspaces/model/StopWorkspacesPoolRequest.h>
#include <aws/workspaces/model/StopWorkspacesRequest.h>
#include <aws/workspaces/model/TerminateWorkspacesPoolRequest.h>
#include <aws/workspaces/model/TerminateWorkspacesPoolSessionRequest.h>
#include <aws/workspaces/model/TerminateWorkspacesRequest.h>
#include <aws/workspaces/model/UpdateConnectClientAddInRequest.h>
#include <aws/workspaces/model/UpdateConnectionAliasPermissionRequest.h>
#include <aws/workspaces/model/UpdateRulesOfIpGroupRequest.h>
#include <aws/workspaces/model/UpdateWorkspaceBundleRequest.h>
#include <aws/workspaces/model/UpdateWorkspaceImagePermissionRequest.h>
#include <aws/workspaces/model/UpdateWorkspacesPoolRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpaces;
using namespace Aws::WorkSpaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WorkSpaces {
const char SERVICE_NAME[] = "workspaces";
const char ALLOCATION_TAG[] = "WorkSpacesClient";
}  // namespace WorkSpaces
}  // namespace Aws
const char* WorkSpacesClient::GetServiceName() { return SERVICE_NAME; }
const char* WorkSpacesClient::GetAllocationTag() { return ALLOCATION_TAG; }

WorkSpacesClient::WorkSpacesClient(const WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration,
                                   std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const AWSCredentials& credentials, std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider,
                                   const WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider,
                                   const WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WorkSpacesClient::WorkSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WorkSpacesClient::~WorkSpacesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WorkSpacesEndpointProviderBase>& WorkSpacesClient::accessEndpointProvider() { return m_endpointProvider; }

void WorkSpacesClient::init(const WorkSpaces::WorkSpacesClientConfiguration& config) {
  AWSClient::SetServiceClientName("WorkSpaces");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "workspaces");
}

void WorkSpacesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WorkSpacesClient::InvokeOperationOutcome WorkSpacesClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptAccountLinkInvitationOutcome WorkSpacesClient::AcceptAccountLinkInvitation(const AcceptAccountLinkInvitationRequest& request) const {
  return AcceptAccountLinkInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateConnectionAliasOutcome WorkSpacesClient::AssociateConnectionAlias(const AssociateConnectionAliasRequest& request) const {
  return AssociateConnectionAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateIpGroupsOutcome WorkSpacesClient::AssociateIpGroups(const AssociateIpGroupsRequest& request) const {
  return AssociateIpGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateWorkspaceApplicationOutcome WorkSpacesClient::AssociateWorkspaceApplication(
    const AssociateWorkspaceApplicationRequest& request) const {
  return AssociateWorkspaceApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AuthorizeIpRulesOutcome WorkSpacesClient::AuthorizeIpRules(const AuthorizeIpRulesRequest& request) const {
  return AuthorizeIpRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyWorkspaceImageOutcome WorkSpacesClient::CopyWorkspaceImage(const CopyWorkspaceImageRequest& request) const {
  return CopyWorkspaceImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccountLinkInvitationOutcome WorkSpacesClient::CreateAccountLinkInvitation(const CreateAccountLinkInvitationRequest& request) const {
  return CreateAccountLinkInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectClientAddInOutcome WorkSpacesClient::CreateConnectClientAddIn(const CreateConnectClientAddInRequest& request) const {
  return CreateConnectClientAddInOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionAliasOutcome WorkSpacesClient::CreateConnectionAlias(const CreateConnectionAliasRequest& request) const {
  return CreateConnectionAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIpGroupOutcome WorkSpacesClient::CreateIpGroup(const CreateIpGroupRequest& request) const {
  return CreateIpGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStandbyWorkspacesOutcome WorkSpacesClient::CreateStandbyWorkspaces(const CreateStandbyWorkspacesRequest& request) const {
  return CreateStandbyWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTagsOutcome WorkSpacesClient::CreateTags(const CreateTagsRequest& request) const {
  return CreateTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUpdatedWorkspaceImageOutcome WorkSpacesClient::CreateUpdatedWorkspaceImage(const CreateUpdatedWorkspaceImageRequest& request) const {
  return CreateUpdatedWorkspaceImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkspaceBundleOutcome WorkSpacesClient::CreateWorkspaceBundle(const CreateWorkspaceBundleRequest& request) const {
  return CreateWorkspaceBundleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkspaceImageOutcome WorkSpacesClient::CreateWorkspaceImage(const CreateWorkspaceImageRequest& request) const {
  return CreateWorkspaceImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkspacesOutcome WorkSpacesClient::CreateWorkspaces(const CreateWorkspacesRequest& request) const {
  return CreateWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkspacesPoolOutcome WorkSpacesClient::CreateWorkspacesPool(const CreateWorkspacesPoolRequest& request) const {
  return CreateWorkspacesPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountLinkInvitationOutcome WorkSpacesClient::DeleteAccountLinkInvitation(const DeleteAccountLinkInvitationRequest& request) const {
  return DeleteAccountLinkInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClientBrandingOutcome WorkSpacesClient::DeleteClientBranding(const DeleteClientBrandingRequest& request) const {
  return DeleteClientBrandingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectClientAddInOutcome WorkSpacesClient::DeleteConnectClientAddIn(const DeleteConnectClientAddInRequest& request) const {
  return DeleteConnectClientAddInOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionAliasOutcome WorkSpacesClient::DeleteConnectionAlias(const DeleteConnectionAliasRequest& request) const {
  return DeleteConnectionAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIpGroupOutcome WorkSpacesClient::DeleteIpGroup(const DeleteIpGroupRequest& request) const {
  return DeleteIpGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTagsOutcome WorkSpacesClient::DeleteTags(const DeleteTagsRequest& request) const {
  return DeleteTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkspaceBundleOutcome WorkSpacesClient::DeleteWorkspaceBundle(const DeleteWorkspaceBundleRequest& request) const {
  return DeleteWorkspaceBundleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkspaceImageOutcome WorkSpacesClient::DeleteWorkspaceImage(const DeleteWorkspaceImageRequest& request) const {
  return DeleteWorkspaceImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeployWorkspaceApplicationsOutcome WorkSpacesClient::DeployWorkspaceApplications(const DeployWorkspaceApplicationsRequest& request) const {
  return DeployWorkspaceApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterWorkspaceDirectoryOutcome WorkSpacesClient::DeregisterWorkspaceDirectory(
    const DeregisterWorkspaceDirectoryRequest& request) const {
  return DeregisterWorkspaceDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountOutcome WorkSpacesClient::DescribeAccount(const DescribeAccountRequest& request) const {
  return DescribeAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountModificationsOutcome WorkSpacesClient::DescribeAccountModifications(
    const DescribeAccountModificationsRequest& request) const {
  return DescribeAccountModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationAssociationsOutcome WorkSpacesClient::DescribeApplicationAssociations(
    const DescribeApplicationAssociationsRequest& request) const {
  return DescribeApplicationAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationsOutcome WorkSpacesClient::DescribeApplications(const DescribeApplicationsRequest& request) const {
  return DescribeApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBundleAssociationsOutcome WorkSpacesClient::DescribeBundleAssociations(const DescribeBundleAssociationsRequest& request) const {
  return DescribeBundleAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClientBrandingOutcome WorkSpacesClient::DescribeClientBranding(const DescribeClientBrandingRequest& request) const {
  return DescribeClientBrandingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClientPropertiesOutcome WorkSpacesClient::DescribeClientProperties(const DescribeClientPropertiesRequest& request) const {
  return DescribeClientPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectClientAddInsOutcome WorkSpacesClient::DescribeConnectClientAddIns(const DescribeConnectClientAddInsRequest& request) const {
  return DescribeConnectClientAddInsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectionAliasPermissionsOutcome WorkSpacesClient::DescribeConnectionAliasPermissions(
    const DescribeConnectionAliasPermissionsRequest& request) const {
  return DescribeConnectionAliasPermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectionAliasesOutcome WorkSpacesClient::DescribeConnectionAliases(const DescribeConnectionAliasesRequest& request) const {
  return DescribeConnectionAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomWorkspaceImageImportOutcome WorkSpacesClient::DescribeCustomWorkspaceImageImport(
    const DescribeCustomWorkspaceImageImportRequest& request) const {
  return DescribeCustomWorkspaceImageImportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageAssociationsOutcome WorkSpacesClient::DescribeImageAssociations(const DescribeImageAssociationsRequest& request) const {
  return DescribeImageAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpGroupsOutcome WorkSpacesClient::DescribeIpGroups(const DescribeIpGroupsRequest& request) const {
  return DescribeIpGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTagsOutcome WorkSpacesClient::DescribeTags(const DescribeTagsRequest& request) const {
  return DescribeTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspaceAssociationsOutcome WorkSpacesClient::DescribeWorkspaceAssociations(
    const DescribeWorkspaceAssociationsRequest& request) const {
  return DescribeWorkspaceAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspaceBundlesOutcome WorkSpacesClient::DescribeWorkspaceBundles(const DescribeWorkspaceBundlesRequest& request) const {
  return DescribeWorkspaceBundlesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspaceDirectoriesOutcome WorkSpacesClient::DescribeWorkspaceDirectories(
    const DescribeWorkspaceDirectoriesRequest& request) const {
  return DescribeWorkspaceDirectoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspaceImagePermissionsOutcome WorkSpacesClient::DescribeWorkspaceImagePermissions(
    const DescribeWorkspaceImagePermissionsRequest& request) const {
  return DescribeWorkspaceImagePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspaceImagesOutcome WorkSpacesClient::DescribeWorkspaceImages(const DescribeWorkspaceImagesRequest& request) const {
  return DescribeWorkspaceImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspaceSnapshotsOutcome WorkSpacesClient::DescribeWorkspaceSnapshots(const DescribeWorkspaceSnapshotsRequest& request) const {
  return DescribeWorkspaceSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspacesOutcome WorkSpacesClient::DescribeWorkspaces(const DescribeWorkspacesRequest& request) const {
  return DescribeWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspacesConnectionStatusOutcome WorkSpacesClient::DescribeWorkspacesConnectionStatus(
    const DescribeWorkspacesConnectionStatusRequest& request) const {
  return DescribeWorkspacesConnectionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspacesPoolSessionsOutcome WorkSpacesClient::DescribeWorkspacesPoolSessions(
    const DescribeWorkspacesPoolSessionsRequest& request) const {
  return DescribeWorkspacesPoolSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkspacesPoolsOutcome WorkSpacesClient::DescribeWorkspacesPools(const DescribeWorkspacesPoolsRequest& request) const {
  return DescribeWorkspacesPoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateConnectionAliasOutcome WorkSpacesClient::DisassociateConnectionAlias(const DisassociateConnectionAliasRequest& request) const {
  return DisassociateConnectionAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateIpGroupsOutcome WorkSpacesClient::DisassociateIpGroups(const DisassociateIpGroupsRequest& request) const {
  return DisassociateIpGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateWorkspaceApplicationOutcome WorkSpacesClient::DisassociateWorkspaceApplication(
    const DisassociateWorkspaceApplicationRequest& request) const {
  return DisassociateWorkspaceApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountLinkOutcome WorkSpacesClient::GetAccountLink(const GetAccountLinkRequest& request) const {
  return GetAccountLinkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportClientBrandingOutcome WorkSpacesClient::ImportClientBranding(const ImportClientBrandingRequest& request) const {
  return ImportClientBrandingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportCustomWorkspaceImageOutcome WorkSpacesClient::ImportCustomWorkspaceImage(const ImportCustomWorkspaceImageRequest& request) const {
  return ImportCustomWorkspaceImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportWorkspaceImageOutcome WorkSpacesClient::ImportWorkspaceImage(const ImportWorkspaceImageRequest& request) const {
  return ImportWorkspaceImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountLinksOutcome WorkSpacesClient::ListAccountLinks(const ListAccountLinksRequest& request) const {
  return ListAccountLinksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAvailableManagementCidrRangesOutcome WorkSpacesClient::ListAvailableManagementCidrRanges(
    const ListAvailableManagementCidrRangesRequest& request) const {
  return ListAvailableManagementCidrRangesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MigrateWorkspaceOutcome WorkSpacesClient::MigrateWorkspace(const MigrateWorkspaceRequest& request) const {
  return MigrateWorkspaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyAccountOutcome WorkSpacesClient::ModifyAccount(const ModifyAccountRequest& request) const {
  return ModifyAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCertificateBasedAuthPropertiesOutcome WorkSpacesClient::ModifyCertificateBasedAuthProperties(
    const ModifyCertificateBasedAuthPropertiesRequest& request) const {
  return ModifyCertificateBasedAuthPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyClientPropertiesOutcome WorkSpacesClient::ModifyClientProperties(const ModifyClientPropertiesRequest& request) const {
  return ModifyClientPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyEndpointEncryptionModeOutcome WorkSpacesClient::ModifyEndpointEncryptionMode(
    const ModifyEndpointEncryptionModeRequest& request) const {
  return ModifyEndpointEncryptionModeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifySamlPropertiesOutcome WorkSpacesClient::ModifySamlProperties(const ModifySamlPropertiesRequest& request) const {
  return ModifySamlPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifySelfservicePermissionsOutcome WorkSpacesClient::ModifySelfservicePermissions(
    const ModifySelfservicePermissionsRequest& request) const {
  return ModifySelfservicePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyStreamingPropertiesOutcome WorkSpacesClient::ModifyStreamingProperties(const ModifyStreamingPropertiesRequest& request) const {
  return ModifyStreamingPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyWorkspaceAccessPropertiesOutcome WorkSpacesClient::ModifyWorkspaceAccessProperties(
    const ModifyWorkspaceAccessPropertiesRequest& request) const {
  return ModifyWorkspaceAccessPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyWorkspaceCreationPropertiesOutcome WorkSpacesClient::ModifyWorkspaceCreationProperties(
    const ModifyWorkspaceCreationPropertiesRequest& request) const {
  return ModifyWorkspaceCreationPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyWorkspacePropertiesOutcome WorkSpacesClient::ModifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest& request) const {
  return ModifyWorkspacePropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyWorkspaceStateOutcome WorkSpacesClient::ModifyWorkspaceState(const ModifyWorkspaceStateRequest& request) const {
  return ModifyWorkspaceStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootWorkspacesOutcome WorkSpacesClient::RebootWorkspaces(const RebootWorkspacesRequest& request) const {
  return RebootWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebuildWorkspacesOutcome WorkSpacesClient::RebuildWorkspaces(const RebuildWorkspacesRequest& request) const {
  return RebuildWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterWorkspaceDirectoryOutcome WorkSpacesClient::RegisterWorkspaceDirectory(const RegisterWorkspaceDirectoryRequest& request) const {
  return RegisterWorkspaceDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectAccountLinkInvitationOutcome WorkSpacesClient::RejectAccountLinkInvitation(const RejectAccountLinkInvitationRequest& request) const {
  return RejectAccountLinkInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreWorkspaceOutcome WorkSpacesClient::RestoreWorkspace(const RestoreWorkspaceRequest& request) const {
  return RestoreWorkspaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeIpRulesOutcome WorkSpacesClient::RevokeIpRules(const RevokeIpRulesRequest& request) const {
  return RevokeIpRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWorkspacesOutcome WorkSpacesClient::StartWorkspaces(const StartWorkspacesRequest& request) const {
  return StartWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWorkspacesPoolOutcome WorkSpacesClient::StartWorkspacesPool(const StartWorkspacesPoolRequest& request) const {
  return StartWorkspacesPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopWorkspacesOutcome WorkSpacesClient::StopWorkspaces(const StopWorkspacesRequest& request) const {
  return StopWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopWorkspacesPoolOutcome WorkSpacesClient::StopWorkspacesPool(const StopWorkspacesPoolRequest& request) const {
  return StopWorkspacesPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateWorkspacesOutcome WorkSpacesClient::TerminateWorkspaces(const TerminateWorkspacesRequest& request) const {
  return TerminateWorkspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateWorkspacesPoolOutcome WorkSpacesClient::TerminateWorkspacesPool(const TerminateWorkspacesPoolRequest& request) const {
  return TerminateWorkspacesPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateWorkspacesPoolSessionOutcome WorkSpacesClient::TerminateWorkspacesPoolSession(
    const TerminateWorkspacesPoolSessionRequest& request) const {
  return TerminateWorkspacesPoolSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectClientAddInOutcome WorkSpacesClient::UpdateConnectClientAddIn(const UpdateConnectClientAddInRequest& request) const {
  return UpdateConnectClientAddInOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectionAliasPermissionOutcome WorkSpacesClient::UpdateConnectionAliasPermission(
    const UpdateConnectionAliasPermissionRequest& request) const {
  return UpdateConnectionAliasPermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRulesOfIpGroupOutcome WorkSpacesClient::UpdateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest& request) const {
  return UpdateRulesOfIpGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkspaceBundleOutcome WorkSpacesClient::UpdateWorkspaceBundle(const UpdateWorkspaceBundleRequest& request) const {
  return UpdateWorkspaceBundleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkspaceImagePermissionOutcome WorkSpacesClient::UpdateWorkspaceImagePermission(
    const UpdateWorkspaceImagePermissionRequest& request) const {
  return UpdateWorkspaceImagePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkspacesPoolOutcome WorkSpacesClient::UpdateWorkspacesPool(const UpdateWorkspacesPoolRequest& request) const {
  return UpdateWorkspacesPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
