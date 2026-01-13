/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/wellarchitected/model/GetConsolidatedReportPaginationTraits.h>
#include <aws/wellarchitected/model/ListAnswersPaginationTraits.h>
#include <aws/wellarchitected/model/ListCheckDetailsPaginationTraits.h>
#include <aws/wellarchitected/model/ListCheckSummariesPaginationTraits.h>
#include <aws/wellarchitected/model/ListLensReviewImprovementsPaginationTraits.h>
#include <aws/wellarchitected/model/ListLensReviewsPaginationTraits.h>
#include <aws/wellarchitected/model/ListLensSharesPaginationTraits.h>
#include <aws/wellarchitected/model/ListLensesPaginationTraits.h>
#include <aws/wellarchitected/model/ListMilestonesPaginationTraits.h>
#include <aws/wellarchitected/model/ListNotificationsPaginationTraits.h>
#include <aws/wellarchitected/model/ListProfileNotificationsPaginationTraits.h>
#include <aws/wellarchitected/model/ListProfileSharesPaginationTraits.h>
#include <aws/wellarchitected/model/ListProfilesPaginationTraits.h>
#include <aws/wellarchitected/model/ListReviewTemplateAnswersPaginationTraits.h>
#include <aws/wellarchitected/model/ListReviewTemplatesPaginationTraits.h>
#include <aws/wellarchitected/model/ListShareInvitationsPaginationTraits.h>
#include <aws/wellarchitected/model/ListTemplateSharesPaginationTraits.h>
#include <aws/wellarchitected/model/ListWorkloadSharesPaginationTraits.h>
#include <aws/wellarchitected/model/ListWorkloadsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace WellArchitected {

class WellArchitectedClient;

template <typename DerivedClient>
class WellArchitectedPaginationBase {
 public:
  /**
   * Create a paginator for GetConsolidatedReport operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConsolidatedReportRequest,
                                    Pagination::GetConsolidatedReportPaginationTraits<DerivedClient>>
  GetConsolidatedReportPaginator(const Model::GetConsolidatedReportRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConsolidatedReportRequest,
                                             Pagination::GetConsolidatedReportPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnswers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnswersRequest, Pagination::ListAnswersPaginationTraits<DerivedClient>>
  ListAnswersPaginator(const Model::ListAnswersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnswersRequest,
                                             Pagination::ListAnswersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListCheckDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCheckDetailsRequest,
                                    Pagination::ListCheckDetailsPaginationTraits<DerivedClient>>
  ListCheckDetailsPaginator(const Model::ListCheckDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCheckDetailsRequest,
                                             Pagination::ListCheckDetailsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCheckSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCheckSummariesRequest,
                                    Pagination::ListCheckSummariesPaginationTraits<DerivedClient>>
  ListCheckSummariesPaginator(const Model::ListCheckSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCheckSummariesRequest,
                                             Pagination::ListCheckSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLenses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensesRequest, Pagination::ListLensesPaginationTraits<DerivedClient>>
  ListLensesPaginator(const Model::ListLensesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensesRequest,
                                             Pagination::ListLensesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListLensReviewImprovements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensReviewImprovementsRequest,
                                    Pagination::ListLensReviewImprovementsPaginationTraits<DerivedClient>>
  ListLensReviewImprovementsPaginator(const Model::ListLensReviewImprovementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensReviewImprovementsRequest,
                                             Pagination::ListLensReviewImprovementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLensReviews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensReviewsRequest,
                                    Pagination::ListLensReviewsPaginationTraits<DerivedClient>>
  ListLensReviewsPaginator(const Model::ListLensReviewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensReviewsRequest,
                                             Pagination::ListLensReviewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListLensShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensSharesRequest, Pagination::ListLensSharesPaginationTraits<DerivedClient>>
  ListLensSharesPaginator(const Model::ListLensSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLensSharesRequest,
                                             Pagination::ListLensSharesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListMilestones operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMilestonesRequest, Pagination::ListMilestonesPaginationTraits<DerivedClient>>
  ListMilestonesPaginator(const Model::ListMilestonesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMilestonesRequest,
                                             Pagination::ListMilestonesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListNotifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationsRequest,
                                    Pagination::ListNotificationsPaginationTraits<DerivedClient>>
  ListNotificationsPaginator(const Model::ListNotificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationsRequest,
                                             Pagination::ListNotificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProfileNotifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileNotificationsRequest,
                                    Pagination::ListProfileNotificationsPaginationTraits<DerivedClient>>
  ListProfileNotificationsPaginator(const Model::ListProfileNotificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileNotificationsRequest,
                                             Pagination::ListProfileNotificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest, Pagination::ListProfilesPaginationTraits<DerivedClient>>
  ListProfilesPaginator(const Model::ListProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest,
                                             Pagination::ListProfilesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListProfileShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileSharesRequest,
                                    Pagination::ListProfileSharesPaginationTraits<DerivedClient>>
  ListProfileSharesPaginator(const Model::ListProfileSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileSharesRequest,
                                             Pagination::ListProfileSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReviewTemplateAnswers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewTemplateAnswersRequest,
                                    Pagination::ListReviewTemplateAnswersPaginationTraits<DerivedClient>>
  ListReviewTemplateAnswersPaginator(const Model::ListReviewTemplateAnswersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewTemplateAnswersRequest,
                                             Pagination::ListReviewTemplateAnswersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReviewTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewTemplatesRequest,
                                    Pagination::ListReviewTemplatesPaginationTraits<DerivedClient>>
  ListReviewTemplatesPaginator(const Model::ListReviewTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewTemplatesRequest,
                                             Pagination::ListReviewTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListShareInvitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListShareInvitationsRequest,
                                    Pagination::ListShareInvitationsPaginationTraits<DerivedClient>>
  ListShareInvitationsPaginator(const Model::ListShareInvitationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListShareInvitationsRequest,
                                             Pagination::ListShareInvitationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplateShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateSharesRequest,
                                    Pagination::ListTemplateSharesPaginationTraits<DerivedClient>>
  ListTemplateSharesPaginator(const Model::ListTemplateSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateSharesRequest,
                                             Pagination::ListTemplateSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkloads operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadsRequest, Pagination::ListWorkloadsPaginationTraits<DerivedClient>>
  ListWorkloadsPaginator(const Model::ListWorkloadsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadsRequest,
                                             Pagination::ListWorkloadsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListWorkloadShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadSharesRequest,
                                    Pagination::ListWorkloadSharesPaginationTraits<DerivedClient>>
  ListWorkloadSharesPaginator(const Model::ListWorkloadSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadSharesRequest,
                                             Pagination::ListWorkloadSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace WellArchitected
}  // namespace Aws
