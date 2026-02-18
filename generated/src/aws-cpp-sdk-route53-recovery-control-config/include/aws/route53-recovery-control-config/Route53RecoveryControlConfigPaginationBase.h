/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListClustersPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigClient;

template <typename DerivedClient>
class Route53RecoveryControlConfigPaginationBase {
 public:
  /**
   * Create a paginator for ListAssociatedRoute53HealthChecks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedRoute53HealthChecksRequest,
                                    Pagination::ListAssociatedRoute53HealthChecksPaginationTraits<DerivedClient>>
  ListAssociatedRoute53HealthChecksPaginator(const Model::ListAssociatedRoute53HealthChecksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedRoute53HealthChecksRequest,
                                             Pagination::ListAssociatedRoute53HealthChecksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListControlPanels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlPanelsRequest,
                                    Pagination::ListControlPanelsPaginationTraits<DerivedClient>>
  ListControlPanelsPaginator(const Model::ListControlPanelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlPanelsRequest,
                                             Pagination::ListControlPanelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoutingControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingControlsRequest,
                                    Pagination::ListRoutingControlsPaginationTraits<DerivedClient>>
  ListRoutingControlsPaginator(const Model::ListRoutingControlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingControlsRequest,
                                             Pagination::ListRoutingControlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSafetyRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSafetyRulesRequest,
                                    Pagination::ListSafetyRulesPaginationTraits<DerivedClient>>
  ListSafetyRulesPaginator(const Model::ListSafetyRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSafetyRulesRequest,
                                             Pagination::ListSafetyRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
