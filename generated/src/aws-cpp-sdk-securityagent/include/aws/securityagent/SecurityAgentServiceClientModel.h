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
#include <aws/securityagent/model/BatchCreateSecurityRequirementsResult.h>
#include <aws/securityagent/model/BatchDeleteCodeReviewsResult.h>
#include <aws/securityagent/model/BatchDeletePentestsResult.h>
#include <aws/securityagent/model/BatchDeleteSecurityRequirementsResult.h>
#include <aws/securityagent/model/BatchDeleteThreatModelsResult.h>
#include <aws/securityagent/model/BatchGetAgentSpacesResult.h>
#include <aws/securityagent/model/BatchGetArtifactMetadataResult.h>
#include <aws/securityagent/model/BatchGetCodeReviewJobTasksResult.h>
#include <aws/securityagent/model/BatchGetCodeReviewJobsResult.h>
#include <aws/securityagent/model/BatchGetCodeReviewsResult.h>
#include <aws/securityagent/model/BatchGetFindingsResult.h>
#include <aws/securityagent/model/BatchGetPentestJobTasksResult.h>
#include <aws/securityagent/model/BatchGetPentestJobsResult.h>
#include <aws/securityagent/model/BatchGetPentestsResult.h>
#include <aws/securityagent/model/BatchGetSecurityRequirementsResult.h>
#include <aws/securityagent/model/BatchGetTargetDomainsResult.h>
#include <aws/securityagent/model/BatchGetThreatModelJobTasksResult.h>
#include <aws/securityagent/model/BatchGetThreatModelJobsResult.h>
#include <aws/securityagent/model/BatchGetThreatModelsResult.h>
#include <aws/securityagent/model/BatchGetThreatsResult.h>
#include <aws/securityagent/model/BatchUpdateSecurityRequirementsResult.h>
#include <aws/securityagent/model/CreateAgentSpaceResult.h>
#include <aws/securityagent/model/CreateApplicationRequest.h>
#include <aws/securityagent/model/CreateApplicationResult.h>
#include <aws/securityagent/model/CreateCodeReviewResult.h>
#include <aws/securityagent/model/CreateIntegrationResult.h>
#include <aws/securityagent/model/CreateMembershipResult.h>
#include <aws/securityagent/model/CreatePentestResult.h>
#include <aws/securityagent/model/CreatePrivateConnectionResult.h>
#include <aws/securityagent/model/CreateSecurityRequirementPackResult.h>
#include <aws/securityagent/model/CreateTargetDomainResult.h>
#include <aws/securityagent/model/CreateThreatModelResult.h>
#include <aws/securityagent/model/CreateThreatResult.h>
#include <aws/securityagent/model/DeleteAgentSpaceResult.h>
#include <aws/securityagent/model/DeleteArtifactResult.h>
#include <aws/securityagent/model/DeleteIntegrationResult.h>
#include <aws/securityagent/model/DeleteMembershipResult.h>
#include <aws/securityagent/model/DeletePrivateConnectionResult.h>
#include <aws/securityagent/model/DeleteSecurityRequirementPackResult.h>
#include <aws/securityagent/model/DeleteTargetDomainResult.h>
#include <aws/securityagent/model/DescribePrivateConnectionResult.h>
#include <aws/securityagent/model/GetApplicationResult.h>
#include <aws/securityagent/model/GetArtifactResult.h>
#include <aws/securityagent/model/GetIntegrationResult.h>
#include <aws/securityagent/model/GetSecurityRequirementPackResult.h>
#include <aws/securityagent/model/ImportSecurityRequirementsResult.h>
#include <aws/securityagent/model/InitiateProviderRegistrationResult.h>
#include <aws/securityagent/model/ListAgentSpacesRequest.h>
#include <aws/securityagent/model/ListAgentSpacesResult.h>
#include <aws/securityagent/model/ListApplicationsRequest.h>
#include <aws/securityagent/model/ListApplicationsResult.h>
#include <aws/securityagent/model/ListArtifactsResult.h>
#include <aws/securityagent/model/ListCodeReviewJobTasksResult.h>
#include <aws/securityagent/model/ListCodeReviewJobsForCodeReviewResult.h>
#include <aws/securityagent/model/ListCodeReviewsResult.h>
#include <aws/securityagent/model/ListDiscoveredEndpointsResult.h>
#include <aws/securityagent/model/ListFindingsResult.h>
#include <aws/securityagent/model/ListIntegratedResourcesResult.h>
#include <aws/securityagent/model/ListIntegrationsRequest.h>
#include <aws/securityagent/model/ListIntegrationsResult.h>
#include <aws/securityagent/model/ListMembershipsResult.h>
#include <aws/securityagent/model/ListPentestJobTasksResult.h>
#include <aws/securityagent/model/ListPentestJobsForPentestResult.h>
#include <aws/securityagent/model/ListPentestsResult.h>
#include <aws/securityagent/model/ListPrivateConnectionsRequest.h>
#include <aws/securityagent/model/ListPrivateConnectionsResult.h>
#include <aws/securityagent/model/ListSecurityRequirementPacksRequest.h>
#include <aws/securityagent/model/ListSecurityRequirementPacksResult.h>
#include <aws/securityagent/model/ListSecurityRequirementsResult.h>
#include <aws/securityagent/model/ListTagsForResourceResult.h>
#include <aws/securityagent/model/ListTargetDomainsRequest.h>
#include <aws/securityagent/model/ListTargetDomainsResult.h>
#include <aws/securityagent/model/ListThreatModelJobTasksResult.h>
#include <aws/securityagent/model/ListThreatModelJobsResult.h>
#include <aws/securityagent/model/ListThreatModelsResult.h>
#include <aws/securityagent/model/ListThreatsResult.h>
#include <aws/securityagent/model/StartCodeRemediationResult.h>
#include <aws/securityagent/model/StartCodeReviewJobResult.h>
#include <aws/securityagent/model/StartPentestJobResult.h>
#include <aws/securityagent/model/StartThreatModelJobResult.h>
#include <aws/securityagent/model/StopCodeReviewJobResult.h>
#include <aws/securityagent/model/StopPentestJobResult.h>
#include <aws/securityagent/model/StopThreatModelJobResult.h>
#include <aws/securityagent/model/TagResourceResult.h>
#include <aws/securityagent/model/UntagResourceResult.h>
#include <aws/securityagent/model/UpdateAgentSpaceResult.h>
#include <aws/securityagent/model/UpdateApplicationResult.h>
#include <aws/securityagent/model/UpdateCodeReviewResult.h>
#include <aws/securityagent/model/UpdateFindingResult.h>
#include <aws/securityagent/model/UpdateIntegratedResourcesResult.h>
#include <aws/securityagent/model/UpdatePentestResult.h>
#include <aws/securityagent/model/UpdatePrivateConnectionCertificateResult.h>
#include <aws/securityagent/model/UpdateSecurityRequirementPackResult.h>
#include <aws/securityagent/model/UpdateTargetDomainResult.h>
#include <aws/securityagent/model/UpdateThreatModelResult.h>
#include <aws/securityagent/model/UpdateThreatResult.h>
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
class BatchCreateSecurityRequirementsRequest;
class BatchDeleteCodeReviewsRequest;
class BatchDeletePentestsRequest;
class BatchDeleteSecurityRequirementsRequest;
class BatchDeleteThreatModelsRequest;
class BatchGetAgentSpacesRequest;
class BatchGetArtifactMetadataRequest;
class BatchGetCodeReviewJobTasksRequest;
class BatchGetCodeReviewJobsRequest;
class BatchGetCodeReviewsRequest;
class BatchGetFindingsRequest;
class BatchGetPentestJobTasksRequest;
class BatchGetPentestJobsRequest;
class BatchGetPentestsRequest;
class BatchGetSecurityRequirementsRequest;
class BatchGetTargetDomainsRequest;
class BatchGetThreatModelJobTasksRequest;
class BatchGetThreatModelJobsRequest;
class BatchGetThreatModelsRequest;
class BatchGetThreatsRequest;
class BatchUpdateSecurityRequirementsRequest;
class CreateAgentSpaceRequest;
class CreateApplicationRequest;
class CreateCodeReviewRequest;
class CreateIntegrationRequest;
class CreateMembershipRequest;
class CreatePentestRequest;
class CreatePrivateConnectionRequest;
class CreateSecurityRequirementPackRequest;
class CreateTargetDomainRequest;
class CreateThreatRequest;
class CreateThreatModelRequest;
class DeleteAgentSpaceRequest;
class DeleteApplicationRequest;
class DeleteArtifactRequest;
class DeleteIntegrationRequest;
class DeleteMembershipRequest;
class DeletePrivateConnectionRequest;
class DeleteSecurityRequirementPackRequest;
class DeleteTargetDomainRequest;
class DescribePrivateConnectionRequest;
class GetApplicationRequest;
class GetArtifactRequest;
class GetIntegrationRequest;
class GetSecurityRequirementPackRequest;
class ImportSecurityRequirementsRequest;
class InitiateProviderRegistrationRequest;
class ListAgentSpacesRequest;
class ListApplicationsRequest;
class ListArtifactsRequest;
class ListCodeReviewJobTasksRequest;
class ListCodeReviewJobsForCodeReviewRequest;
class ListCodeReviewsRequest;
class ListDiscoveredEndpointsRequest;
class ListFindingsRequest;
class ListIntegratedResourcesRequest;
class ListIntegrationsRequest;
class ListMembershipsRequest;
class ListPentestJobTasksRequest;
class ListPentestJobsForPentestRequest;
class ListPentestsRequest;
class ListPrivateConnectionsRequest;
class ListSecurityRequirementPacksRequest;
class ListSecurityRequirementsRequest;
class ListTagsForResourceRequest;
class ListTargetDomainsRequest;
class ListThreatModelJobTasksRequest;
class ListThreatModelJobsRequest;
class ListThreatModelsRequest;
class ListThreatsRequest;
class StartCodeRemediationRequest;
class StartCodeReviewJobRequest;
class StartPentestJobRequest;
class StartThreatModelJobRequest;
class StopCodeReviewJobRequest;
class StopPentestJobRequest;
class StopThreatModelJobRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAgentSpaceRequest;
class UpdateApplicationRequest;
class UpdateCodeReviewRequest;
class UpdateFindingRequest;
class UpdateIntegratedResourcesRequest;
class UpdatePentestRequest;
class UpdatePrivateConnectionCertificateRequest;
class UpdateSecurityRequirementPackRequest;
class UpdateTargetDomainRequest;
class UpdateThreatRequest;
class UpdateThreatModelRequest;
class VerifyTargetDomainRequest;
/* End of service model forward declarations required in SecurityAgentClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AddArtifactResult, SecurityAgentError> AddArtifactOutcome;
typedef Aws::Utils::Outcome<BatchCreateSecurityRequirementsResult, SecurityAgentError> BatchCreateSecurityRequirementsOutcome;
typedef Aws::Utils::Outcome<BatchDeleteCodeReviewsResult, SecurityAgentError> BatchDeleteCodeReviewsOutcome;
typedef Aws::Utils::Outcome<BatchDeletePentestsResult, SecurityAgentError> BatchDeletePentestsOutcome;
typedef Aws::Utils::Outcome<BatchDeleteSecurityRequirementsResult, SecurityAgentError> BatchDeleteSecurityRequirementsOutcome;
typedef Aws::Utils::Outcome<BatchDeleteThreatModelsResult, SecurityAgentError> BatchDeleteThreatModelsOutcome;
typedef Aws::Utils::Outcome<BatchGetAgentSpacesResult, SecurityAgentError> BatchGetAgentSpacesOutcome;
typedef Aws::Utils::Outcome<BatchGetArtifactMetadataResult, SecurityAgentError> BatchGetArtifactMetadataOutcome;
typedef Aws::Utils::Outcome<BatchGetCodeReviewJobTasksResult, SecurityAgentError> BatchGetCodeReviewJobTasksOutcome;
typedef Aws::Utils::Outcome<BatchGetCodeReviewJobsResult, SecurityAgentError> BatchGetCodeReviewJobsOutcome;
typedef Aws::Utils::Outcome<BatchGetCodeReviewsResult, SecurityAgentError> BatchGetCodeReviewsOutcome;
typedef Aws::Utils::Outcome<BatchGetFindingsResult, SecurityAgentError> BatchGetFindingsOutcome;
typedef Aws::Utils::Outcome<BatchGetPentestJobTasksResult, SecurityAgentError> BatchGetPentestJobTasksOutcome;
typedef Aws::Utils::Outcome<BatchGetPentestJobsResult, SecurityAgentError> BatchGetPentestJobsOutcome;
typedef Aws::Utils::Outcome<BatchGetPentestsResult, SecurityAgentError> BatchGetPentestsOutcome;
typedef Aws::Utils::Outcome<BatchGetSecurityRequirementsResult, SecurityAgentError> BatchGetSecurityRequirementsOutcome;
typedef Aws::Utils::Outcome<BatchGetTargetDomainsResult, SecurityAgentError> BatchGetTargetDomainsOutcome;
typedef Aws::Utils::Outcome<BatchGetThreatModelJobTasksResult, SecurityAgentError> BatchGetThreatModelJobTasksOutcome;
typedef Aws::Utils::Outcome<BatchGetThreatModelJobsResult, SecurityAgentError> BatchGetThreatModelJobsOutcome;
typedef Aws::Utils::Outcome<BatchGetThreatModelsResult, SecurityAgentError> BatchGetThreatModelsOutcome;
typedef Aws::Utils::Outcome<BatchGetThreatsResult, SecurityAgentError> BatchGetThreatsOutcome;
typedef Aws::Utils::Outcome<BatchUpdateSecurityRequirementsResult, SecurityAgentError> BatchUpdateSecurityRequirementsOutcome;
typedef Aws::Utils::Outcome<CreateAgentSpaceResult, SecurityAgentError> CreateAgentSpaceOutcome;
typedef Aws::Utils::Outcome<CreateApplicationResult, SecurityAgentError> CreateApplicationOutcome;
typedef Aws::Utils::Outcome<CreateCodeReviewResult, SecurityAgentError> CreateCodeReviewOutcome;
typedef Aws::Utils::Outcome<CreateIntegrationResult, SecurityAgentError> CreateIntegrationOutcome;
typedef Aws::Utils::Outcome<CreateMembershipResult, SecurityAgentError> CreateMembershipOutcome;
typedef Aws::Utils::Outcome<CreatePentestResult, SecurityAgentError> CreatePentestOutcome;
typedef Aws::Utils::Outcome<CreatePrivateConnectionResult, SecurityAgentError> CreatePrivateConnectionOutcome;
typedef Aws::Utils::Outcome<CreateSecurityRequirementPackResult, SecurityAgentError> CreateSecurityRequirementPackOutcome;
typedef Aws::Utils::Outcome<CreateTargetDomainResult, SecurityAgentError> CreateTargetDomainOutcome;
typedef Aws::Utils::Outcome<CreateThreatResult, SecurityAgentError> CreateThreatOutcome;
typedef Aws::Utils::Outcome<CreateThreatModelResult, SecurityAgentError> CreateThreatModelOutcome;
typedef Aws::Utils::Outcome<DeleteAgentSpaceResult, SecurityAgentError> DeleteAgentSpaceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, SecurityAgentError> DeleteApplicationOutcome;
typedef Aws::Utils::Outcome<DeleteArtifactResult, SecurityAgentError> DeleteArtifactOutcome;
typedef Aws::Utils::Outcome<DeleteIntegrationResult, SecurityAgentError> DeleteIntegrationOutcome;
typedef Aws::Utils::Outcome<DeleteMembershipResult, SecurityAgentError> DeleteMembershipOutcome;
typedef Aws::Utils::Outcome<DeletePrivateConnectionResult, SecurityAgentError> DeletePrivateConnectionOutcome;
typedef Aws::Utils::Outcome<DeleteSecurityRequirementPackResult, SecurityAgentError> DeleteSecurityRequirementPackOutcome;
typedef Aws::Utils::Outcome<DeleteTargetDomainResult, SecurityAgentError> DeleteTargetDomainOutcome;
typedef Aws::Utils::Outcome<DescribePrivateConnectionResult, SecurityAgentError> DescribePrivateConnectionOutcome;
typedef Aws::Utils::Outcome<GetApplicationResult, SecurityAgentError> GetApplicationOutcome;
typedef Aws::Utils::Outcome<GetArtifactResult, SecurityAgentError> GetArtifactOutcome;
typedef Aws::Utils::Outcome<GetIntegrationResult, SecurityAgentError> GetIntegrationOutcome;
typedef Aws::Utils::Outcome<GetSecurityRequirementPackResult, SecurityAgentError> GetSecurityRequirementPackOutcome;
typedef Aws::Utils::Outcome<ImportSecurityRequirementsResult, SecurityAgentError> ImportSecurityRequirementsOutcome;
typedef Aws::Utils::Outcome<InitiateProviderRegistrationResult, SecurityAgentError> InitiateProviderRegistrationOutcome;
typedef Aws::Utils::Outcome<ListAgentSpacesResult, SecurityAgentError> ListAgentSpacesOutcome;
typedef Aws::Utils::Outcome<ListApplicationsResult, SecurityAgentError> ListApplicationsOutcome;
typedef Aws::Utils::Outcome<ListArtifactsResult, SecurityAgentError> ListArtifactsOutcome;
typedef Aws::Utils::Outcome<ListCodeReviewJobTasksResult, SecurityAgentError> ListCodeReviewJobTasksOutcome;
typedef Aws::Utils::Outcome<ListCodeReviewJobsForCodeReviewResult, SecurityAgentError> ListCodeReviewJobsForCodeReviewOutcome;
typedef Aws::Utils::Outcome<ListCodeReviewsResult, SecurityAgentError> ListCodeReviewsOutcome;
typedef Aws::Utils::Outcome<ListDiscoveredEndpointsResult, SecurityAgentError> ListDiscoveredEndpointsOutcome;
typedef Aws::Utils::Outcome<ListFindingsResult, SecurityAgentError> ListFindingsOutcome;
typedef Aws::Utils::Outcome<ListIntegratedResourcesResult, SecurityAgentError> ListIntegratedResourcesOutcome;
typedef Aws::Utils::Outcome<ListIntegrationsResult, SecurityAgentError> ListIntegrationsOutcome;
typedef Aws::Utils::Outcome<ListMembershipsResult, SecurityAgentError> ListMembershipsOutcome;
typedef Aws::Utils::Outcome<ListPentestJobTasksResult, SecurityAgentError> ListPentestJobTasksOutcome;
typedef Aws::Utils::Outcome<ListPentestJobsForPentestResult, SecurityAgentError> ListPentestJobsForPentestOutcome;
typedef Aws::Utils::Outcome<ListPentestsResult, SecurityAgentError> ListPentestsOutcome;
typedef Aws::Utils::Outcome<ListPrivateConnectionsResult, SecurityAgentError> ListPrivateConnectionsOutcome;
typedef Aws::Utils::Outcome<ListSecurityRequirementPacksResult, SecurityAgentError> ListSecurityRequirementPacksOutcome;
typedef Aws::Utils::Outcome<ListSecurityRequirementsResult, SecurityAgentError> ListSecurityRequirementsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, SecurityAgentError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListTargetDomainsResult, SecurityAgentError> ListTargetDomainsOutcome;
typedef Aws::Utils::Outcome<ListThreatModelJobTasksResult, SecurityAgentError> ListThreatModelJobTasksOutcome;
typedef Aws::Utils::Outcome<ListThreatModelJobsResult, SecurityAgentError> ListThreatModelJobsOutcome;
typedef Aws::Utils::Outcome<ListThreatModelsResult, SecurityAgentError> ListThreatModelsOutcome;
typedef Aws::Utils::Outcome<ListThreatsResult, SecurityAgentError> ListThreatsOutcome;
typedef Aws::Utils::Outcome<StartCodeRemediationResult, SecurityAgentError> StartCodeRemediationOutcome;
typedef Aws::Utils::Outcome<StartCodeReviewJobResult, SecurityAgentError> StartCodeReviewJobOutcome;
typedef Aws::Utils::Outcome<StartPentestJobResult, SecurityAgentError> StartPentestJobOutcome;
typedef Aws::Utils::Outcome<StartThreatModelJobResult, SecurityAgentError> StartThreatModelJobOutcome;
typedef Aws::Utils::Outcome<StopCodeReviewJobResult, SecurityAgentError> StopCodeReviewJobOutcome;
typedef Aws::Utils::Outcome<StopPentestJobResult, SecurityAgentError> StopPentestJobOutcome;
typedef Aws::Utils::Outcome<StopThreatModelJobResult, SecurityAgentError> StopThreatModelJobOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, SecurityAgentError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, SecurityAgentError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAgentSpaceResult, SecurityAgentError> UpdateAgentSpaceOutcome;
typedef Aws::Utils::Outcome<UpdateApplicationResult, SecurityAgentError> UpdateApplicationOutcome;
typedef Aws::Utils::Outcome<UpdateCodeReviewResult, SecurityAgentError> UpdateCodeReviewOutcome;
typedef Aws::Utils::Outcome<UpdateFindingResult, SecurityAgentError> UpdateFindingOutcome;
typedef Aws::Utils::Outcome<UpdateIntegratedResourcesResult, SecurityAgentError> UpdateIntegratedResourcesOutcome;
typedef Aws::Utils::Outcome<UpdatePentestResult, SecurityAgentError> UpdatePentestOutcome;
typedef Aws::Utils::Outcome<UpdatePrivateConnectionCertificateResult, SecurityAgentError> UpdatePrivateConnectionCertificateOutcome;
typedef Aws::Utils::Outcome<UpdateSecurityRequirementPackResult, SecurityAgentError> UpdateSecurityRequirementPackOutcome;
typedef Aws::Utils::Outcome<UpdateTargetDomainResult, SecurityAgentError> UpdateTargetDomainOutcome;
typedef Aws::Utils::Outcome<UpdateThreatResult, SecurityAgentError> UpdateThreatOutcome;
typedef Aws::Utils::Outcome<UpdateThreatModelResult, SecurityAgentError> UpdateThreatModelOutcome;
typedef Aws::Utils::Outcome<VerifyTargetDomainResult, SecurityAgentError> VerifyTargetDomainOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AddArtifactOutcome> AddArtifactOutcomeCallable;
typedef std::future<BatchCreateSecurityRequirementsOutcome> BatchCreateSecurityRequirementsOutcomeCallable;
typedef std::future<BatchDeleteCodeReviewsOutcome> BatchDeleteCodeReviewsOutcomeCallable;
typedef std::future<BatchDeletePentestsOutcome> BatchDeletePentestsOutcomeCallable;
typedef std::future<BatchDeleteSecurityRequirementsOutcome> BatchDeleteSecurityRequirementsOutcomeCallable;
typedef std::future<BatchDeleteThreatModelsOutcome> BatchDeleteThreatModelsOutcomeCallable;
typedef std::future<BatchGetAgentSpacesOutcome> BatchGetAgentSpacesOutcomeCallable;
typedef std::future<BatchGetArtifactMetadataOutcome> BatchGetArtifactMetadataOutcomeCallable;
typedef std::future<BatchGetCodeReviewJobTasksOutcome> BatchGetCodeReviewJobTasksOutcomeCallable;
typedef std::future<BatchGetCodeReviewJobsOutcome> BatchGetCodeReviewJobsOutcomeCallable;
typedef std::future<BatchGetCodeReviewsOutcome> BatchGetCodeReviewsOutcomeCallable;
typedef std::future<BatchGetFindingsOutcome> BatchGetFindingsOutcomeCallable;
typedef std::future<BatchGetPentestJobTasksOutcome> BatchGetPentestJobTasksOutcomeCallable;
typedef std::future<BatchGetPentestJobsOutcome> BatchGetPentestJobsOutcomeCallable;
typedef std::future<BatchGetPentestsOutcome> BatchGetPentestsOutcomeCallable;
typedef std::future<BatchGetSecurityRequirementsOutcome> BatchGetSecurityRequirementsOutcomeCallable;
typedef std::future<BatchGetTargetDomainsOutcome> BatchGetTargetDomainsOutcomeCallable;
typedef std::future<BatchGetThreatModelJobTasksOutcome> BatchGetThreatModelJobTasksOutcomeCallable;
typedef std::future<BatchGetThreatModelJobsOutcome> BatchGetThreatModelJobsOutcomeCallable;
typedef std::future<BatchGetThreatModelsOutcome> BatchGetThreatModelsOutcomeCallable;
typedef std::future<BatchGetThreatsOutcome> BatchGetThreatsOutcomeCallable;
typedef std::future<BatchUpdateSecurityRequirementsOutcome> BatchUpdateSecurityRequirementsOutcomeCallable;
typedef std::future<CreateAgentSpaceOutcome> CreateAgentSpaceOutcomeCallable;
typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
typedef std::future<CreateCodeReviewOutcome> CreateCodeReviewOutcomeCallable;
typedef std::future<CreateIntegrationOutcome> CreateIntegrationOutcomeCallable;
typedef std::future<CreateMembershipOutcome> CreateMembershipOutcomeCallable;
typedef std::future<CreatePentestOutcome> CreatePentestOutcomeCallable;
typedef std::future<CreatePrivateConnectionOutcome> CreatePrivateConnectionOutcomeCallable;
typedef std::future<CreateSecurityRequirementPackOutcome> CreateSecurityRequirementPackOutcomeCallable;
typedef std::future<CreateTargetDomainOutcome> CreateTargetDomainOutcomeCallable;
typedef std::future<CreateThreatOutcome> CreateThreatOutcomeCallable;
typedef std::future<CreateThreatModelOutcome> CreateThreatModelOutcomeCallable;
typedef std::future<DeleteAgentSpaceOutcome> DeleteAgentSpaceOutcomeCallable;
typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
typedef std::future<DeleteArtifactOutcome> DeleteArtifactOutcomeCallable;
typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
typedef std::future<DeleteMembershipOutcome> DeleteMembershipOutcomeCallable;
typedef std::future<DeletePrivateConnectionOutcome> DeletePrivateConnectionOutcomeCallable;
typedef std::future<DeleteSecurityRequirementPackOutcome> DeleteSecurityRequirementPackOutcomeCallable;
typedef std::future<DeleteTargetDomainOutcome> DeleteTargetDomainOutcomeCallable;
typedef std::future<DescribePrivateConnectionOutcome> DescribePrivateConnectionOutcomeCallable;
typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
typedef std::future<GetArtifactOutcome> GetArtifactOutcomeCallable;
typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
typedef std::future<GetSecurityRequirementPackOutcome> GetSecurityRequirementPackOutcomeCallable;
typedef std::future<ImportSecurityRequirementsOutcome> ImportSecurityRequirementsOutcomeCallable;
typedef std::future<InitiateProviderRegistrationOutcome> InitiateProviderRegistrationOutcomeCallable;
typedef std::future<ListAgentSpacesOutcome> ListAgentSpacesOutcomeCallable;
typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
typedef std::future<ListCodeReviewJobTasksOutcome> ListCodeReviewJobTasksOutcomeCallable;
typedef std::future<ListCodeReviewJobsForCodeReviewOutcome> ListCodeReviewJobsForCodeReviewOutcomeCallable;
typedef std::future<ListCodeReviewsOutcome> ListCodeReviewsOutcomeCallable;
typedef std::future<ListDiscoveredEndpointsOutcome> ListDiscoveredEndpointsOutcomeCallable;
typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
typedef std::future<ListIntegratedResourcesOutcome> ListIntegratedResourcesOutcomeCallable;
typedef std::future<ListIntegrationsOutcome> ListIntegrationsOutcomeCallable;
typedef std::future<ListMembershipsOutcome> ListMembershipsOutcomeCallable;
typedef std::future<ListPentestJobTasksOutcome> ListPentestJobTasksOutcomeCallable;
typedef std::future<ListPentestJobsForPentestOutcome> ListPentestJobsForPentestOutcomeCallable;
typedef std::future<ListPentestsOutcome> ListPentestsOutcomeCallable;
typedef std::future<ListPrivateConnectionsOutcome> ListPrivateConnectionsOutcomeCallable;
typedef std::future<ListSecurityRequirementPacksOutcome> ListSecurityRequirementPacksOutcomeCallable;
typedef std::future<ListSecurityRequirementsOutcome> ListSecurityRequirementsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListTargetDomainsOutcome> ListTargetDomainsOutcomeCallable;
typedef std::future<ListThreatModelJobTasksOutcome> ListThreatModelJobTasksOutcomeCallable;
typedef std::future<ListThreatModelJobsOutcome> ListThreatModelJobsOutcomeCallable;
typedef std::future<ListThreatModelsOutcome> ListThreatModelsOutcomeCallable;
typedef std::future<ListThreatsOutcome> ListThreatsOutcomeCallable;
typedef std::future<StartCodeRemediationOutcome> StartCodeRemediationOutcomeCallable;
typedef std::future<StartCodeReviewJobOutcome> StartCodeReviewJobOutcomeCallable;
typedef std::future<StartPentestJobOutcome> StartPentestJobOutcomeCallable;
typedef std::future<StartThreatModelJobOutcome> StartThreatModelJobOutcomeCallable;
typedef std::future<StopCodeReviewJobOutcome> StopCodeReviewJobOutcomeCallable;
typedef std::future<StopPentestJobOutcome> StopPentestJobOutcomeCallable;
typedef std::future<StopThreatModelJobOutcome> StopThreatModelJobOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAgentSpaceOutcome> UpdateAgentSpaceOutcomeCallable;
typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
typedef std::future<UpdateCodeReviewOutcome> UpdateCodeReviewOutcomeCallable;
typedef std::future<UpdateFindingOutcome> UpdateFindingOutcomeCallable;
typedef std::future<UpdateIntegratedResourcesOutcome> UpdateIntegratedResourcesOutcomeCallable;
typedef std::future<UpdatePentestOutcome> UpdatePentestOutcomeCallable;
typedef std::future<UpdatePrivateConnectionCertificateOutcome> UpdatePrivateConnectionCertificateOutcomeCallable;
typedef std::future<UpdateSecurityRequirementPackOutcome> UpdateSecurityRequirementPackOutcomeCallable;
typedef std::future<UpdateTargetDomainOutcome> UpdateTargetDomainOutcomeCallable;
typedef std::future<UpdateThreatOutcome> UpdateThreatOutcomeCallable;
typedef std::future<UpdateThreatModelOutcome> UpdateThreatModelOutcomeCallable;
typedef std::future<VerifyTargetDomainOutcome> VerifyTargetDomainOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SecurityAgentClient;

/* Service model async handlers definitions */
typedef std::function<void(const SecurityAgentClient*, const Model::AddArtifactRequest&, const Model::AddArtifactOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AddArtifactResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchCreateSecurityRequirementsRequest&,
                           const Model::BatchCreateSecurityRequirementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchCreateSecurityRequirementsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchDeleteCodeReviewsRequest&,
                           const Model::BatchDeleteCodeReviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeleteCodeReviewsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchDeletePentestsRequest&, const Model::BatchDeletePentestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeletePentestsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchDeleteSecurityRequirementsRequest&,
                           const Model::BatchDeleteSecurityRequirementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeleteSecurityRequirementsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchDeleteThreatModelsRequest&,
                           const Model::BatchDeleteThreatModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeleteThreatModelsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetAgentSpacesRequest&, const Model::BatchGetAgentSpacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetAgentSpacesResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetArtifactMetadataRequest&,
                           const Model::BatchGetArtifactMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetArtifactMetadataResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetCodeReviewJobTasksRequest&,
                           const Model::BatchGetCodeReviewJobTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetCodeReviewJobTasksResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetCodeReviewJobsRequest&,
                           const Model::BatchGetCodeReviewJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetCodeReviewJobsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetCodeReviewsRequest&, const Model::BatchGetCodeReviewsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetCodeReviewsResponseReceivedHandler;
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
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetSecurityRequirementsRequest&,
                           const Model::BatchGetSecurityRequirementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetSecurityRequirementsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetTargetDomainsRequest&,
                           const Model::BatchGetTargetDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetTargetDomainsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetThreatModelJobTasksRequest&,
                           const Model::BatchGetThreatModelJobTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetThreatModelJobTasksResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetThreatModelJobsRequest&,
                           const Model::BatchGetThreatModelJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetThreatModelJobsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetThreatModelsRequest&, const Model::BatchGetThreatModelsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetThreatModelsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchGetThreatsRequest&, const Model::BatchGetThreatsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetThreatsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::BatchUpdateSecurityRequirementsRequest&,
                           const Model::BatchUpdateSecurityRequirementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchUpdateSecurityRequirementsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateAgentSpaceRequest&, const Model::CreateAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAgentSpaceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateApplicationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateCodeReviewRequest&, const Model::CreateCodeReviewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCodeReviewResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateIntegrationRequest&, const Model::CreateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateIntegrationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateMembershipRequest&, const Model::CreateMembershipOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMembershipResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreatePentestRequest&, const Model::CreatePentestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePentestResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreatePrivateConnectionRequest&,
                           const Model::CreatePrivateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePrivateConnectionResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateSecurityRequirementPackRequest&,
                           const Model::CreateSecurityRequirementPackOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSecurityRequirementPackResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateTargetDomainRequest&, const Model::CreateTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTargetDomainResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateThreatRequest&, const Model::CreateThreatOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateThreatResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::CreateThreatModelRequest&, const Model::CreateThreatModelOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateThreatModelResponseReceivedHandler;
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
typedef std::function<void(const SecurityAgentClient*, const Model::DeletePrivateConnectionRequest&,
                           const Model::DeletePrivateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePrivateConnectionResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteSecurityRequirementPackRequest&,
                           const Model::DeleteSecurityRequirementPackOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSecurityRequirementPackResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DeleteTargetDomainRequest&, const Model::DeleteTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTargetDomainResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::DescribePrivateConnectionRequest&,
                           const Model::DescribePrivateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribePrivateConnectionResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApplicationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::GetArtifactRequest&, const Model::GetArtifactOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetArtifactResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::GetSecurityRequirementPackRequest&,
                           const Model::GetSecurityRequirementPackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSecurityRequirementPackResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ImportSecurityRequirementsRequest&,
                           const Model::ImportSecurityRequirementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ImportSecurityRequirementsResponseReceivedHandler;
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
typedef std::function<void(const SecurityAgentClient*, const Model::ListCodeReviewJobTasksRequest&,
                           const Model::ListCodeReviewJobTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeReviewJobTasksResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListCodeReviewJobsForCodeReviewRequest&,
                           const Model::ListCodeReviewJobsForCodeReviewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeReviewJobsForCodeReviewResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListCodeReviewsRequest&, const Model::ListCodeReviewsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeReviewsResponseReceivedHandler;
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
typedef std::function<void(const SecurityAgentClient*, const Model::ListPrivateConnectionsRequest&,
                           const Model::ListPrivateConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPrivateConnectionsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListSecurityRequirementPacksRequest&,
                           const Model::ListSecurityRequirementPacksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSecurityRequirementPacksResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListSecurityRequirementsRequest&,
                           const Model::ListSecurityRequirementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSecurityRequirementsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListTargetDomainsRequest&, const Model::ListTargetDomainsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTargetDomainsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListThreatModelJobTasksRequest&,
                           const Model::ListThreatModelJobTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListThreatModelJobTasksResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListThreatModelJobsRequest&, const Model::ListThreatModelJobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListThreatModelJobsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListThreatModelsRequest&, const Model::ListThreatModelsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListThreatModelsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::ListThreatsRequest&, const Model::ListThreatsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListThreatsResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StartCodeRemediationRequest&, const Model::StartCodeRemediationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartCodeRemediationResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StartCodeReviewJobRequest&, const Model::StartCodeReviewJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartCodeReviewJobResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StartPentestJobRequest&, const Model::StartPentestJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartPentestJobResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StartThreatModelJobRequest&, const Model::StartThreatModelJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartThreatModelJobResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StopCodeReviewJobRequest&, const Model::StopCodeReviewJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopCodeReviewJobResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StopPentestJobRequest&, const Model::StopPentestJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopPentestJobResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::StopThreatModelJobRequest&, const Model::StopThreatModelJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopThreatModelJobResponseReceivedHandler;
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
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateCodeReviewRequest&, const Model::UpdateCodeReviewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateCodeReviewResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateFindingRequest&, const Model::UpdateFindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFindingResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateIntegratedResourcesRequest&,
                           const Model::UpdateIntegratedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateIntegratedResourcesResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdatePentestRequest&, const Model::UpdatePentestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePentestResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdatePrivateConnectionCertificateRequest&,
                           const Model::UpdatePrivateConnectionCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePrivateConnectionCertificateResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateSecurityRequirementPackRequest&,
                           const Model::UpdateSecurityRequirementPackOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateSecurityRequirementPackResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateTargetDomainRequest&, const Model::UpdateTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateTargetDomainResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateThreatRequest&, const Model::UpdateThreatOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateThreatResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::UpdateThreatModelRequest&, const Model::UpdateThreatModelOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateThreatModelResponseReceivedHandler;
typedef std::function<void(const SecurityAgentClient*, const Model::VerifyTargetDomainRequest&, const Model::VerifyTargetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    VerifyTargetDomainResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SecurityAgent
}  // namespace Aws
