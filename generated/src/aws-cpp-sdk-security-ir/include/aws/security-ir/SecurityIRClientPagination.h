/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/security-ir/SecurityIRClient.h>
#include <aws/security-ir/model/ListCaseEditsPaginationTraits.h>
#include <aws/security-ir/model/ListCasesPaginationTraits.h>
#include <aws/security-ir/model/ListCommentsPaginationTraits.h>
#include <aws/security-ir/model/ListInvestigationsPaginationTraits.h>
#include <aws/security-ir/model/ListMembershipsPaginationTraits.h>

namespace Aws {
namespace SecurityIR {

using ListCaseEditsPaginator = Aws::Utils::Pagination::Paginator<SecurityIRClient, Model::ListCaseEditsRequest,
                                                                 Pagination::ListCaseEditsPaginationTraits<SecurityIRClient>>;
using ListCasesPaginator =
    Aws::Utils::Pagination::Paginator<SecurityIRClient, Model::ListCasesRequest, Pagination::ListCasesPaginationTraits<SecurityIRClient>>;
using ListCommentsPaginator = Aws::Utils::Pagination::Paginator<SecurityIRClient, Model::ListCommentsRequest,
                                                                Pagination::ListCommentsPaginationTraits<SecurityIRClient>>;
using ListInvestigationsPaginator = Aws::Utils::Pagination::Paginator<SecurityIRClient, Model::ListInvestigationsRequest,
                                                                      Pagination::ListInvestigationsPaginationTraits<SecurityIRClient>>;
using ListMembershipsPaginator = Aws::Utils::Pagination::Paginator<SecurityIRClient, Model::ListMembershipsRequest,
                                                                   Pagination::ListMembershipsPaginationTraits<SecurityIRClient>>;

}  // namespace SecurityIR
}  // namespace Aws
