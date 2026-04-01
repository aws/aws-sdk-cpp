/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/securityagent/SecurityAgentClient.h>
#include <aws/securityagent/model/ListAgentSpacesPaginationTraits.h>
#include <aws/securityagent/model/ListApplicationsPaginationTraits.h>
#include <aws/securityagent/model/ListArtifactsPaginationTraits.h>
#include <aws/securityagent/model/ListDiscoveredEndpointsPaginationTraits.h>
#include <aws/securityagent/model/ListFindingsPaginationTraits.h>
#include <aws/securityagent/model/ListIntegratedResourcesPaginationTraits.h>
#include <aws/securityagent/model/ListIntegrationsPaginationTraits.h>
#include <aws/securityagent/model/ListMembershipsPaginationTraits.h>
#include <aws/securityagent/model/ListPentestJobTasksPaginationTraits.h>
#include <aws/securityagent/model/ListPentestJobsForPentestPaginationTraits.h>
#include <aws/securityagent/model/ListPentestsPaginationTraits.h>
#include <aws/securityagent/model/ListTargetDomainsPaginationTraits.h>

namespace Aws {
namespace SecurityAgent {

using ListAgentSpacesPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListAgentSpacesRequest,
                                                                   Pagination::ListAgentSpacesPaginationTraits<SecurityAgentClient>>;
using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<SecurityAgentClient>>;
using ListArtifactsPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListArtifactsRequest,
                                                                 Pagination::ListArtifactsPaginationTraits<SecurityAgentClient>>;
using ListDiscoveredEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListDiscoveredEndpointsRequest,
                                      Pagination::ListDiscoveredEndpointsPaginationTraits<SecurityAgentClient>>;
using ListFindingsPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListFindingsRequest,
                                                                Pagination::ListFindingsPaginationTraits<SecurityAgentClient>>;
using ListIntegratedResourcesPaginator =
    Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListIntegratedResourcesRequest,
                                      Pagination::ListIntegratedResourcesPaginationTraits<SecurityAgentClient>>;
using ListIntegrationsPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListIntegrationsRequest,
                                                                    Pagination::ListIntegrationsPaginationTraits<SecurityAgentClient>>;
using ListMembershipsPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListMembershipsRequest,
                                                                   Pagination::ListMembershipsPaginationTraits<SecurityAgentClient>>;
using ListPentestJobsForPentestPaginator =
    Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListPentestJobsForPentestRequest,
                                      Pagination::ListPentestJobsForPentestPaginationTraits<SecurityAgentClient>>;
using ListPentestJobTasksPaginator =
    Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListPentestJobTasksRequest,
                                      Pagination::ListPentestJobTasksPaginationTraits<SecurityAgentClient>>;
using ListPentestsPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListPentestsRequest,
                                                                Pagination::ListPentestsPaginationTraits<SecurityAgentClient>>;
using ListTargetDomainsPaginator = Aws::Utils::Pagination::Paginator<SecurityAgentClient, Model::ListTargetDomainsRequest,
                                                                     Pagination::ListTargetDomainsPaginationTraits<SecurityAgentClient>>;

}  // namespace SecurityAgent
}  // namespace Aws
