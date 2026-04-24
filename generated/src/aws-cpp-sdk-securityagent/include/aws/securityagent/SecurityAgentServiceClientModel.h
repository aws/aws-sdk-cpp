/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentEndpointProvider.h>
#include <aws/securityagent/SecurityAgentErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SecurityAgentClient header */
#include <aws/core/NoResult.h>
#include <aws/securityagent/model/AddArtifactResult.h>
#include <aws/securityagent/model/BatchDeletePentestsResult.h>
#include <aws/securityagent/model/BatchGetAgentSpacesResult.h>
#include <aws/securityagent/model/BatchGetArtifactMetadataResult.h>
#include <aws/securityagent/model/BatchGetFindingsResult.h>
#include <aws/securityagent/model/BatchGetPentestJobTasksResult.h>
#include <aws/securityagent/model/BatchGetPentestJobsResult.h>
#include <aws/securityagent/model/BatchGetPentestsResult.h>
#include <aws/securityagent/model/BatchGetTargetDomainsResult.h>
#include <aws/securityagent/model/CreateAgentSpaceResult.h>
#include <aws/securityagent/model/CreateApplicationRequest.h>
#include <aws/securityagent/model/CreateApplicationResult.h>
#include <aws/securityagent/model/CreateIntegrationResult.h>
#include <aws/securityagent/model/CreateMembershipResult.h>
#include <aws/securityagent/model/CreatePentestResult.h>
#include <aws/securityagent/model/CreateTargetDomainResult.h>
#include <aws/securityagent/model/DeleteAgentSpaceResult.h>
#include <aws/securityagent/model/DeleteArtifactResult.h>
#include <aws/securityagent/model/DeleteIntegrationResult.h>
#include <aws/securityagent/model/DeleteMembershipResult.h>
#include <aws/securityagent/model/DeleteTargetDomainResult.h>
#include <aws/securityagent/model/GetApplicationResult.h>
#include <aws/securityagent/model/GetArtifactResult.h>
#include <aws/securityagent/model/GetIntegrationResult.h>
#include <aws/securityagent/model/InitiateProviderRegistrationResult.h>
#include <aws/securityagent/model/ListAgentSpacesRequest.h>
#include <aws/securityagent/model/ListAgentSpacesResult.h>
#include <aws/securityagent/model/ListApplicationsRequest.h>
#include <aws/securityagent/model/ListApplicationsResult.h>
#include <aws/securityagent/model/ListArtifactsResult.h>
#include <aws/securityagent/model/ListDiscoveredEndpointsResult.h>
#include <aws/securityagent/model/ListFindingsResult.h>
#include <aws/securityagent/model/ListIntegratedResourcesResult.h>
#include <aws/securityagent/model/ListIntegrationsRequest.h>
#include <aws/securityagent/model/ListIntegrationsResult.h>
#include <aws/securityagent/model/ListMembershipsResult.h>
#include <aws/securityagent/model/ListPentestJobTasksResult.h>
#include <aws/securityagent/model/ListPentestJobsForPentestResult.h>
#include <aws/securityagent/model/ListPentestsResult.h>
#include <aws/securityagent/model/ListTagsForResourceResult.h>
#include <aws/securityagent/model/ListTargetDomainsRequest.h>
#include <aws/securityagent/model/ListTargetDomainsResult.h>
#include <aws/securityagent/model/StartCodeRemediationResult.h>
#include <aws/securityagent/model/StartPentestJobResult.h>
#include <aws/securityagent/model/StopPentestJobResult.h>
#include <aws/securityagent/model/TagResourceResult.h>
#include <aws/securityagent/model/UntagResourceResult.h>
#include <aws/securityagent/model/UpdateAgentSpaceResult.h>
#include <aws/securityagent/model/UpdateApplicationResult.h>
#include <aws/securityagent/model/UpdateFindingResult.h>
#include <aws/securityagent/model/UpdateIntegratedResourcesResult.h>
#include <aws/securityagent/model/UpdatePentestResult.h>
#include <aws/securityagent/model/UpdateTargetDomainResult.h>
#include <aws/securityagent/model/VerifyTargetDomainResult.h>
/* End of service model headers required in SecurityAgentClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace SecurityAgent {
using SecurityAgentClientConfiguration = Aws::Client::GenericClientConfiguration;
using SecurityAgentEndpointProviderBase = Aws::SecurityAgent::Endpoint::SecurityAgentEndpointProviderBase;
using SecurityAgentEndpointProvider = Aws::SecurityAgent::Endpoint::SecurityAgentEndpointProvider;

namespace Model {
/* Service model forward declarations required in SecurityAgentClient header */
class AddArtifactRequest;
class BatchDeletePentestsRequest;
class BatchGetAgentSpacesRequest;
class BatchGetArtifactMetadataRequest;
class BatchGetFindingsRequest;
class BatchGetPentestJobTasksRequest;
class BatchGetPentestJobsRequest;
class BatchGetPentestsRequest;
class BatchGetTargetDomainsRequest;
class CreateAgentSpaceRequest;
class CreateApplicationRequest;
class CreateIntegrationRequest;
class CreateMembershipRequest;
class CreatePentestRequest;
class CreateTargetDomainRequest;
class DeleteAgentSpaceRequest;
class DeleteApplicationRequest;
class DeleteArtifactRequest;
class DeleteIntegrationRequest;
class DeleteMembershipRequest;
class DeleteTargetDomainRequest;
class GetApplicationRequest;
class GetArtifactRequest;
class GetIntegrationRequest;
class InitiateProviderRegistrationRequest;
class ListAgentSpacesRequest;
class ListApplicationsRequest;
class ListArtifactsRequest;
class ListDiscoveredEndpointsRequest;
class ListFindingsRequest;
class ListIntegratedResourcesRequest;
class ListIntegrationsRequest;
class ListMembershipsRequest;
class ListPentestJobTasksRequest;
class ListPentestJobsForPentestRequest;
class ListPentestsRequest;
class ListTagsForResourceRequest;
class ListTargetDomainsRequest;
class StartCodeRemediationRequest;
class StartPentestJobRequest;
class StopPentestJobRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAgentSpaceRequest;
class UpdateApplicationRequest;
class UpdateFindingRequest;
class UpdateIntegratedResourcesRequest;
class UpdatePentestRequest;
class UpdateTargetDomainRequest;
class VerifyTargetDomainRequest;
/* End of service model forward declarations required in SecurityAgentClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AddArtifactResult, SecurityAgentError> AddArtifactOutcome;
typedef Aws::Utils::Outcome<BatchDeletePentestsResult, SecurityAgentError> BatchDeletePentestsOutcome;
typedef Aws::Utils::Outcome<BatchGetAgentSpacesResult, SecurityAgentError> BatchGetAgentSpacesOutcome;
typedef Aws::Utils::Outcome<BatchGetArtifactMetadataResult, SecurityAgentError> BatchGetArtifactMetadataOutcome;
typedef Aws::Utils::Outcome<BatchGetFindingsResult, SecurityAgentError> BatchGetFindingsOutcome;
typedef Aws::Utils::Outcome<BatchGetPentestJobTasksResult, SecurityAgentError> BatchGetPentestJobTasksOutcome;
typedef Aws::Utils::Outcome<BatchGetPentestJobsResult, SecurityAgentError> BatchGetPentestJobsOutcome;
typedef Aws::Utils::Outcome<BatchGetPentestsResult, SecurityAgentError> BatchGetPentestsOutcome;
typedef Aws::Utils::Outcome<BatchGetTargetDomainsResult, SecurityAgentError> BatchGetTargetDomainsOutcome;
typedef Aws::Utils::Outcome<CreateAgentSpaceResult, SecurityAgentError> CreateAgentSpaceOutcome;
typedef Aws::Utils::Outcome<CreateApplicationResult, SecurityAgentError> CreateApplicationOutcome;
typedef Aws::Utils::Outcome<CreateIntegrationResult, SecurityAgentError> CreateIntegrationOutcome;
typedef Aws::Utils::Outcome<CreateMembershipResult, SecurityAgentError> CreateMembershipOutcome;
typedef Aws::Utils::Outcome<CreatePentestResult, SecurityAgentError> CreatePentestOutcome;
typedef Aws::Utils::Outcome<CreateTargetDomainResult, SecurityAgentError> CreateTargetDomainOutcome;
typedef Aws::Utils::Outcome<DeleteAgentSpaceResult, SecurityAgentError> DeleteAgentSpaceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, SecurityAgentError> DeleteApplicationOutcome;
typedef Aws::Utils::Outcome<DeleteArtifactResult, SecurityAgentError> DeleteArtifactOutcome;
typedef Aws::Utils::Outcome<DeleteIntegrationResult, SecurityAgentError> DeleteIntegrationOutcome;
typedef Aws::Utils::Outcome<DeleteMembershipResult, SecurityAgentError> DeleteMembershipOutcome;
typedef Aws::Utils::Outcome<DeleteTargetDomainResult, SecurityAgentError> DeleteTargetDomainOutcome;
typedef Aws::Utils::Outcome<GetApplicationResult, SecurityAgentError> GetApplicationOutcome;
typedef Aws::Utils::Outcome<GetArtifactResult, SecurityAgentError> GetArtifactOutcome;
typedef Aws::Utils::Outcome<GetIntegrationResult, SecurityAgentError> GetIntegrationOutcome;
typedef Aws::Utils::Outcome<InitiateProviderRegistrationResult, SecurityAgentError> InitiateProviderRegistrationOutcome;
typedef Aws::Utils::Outcome<ListAgentSpacesResult, SecurityAgentError> ListAgentSpacesOutcome;
typedef Aws::Utils::Outcome<ListApplicationsResult, SecurityAgentError> ListApplicationsOutcome;
typedef Aws::Utils::Outcome<ListArtifactsResult, SecurityAgentError> ListArtifactsOutcome;
typedef Aws::Utils::Outcome<ListDiscoveredEndpointsResult, SecurityAgentError> ListDiscoveredEndpointsOutcome;
typedef Aws::Utils::Outcome<ListFindingsResult, SecurityAgentError> ListFindingsOutcome;
typedef Aws::Utils::Outcome<ListIntegratedResourcesResult, SecurityAgentError> ListIntegratedResourcesOutcome;
typedef Aws::Utils::Outcome<ListIntegrationsResult, SecurityAgentError> ListIntegrationsOutcome;
typedef Aws::Utils::Outcome<ListMembershipsResult, SecurityAgentError> ListMembershipsOutcome;
typedef Aws::Utils::Outcome<ListPentestJobTasksResult, SecurityAgentError> ListPentestJobTasksOutcome;
typedef Aws::Utils::Outcome<ListPentestJobsForPentestResult, SecurityAgentError> ListPentestJobsForPentestOutcome;
typedef Aws::Utils::Outcome<ListPentestsResult, SecurityAgentError> ListPentestsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, SecurityAgentError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListTargetDomainsResult, SecurityAgentError> ListTargetDomainsOutcome;
typedef Aws::Utils::Outcome<StartCodeRemediationResult, SecurityAgentError> StartCodeRemediationOutcome;
typedef Aws::Utils::Outcome<StartPentestJobResult, SecurityAgentError> StartPentestJobOutcome;
typedef Aws::Utils::Outcome<StopPentestJobResult, SecurityAgentError> StopPentestJobOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, SecurityAgentError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, SecurityAgentError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAgentSpaceResult, SecurityAgentError> UpdateAgentSpaceOutcome;
typedef Aws::Utils::Outcome<UpdateApplicationResult, SecurityAgentError> UpdateApplicationOutcome;
typedef Aws::Utils::Outcome<UpdateFindingResult, SecurityAgentError> UpdateFindingOutcome;
typedef Aws::Utils::Outcome<UpdateIntegratedResourcesResult, SecurityAgentError> UpdateIntegratedResourcesOutcome;
typedef Aws::Utils::Outcome<UpdatePentestResult, SecurityAgentError> UpdatePentestOutcome;
typedef Aws::Utils::Outcome<UpdateTargetDomainResult, SecurityAgentError> UpdateTargetDomainOutcome;
typedef Aws::Utils::Outcome<VerifyTargetDomainResult, SecurityAgentError> VerifyTargetDomainOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AddArtifactOutcome> AddArtifactOutcomeCallable;
typedef std::future<BatchDeletePentestsOutcome> BatchDeletePentestsOutcomeCallable;
typedef std::future<BatchGetAgentSpacesOutcome> BatchGetAgentSpacesOutcomeCallable;
typedef std::future<BatchGetArtifactMetadataOutcome> BatchGetArtifactMetadataOutcomeCallable;
typedef std::future<BatchGetFindingsOutcome> BatchGetFindingsOutcomeCallable;
typedef std::future<BatchGetPentestJobTasksOutcome> BatchGetPentestJobTasksOutcomeCallable;
typedef std::future<BatchGetPentestJobsOutcome> BatchGetPentestJobsOutcomeCallable;
typedef std::future<BatchGetPentestsOutcome> BatchGetPentestsOutcomeCallable;
typedef std::future<BatchGetTargetDomainsOutcome> BatchGetTargetDomainsOutcomeCallable;
typedef std::future<CreateAgentSpaceOutcome> CreateAgentSpaceOutcomeCallable;
typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
typedef std::future<CreateIntegrationOutcome> CreateIntegrationOutcomeCallable;
typedef std::future<CreateMembershipOutcome> CreateMembershipOutcomeCallable;
typedef std::future<CreatePentestOutcome> CreatePentestOutcomeCallable;
typedef std::future<CreateTargetDomainOutcome> CreateTargetDomainOutcomeCallable;
typedef std::future<DeleteAgentSpaceOutcome> DeleteAgentSpaceOutcomeCallable;
typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
typedef std::future<DeleteArtifactOutcome> DeleteArtifactOutcomeCallable;
typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
typedef std::future<DeleteMembershipOutcome> DeleteMembershipOutcomeCallable;
typedef std::future<DeleteTargetDomainOutcome> DeleteTargetDomainOutcomeCallable;
typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
typedef std::future<GetArtifactOutcome> GetArtifactOutcomeCallable;
typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
typedef std::future<InitiateProviderRegistrationOutcome> InitiateProviderRegistrationOutcomeCallable;
typedef std::future<ListAgentSpacesOutcome> ListAgentSpacesOutcomeCallable;
typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
typedef std::future<ListDiscoveredEndpointsOutcome> ListDiscoveredEndpointsOutcomeCallable;
typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
typedef std::future<ListIntegratedResourcesOutcome> ListIntegratedResourcesOutcomeCallable;
typedef std::future<ListIntegrationsOutcome> ListIntegrationsOutcomeCallable;
typedef std::future<ListMembershipsOutcome> ListMembershipsOutcomeCallable;
typedef std::future<ListPentestJobTasksOutcome> ListPentestJobTasksOutcomeCallable;
typedef std::future<ListPentestJobsForPentestOutcome> ListPentestJobsForPentestOutcomeCallable;
typedef std::future<ListPentestsOutcome> ListPentestsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListTargetDomainsOutcome> ListTargetDomainsOutcomeCallable;
typedef std::future<StartCodeRemediationOutcome> StartCodeRemediationOutcomeCallable;
typedef std::future<StartPentestJobOutcome> StartPentestJobOutcomeCallable;
typedef std::future<StopPentestJobOutcome> StopPentestJobOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAgentSpaceOutcome> UpdateAgentSpaceOutcomeCallable;
typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
typedef std::future<UpdateFindingOutcome> UpdateFindingOutcomeCallable;
typedef std::future<UpdateIntegratedResourcesOutcome> UpdateIntegratedResourcesOutcomeCallable;
typedef std::future<UpdatePentestOutcome> UpdatePentestOutcomeCallable;
typedef std::future<UpdateTargetDomainOutcome> UpdateTargetDomainOutcomeCallable;
typedef std::future<VerifyTargetDomainOutcome> VerifyTargetDomainOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SecurityAgentClient;

/* Service model async handlers definitions */
typedef std::function<void(const SecurityAgentClient*, const Model::AddArtifactRequest&, const Model::AddArtifactOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AddArtifactResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchDeletePentestsRequest&, const Model::BatchDeletePentestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeletePentestsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetAgentSpacesRequest&, const Model::BatchGetAgentSpacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetAgentSpacesResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetArtifactMetadataRequest&,
                           const Model::BatchGetArtifactMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetArtifactMetadataResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetFindingsRequest&, const Model::BatchGetFindingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetFindingsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetPentestJobTasksRequest&,
                           const Model::BatchGetPentestJobTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetPentestJobTasksResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetPentestJobsRequest&, const Model::BatchGetPentestJobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetPentestJobsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetPentestsRequest&, const Model::BatchGetPentestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetPentestsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetTargetDomainsRequest&,
                           const Model::BatchGetTargetDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetTargetDomainsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateAgentSpaceRequest&, const Model::CreateAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAgentSpaceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateApplicationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateIntegrationRequest&, const Model::CreateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateIntegrationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateMembershipRequest&, const Model::CreateMembershipOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMembershipResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreatePentestRequest&, const Model::CreatePentestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePentestResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateTargetDomainRequest&, const Model::CreateTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTargetDomainResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteAgentSpaceRequest&, const Model::DeleteAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAgentSpaceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteApplicationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteArtifactRequest&, const Model::DeleteArtifactOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteArtifactResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteIntegrationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteMembershipRequest&, const Model::DeleteMembershipOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteMembershipResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteTargetDomainRequest&, const Model::DeleteTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTargetDomainResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApplicationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::GetArtifactRequest&, const Model::GetArtifactOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetArtifactResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::InitiateProviderRegistrationRequest&,
                           const Model::InitiateProviderRegistrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InitiateProviderRegistrationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListAgentSpacesRequest&, const Model::ListAgentSpacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgentSpacesResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListApplicationsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListArtifactsRequest&, const Model::ListArtifactsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListArtifactsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListDiscoveredEndpointsRequest&,
                           const Model::ListDiscoveredEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDiscoveredEndpointsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFindingsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListIntegratedResourcesRequest&,
                           const Model::ListIntegratedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListIntegratedResourcesResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListIntegrationsRequest&, const Model::ListIntegrationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListIntegrationsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListMembershipsRequest&, const Model::ListMembershipsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMembershipsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListPentestJobTasksRequest&, const Model::ListPentestJobTasksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPentestJobTasksResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListPentestJobsForPentestRequest&,
                           const Model::ListPentestJobsForPentestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPentestJobsForPentestResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListPentestsRequest&, const Model::ListPentestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPentestsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListTargetDomainsRequest&, const Model::ListTargetDomainsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTargetDomainsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StartCodeRemediationRequest&, const Model::StartCodeRemediationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartCodeRemediationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StartPentestJobRequest&, const Model::StartPentestJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartPentestJobResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StopPentestJobRequest&, const Model::StopPentestJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopPentestJobResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateAgentSpaceRequest&, const Model::UpdateAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAgentSpaceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateApplicationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateFindingRequest&, const Model::UpdateFindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFindingResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateIntegratedResourcesRequest&,
                           const Model::UpdateIntegratedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateIntegratedResourcesResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdatePentestRequest&, const Model::UpdatePentestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePentestResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateTargetDomainRequest&, const Model::UpdateTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateTargetDomainResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::VerifyTargetDomainRequest&, const Model::VerifyTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    VerifyTargetDomainResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SecurityAgent
}  // namespace Aws
