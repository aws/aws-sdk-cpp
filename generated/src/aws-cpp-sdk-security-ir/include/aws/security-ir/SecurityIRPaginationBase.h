/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/security-ir/model/ListCaseEditsPaginationTraits.h>
#include <aws/security-ir/model/ListCasesPaginationTraits.h>
#include <aws/security-ir/model/ListCommentsPaginationTraits.h>
#include <aws/security-ir/model/ListInvestigationsPaginationTraits.h>
#include <aws/security-ir/model/ListMembershipsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SecurityIR {

class SecurityIRClient;

template <typename DerivedClient>
class SecurityIRPaginationBase {
 public:
  /**
   * Create a paginator for ListCaseEdits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCaseEditsRequest, Pagination::ListCaseEditsPaginationTraits<DerivedClient>>
  ListCaseEditsPaginator(const Model::ListCaseEditsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCaseEditsRequest,
                                             Pagination::ListCaseEditsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCasesRequest, Pagination::ListCasesPaginationTraits<DerivedClient>>
  ListCasesPaginator(const Model::ListCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCasesRequest, Pagination::ListCasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommentsRequest, Pagination::ListCommentsPaginationTraits<DerivedClient>>
  ListCommentsPaginator(const Model::ListCommentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommentsRequest,
                                             Pagination::ListCommentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListInvestigations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvestigationsRequest,
                                    Pagination::ListInvestigationsPaginationTraits<DerivedClient>>
  ListInvestigationsPaginator(const Model::ListInvestigationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvestigationsRequest,
                                             Pagination::ListInvestigationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembershipsRequest,
                                    Pagination::ListMembershipsPaginationTraits<DerivedClient>>
  ListMembershipsPaginator(const Model::ListMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembershipsRequest,
                                             Pagination::ListMembershipsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace SecurityIR
}  // namespace Aws
