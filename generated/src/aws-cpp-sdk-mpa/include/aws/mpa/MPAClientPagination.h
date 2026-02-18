/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mpa/MPAClient.h>
#include <aws/mpa/model/ListApprovalTeamsPaginationTraits.h>
#include <aws/mpa/model/ListIdentitySourcesPaginationTraits.h>
#include <aws/mpa/model/ListPoliciesPaginationTraits.h>
#include <aws/mpa/model/ListPolicyVersionsPaginationTraits.h>
#include <aws/mpa/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/mpa/model/ListSessionsPaginationTraits.h>

namespace Aws {
namespace MPA {

using ListApprovalTeamsPaginator =
    Aws::Utils::Pagination::Paginator<MPAClient, Model::ListApprovalTeamsRequest, Pagination::ListApprovalTeamsPaginationTraits<MPAClient>>;
using ListIdentitySourcesPaginator = Aws::Utils::Pagination::Paginator<MPAClient, Model::ListIdentitySourcesRequest,
                                                                       Pagination::ListIdentitySourcesPaginationTraits<MPAClient>>;
using ListPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<MPAClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<MPAClient>>;
using ListPolicyVersionsPaginator = Aws::Utils::Pagination::Paginator<MPAClient, Model::ListPolicyVersionsRequest,
                                                                      Pagination::ListPolicyVersionsPaginationTraits<MPAClient>>;
using ListResourcePoliciesPaginator = Aws::Utils::Pagination::Paginator<MPAClient, Model::ListResourcePoliciesRequest,
                                                                        Pagination::ListResourcePoliciesPaginationTraits<MPAClient>>;
using ListSessionsPaginator =
    Aws::Utils::Pagination::Paginator<MPAClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<MPAClient>>;

}  // namespace MPA
}  // namespace Aws
