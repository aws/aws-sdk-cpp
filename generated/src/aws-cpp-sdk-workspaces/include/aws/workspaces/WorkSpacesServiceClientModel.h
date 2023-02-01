/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/workspaces/WorkSpacesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/workspaces/WorkSpacesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WorkSpacesClient header */
#include <aws/workspaces/model/AssociateConnectionAliasResult.h>
#include <aws/workspaces/model/AssociateIpGroupsResult.h>
#include <aws/workspaces/model/AuthorizeIpRulesResult.h>
#include <aws/workspaces/model/CopyWorkspaceImageResult.h>
#include <aws/workspaces/model/CreateConnectClientAddInResult.h>
#include <aws/workspaces/model/CreateConnectionAliasResult.h>
#include <aws/workspaces/model/CreateIpGroupResult.h>
#include <aws/workspaces/model/CreateStandbyWorkspacesResult.h>
#include <aws/workspaces/model/CreateTagsResult.h>
#include <aws/workspaces/model/CreateUpdatedWorkspaceImageResult.h>
#include <aws/workspaces/model/CreateWorkspaceBundleResult.h>
#include <aws/workspaces/model/CreateWorkspaceImageResult.h>
#include <aws/workspaces/model/CreateWorkspacesResult.h>
#include <aws/workspaces/model/DeleteClientBrandingResult.h>
#include <aws/workspaces/model/DeleteConnectClientAddInResult.h>
#include <aws/workspaces/model/DeleteConnectionAliasResult.h>
#include <aws/workspaces/model/DeleteIpGroupResult.h>
#include <aws/workspaces/model/DeleteTagsResult.h>
#include <aws/workspaces/model/DeleteWorkspaceBundleResult.h>
#include <aws/workspaces/model/DeleteWorkspaceImageResult.h>
#include <aws/workspaces/model/DeregisterWorkspaceDirectoryResult.h>
#include <aws/workspaces/model/DescribeAccountResult.h>
#include <aws/workspaces/model/DescribeAccountModificationsResult.h>
#include <aws/workspaces/model/DescribeClientBrandingResult.h>
#include <aws/workspaces/model/DescribeClientPropertiesResult.h>
#include <aws/workspaces/model/DescribeConnectClientAddInsResult.h>
#include <aws/workspaces/model/DescribeConnectionAliasPermissionsResult.h>
#include <aws/workspaces/model/DescribeConnectionAliasesResult.h>
#include <aws/workspaces/model/DescribeIpGroupsResult.h>
#include <aws/workspaces/model/DescribeTagsResult.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceImagePermissionsResult.h>
#include <aws/workspaces/model/DescribeWorkspaceImagesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceSnapshotsResult.h>
#include <aws/workspaces/model/DescribeWorkspacesResult.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusResult.h>
#include <aws/workspaces/model/DisassociateConnectionAliasResult.h>
#include <aws/workspaces/model/DisassociateIpGroupsResult.h>
#include <aws/workspaces/model/ImportClientBrandingResult.h>
#include <aws/workspaces/model/ImportWorkspaceImageResult.h>
#include <aws/workspaces/model/ListAvailableManagementCidrRangesResult.h>
#include <aws/workspaces/model/MigrateWorkspaceResult.h>
#include <aws/workspaces/model/ModifyAccountResult.h>
#include <aws/workspaces/model/ModifyCertificateBasedAuthPropertiesResult.h>
#include <aws/workspaces/model/ModifyClientPropertiesResult.h>
#include <aws/workspaces/model/ModifySamlPropertiesResult.h>
#include <aws/workspaces/model/ModifySelfservicePermissionsResult.h>
#include <aws/workspaces/model/ModifyWorkspaceAccessPropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspaceCreationPropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspaceStateResult.h>
#include <aws/workspaces/model/RebootWorkspacesResult.h>
#include <aws/workspaces/model/RebuildWorkspacesResult.h>
#include <aws/workspaces/model/RegisterWorkspaceDirectoryResult.h>
#include <aws/workspaces/model/RestoreWorkspaceResult.h>
#include <aws/workspaces/model/RevokeIpRulesResult.h>
#include <aws/workspaces/model/StartWorkspacesResult.h>
#include <aws/workspaces/model/StopWorkspacesResult.h>
#include <aws/workspaces/model/TerminateWorkspacesResult.h>
#include <aws/workspaces/model/UpdateConnectClientAddInResult.h>
#include <aws/workspaces/model/UpdateConnectionAliasPermissionResult.h>
#include <aws/workspaces/model/UpdateRulesOfIpGroupResult.h>
#include <aws/workspaces/model/UpdateWorkspaceBundleResult.h>
#include <aws/workspaces/model/UpdateWorkspaceImagePermissionResult.h>
/* End of service model headers required in WorkSpacesClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace WorkSpaces
  {
    using WorkSpacesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WorkSpacesEndpointProviderBase = Aws::WorkSpaces::Endpoint::WorkSpacesEndpointProviderBase;
    using WorkSpacesEndpointProvider = Aws::WorkSpaces::Endpoint::WorkSpacesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WorkSpacesClient header */
      class AssociateConnectionAliasRequest;
      class AssociateIpGroupsRequest;
      class AuthorizeIpRulesRequest;
      class CopyWorkspaceImageRequest;
      class CreateConnectClientAddInRequest;
      class CreateConnectionAliasRequest;
      class CreateIpGroupRequest;
      class CreateStandbyWorkspacesRequest;
      class CreateTagsRequest;
      class CreateUpdatedWorkspaceImageRequest;
      class CreateWorkspaceBundleRequest;
      class CreateWorkspaceImageRequest;
      class CreateWorkspacesRequest;
      class DeleteClientBrandingRequest;
      class DeleteConnectClientAddInRequest;
      class DeleteConnectionAliasRequest;
      class DeleteIpGroupRequest;
      class DeleteTagsRequest;
      class DeleteWorkspaceBundleRequest;
      class DeleteWorkspaceImageRequest;
      class DeregisterWorkspaceDirectoryRequest;
      class DescribeAccountRequest;
      class DescribeAccountModificationsRequest;
      class DescribeClientBrandingRequest;
      class DescribeClientPropertiesRequest;
      class DescribeConnectClientAddInsRequest;
      class DescribeConnectionAliasPermissionsRequest;
      class DescribeConnectionAliasesRequest;
      class DescribeIpGroupsRequest;
      class DescribeTagsRequest;
      class DescribeWorkspaceBundlesRequest;
      class DescribeWorkspaceDirectoriesRequest;
      class DescribeWorkspaceImagePermissionsRequest;
      class DescribeWorkspaceImagesRequest;
      class DescribeWorkspaceSnapshotsRequest;
      class DescribeWorkspacesRequest;
      class DescribeWorkspacesConnectionStatusRequest;
      class DisassociateConnectionAliasRequest;
      class DisassociateIpGroupsRequest;
      class ImportClientBrandingRequest;
      class ImportWorkspaceImageRequest;
      class ListAvailableManagementCidrRangesRequest;
      class MigrateWorkspaceRequest;
      class ModifyAccountRequest;
      class ModifyCertificateBasedAuthPropertiesRequest;
      class ModifyClientPropertiesRequest;
      class ModifySamlPropertiesRequest;
      class ModifySelfservicePermissionsRequest;
      class ModifyWorkspaceAccessPropertiesRequest;
      class ModifyWorkspaceCreationPropertiesRequest;
      class ModifyWorkspacePropertiesRequest;
      class ModifyWorkspaceStateRequest;
      class RebootWorkspacesRequest;
      class RebuildWorkspacesRequest;
      class RegisterWorkspaceDirectoryRequest;
      class RestoreWorkspaceRequest;
      class RevokeIpRulesRequest;
      class StartWorkspacesRequest;
      class StopWorkspacesRequest;
      class TerminateWorkspacesRequest;
      class UpdateConnectClientAddInRequest;
      class UpdateConnectionAliasPermissionRequest;
      class UpdateRulesOfIpGroupRequest;
      class UpdateWorkspaceBundleRequest;
      class UpdateWorkspaceImagePermissionRequest;
      /* End of service model forward declarations required in WorkSpacesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateConnectionAliasResult, WorkSpacesError> AssociateConnectionAliasOutcome;
      typedef Aws::Utils::Outcome<AssociateIpGroupsResult, WorkSpacesError> AssociateIpGroupsOutcome;
      typedef Aws::Utils::Outcome<AuthorizeIpRulesResult, WorkSpacesError> AuthorizeIpRulesOutcome;
      typedef Aws::Utils::Outcome<CopyWorkspaceImageResult, WorkSpacesError> CopyWorkspaceImageOutcome;
      typedef Aws::Utils::Outcome<CreateConnectClientAddInResult, WorkSpacesError> CreateConnectClientAddInOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionAliasResult, WorkSpacesError> CreateConnectionAliasOutcome;
      typedef Aws::Utils::Outcome<CreateIpGroupResult, WorkSpacesError> CreateIpGroupOutcome;
      typedef Aws::Utils::Outcome<CreateStandbyWorkspacesResult, WorkSpacesError> CreateStandbyWorkspacesOutcome;
      typedef Aws::Utils::Outcome<CreateTagsResult, WorkSpacesError> CreateTagsOutcome;
      typedef Aws::Utils::Outcome<CreateUpdatedWorkspaceImageResult, WorkSpacesError> CreateUpdatedWorkspaceImageOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspaceBundleResult, WorkSpacesError> CreateWorkspaceBundleOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspaceImageResult, WorkSpacesError> CreateWorkspaceImageOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspacesResult, WorkSpacesError> CreateWorkspacesOutcome;
      typedef Aws::Utils::Outcome<DeleteClientBrandingResult, WorkSpacesError> DeleteClientBrandingOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectClientAddInResult, WorkSpacesError> DeleteConnectClientAddInOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionAliasResult, WorkSpacesError> DeleteConnectionAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteIpGroupResult, WorkSpacesError> DeleteIpGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteTagsResult, WorkSpacesError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkspaceBundleResult, WorkSpacesError> DeleteWorkspaceBundleOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkspaceImageResult, WorkSpacesError> DeleteWorkspaceImageOutcome;
      typedef Aws::Utils::Outcome<DeregisterWorkspaceDirectoryResult, WorkSpacesError> DeregisterWorkspaceDirectoryOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountResult, WorkSpacesError> DescribeAccountOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountModificationsResult, WorkSpacesError> DescribeAccountModificationsOutcome;
      typedef Aws::Utils::Outcome<DescribeClientBrandingResult, WorkSpacesError> DescribeClientBrandingOutcome;
      typedef Aws::Utils::Outcome<DescribeClientPropertiesResult, WorkSpacesError> DescribeClientPropertiesOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectClientAddInsResult, WorkSpacesError> DescribeConnectClientAddInsOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectionAliasPermissionsResult, WorkSpacesError> DescribeConnectionAliasPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectionAliasesResult, WorkSpacesError> DescribeConnectionAliasesOutcome;
      typedef Aws::Utils::Outcome<DescribeIpGroupsResult, WorkSpacesError> DescribeIpGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResult, WorkSpacesError> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceBundlesResult, WorkSpacesError> DescribeWorkspaceBundlesOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceDirectoriesResult, WorkSpacesError> DescribeWorkspaceDirectoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceImagePermissionsResult, WorkSpacesError> DescribeWorkspaceImagePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceImagesResult, WorkSpacesError> DescribeWorkspaceImagesOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceSnapshotsResult, WorkSpacesError> DescribeWorkspaceSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspacesResult, WorkSpacesError> DescribeWorkspacesOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspacesConnectionStatusResult, WorkSpacesError> DescribeWorkspacesConnectionStatusOutcome;
      typedef Aws::Utils::Outcome<DisassociateConnectionAliasResult, WorkSpacesError> DisassociateConnectionAliasOutcome;
      typedef Aws::Utils::Outcome<DisassociateIpGroupsResult, WorkSpacesError> DisassociateIpGroupsOutcome;
      typedef Aws::Utils::Outcome<ImportClientBrandingResult, WorkSpacesError> ImportClientBrandingOutcome;
      typedef Aws::Utils::Outcome<ImportWorkspaceImageResult, WorkSpacesError> ImportWorkspaceImageOutcome;
      typedef Aws::Utils::Outcome<ListAvailableManagementCidrRangesResult, WorkSpacesError> ListAvailableManagementCidrRangesOutcome;
      typedef Aws::Utils::Outcome<MigrateWorkspaceResult, WorkSpacesError> MigrateWorkspaceOutcome;
      typedef Aws::Utils::Outcome<ModifyAccountResult, WorkSpacesError> ModifyAccountOutcome;
      typedef Aws::Utils::Outcome<ModifyCertificateBasedAuthPropertiesResult, WorkSpacesError> ModifyCertificateBasedAuthPropertiesOutcome;
      typedef Aws::Utils::Outcome<ModifyClientPropertiesResult, WorkSpacesError> ModifyClientPropertiesOutcome;
      typedef Aws::Utils::Outcome<ModifySamlPropertiesResult, WorkSpacesError> ModifySamlPropertiesOutcome;
      typedef Aws::Utils::Outcome<ModifySelfservicePermissionsResult, WorkSpacesError> ModifySelfservicePermissionsOutcome;
      typedef Aws::Utils::Outcome<ModifyWorkspaceAccessPropertiesResult, WorkSpacesError> ModifyWorkspaceAccessPropertiesOutcome;
      typedef Aws::Utils::Outcome<ModifyWorkspaceCreationPropertiesResult, WorkSpacesError> ModifyWorkspaceCreationPropertiesOutcome;
      typedef Aws::Utils::Outcome<ModifyWorkspacePropertiesResult, WorkSpacesError> ModifyWorkspacePropertiesOutcome;
      typedef Aws::Utils::Outcome<ModifyWorkspaceStateResult, WorkSpacesError> ModifyWorkspaceStateOutcome;
      typedef Aws::Utils::Outcome<RebootWorkspacesResult, WorkSpacesError> RebootWorkspacesOutcome;
      typedef Aws::Utils::Outcome<RebuildWorkspacesResult, WorkSpacesError> RebuildWorkspacesOutcome;
      typedef Aws::Utils::Outcome<RegisterWorkspaceDirectoryResult, WorkSpacesError> RegisterWorkspaceDirectoryOutcome;
      typedef Aws::Utils::Outcome<RestoreWorkspaceResult, WorkSpacesError> RestoreWorkspaceOutcome;
      typedef Aws::Utils::Outcome<RevokeIpRulesResult, WorkSpacesError> RevokeIpRulesOutcome;
      typedef Aws::Utils::Outcome<StartWorkspacesResult, WorkSpacesError> StartWorkspacesOutcome;
      typedef Aws::Utils::Outcome<StopWorkspacesResult, WorkSpacesError> StopWorkspacesOutcome;
      typedef Aws::Utils::Outcome<TerminateWorkspacesResult, WorkSpacesError> TerminateWorkspacesOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectClientAddInResult, WorkSpacesError> UpdateConnectClientAddInOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionAliasPermissionResult, WorkSpacesError> UpdateConnectionAliasPermissionOutcome;
      typedef Aws::Utils::Outcome<UpdateRulesOfIpGroupResult, WorkSpacesError> UpdateRulesOfIpGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkspaceBundleResult, WorkSpacesError> UpdateWorkspaceBundleOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkspaceImagePermissionResult, WorkSpacesError> UpdateWorkspaceImagePermissionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateConnectionAliasOutcome> AssociateConnectionAliasOutcomeCallable;
      typedef std::future<AssociateIpGroupsOutcome> AssociateIpGroupsOutcomeCallable;
      typedef std::future<AuthorizeIpRulesOutcome> AuthorizeIpRulesOutcomeCallable;
      typedef std::future<CopyWorkspaceImageOutcome> CopyWorkspaceImageOutcomeCallable;
      typedef std::future<CreateConnectClientAddInOutcome> CreateConnectClientAddInOutcomeCallable;
      typedef std::future<CreateConnectionAliasOutcome> CreateConnectionAliasOutcomeCallable;
      typedef std::future<CreateIpGroupOutcome> CreateIpGroupOutcomeCallable;
      typedef std::future<CreateStandbyWorkspacesOutcome> CreateStandbyWorkspacesOutcomeCallable;
      typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
      typedef std::future<CreateUpdatedWorkspaceImageOutcome> CreateUpdatedWorkspaceImageOutcomeCallable;
      typedef std::future<CreateWorkspaceBundleOutcome> CreateWorkspaceBundleOutcomeCallable;
      typedef std::future<CreateWorkspaceImageOutcome> CreateWorkspaceImageOutcomeCallable;
      typedef std::future<CreateWorkspacesOutcome> CreateWorkspacesOutcomeCallable;
      typedef std::future<DeleteClientBrandingOutcome> DeleteClientBrandingOutcomeCallable;
      typedef std::future<DeleteConnectClientAddInOutcome> DeleteConnectClientAddInOutcomeCallable;
      typedef std::future<DeleteConnectionAliasOutcome> DeleteConnectionAliasOutcomeCallable;
      typedef std::future<DeleteIpGroupOutcome> DeleteIpGroupOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DeleteWorkspaceBundleOutcome> DeleteWorkspaceBundleOutcomeCallable;
      typedef std::future<DeleteWorkspaceImageOutcome> DeleteWorkspaceImageOutcomeCallable;
      typedef std::future<DeregisterWorkspaceDirectoryOutcome> DeregisterWorkspaceDirectoryOutcomeCallable;
      typedef std::future<DescribeAccountOutcome> DescribeAccountOutcomeCallable;
      typedef std::future<DescribeAccountModificationsOutcome> DescribeAccountModificationsOutcomeCallable;
      typedef std::future<DescribeClientBrandingOutcome> DescribeClientBrandingOutcomeCallable;
      typedef std::future<DescribeClientPropertiesOutcome> DescribeClientPropertiesOutcomeCallable;
      typedef std::future<DescribeConnectClientAddInsOutcome> DescribeConnectClientAddInsOutcomeCallable;
      typedef std::future<DescribeConnectionAliasPermissionsOutcome> DescribeConnectionAliasPermissionsOutcomeCallable;
      typedef std::future<DescribeConnectionAliasesOutcome> DescribeConnectionAliasesOutcomeCallable;
      typedef std::future<DescribeIpGroupsOutcome> DescribeIpGroupsOutcomeCallable;
      typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
      typedef std::future<DescribeWorkspaceBundlesOutcome> DescribeWorkspaceBundlesOutcomeCallable;
      typedef std::future<DescribeWorkspaceDirectoriesOutcome> DescribeWorkspaceDirectoriesOutcomeCallable;
      typedef std::future<DescribeWorkspaceImagePermissionsOutcome> DescribeWorkspaceImagePermissionsOutcomeCallable;
      typedef std::future<DescribeWorkspaceImagesOutcome> DescribeWorkspaceImagesOutcomeCallable;
      typedef std::future<DescribeWorkspaceSnapshotsOutcome> DescribeWorkspaceSnapshotsOutcomeCallable;
      typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
      typedef std::future<DescribeWorkspacesConnectionStatusOutcome> DescribeWorkspacesConnectionStatusOutcomeCallable;
      typedef std::future<DisassociateConnectionAliasOutcome> DisassociateConnectionAliasOutcomeCallable;
      typedef std::future<DisassociateIpGroupsOutcome> DisassociateIpGroupsOutcomeCallable;
      typedef std::future<ImportClientBrandingOutcome> ImportClientBrandingOutcomeCallable;
      typedef std::future<ImportWorkspaceImageOutcome> ImportWorkspaceImageOutcomeCallable;
      typedef std::future<ListAvailableManagementCidrRangesOutcome> ListAvailableManagementCidrRangesOutcomeCallable;
      typedef std::future<MigrateWorkspaceOutcome> MigrateWorkspaceOutcomeCallable;
      typedef std::future<ModifyAccountOutcome> ModifyAccountOutcomeCallable;
      typedef std::future<ModifyCertificateBasedAuthPropertiesOutcome> ModifyCertificateBasedAuthPropertiesOutcomeCallable;
      typedef std::future<ModifyClientPropertiesOutcome> ModifyClientPropertiesOutcomeCallable;
      typedef std::future<ModifySamlPropertiesOutcome> ModifySamlPropertiesOutcomeCallable;
      typedef std::future<ModifySelfservicePermissionsOutcome> ModifySelfservicePermissionsOutcomeCallable;
      typedef std::future<ModifyWorkspaceAccessPropertiesOutcome> ModifyWorkspaceAccessPropertiesOutcomeCallable;
      typedef std::future<ModifyWorkspaceCreationPropertiesOutcome> ModifyWorkspaceCreationPropertiesOutcomeCallable;
      typedef std::future<ModifyWorkspacePropertiesOutcome> ModifyWorkspacePropertiesOutcomeCallable;
      typedef std::future<ModifyWorkspaceStateOutcome> ModifyWorkspaceStateOutcomeCallable;
      typedef std::future<RebootWorkspacesOutcome> RebootWorkspacesOutcomeCallable;
      typedef std::future<RebuildWorkspacesOutcome> RebuildWorkspacesOutcomeCallable;
      typedef std::future<RegisterWorkspaceDirectoryOutcome> RegisterWorkspaceDirectoryOutcomeCallable;
      typedef std::future<RestoreWorkspaceOutcome> RestoreWorkspaceOutcomeCallable;
      typedef std::future<RevokeIpRulesOutcome> RevokeIpRulesOutcomeCallable;
      typedef std::future<StartWorkspacesOutcome> StartWorkspacesOutcomeCallable;
      typedef std::future<StopWorkspacesOutcome> StopWorkspacesOutcomeCallable;
      typedef std::future<TerminateWorkspacesOutcome> TerminateWorkspacesOutcomeCallable;
      typedef std::future<UpdateConnectClientAddInOutcome> UpdateConnectClientAddInOutcomeCallable;
      typedef std::future<UpdateConnectionAliasPermissionOutcome> UpdateConnectionAliasPermissionOutcomeCallable;
      typedef std::future<UpdateRulesOfIpGroupOutcome> UpdateRulesOfIpGroupOutcomeCallable;
      typedef std::future<UpdateWorkspaceBundleOutcome> UpdateWorkspaceBundleOutcomeCallable;
      typedef std::future<UpdateWorkspaceImagePermissionOutcome> UpdateWorkspaceImagePermissionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WorkSpacesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WorkSpacesClient*, const Model::AssociateConnectionAliasRequest&, const Model::AssociateConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::AssociateIpGroupsRequest&, const Model::AssociateIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::AuthorizeIpRulesRequest&, const Model::AuthorizeIpRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeIpRulesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CopyWorkspaceImageRequest&, const Model::CopyWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateConnectClientAddInRequest&, const Model::CreateConnectClientAddInOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectClientAddInResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateConnectionAliasRequest&, const Model::CreateConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateIpGroupRequest&, const Model::CreateIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateStandbyWorkspacesRequest&, const Model::CreateStandbyWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStandbyWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateUpdatedWorkspaceImageRequest&, const Model::CreateUpdatedWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUpdatedWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateWorkspaceBundleRequest&, const Model::CreateWorkspaceBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceBundleResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateWorkspaceImageRequest&, const Model::CreateWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateWorkspacesRequest&, const Model::CreateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteClientBrandingRequest&, const Model::DeleteClientBrandingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClientBrandingResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteConnectClientAddInRequest&, const Model::DeleteConnectClientAddInOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectClientAddInResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteConnectionAliasRequest&, const Model::DeleteConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteIpGroupRequest&, const Model::DeleteIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteWorkspaceBundleRequest&, const Model::DeleteWorkspaceBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceBundleResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteWorkspaceImageRequest&, const Model::DeleteWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeregisterWorkspaceDirectoryRequest&, const Model::DeregisterWorkspaceDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterWorkspaceDirectoryResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeAccountRequest&, const Model::DescribeAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeAccountModificationsRequest&, const Model::DescribeAccountModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountModificationsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeClientBrandingRequest&, const Model::DescribeClientBrandingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientBrandingResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeClientPropertiesRequest&, const Model::DescribeClientPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeConnectClientAddInsRequest&, const Model::DescribeConnectClientAddInsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectClientAddInsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeConnectionAliasPermissionsRequest&, const Model::DescribeConnectionAliasPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionAliasPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeConnectionAliasesRequest&, const Model::DescribeConnectionAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionAliasesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeIpGroupsRequest&, const Model::DescribeIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceBundlesRequest&, const Model::DescribeWorkspaceBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceBundlesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceDirectoriesRequest&, const Model::DescribeWorkspaceDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceDirectoriesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceImagePermissionsRequest&, const Model::DescribeWorkspaceImagePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceImagePermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceImagesRequest&, const Model::DescribeWorkspaceImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceImagesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceSnapshotsRequest&, const Model::DescribeWorkspaceSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceSnapshotsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesRequest&, const Model::DescribeWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesConnectionStatusRequest&, const Model::DescribeWorkspacesConnectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesConnectionStatusResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DisassociateConnectionAliasRequest&, const Model::DisassociateConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DisassociateIpGroupsRequest&, const Model::DisassociateIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ImportClientBrandingRequest&, const Model::ImportClientBrandingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportClientBrandingResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ImportWorkspaceImageRequest&, const Model::ImportWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ListAvailableManagementCidrRangesRequest&, const Model::ListAvailableManagementCidrRangesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableManagementCidrRangesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::MigrateWorkspaceRequest&, const Model::MigrateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MigrateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyAccountRequest&, const Model::ModifyAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyAccountResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyCertificateBasedAuthPropertiesRequest&, const Model::ModifyCertificateBasedAuthPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCertificateBasedAuthPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyClientPropertiesRequest&, const Model::ModifyClientPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClientPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifySamlPropertiesRequest&, const Model::ModifySamlPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySamlPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifySelfservicePermissionsRequest&, const Model::ModifySelfservicePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySelfservicePermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspaceAccessPropertiesRequest&, const Model::ModifyWorkspaceAccessPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspaceAccessPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspaceCreationPropertiesRequest&, const Model::ModifyWorkspaceCreationPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspaceCreationPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspacePropertiesRequest&, const Model::ModifyWorkspacePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspacePropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspaceStateRequest&, const Model::ModifyWorkspaceStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspaceStateResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebootWorkspacesRequest&, const Model::RebootWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebuildWorkspacesRequest&, const Model::RebuildWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebuildWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RegisterWorkspaceDirectoryRequest&, const Model::RegisterWorkspaceDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterWorkspaceDirectoryResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RestoreWorkspaceRequest&, const Model::RestoreWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreWorkspaceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RevokeIpRulesRequest&, const Model::RevokeIpRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeIpRulesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StartWorkspacesRequest&, const Model::StartWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StopWorkspacesRequest&, const Model::StopWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::TerminateWorkspacesRequest&, const Model::TerminateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateConnectClientAddInRequest&, const Model::UpdateConnectClientAddInOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectClientAddInResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateConnectionAliasPermissionRequest&, const Model::UpdateConnectionAliasPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionAliasPermissionResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateRulesOfIpGroupRequest&, const Model::UpdateRulesOfIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRulesOfIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateWorkspaceBundleRequest&, const Model::UpdateWorkspaceBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceBundleResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateWorkspaceImagePermissionRequest&, const Model::UpdateWorkspaceImagePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceImagePermissionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WorkSpaces
} // namespace Aws
