/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mturk-requester/MTurkClient.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITPaginationTraits.h>
#include <aws/mturk-requester/model/ListBonusPaymentsPaginationTraits.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypePaginationTraits.h>
#include <aws/mturk-requester/model/ListHITsPaginationTraits.h>
#include <aws/mturk-requester/model/ListQualificationRequestsPaginationTraits.h>
#include <aws/mturk-requester/model/ListQualificationTypesPaginationTraits.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITPaginationTraits.h>
#include <aws/mturk-requester/model/ListReviewableHITsPaginationTraits.h>
#include <aws/mturk-requester/model/ListWorkerBlocksPaginationTraits.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypePaginationTraits.h>

namespace Aws {
namespace MTurk {

using ListAssignmentsForHITPaginator = Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListAssignmentsForHITRequest,
                                                                         Pagination::ListAssignmentsForHITPaginationTraits<MTurkClient>>;
using ListBonusPaymentsPaginator = Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListBonusPaymentsRequest,
                                                                     Pagination::ListBonusPaymentsPaginationTraits<MTurkClient>>;
using ListHITsPaginator =
    Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListHITsRequest, Pagination::ListHITsPaginationTraits<MTurkClient>>;
using ListHITsForQualificationTypePaginator =
    Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListHITsForQualificationTypeRequest,
                                      Pagination::ListHITsForQualificationTypePaginationTraits<MTurkClient>>;
using ListQualificationRequestsPaginator =
    Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListQualificationRequestsRequest,
                                      Pagination::ListQualificationRequestsPaginationTraits<MTurkClient>>;
using ListQualificationTypesPaginator = Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListQualificationTypesRequest,
                                                                          Pagination::ListQualificationTypesPaginationTraits<MTurkClient>>;
using ListReviewableHITsPaginator = Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListReviewableHITsRequest,
                                                                      Pagination::ListReviewableHITsPaginationTraits<MTurkClient>>;
using ListReviewPolicyResultsForHITPaginator =
    Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListReviewPolicyResultsForHITRequest,
                                      Pagination::ListReviewPolicyResultsForHITPaginationTraits<MTurkClient>>;
using ListWorkerBlocksPaginator = Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListWorkerBlocksRequest,
                                                                    Pagination::ListWorkerBlocksPaginationTraits<MTurkClient>>;
using ListWorkersWithQualificationTypePaginator =
    Aws::Utils::Pagination::Paginator<MTurkClient, Model::ListWorkersWithQualificationTypeRequest,
                                      Pagination::ListWorkersWithQualificationTypePaginationTraits<MTurkClient>>;

}  // namespace MTurk
}  // namespace Aws
