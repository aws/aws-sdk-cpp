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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptAccountLinkInvitationOutcome(result.GetResultWithOwnership())
                            : AcceptAccountLinkInvitationOutcome(std::move(result.GetError()));
}

AssociateConnectionAliasOutcome WorkSpacesClient::AssociateConnectionAlias(const AssociateConnectionAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateConnectionAliasOutcome(result.GetResultWithOwnership())
                            : AssociateConnectionAliasOutcome(std::move(result.GetError()));
}

AssociateIpGroupsOutcome WorkSpacesClient::AssociateIpGroups(const AssociateIpGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateIpGroupsOutcome(result.GetResultWithOwnership())
                            : AssociateIpGroupsOutcome(std::move(result.GetError()));
}

AssociateWorkspaceApplicationOutcome WorkSpacesClient::AssociateWorkspaceApplication(
    const AssociateWorkspaceApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateWorkspaceApplicationOutcome(result.GetResultWithOwnership())
                            : AssociateWorkspaceApplicationOutcome(std::move(result.GetError()));
}

AuthorizeIpRulesOutcome WorkSpacesClient::AuthorizeIpRules(const AuthorizeIpRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeIpRulesOutcome(result.GetResultWithOwnership())
                            : AuthorizeIpRulesOutcome(std::move(result.GetError()));
}

CopyWorkspaceImageOutcome WorkSpacesClient::CopyWorkspaceImage(const CopyWorkspaceImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyWorkspaceImageOutcome(result.GetResultWithOwnership())
                            : CopyWorkspaceImageOutcome(std::move(result.GetError()));
}

CreateAccountLinkInvitationOutcome WorkSpacesClient::CreateAccountLinkInvitation(const CreateAccountLinkInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccountLinkInvitationOutcome(result.GetResultWithOwnership())
                            : CreateAccountLinkInvitationOutcome(std::move(result.GetError()));
}

CreateConnectClientAddInOutcome WorkSpacesClient::CreateConnectClientAddIn(const CreateConnectClientAddInRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectClientAddInOutcome(result.GetResultWithOwnership())
                            : CreateConnectClientAddInOutcome(std::move(result.GetError()));
}

CreateConnectionAliasOutcome WorkSpacesClient::CreateConnectionAlias(const CreateConnectionAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionAliasOutcome(result.GetResultWithOwnership())
                            : CreateConnectionAliasOutcome(std::move(result.GetError()));
}

CreateIpGroupOutcome WorkSpacesClient::CreateIpGroup(const CreateIpGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpGroupOutcome(result.GetResultWithOwnership()) : CreateIpGroupOutcome(std::move(result.GetError()));
}

CreateStandbyWorkspacesOutcome WorkSpacesClient::CreateStandbyWorkspaces(const CreateStandbyWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStandbyWorkspacesOutcome(result.GetResultWithOwnership())
                            : CreateStandbyWorkspacesOutcome(std::move(result.GetError()));
}

CreateTagsOutcome WorkSpacesClient::CreateTags(const CreateTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTagsOutcome(result.GetResultWithOwnership()) : CreateTagsOutcome(std::move(result.GetError()));
}

CreateUpdatedWorkspaceImageOutcome WorkSpacesClient::CreateUpdatedWorkspaceImage(const CreateUpdatedWorkspaceImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUpdatedWorkspaceImageOutcome(result.GetResultWithOwnership())
                            : CreateUpdatedWorkspaceImageOutcome(std::move(result.GetError()));
}

CreateWorkspaceBundleOutcome WorkSpacesClient::CreateWorkspaceBundle(const CreateWorkspaceBundleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspaceBundleOutcome(result.GetResultWithOwnership())
                            : CreateWorkspaceBundleOutcome(std::move(result.GetError()));
}

CreateWorkspaceImageOutcome WorkSpacesClient::CreateWorkspaceImage(const CreateWorkspaceImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspaceImageOutcome(result.GetResultWithOwnership())
                            : CreateWorkspaceImageOutcome(std::move(result.GetError()));
}

