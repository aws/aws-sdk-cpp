/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/securityagent/model/ListAgentSpacesPaginationTraits.h>
#include <aws/securityagent/model/ListApplicationsPaginationTraits.h>
#include <aws/securityagent/model/ListArtifactsPaginationTraits.h>
#include <aws/securityagent/model/ListCodeReviewJobTasksPaginationTraits.h>
#include <aws/securityagent/model/ListCodeReviewJobsForCodeReviewPaginationTraits.h>
#include <aws/securityagent/model/ListCodeReviewsPaginationTraits.h>
#include <aws/securityagent/model/ListDiscoveredEndpointsPaginationTraits.h>
#include <aws/securityagent/model/ListFindingsPaginationTraits.h>
#include <aws/securityagent/model/ListIntegratedResourcesPaginationTraits.h>
#include <aws/securityagent/model/ListIntegrationsPaginationTraits.h>
#include <aws/securityagent/model/ListMembershipsPaginationTraits.h>
#include <aws/securityagent/model/ListPentestJobTasksPaginationTraits.h>
#include <aws/securityagent/model/ListPentestJobsForPentestPaginationTraits.h>
#include <aws/securityagent/model/ListPentestsPaginationTraits.h>
#include <aws/securityagent/model/ListPrivateConnectionsPaginationTraits.h>
#include <aws/securityagent/model/ListSecurityRequirementPacksPaginationTraits.h>
#include <aws/securityagent/model/ListSecurityRequirementsPaginationTraits.h>
#include <aws/securityagent/model/ListTargetDomainsPaginationTraits.h>
#include <aws/securityagent/model/ListThreatModelJobTasksPaginationTraits.h>
#include <aws/securityagent/model/ListThreatModelJobsPaginationTraits.h>
#include <aws/securityagent/model/ListThreatModelsPaginationTraits.h>
#include <aws/securityagent/model/ListThreatsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SecurityAgent {

