/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/workspaces/WorkSpacesClient.h>
#include <aws/workspaces/WorkSpacesErrorMarshaller.h>
#include <aws/workspaces/WorkSpacesEndpointProvider.h>
#include <aws/workspaces/model/AssociateConnectionAliasRequest.h>
#include <aws/workspaces/model/AssociateIpGroupsRequest.h>
#include <aws/workspaces/model/AuthorizeIpRulesRequest.h>
#include <aws/workspaces/model/CopyWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateConnectClientAddInRequest.h>
#include <aws/workspaces/model/CreateConnectionAliasRequest.h>
#include <aws/workspaces/model/CreateIpGroupRequest.h>
#include <aws/workspaces/model/CreateStandbyWorkspacesRequest.h>
#include <aws/workspaces/model/CreateTagsRequest.h>
#include <aws/workspaces/model/CreateUpdatedWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateWorkspaceBundleRequest.h>
#include <aws/workspaces/model/CreateWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateWorkspacesRequest.h>
#include <aws/workspaces/model/DeleteClientBrandingRequest.h>
#include <aws/workspaces/model/DeleteConnectClientAddInRequest.h>
#include <aws/workspaces/model/DeleteConnectionAliasRequest.h>
#include <aws/workspaces/model/DeleteIpGroupRequest.h>
#include <aws/workspaces/model/DeleteTagsRequest.h>
#include <aws/workspaces/model/DeleteWorkspaceBundleRequest.h>
#include <aws/workspaces/model/DeleteWorkspaceImageRequest.h>
#include <aws/workspaces/model/DeregisterWorkspaceDirectoryRequest.h>
#include <aws/workspaces/model/DescribeAccountRequest.h>
#include <aws/workspaces/model/DescribeAccountModificationsRequest.h>
#include <aws/workspaces/model/DescribeClientBrandingRequest.h>
#include <aws/workspaces/model/DescribeClientPropertiesRequest.h>
#include <aws/workspaces/model/DescribeConnectClientAddInsRequest.h>
#include <aws/workspaces/model/DescribeConnectionAliasPermissionsRequest.h>
#include <aws/workspaces/model/DescribeConnectionAliasesRequest.h>
#include <aws/workspaces/model/DescribeIpGroupsRequest.h>
#include <aws/workspaces/model/DescribeTagsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceImagePermissionsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceImagesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceSnapshotsRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusRequest.h>
#include <aws/workspaces/model/DisassociateConnectionAliasRequest.h>
#include <aws/workspaces/model/DisassociateIpGroupsRequest.h>
#include <aws/workspaces/model/ImportClientBrandingRequest.h>
#include <aws/workspaces/model/ImportWorkspaceImageRequest.h>
#include <aws/workspaces/model/ListAvailableManagementCidrRangesRequest.h>
#include <aws/workspaces/model/MigrateWorkspaceRequest.h>
#include <aws/workspaces/model/ModifyAccountRequest.h>
#include <aws/workspaces/model/ModifyCertificateBasedAuthPropertiesRequest.h>
#include <aws/workspaces/model/ModifyClientPropertiesRequest.h>
#include <aws/workspaces/model/ModifySamlPropertiesRequest.h>
#include <aws/workspaces/model/ModifySelfservicePermissionsRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceAccessPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceCreationPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceStateRequest.h>
#include <aws/workspaces/model/RebootWorkspacesRequest.h>
#include <aws/workspaces/model/RebuildWorkspacesRequest.h>
#include <aws/workspaces/model/RegisterWorkspaceDirectoryRequest.h>
#include <aws/workspaces/model/RestoreWorkspaceRequest.h>
#include <aws/workspaces/model/RevokeIpRulesRequest.h>
#include <aws/workspaces/model/StartWorkspacesRequest.h>
#include <aws/workspaces/model/StopWorkspacesRequest.h>
#include <aws/workspaces/model/TerminateWorkspacesRequest.h>
#include <aws/workspaces/model/UpdateConnectClientAddInRequest.h>
#include <aws/workspaces/model/UpdateConnectionAliasPermissionRequest.h>
#include <aws/workspaces/model/UpdateRulesOfIpGroupRequest.h>
#include <aws/workspaces/model/UpdateWorkspaceBundleRequest.h>
#include <aws/workspaces/model/UpdateWorkspaceImagePermissionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpaces;
using namespace Aws::WorkSpaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WorkSpacesClient::SERVICE_NAME = "workspaces";
const char* WorkSpacesClient::ALLOCATION_TAG = "WorkSpacesClient";