CreateWorkspacesOutcome WorkSpacesClient::CreateWorkspaces(const CreateWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspacesOutcome(result.GetResultWithOwnership())
                            : CreateWorkspacesOutcome(std::move(result.GetError()));
}

CreateWorkspacesPoolOutcome WorkSpacesClient::CreateWorkspacesPool(const CreateWorkspacesPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspacesPoolOutcome(result.GetResultWithOwnership())
                            : CreateWorkspacesPoolOutcome(std::move(result.GetError()));
}

DeleteAccountLinkInvitationOutcome WorkSpacesClient::DeleteAccountLinkInvitation(const DeleteAccountLinkInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccountLinkInvitationOutcome(result.GetResultWithOwnership())
                            : DeleteAccountLinkInvitationOutcome(std::move(result.GetError()));
}

DeleteClientBrandingOutcome WorkSpacesClient::DeleteClientBranding(const DeleteClientBrandingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClientBrandingOutcome(result.GetResultWithOwnership())
                            : DeleteClientBrandingOutcome(std::move(result.GetError()));
}

DeleteConnectClientAddInOutcome WorkSpacesClient::DeleteConnectClientAddIn(const DeleteConnectClientAddInRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectClientAddInOutcome(result.GetResultWithOwnership())
                            : DeleteConnectClientAddInOutcome(std::move(result.GetError()));
}

DeleteConnectionAliasOutcome WorkSpacesClient::DeleteConnectionAlias(const DeleteConnectionAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectionAliasOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionAliasOutcome(std::move(result.GetError()));
}

DeleteIpGroupOutcome WorkSpacesClient::DeleteIpGroup(const DeleteIpGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpGroupOutcome(result.GetResultWithOwnership()) : DeleteIpGroupOutcome(std::move(result.GetError()));
}

DeleteTagsOutcome WorkSpacesClient::DeleteTags(const DeleteTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTagsOutcome(result.GetResultWithOwnership()) : DeleteTagsOutcome(std::move(result.GetError()));
}

DeleteWorkspaceBundleOutcome WorkSpacesClient::DeleteWorkspaceBundle(const DeleteWorkspaceBundleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkspaceBundleOutcome(result.GetResultWithOwnership())
                            : DeleteWorkspaceBundleOutcome(std::move(result.GetError()));
}

DeleteWorkspaceImageOutcome WorkSpacesClient::DeleteWorkspaceImage(const DeleteWorkspaceImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkspaceImageOutcome(result.GetResultWithOwnership())
                            : DeleteWorkspaceImageOutcome(std::move(result.GetError()));
}

DeployWorkspaceApplicationsOutcome WorkSpacesClient::DeployWorkspaceApplications(const DeployWorkspaceApplicationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeployWorkspaceApplicationsOutcome(result.GetResultWithOwnership())
                            : DeployWorkspaceApplicationsOutcome(std::move(result.GetError()));
}

DeregisterWorkspaceDirectoryOutcome WorkSpacesClient::DeregisterWorkspaceDirectory(
    const DeregisterWorkspaceDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterWorkspaceDirectoryOutcome(result.GetResultWithOwnership())
                            : DeregisterWorkspaceDirectoryOutcome(std::move(result.GetError()));
}

DescribeAccountOutcome WorkSpacesClient::DescribeAccount(const DescribeAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountOutcome(result.GetResultWithOwnership())
                            : DescribeAccountOutcome(std::move(result.GetError()));
}

DescribeAccountModificationsOutcome WorkSpacesClient::DescribeAccountModifications(
    const DescribeAccountModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountModificationsOutcome(result.GetResultWithOwnership())
                            : DescribeAccountModificationsOutcome(std::move(result.GetError()));
}

DescribeApplicationAssociationsOutcome WorkSpacesClient::DescribeApplicationAssociations(
    const DescribeApplicationAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicationAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeApplicationAssociationsOutcome(std::move(result.GetError()));
}

DescribeApplicationsOutcome WorkSpacesClient::DescribeApplications(const DescribeApplicationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicationsOutcome(result.GetResultWithOwnership())
                            : DescribeApplicationsOutcome(std::move(result.GetError()));
}