template <typename DerivedClient>
class SecurityAgentPaginationBase {
 public:
  /**
   * Create a paginator for ListAgentSpaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentSpacesRequest,
                                    Pagination::ListAgentSpacesPaginationTraits<DerivedClient>>
  ListAgentSpacesPaginator(const Model::ListAgentSpacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentSpacesRequest,
                                             Pagination::ListAgentSpacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListArtifacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArtifactsRequest, Pagination::ListArtifactsPaginationTraits<DerivedClient>>
  ListArtifactsPaginator(const Model::ListArtifactsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArtifactsRequest,
                                             Pagination::ListArtifactsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListCodeReviewJobsForCodeReview operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewJobsForCodeReviewRequest,
                                    Pagination::ListCodeReviewJobsForCodeReviewPaginationTraits<DerivedClient>>
  ListCodeReviewJobsForCodeReviewPaginator(const Model::ListCodeReviewJobsForCodeReviewRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewJobsForCodeReviewRequest,
                                             Pagination::ListCodeReviewJobsForCodeReviewPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCodeReviewJobTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewJobTasksRequest,
                                    Pagination::ListCodeReviewJobTasksPaginationTraits<DerivedClient>>
  ListCodeReviewJobTasksPaginator(const Model::ListCodeReviewJobTasksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewJobTasksRequest,
                                             Pagination::ListCodeReviewJobTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCodeReviews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewsRequest,
                                    Pagination::ListCodeReviewsPaginationTraits<DerivedClient>>
  ListCodeReviewsPaginator(const Model::ListCodeReviewsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewsRequest,
                                             Pagination::ListCodeReviewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDiscoveredEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredEndpointsRequest,
                                    Pagination::ListDiscoveredEndpointsPaginationTraits<DerivedClient>>
  ListDiscoveredEndpointsPaginator(const Model::ListDiscoveredEndpointsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredEndpointsRequest,
                                             Pagination::ListDiscoveredEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest, Pagination::ListFindingsPaginationTraits<DerivedClient>>
  ListFindingsPaginator(const Model::ListFindingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest,
                                             Pagination::ListFindingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListIntegratedResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegratedResourcesRequest,
                                    Pagination::ListIntegratedResourcesPaginationTraits<DerivedClient>>
  ListIntegratedResourcesPaginator(const Model::ListIntegratedResourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegratedResourcesRequest,
                                             Pagination::ListIntegratedResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationsRequest,
                                    Pagination::ListIntegrationsPaginationTraits<DerivedClient>>
  ListIntegrationsPaginator(const Model::ListIntegrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationsRequest,
                                             Pagination::ListIntegrationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembershipsRequest,
                                    Pagination::ListMembershipsPaginationTraits<DerivedClient>>
  ListMembershipsPaginator(const Model::ListMembershipsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembershipsRequest,
                                             Pagination::ListMembershipsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPentestJobsForPentest operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPentestJobsForPentestRequest,
                                    Pagination::ListPentestJobsForPentestPaginationTraits<DerivedClient>>
  ListPentestJobsForPentestPaginator(const Model::ListPentestJobsForPentestRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPentestJobsForPentestRequest,
                                             Pagination::ListPentestJobsForPentestPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPentestJobTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPentestJobTasksRequest,
                                    Pagination::ListPentestJobTasksPaginationTraits<DerivedClient>>
  ListPentestJobTasksPaginator(const Model::ListPentestJobTasksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPentestJobTasksRequest,
                                             Pagination::ListPentestJobTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPentests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPentestsRequest, Pagination::ListPentestsPaginationTraits<DerivedClient>>
  ListPentestsPaginator(const Model::ListPentestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPentestsRequest,
                                             Pagination::ListPentestsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPrivateConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivateConnectionsRequest,
                                    Pagination::ListPrivateConnectionsPaginationTraits<DerivedClient>>
  ListPrivateConnectionsPaginator(const Model::ListPrivateConnectionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivateConnectionsRequest,
                                             Pagination::ListPrivateConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityRequirementPacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityRequirementPacksRequest,
                                    Pagination::ListSecurityRequirementPacksPaginationTraits<DerivedClient>>
  ListSecurityRequirementPacksPaginator(const Model::ListSecurityRequirementPacksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityRequirementPacksRequest,
                                             Pagination::ListSecurityRequirementPacksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityRequirements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityRequirementsRequest,
                                    Pagination::ListSecurityRequirementsPaginationTraits<DerivedClient>>
  ListSecurityRequirementsPaginator(const Model::ListSecurityRequirementsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityRequirementsRequest,
                                             Pagination::ListSecurityRequirementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTargetDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetDomainsRequest,
                                    Pagination::ListTargetDomainsPaginationTraits<DerivedClient>>
  ListTargetDomainsPaginator(const Model::ListTargetDomainsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetDomainsRequest,
                                             Pagination::ListTargetDomainsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThreatModelJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatModelJobsRequest,
                                    Pagination::ListThreatModelJobsPaginationTraits<DerivedClient>>
  ListThreatModelJobsPaginator(const Model::ListThreatModelJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatModelJobsRequest,
                                             Pagination::ListThreatModelJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThreatModelJobTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatModelJobTasksRequest,
                                    Pagination::ListThreatModelJobTasksPaginationTraits<DerivedClient>>
  ListThreatModelJobTasksPaginator(const Model::ListThreatModelJobTasksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatModelJobTasksRequest,
                                             Pagination::ListThreatModelJobTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThreatModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatModelsRequest,
                                    Pagination::ListThreatModelsPaginationTraits<DerivedClient>>
  ListThreatModelsPaginator(const Model::ListThreatModelsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatModelsRequest,
                                             Pagination::ListThreatModelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListThreats operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatsRequest, Pagination::ListThreatsPaginationTraits<DerivedClient>>
  ListThreatsPaginator(const Model::ListThreatsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatsRequest,
                                             Pagination::ListThreatsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace SecurityAgent
}  // namespace Aws