WorkSpacesClient::WorkSpacesClient(const WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration,
                                   std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const AWSCredentials& credentials,
                                   std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider,
                                   const WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider,
                                   const WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WorkSpacesClient::WorkSpacesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WorkSpacesClient::~WorkSpacesClient()
{
}

std::shared_ptr<WorkSpacesEndpointProviderBase>& WorkSpacesClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WorkSpacesClient::init(const WorkSpaces::WorkSpacesClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkSpaces");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WorkSpacesClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateConnectionAliasOutcome WorkSpacesClient::AssociateConnectionAlias(const AssociateConnectionAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateConnectionAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateIpGroupsOutcome WorkSpacesClient::AssociateIpGroups(const AssociateIpGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateIpGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateIpGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateIpGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AuthorizeIpRulesOutcome WorkSpacesClient::AuthorizeIpRules(const AuthorizeIpRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeIpRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeIpRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeIpRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyWorkspaceImageOutcome WorkSpacesClient::CopyWorkspaceImage(const CopyWorkspaceImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyWorkspaceImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectClientAddInOutcome WorkSpacesClient::CreateConnectClientAddIn(const CreateConnectClientAddInRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnectClientAddIn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnectClientAddIn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateConnectClientAddInOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionAliasOutcome WorkSpacesClient::CreateConnectionAlias(const CreateConnectionAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateConnectionAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIpGroupOutcome WorkSpacesClient::CreateIpGroup(const CreateIpGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStandbyWorkspacesOutcome WorkSpacesClient::CreateStandbyWorkspaces(const CreateStandbyWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStandbyWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStandbyWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStandbyWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagsOutcome WorkSpacesClient::CreateTags(const CreateTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUpdatedWorkspaceImageOutcome WorkSpacesClient::CreateUpdatedWorkspaceImage(const CreateUpdatedWorkspaceImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUpdatedWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUpdatedWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUpdatedWorkspaceImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceBundleOutcome WorkSpacesClient::CreateWorkspaceBundle(const CreateWorkspaceBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspaceBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspaceBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWorkspaceBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceImageOutcome WorkSpacesClient::CreateWorkspaceImage(const CreateWorkspaceImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWorkspaceImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspacesOutcome WorkSpacesClient::CreateWorkspaces(const CreateWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteClientBrandingOutcome WorkSpacesClient::DeleteClientBranding(const DeleteClientBrandingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClientBranding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClientBranding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClientBrandingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectClientAddInOutcome WorkSpacesClient::DeleteConnectClientAddIn(const DeleteConnectClientAddInRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnectClientAddIn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnectClientAddIn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConnectClientAddInOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionAliasOutcome WorkSpacesClient::DeleteConnectionAlias(const DeleteConnectionAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConnectionAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIpGroupOutcome WorkSpacesClient::DeleteIpGroup(const DeleteIpGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsOutcome WorkSpacesClient::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceBundleOutcome WorkSpacesClient::DeleteWorkspaceBundle(const DeleteWorkspaceBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspaceBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspaceBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWorkspaceBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceImageOutcome WorkSpacesClient::DeleteWorkspaceImage(const DeleteWorkspaceImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWorkspaceImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterWorkspaceDirectoryOutcome WorkSpacesClient::DeregisterWorkspaceDirectory(const DeregisterWorkspaceDirectoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterWorkspaceDirectory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterWorkspaceDirectory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterWorkspaceDirectoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountOutcome WorkSpacesClient::DescribeAccount(const DescribeAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountModificationsOutcome WorkSpacesClient::DescribeAccountModifications(const DescribeAccountModificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClientBrandingOutcome WorkSpacesClient::DescribeClientBranding(const DescribeClientBrandingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientBranding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientBranding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientBrandingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClientPropertiesOutcome WorkSpacesClient::DescribeClientProperties(const DescribeClientPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectClientAddInsOutcome WorkSpacesClient::DescribeConnectClientAddIns(const DescribeConnectClientAddInsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnectClientAddIns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnectClientAddIns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConnectClientAddInsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionAliasPermissionsOutcome WorkSpacesClient::DescribeConnectionAliasPermissions(const DescribeConnectionAliasPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnectionAliasPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnectionAliasPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConnectionAliasPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionAliasesOutcome WorkSpacesClient::DescribeConnectionAliases(const DescribeConnectionAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnectionAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnectionAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConnectionAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIpGroupsOutcome WorkSpacesClient::DescribeIpGroups(const DescribeIpGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTagsOutcome WorkSpacesClient::DescribeTags(const DescribeTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceBundlesOutcome WorkSpacesClient::DescribeWorkspaceBundles(const DescribeWorkspaceBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkspaceBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceDirectoriesOutcome WorkSpacesClient::DescribeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceDirectories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceDirectories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkspaceDirectoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceImagePermissionsOutcome WorkSpacesClient::DescribeWorkspaceImagePermissions(const DescribeWorkspaceImagePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkspaceImagePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceImagesOutcome WorkSpacesClient::DescribeWorkspaceImages(const DescribeWorkspaceImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkspaceImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceSnapshotsOutcome WorkSpacesClient::DescribeWorkspaceSnapshots(const DescribeWorkspaceSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkspaceSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspacesOutcome WorkSpacesClient::DescribeWorkspaces(const DescribeWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspacesConnectionStatusOutcome WorkSpacesClient::DescribeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspacesConnectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspacesConnectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkspacesConnectionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateConnectionAliasOutcome WorkSpacesClient::DisassociateConnectionAlias(const DisassociateConnectionAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateConnectionAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateConnectionAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateIpGroupsOutcome WorkSpacesClient::DisassociateIpGroups(const DisassociateIpGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateIpGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateIpGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateIpGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportClientBrandingOutcome WorkSpacesClient::ImportClientBranding(const ImportClientBrandingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportClientBranding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportClientBranding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportClientBrandingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportWorkspaceImageOutcome WorkSpacesClient::ImportWorkspaceImage(const ImportWorkspaceImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportWorkspaceImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportWorkspaceImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableManagementCidrRangesOutcome WorkSpacesClient::ListAvailableManagementCidrRanges(const ListAvailableManagementCidrRangesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableManagementCidrRanges, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailableManagementCidrRanges, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAvailableManagementCidrRangesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MigrateWorkspaceOutcome WorkSpacesClient::MigrateWorkspace(const MigrateWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MigrateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MigrateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MigrateWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyAccountOutcome WorkSpacesClient::ModifyAccount(const ModifyAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyCertificateBasedAuthPropertiesOutcome WorkSpacesClient::ModifyCertificateBasedAuthProperties(const ModifyCertificateBasedAuthPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCertificateBasedAuthProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCertificateBasedAuthProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCertificateBasedAuthPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyClientPropertiesOutcome WorkSpacesClient::ModifyClientProperties(const ModifyClientPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClientProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClientProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClientPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifySamlPropertiesOutcome WorkSpacesClient::ModifySamlProperties(const ModifySamlPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySamlProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySamlProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySamlPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifySelfservicePermissionsOutcome WorkSpacesClient::ModifySelfservicePermissions(const ModifySelfservicePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySelfservicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySelfservicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySelfservicePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspaceAccessPropertiesOutcome WorkSpacesClient::ModifyWorkspaceAccessProperties(const ModifyWorkspaceAccessPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyWorkspaceAccessProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyWorkspaceAccessProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyWorkspaceAccessPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspaceCreationPropertiesOutcome WorkSpacesClient::ModifyWorkspaceCreationProperties(const ModifyWorkspaceCreationPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyWorkspaceCreationProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyWorkspaceCreationProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyWorkspaceCreationPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspacePropertiesOutcome WorkSpacesClient::ModifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyWorkspaceProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyWorkspaceProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyWorkspacePropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspaceStateOutcome WorkSpacesClient::ModifyWorkspaceState(const ModifyWorkspaceStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyWorkspaceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyWorkspaceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyWorkspaceStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootWorkspacesOutcome WorkSpacesClient::RebootWorkspaces(const RebootWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebuildWorkspacesOutcome WorkSpacesClient::RebuildWorkspaces(const RebuildWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebuildWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebuildWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebuildWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterWorkspaceDirectoryOutcome WorkSpacesClient::RegisterWorkspaceDirectory(const RegisterWorkspaceDirectoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterWorkspaceDirectory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterWorkspaceDirectory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterWorkspaceDirectoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreWorkspaceOutcome WorkSpacesClient::RestoreWorkspace(const RestoreWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeIpRulesOutcome WorkSpacesClient::RevokeIpRules(const RevokeIpRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeIpRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeIpRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeIpRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartWorkspacesOutcome WorkSpacesClient::StartWorkspaces(const StartWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopWorkspacesOutcome WorkSpacesClient::StopWorkspaces(const StopWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateWorkspacesOutcome WorkSpacesClient::TerminateWorkspaces(const TerminateWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectClientAddInOutcome WorkSpacesClient::UpdateConnectClientAddIn(const UpdateConnectClientAddInRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnectClientAddIn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConnectClientAddIn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateConnectClientAddInOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectionAliasPermissionOutcome WorkSpacesClient::UpdateConnectionAliasPermission(const UpdateConnectionAliasPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnectionAliasPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConnectionAliasPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateConnectionAliasPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRulesOfIpGroupOutcome WorkSpacesClient::UpdateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRulesOfIpGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRulesOfIpGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRulesOfIpGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceBundleOutcome WorkSpacesClient::UpdateWorkspaceBundle(const UpdateWorkspaceBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspaceBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspaceBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateWorkspaceBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceImagePermissionOutcome WorkSpacesClient::UpdateWorkspaceImagePermission(const UpdateWorkspaceImagePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspaceImagePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspaceImagePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateWorkspaceImagePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