DescribeBundleAssociationsOutcome WorkSpacesClient::DescribeBundleAssociations(const DescribeBundleAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBundleAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeBundleAssociationsOutcome(std::move(result.GetError()));
}

DescribeClientBrandingOutcome WorkSpacesClient::DescribeClientBranding(const DescribeClientBrandingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientBrandingOutcome(result.GetResultWithOwnership())
                            : DescribeClientBrandingOutcome(std::move(result.GetError()));
}

DescribeClientPropertiesOutcome WorkSpacesClient::DescribeClientProperties(const DescribeClientPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientPropertiesOutcome(result.GetResultWithOwnership())
                            : DescribeClientPropertiesOutcome(std::move(result.GetError()));
}

DescribeConnectClientAddInsOutcome WorkSpacesClient::DescribeConnectClientAddIns(const DescribeConnectClientAddInsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConnectClientAddInsOutcome(result.GetResultWithOwnership())
                            : DescribeConnectClientAddInsOutcome(std::move(result.GetError()));
}

DescribeConnectionAliasPermissionsOutcome WorkSpacesClient::DescribeConnectionAliasPermissions(
    const DescribeConnectionAliasPermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConnectionAliasPermissionsOutcome(result.GetResultWithOwnership())
                            : DescribeConnectionAliasPermissionsOutcome(std::move(result.GetError()));
}

DescribeConnectionAliasesOutcome WorkSpacesClient::DescribeConnectionAliases(const DescribeConnectionAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConnectionAliasesOutcome(result.GetResultWithOwnership())
                            : DescribeConnectionAliasesOutcome(std::move(result.GetError()));
}

DescribeCustomWorkspaceImageImportOutcome WorkSpacesClient::DescribeCustomWorkspaceImageImport(
    const DescribeCustomWorkspaceImageImportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCustomWorkspaceImageImportOutcome(result.GetResultWithOwnership())
                            : DescribeCustomWorkspaceImageImportOutcome(std::move(result.GetError()));
}

DescribeImageAssociationsOutcome WorkSpacesClient::DescribeImageAssociations(const DescribeImageAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeImageAssociationsOutcome(std::move(result.GetError()));
}

DescribeIpGroupsOutcome WorkSpacesClient::DescribeIpGroups(const DescribeIpGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeIpGroupsOutcome(std::move(result.GetError()));
}

DescribeTagsOutcome WorkSpacesClient::DescribeTags(const DescribeTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTagsOutcome(result.GetResultWithOwnership()) : DescribeTagsOutcome(std::move(result.GetError()));
}

DescribeWorkspaceAssociationsOutcome WorkSpacesClient::DescribeWorkspaceAssociations(
    const DescribeWorkspaceAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspaceAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceAssociationsOutcome(std::move(result.GetError()));
}

DescribeWorkspaceBundlesOutcome WorkSpacesClient::DescribeWorkspaceBundles(const DescribeWorkspaceBundlesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspaceBundlesOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceBundlesOutcome(std::move(result.GetError()));
}

DescribeWorkspaceDirectoriesOutcome WorkSpacesClient::DescribeWorkspaceDirectories(
    const DescribeWorkspaceDirectoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspaceDirectoriesOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceDirectoriesOutcome(std::move(result.GetError()));
}

DescribeWorkspaceImagePermissionsOutcome WorkSpacesClient::DescribeWorkspaceImagePermissions(
    const DescribeWorkspaceImagePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspaceImagePermissionsOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceImagePermissionsOutcome(std::move(result.GetError()));
}

DescribeWorkspaceImagesOutcome WorkSpacesClient::DescribeWorkspaceImages(const DescribeWorkspaceImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspaceImagesOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceImagesOutcome(std::move(result.GetError()));
}

DescribeWorkspaceSnapshotsOutcome WorkSpacesClient::DescribeWorkspaceSnapshots(const DescribeWorkspaceSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspaceSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceSnapshotsOutcome(std::move(result.GetError()));
}

