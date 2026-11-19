/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-selling/PartnerCentralSellingClient.h>
#include <aws/partnercentral-selling/model/ListCustomerAccountBulkJobResultsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListCustomerAccountBulkJobsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementFromOpportunityTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementGroupsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementMembersPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementResourceAssociationsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunityBulkJobResultsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunityBulkJobsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunityFromEngagementTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListProspectingFromEngagementTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotJobsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListSolutionsPaginationTraits.h>
#include <aws/partnercentral-selling/model/SearchCustomerAccountsPaginationTraits.h>
#include <aws/partnercentral-selling/model/SearchEngagementsPaginationTraits.h>
#include <aws/partnercentral-selling/model/SearchOpportunitiesPaginationTraits.h>

namespace Aws {
namespace PartnerCentralSelling {

using ListCustomerAccountBulkJobResultsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListCustomerAccountBulkJobResultsRequest,
                                      Pagination::ListCustomerAccountBulkJobResultsPaginationTraits<PartnerCentralSellingClient>>;
using ListCustomerAccountBulkJobsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListCustomerAccountBulkJobsRequest,
                                      Pagination::ListCustomerAccountBulkJobsPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementByAcceptingInvitationTasksPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementByAcceptingInvitationTasksRequest,
                                      Pagination::ListEngagementByAcceptingInvitationTasksPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementFromOpportunityTasksPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementFromOpportunityTasksRequest,
                                      Pagination::ListEngagementFromOpportunityTasksPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementGroupsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementGroupsRequest,
                                      Pagination::ListEngagementGroupsPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementInvitationsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementInvitationsRequest,
                                      Pagination::ListEngagementInvitationsPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementMembersPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementMembersRequest,
                                      Pagination::ListEngagementMembersPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementResourceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementResourceAssociationsRequest,
                                      Pagination::ListEngagementResourceAssociationsPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementsRequest,
                                      Pagination::ListEngagementsPaginationTraits<PartnerCentralSellingClient>>;
using ListOpportunitiesPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListOpportunitiesRequest,
                                      Pagination::ListOpportunitiesPaginationTraits<PartnerCentralSellingClient>>;
using ListOpportunityBulkJobResultsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListOpportunityBulkJobResultsRequest,
                                      Pagination::ListOpportunityBulkJobResultsPaginationTraits<PartnerCentralSellingClient>>;
using ListOpportunityBulkJobsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListOpportunityBulkJobsRequest,
                                      Pagination::ListOpportunityBulkJobsPaginationTraits<PartnerCentralSellingClient>>;
using ListOpportunityFromEngagementTasksPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListOpportunityFromEngagementTasksRequest,
                                      Pagination::ListOpportunityFromEngagementTasksPaginationTraits<PartnerCentralSellingClient>>;
using ListProspectingFromEngagementTasksPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListProspectingFromEngagementTasksRequest,
                                      Pagination::ListProspectingFromEngagementTasksPaginationTraits<PartnerCentralSellingClient>>;
using ListResourceSnapshotJobsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListResourceSnapshotJobsRequest,
                                      Pagination::ListResourceSnapshotJobsPaginationTraits<PartnerCentralSellingClient>>;
using ListResourceSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListResourceSnapshotsRequest,
                                      Pagination::ListResourceSnapshotsPaginationTraits<PartnerCentralSellingClient>>;
using ListSolutionsPaginator = Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListSolutionsRequest,
                                                                 Pagination::ListSolutionsPaginationTraits<PartnerCentralSellingClient>>;
using SearchCustomerAccountsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::SearchCustomerAccountsRequest,
                                      Pagination::SearchCustomerAccountsPaginationTraits<PartnerCentralSellingClient>>;
using SearchEngagementsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::SearchEngagementsRequest,
                                      Pagination::SearchEngagementsPaginationTraits<PartnerCentralSellingClient>>;
using SearchOpportunitiesPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::SearchOpportunitiesRequest,
                                      Pagination::SearchOpportunitiesPaginationTraits<PartnerCentralSellingClient>>;

}  // namespace PartnerCentralSelling
}  // namespace Aws
