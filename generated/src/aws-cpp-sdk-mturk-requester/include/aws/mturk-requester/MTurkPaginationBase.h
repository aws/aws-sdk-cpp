/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace MTurk {

class MTurkClient;

template <typename DerivedClient>
class MTurkPaginationBase {
 public:
  /**
   * Create a paginator for ListAssignmentsForHIT operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssignmentsForHITRequest,
                                    Pagination::ListAssignmentsForHITPaginationTraits<DerivedClient>>
  ListAssignmentsForHITPaginator(const Model::ListAssignmentsForHITRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssignmentsForHITRequest,
                                             Pagination::ListAssignmentsForHITPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBonusPayments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBonusPaymentsRequest,
                                    Pagination::ListBonusPaymentsPaginationTraits<DerivedClient>>
  ListBonusPaymentsPaginator(const Model::ListBonusPaymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBonusPaymentsRequest,
                                             Pagination::ListBonusPaymentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHITs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHITsRequest, Pagination::ListHITsPaginationTraits<DerivedClient>>
  ListHITsPaginator(const Model::ListHITsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHITsRequest, Pagination::ListHITsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHITsForQualificationType operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHITsForQualificationTypeRequest,
                                    Pagination::ListHITsForQualificationTypePaginationTraits<DerivedClient>>
  ListHITsForQualificationTypePaginator(const Model::ListHITsForQualificationTypeRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHITsForQualificationTypeRequest,
                                             Pagination::ListHITsForQualificationTypePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQualificationRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQualificationRequestsRequest,
                                    Pagination::ListQualificationRequestsPaginationTraits<DerivedClient>>
  ListQualificationRequestsPaginator(const Model::ListQualificationRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQualificationRequestsRequest,
                                             Pagination::ListQualificationRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQualificationTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQualificationTypesRequest,
                                    Pagination::ListQualificationTypesPaginationTraits<DerivedClient>>
  ListQualificationTypesPaginator(const Model::ListQualificationTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQualificationTypesRequest,
                                             Pagination::ListQualificationTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReviewableHITs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewableHITsRequest,
                                    Pagination::ListReviewableHITsPaginationTraits<DerivedClient>>
  ListReviewableHITsPaginator(const Model::ListReviewableHITsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewableHITsRequest,
                                             Pagination::ListReviewableHITsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReviewPolicyResultsForHIT operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewPolicyResultsForHITRequest,
                                    Pagination::ListReviewPolicyResultsForHITPaginationTraits<DerivedClient>>
  ListReviewPolicyResultsForHITPaginator(const Model::ListReviewPolicyResultsForHITRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReviewPolicyResultsForHITRequest,
                                             Pagination::ListReviewPolicyResultsForHITPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkerBlocks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkerBlocksRequest,
                                    Pagination::ListWorkerBlocksPaginationTraits<DerivedClient>>
  ListWorkerBlocksPaginator(const Model::ListWorkerBlocksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkerBlocksRequest,
                                             Pagination::ListWorkerBlocksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListWorkersWithQualificationType operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkersWithQualificationTypeRequest,
                                    Pagination::ListWorkersWithQualificationTypePaginationTraits<DerivedClient>>
  ListWorkersWithQualificationTypePaginator(const Model::ListWorkersWithQualificationTypeRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkersWithQualificationTypeRequest,
                                             Pagination::ListWorkersWithQualificationTypePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MTurk
}  // namespace Aws