DescribeWorkspacesOutcome WorkSpacesClient::DescribeWorkspaces(const DescribeWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspacesOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspacesOutcome(std::move(result.GetError()));
}

DescribeWorkspacesConnectionStatusOutcome WorkSpacesClient::DescribeWorkspacesConnectionStatus(
    const DescribeWorkspacesConnectionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspacesConnectionStatusOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspacesConnectionStatusOutcome(std::move(result.GetError()));
}

DescribeWorkspacesPoolSessionsOutcome WorkSpacesClient::DescribeWorkspacesPoolSessions(
    const DescribeWorkspacesPoolSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspacesPoolSessionsOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspacesPoolSessionsOutcome(std::move(result.GetError()));
}

DescribeWorkspacesPoolsOutcome WorkSpacesClient::DescribeWorkspacesPools(const DescribeWorkspacesPoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkspacesPoolsOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspacesPoolsOutcome(std::move(result.GetError()));
}

DisassociateConnectionAliasOutcome WorkSpacesClient::DisassociateConnectionAlias(const DisassociateConnectionAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateConnectionAliasOutcome(result.GetResultWithOwnership())
                            : DisassociateConnectionAliasOutcome(std::move(result.GetError()));
}

DisassociateIpGroupsOutcome WorkSpacesClient::DisassociateIpGroups(const DisassociateIpGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateIpGroupsOutcome(result.GetResultWithOwnership())
                            : DisassociateIpGroupsOutcome(std::move(result.GetError()));
}

DisassociateWorkspaceApplicationOutcome WorkSpacesClient::DisassociateWorkspaceApplication(
    const DisassociateWorkspaceApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateWorkspaceApplicationOutcome(result.GetResultWithOwnership())
                            : DisassociateWorkspaceApplicationOutcome(std::move(result.GetError()));
}

GetAccountLinkOutcome WorkSpacesClient::GetAccountLink(const GetAccountLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountLinkOutcome(result.GetResultWithOwnership()) : GetAccountLinkOutcome(std::move(result.GetError()));
}

ImportClientBrandingOutcome WorkSpacesClient::ImportClientBranding(const ImportClientBrandingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportClientBrandingOutcome(result.GetResultWithOwnership())
                            : ImportClientBrandingOutcome(std::move(result.GetError()));
}

ImportCustomWorkspaceImageOutcome WorkSpacesClient::ImportCustomWorkspaceImage(const ImportCustomWorkspaceImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportCustomWorkspaceImageOutcome(result.GetResultWithOwnership())
                            : ImportCustomWorkspaceImageOutcome(std::move(result.GetError()));
}

ImportWorkspaceImageOutcome WorkSpacesClient::ImportWorkspaceImage(const ImportWorkspaceImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportWorkspaceImageOutcome(result.GetResultWithOwnership())
                            : ImportWorkspaceImageOutcome(std::move(result.GetError()));
}

ListAccountLinksOutcome WorkSpacesClient::ListAccountLinks(const ListAccountLinksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountLinksOutcome(result.GetResultWithOwnership())
                            : ListAccountLinksOutcome(std::move(result.GetError()));
}

ListAvailableManagementCidrRangesOutcome WorkSpacesClient::ListAvailableManagementCidrRanges(
    const ListAvailableManagementCidrRangesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAvailableManagementCidrRangesOutcome(result.GetResultWithOwnership())
                            : ListAvailableManagementCidrRangesOutcome(std::move(result.GetError()));
}

MigrateWorkspaceOutcome WorkSpacesClient::MigrateWorkspace(const MigrateWorkspaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? MigrateWorkspaceOutcome(result.GetResultWithOwnership())
                            : MigrateWorkspaceOutcome(std::move(result.GetError()));
}

ModifyAccountOutcome WorkSpacesClient::ModifyAccount(const ModifyAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyAccountOutcome(result.GetResultWithOwnership()) : ModifyAccountOutcome(std::move(result.GetError()));
}

