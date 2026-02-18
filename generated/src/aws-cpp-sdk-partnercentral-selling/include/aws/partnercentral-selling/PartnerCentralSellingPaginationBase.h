/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace PartnerCentralSelling {

class PartnerCentralSellingClient;

template <typename DerivedClient>
class PartnerCentralSellingPaginationBase {
 public:
  /**
   * Create a paginator for ListEngagementByAcceptingInvitationTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementByAcceptingInvitationTasksRequest,
                                    Pagination::ListEngagementByAcceptingInvitationTasksPaginationTraits<DerivedClient>>
  ListEngagementByAcceptingInvitationTasksPaginator(const Model::ListEngagementByAcceptingInvitationTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementByAcceptingInvitationTasksRequest,
                                             Pagination::ListEngagementByAcceptingInvitationTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEngagementFromOpportunityTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementFromOpportunityTasksRequest,
                                    Pagination::ListEngagementFromOpportunityTasksPaginationTraits<DerivedClient>>
  ListEngagementFromOpportunityTasksPaginator(const Model::ListEngagementFromOpportunityTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementFromOpportunityTasksRequest,
                                             Pagination::ListEngagementFromOpportunityTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEngagementInvitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementInvitationsRequest,
                                    Pagination::ListEngagementInvitationsPaginationTraits<DerivedClient>>
  ListEngagementInvitationsPaginator(const Model::ListEngagementInvitationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementInvitationsRequest,
                                             Pagination::ListEngagementInvitationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEngagementMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementMembersRequest,
                                    Pagination::ListEngagementMembersPaginationTraits<DerivedClient>>
  ListEngagementMembersPaginator(const Model::ListEngagementMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementMembersRequest,
                                             Pagination::ListEngagementMembersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEngagementResourceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementResourceAssociationsRequest,
                                    Pagination::ListEngagementResourceAssociationsPaginationTraits<DerivedClient>>
  ListEngagementResourceAssociationsPaginator(const Model::ListEngagementResourceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementResourceAssociationsRequest,
                                             Pagination::ListEngagementResourceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEngagements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementsRequest,
                                    Pagination::ListEngagementsPaginationTraits<DerivedClient>>
  ListEngagementsPaginator(const Model::ListEngagementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementsRequest,
                                             Pagination::ListEngagementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListOpportunities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpportunitiesRequest,
                                    Pagination::ListOpportunitiesPaginationTraits<DerivedClient>>
  ListOpportunitiesPaginator(const Model::ListOpportunitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpportunitiesRequest,
                                             Pagination::ListOpportunitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOpportunityFromEngagementTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpportunityFromEngagementTasksRequest,
                                    Pagination::ListOpportunityFromEngagementTasksPaginationTraits<DerivedClient>>
  ListOpportunityFromEngagementTasksPaginator(const Model::ListOpportunityFromEngagementTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpportunityFromEngagementTasksRequest,
                                             Pagination::ListOpportunityFromEngagementTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceSnapshotJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSnapshotJobsRequest,
                                    Pagination::ListResourceSnapshotJobsPaginationTraits<DerivedClient>>
  ListResourceSnapshotJobsPaginator(const Model::ListResourceSnapshotJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSnapshotJobsRequest,
                                             Pagination::ListResourceSnapshotJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSnapshotsRequest,
                                    Pagination::ListResourceSnapshotsPaginationTraits<DerivedClient>>
  ListResourceSnapshotsPaginator(const Model::ListResourceSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSnapshotsRequest,
                                             Pagination::ListResourceSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSolutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolutionsRequest, Pagination::ListSolutionsPaginationTraits<DerivedClient>>
  ListSolutionsPaginator(const Model::ListSolutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolutionsRequest,
                                             Pagination::ListSolutionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace PartnerCentralSelling
}  // namespace Aws
