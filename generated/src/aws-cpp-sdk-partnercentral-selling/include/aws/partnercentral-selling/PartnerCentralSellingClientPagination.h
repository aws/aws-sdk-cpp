/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-selling/PartnerCentralSellingClient.h>
#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementFromOpportunityTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementMembersPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementResourceAssociationsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunityFromEngagementTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotJobsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListSolutionsPaginationTraits.h>

namespace Aws {
namespace PartnerCentralSelling {

using ListEngagementByAcceptingInvitationTasksPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementByAcceptingInvitationTasksRequest,
                                      Pagination::ListEngagementByAcceptingInvitationTasksPaginationTraits<PartnerCentralSellingClient>>;
using ListEngagementFromOpportunityTasksPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListEngagementFromOpportunityTasksRequest,
                                      Pagination::ListEngagementFromOpportunityTasksPaginationTraits<PartnerCentralSellingClient>>;
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
using ListOpportunityFromEngagementTasksPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListOpportunityFromEngagementTasksRequest,
                                      Pagination::ListOpportunityFromEngagementTasksPaginationTraits<PartnerCentralSellingClient>>;
using ListResourceSnapshotJobsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListResourceSnapshotJobsRequest,
                                      Pagination::ListResourceSnapshotJobsPaginationTraits<PartnerCentralSellingClient>>;
using ListResourceSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListResourceSnapshotsRequest,
                                      Pagination::ListResourceSnapshotsPaginationTraits<PartnerCentralSellingClient>>;
using ListSolutionsPaginator = Aws::Utils::Pagination::Paginator<PartnerCentralSellingClient, Model::ListSolutionsRequest,
                                                                 Pagination::ListSolutionsPaginationTraits<PartnerCentralSellingClient>>;

}  // namespace PartnerCentralSelling
}  // namespace Aws