ModifyCertificateBasedAuthPropertiesOutcome WorkSpacesClient::ModifyCertificateBasedAuthProperties(
    const ModifyCertificateBasedAuthPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCertificateBasedAuthPropertiesOutcome(result.GetResultWithOwnership())
                            : ModifyCertificateBasedAuthPropertiesOutcome(std::move(result.GetError()));
}

ModifyClientPropertiesOutcome WorkSpacesClient::ModifyClientProperties(const ModifyClientPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClientPropertiesOutcome(result.GetResultWithOwnership())
                            : ModifyClientPropertiesOutcome(std::move(result.GetError()));
}

ModifyEndpointEncryptionModeOutcome WorkSpacesClient::ModifyEndpointEncryptionMode(
    const ModifyEndpointEncryptionModeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEndpointEncryptionModeOutcome(result.GetResultWithOwnership())
                            : ModifyEndpointEncryptionModeOutcome(std::move(result.GetError()));
}

ModifySamlPropertiesOutcome WorkSpacesClient::ModifySamlProperties(const ModifySamlPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySamlPropertiesOutcome(result.GetResultWithOwnership())
                            : ModifySamlPropertiesOutcome(std::move(result.GetError()));
}

ModifySelfservicePermissionsOutcome WorkSpacesClient::ModifySelfservicePermissions(
    const ModifySelfservicePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySelfservicePermissionsOutcome(result.GetResultWithOwnership())
                            : ModifySelfservicePermissionsOutcome(std::move(result.GetError()));
}

ModifyStreamingPropertiesOutcome WorkSpacesClient::ModifyStreamingProperties(const ModifyStreamingPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyStreamingPropertiesOutcome(result.GetResultWithOwnership())
                            : ModifyStreamingPropertiesOutcome(std::move(result.GetError()));
}

ModifyWorkspaceAccessPropertiesOutcome WorkSpacesClient::ModifyWorkspaceAccessProperties(
    const ModifyWorkspaceAccessPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyWorkspaceAccessPropertiesOutcome(result.GetResultWithOwnership())
                            : ModifyWorkspaceAccessPropertiesOutcome(std::move(result.GetError()));
}

ModifyWorkspaceCreationPropertiesOutcome WorkSpacesClient::ModifyWorkspaceCreationProperties(
    const ModifyWorkspaceCreationPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyWorkspaceCreationPropertiesOutcome(result.GetResultWithOwnership())
                            : ModifyWorkspaceCreationPropertiesOutcome(std::move(result.GetError()));
}

ModifyWorkspacePropertiesOutcome WorkSpacesClient::ModifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyWorkspacePropertiesOutcome(result.GetResultWithOwnership())
                            : ModifyWorkspacePropertiesOutcome(std::move(result.GetError()));
}

ModifyWorkspaceStateOutcome WorkSpacesClient::ModifyWorkspaceState(const ModifyWorkspaceStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyWorkspaceStateOutcome(result.GetResultWithOwnership())
                            : ModifyWorkspaceStateOutcome(std::move(result.GetError()));
}

RebootWorkspacesOutcome WorkSpacesClient::RebootWorkspaces(const RebootWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootWorkspacesOutcome(result.GetResultWithOwnership())
                            : RebootWorkspacesOutcome(std::move(result.GetError()));
}

RebuildWorkspacesOutcome WorkSpacesClient::RebuildWorkspaces(const RebuildWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebuildWorkspacesOutcome(result.GetResultWithOwnership())
                            : RebuildWorkspacesOutcome(std::move(result.GetError()));
}

RegisterWorkspaceDirectoryOutcome WorkSpacesClient::RegisterWorkspaceDirectory(const RegisterWorkspaceDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterWorkspaceDirectoryOutcome(result.GetResultWithOwnership())
                            : RegisterWorkspaceDirectoryOutcome(std::move(result.GetError()));
}

RejectAccountLinkInvitationOutcome WorkSpacesClient::RejectAccountLinkInvitation(const RejectAccountLinkInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectAccountLinkInvitationOutcome(result.GetResultWithOwnership())
                            : RejectAccountLinkInvitationOutcome(std::move(result.GetError()));
}

