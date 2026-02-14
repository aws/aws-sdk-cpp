/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClient.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListCellsPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListRulesPaginationTraits.h>

namespace Aws {
namespace Route53RecoveryReadiness {

using GetCellReadinessSummaryPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::GetCellReadinessSummaryRequest,
                                      Pagination::GetCellReadinessSummaryPaginationTraits<Route53RecoveryReadinessClient>>;
using GetReadinessCheckResourceStatusPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::GetReadinessCheckResourceStatusRequest,
                                      Pagination::GetReadinessCheckResourceStatusPaginationTraits<Route53RecoveryReadinessClient>>;
using GetReadinessCheckStatusPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::GetReadinessCheckStatusRequest,
                                      Pagination::GetReadinessCheckStatusPaginationTraits<Route53RecoveryReadinessClient>>;
using GetRecoveryGroupReadinessSummaryPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::GetRecoveryGroupReadinessSummaryRequest,
                                      Pagination::GetRecoveryGroupReadinessSummaryPaginationTraits<Route53RecoveryReadinessClient>>;
using ListCellsPaginator = Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::ListCellsRequest,
                                                             Pagination::ListCellsPaginationTraits<Route53RecoveryReadinessClient>>;
using ListCrossAccountAuthorizationsPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::ListCrossAccountAuthorizationsRequest,
                                      Pagination::ListCrossAccountAuthorizationsPaginationTraits<Route53RecoveryReadinessClient>>;
using ListReadinessChecksPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::ListReadinessChecksRequest,
                                      Pagination::ListReadinessChecksPaginationTraits<Route53RecoveryReadinessClient>>;
using ListRecoveryGroupsPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::ListRecoveryGroupsRequest,
                                      Pagination::ListRecoveryGroupsPaginationTraits<Route53RecoveryReadinessClient>>;
using ListResourceSetsPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::ListResourceSetsRequest,
                                      Pagination::ListResourceSetsPaginationTraits<Route53RecoveryReadinessClient>>;
using ListRulesPaginator = Aws::Utils::Pagination::Paginator<Route53RecoveryReadinessClient, Model::ListRulesRequest,
                                                             Pagination::ListRulesPaginationTraits<Route53RecoveryReadinessClient>>;

}  // namespace Route53RecoveryReadiness
}  // namespace Aws
