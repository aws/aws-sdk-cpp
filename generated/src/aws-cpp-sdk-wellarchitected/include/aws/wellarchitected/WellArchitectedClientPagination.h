/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/wellarchitected/WellArchitectedClient.h>
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

namespace Aws {
namespace WellArchitected {

using GetConsolidatedReportPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::GetConsolidatedReportRequest,
                                      Pagination::GetConsolidatedReportPaginationTraits<WellArchitectedClient>>;
using ListAnswersPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListAnswersRequest,
                                                               Pagination::ListAnswersPaginationTraits<WellArchitectedClient>>;
using ListCheckDetailsPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListCheckDetailsRequest,
                                                                    Pagination::ListCheckDetailsPaginationTraits<WellArchitectedClient>>;
using ListCheckSummariesPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListCheckSummariesRequest,
                                      Pagination::ListCheckSummariesPaginationTraits<WellArchitectedClient>>;
using ListLensesPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListLensesRequest,
                                                              Pagination::ListLensesPaginationTraits<WellArchitectedClient>>;
using ListLensReviewImprovementsPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListLensReviewImprovementsRequest,
                                      Pagination::ListLensReviewImprovementsPaginationTraits<WellArchitectedClient>>;
using ListLensReviewsPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListLensReviewsRequest,
                                                                   Pagination::ListLensReviewsPaginationTraits<WellArchitectedClient>>;
using ListLensSharesPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListLensSharesRequest,
                                                                  Pagination::ListLensSharesPaginationTraits<WellArchitectedClient>>;
using ListMilestonesPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListMilestonesRequest,
                                                                  Pagination::ListMilestonesPaginationTraits<WellArchitectedClient>>;
using ListNotificationsPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListNotificationsRequest,
                                                                     Pagination::ListNotificationsPaginationTraits<WellArchitectedClient>>;
using ListProfileNotificationsPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListProfileNotificationsRequest,
                                      Pagination::ListProfileNotificationsPaginationTraits<WellArchitectedClient>>;
using ListProfilesPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListProfilesRequest,
                                                                Pagination::ListProfilesPaginationTraits<WellArchitectedClient>>;
using ListProfileSharesPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListProfileSharesRequest,
                                                                     Pagination::ListProfileSharesPaginationTraits<WellArchitectedClient>>;
using ListReviewTemplateAnswersPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListReviewTemplateAnswersRequest,
                                      Pagination::ListReviewTemplateAnswersPaginationTraits<WellArchitectedClient>>;
using ListReviewTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListReviewTemplatesRequest,
                                      Pagination::ListReviewTemplatesPaginationTraits<WellArchitectedClient>>;
using ListShareInvitationsPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListShareInvitationsRequest,
                                      Pagination::ListShareInvitationsPaginationTraits<WellArchitectedClient>>;
using ListTemplateSharesPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListTemplateSharesRequest,
                                      Pagination::ListTemplateSharesPaginationTraits<WellArchitectedClient>>;
using ListWorkloadsPaginator = Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListWorkloadsRequest,
                                                                 Pagination::ListWorkloadsPaginationTraits<WellArchitectedClient>>;
using ListWorkloadSharesPaginator =
    Aws::Utils::Pagination::Paginator<WellArchitectedClient, Model::ListWorkloadSharesRequest,
                                      Pagination::ListWorkloadSharesPaginationTraits<WellArchitectedClient>>;

}  // namespace WellArchitected
}  // namespace Aws