RestoreWorkspaceOutcome WorkSpacesClient::RestoreWorkspace(const RestoreWorkspaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreWorkspaceOutcome(result.GetResultWithOwnership())
                            : RestoreWorkspaceOutcome(std::move(result.GetError()));
}

RevokeIpRulesOutcome WorkSpacesClient::RevokeIpRules(const RevokeIpRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeIpRulesOutcome(result.GetResultWithOwnership()) : RevokeIpRulesOutcome(std::move(result.GetError()));
}

StartWorkspacesOutcome WorkSpacesClient::StartWorkspaces(const StartWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartWorkspacesOutcome(result.GetResultWithOwnership())
                            : StartWorkspacesOutcome(std::move(result.GetError()));
}

StartWorkspacesPoolOutcome WorkSpacesClient::StartWorkspacesPool(const StartWorkspacesPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartWorkspacesPoolOutcome(result.GetResultWithOwnership())
                            : StartWorkspacesPoolOutcome(std::move(result.GetError()));
}

StopWorkspacesOutcome WorkSpacesClient::StopWorkspaces(const StopWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopWorkspacesOutcome(result.GetResultWithOwnership()) : StopWorkspacesOutcome(std::move(result.GetError()));
}

StopWorkspacesPoolOutcome WorkSpacesClient::StopWorkspacesPool(const StopWorkspacesPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopWorkspacesPoolOutcome(result.GetResultWithOwnership())
                            : StopWorkspacesPoolOutcome(std::move(result.GetError()));
}

TerminateWorkspacesOutcome WorkSpacesClient::TerminateWorkspaces(const TerminateWorkspacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateWorkspacesOutcome(result.GetResultWithOwnership())
                            : TerminateWorkspacesOutcome(std::move(result.GetError()));
}

TerminateWorkspacesPoolOutcome WorkSpacesClient::TerminateWorkspacesPool(const TerminateWorkspacesPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateWorkspacesPoolOutcome(result.GetResultWithOwnership())
                            : TerminateWorkspacesPoolOutcome(std::move(result.GetError()));
}

TerminateWorkspacesPoolSessionOutcome WorkSpacesClient::TerminateWorkspacesPoolSession(
    const TerminateWorkspacesPoolSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateWorkspacesPoolSessionOutcome(result.GetResultWithOwnership())
                            : TerminateWorkspacesPoolSessionOutcome(std::move(result.GetError()));
}

UpdateConnectClientAddInOutcome WorkSpacesClient::UpdateConnectClientAddIn(const UpdateConnectClientAddInRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConnectClientAddInOutcome(result.GetResultWithOwnership())
                            : UpdateConnectClientAddInOutcome(std::move(result.GetError()));
}

UpdateConnectionAliasPermissionOutcome WorkSpacesClient::UpdateConnectionAliasPermission(
    const UpdateConnectionAliasPermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConnectionAliasPermissionOutcome(result.GetResultWithOwnership())
                            : UpdateConnectionAliasPermissionOutcome(std::move(result.GetError()));
}

UpdateRulesOfIpGroupOutcome WorkSpacesClient::UpdateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRulesOfIpGroupOutcome(result.GetResultWithOwnership())
                            : UpdateRulesOfIpGroupOutcome(std::move(result.GetError()));
}

UpdateWorkspaceBundleOutcome WorkSpacesClient::UpdateWorkspaceBundle(const UpdateWorkspaceBundleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspaceBundleOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceBundleOutcome(std::move(result.GetError()));
}

UpdateWorkspaceImagePermissionOutcome WorkSpacesClient::UpdateWorkspaceImagePermission(
    const UpdateWorkspaceImagePermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspaceImagePermissionOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceImagePermissionOutcome(std::move(result.GetError()));
}

UpdateWorkspacesPoolOutcome WorkSpacesClient::UpdateWorkspacesPool(const UpdateWorkspacesPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspacesPoolOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspacesPoolOutcome(std::move(result.GetError()));
}
