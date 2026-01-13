/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Route53RecoveryReadiness {

class Route53RecoveryReadinessClient;

template <typename DerivedClient>
class Route53RecoveryReadinessPaginationBase {
 public:
  /**
   * Create a paginator for GetCellReadinessSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCellReadinessSummaryRequest,
                                    Pagination::GetCellReadinessSummaryPaginationTraits<DerivedClient>>
  GetCellReadinessSummaryPaginator(const Model::GetCellReadinessSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCellReadinessSummaryRequest,
                                             Pagination::GetCellReadinessSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetReadinessCheckResourceStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReadinessCheckResourceStatusRequest,
                                    Pagination::GetReadinessCheckResourceStatusPaginationTraits<DerivedClient>>
  GetReadinessCheckResourceStatusPaginator(const Model::GetReadinessCheckResourceStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReadinessCheckResourceStatusRequest,
                                             Pagination::GetReadinessCheckResourceStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetReadinessCheckStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReadinessCheckStatusRequest,
                                    Pagination::GetReadinessCheckStatusPaginationTraits<DerivedClient>>
  GetReadinessCheckStatusPaginator(const Model::GetReadinessCheckStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetReadinessCheckStatusRequest,
                                             Pagination::GetReadinessCheckStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetRecoveryGroupReadinessSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRecoveryGroupReadinessSummaryRequest,
                                    Pagination::GetRecoveryGroupReadinessSummaryPaginationTraits<DerivedClient>>
  GetRecoveryGroupReadinessSummaryPaginator(const Model::GetRecoveryGroupReadinessSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRecoveryGroupReadinessSummaryRequest,
                                             Pagination::GetRecoveryGroupReadinessSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCells operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCellsRequest, Pagination::ListCellsPaginationTraits<DerivedClient>>
  ListCellsPaginator(const Model::ListCellsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCellsRequest, Pagination::ListCellsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCrossAccountAuthorizations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrossAccountAuthorizationsRequest,
                                    Pagination::ListCrossAccountAuthorizationsPaginationTraits<DerivedClient>>
  ListCrossAccountAuthorizationsPaginator(const Model::ListCrossAccountAuthorizationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrossAccountAuthorizationsRequest,
                                             Pagination::ListCrossAccountAuthorizationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReadinessChecks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadinessChecksRequest,
                                    Pagination::ListReadinessChecksPaginationTraits<DerivedClient>>
  ListReadinessChecksPaginator(const Model::ListReadinessChecksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadinessChecksRequest,
                                             Pagination::ListReadinessChecksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecoveryGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryGroupsRequest,
                                    Pagination::ListRecoveryGroupsPaginationTraits<DerivedClient>>
  ListRecoveryGroupsPaginator(const Model::ListRecoveryGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryGroupsRequest,
                                             Pagination::ListRecoveryGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSetsRequest,
                                    Pagination::ListResourceSetsPaginationTraits<DerivedClient>>
  ListResourceSetsPaginator(const Model::ListResourceSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSetsRequest,
                                             Pagination::ListResourceSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>
  ListRulesPaginator(const Model::ListRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
