/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mpa/model/ListApprovalTeamsPaginationTraits.h>
#include <aws/mpa/model/ListIdentitySourcesPaginationTraits.h>
#include <aws/mpa/model/ListPoliciesPaginationTraits.h>
#include <aws/mpa/model/ListPolicyVersionsPaginationTraits.h>
#include <aws/mpa/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/mpa/model/ListSessionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MPA {

class MPAClient;

template <typename DerivedClient>
class MPAPaginationBase {
 public:
  /**
   * Create a paginator for ListApprovalTeams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApprovalTeamsRequest,
                                    Pagination::ListApprovalTeamsPaginationTraits<DerivedClient>>
  ListApprovalTeamsPaginator(const Model::ListApprovalTeamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApprovalTeamsRequest,
                                             Pagination::ListApprovalTeamsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdentitySources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentitySourcesRequest,
                                    Pagination::ListIdentitySourcesPaginationTraits<DerivedClient>>
  ListIdentitySourcesPaginator(const Model::ListIdentitySourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentitySourcesRequest,
                                             Pagination::ListIdentitySourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPolicyVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyVersionsRequest,
                                    Pagination::ListPolicyVersionsPaginationTraits<DerivedClient>>
  ListPolicyVersionsPaginator(const Model::ListPolicyVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyVersionsRequest,
                                             Pagination::ListPolicyVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourcePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePoliciesRequest,
                                    Pagination::ListResourcePoliciesPaginationTraits<DerivedClient>>
  ListResourcePoliciesPaginator(const Model::ListResourcePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePoliciesRequest,
                                             Pagination::ListResourcePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace MPA
}  // namespace Aws
