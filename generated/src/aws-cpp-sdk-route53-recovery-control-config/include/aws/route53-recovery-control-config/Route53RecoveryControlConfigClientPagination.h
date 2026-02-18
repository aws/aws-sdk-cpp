/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClient.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListClustersPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesPaginationTraits.h>

namespace Aws {
namespace Route53RecoveryControlConfig {

using ListAssociatedRoute53HealthChecksPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryControlConfigClient, Model::ListAssociatedRoute53HealthChecksRequest,
                                      Pagination::ListAssociatedRoute53HealthChecksPaginationTraits<Route53RecoveryControlConfigClient>>;
using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryControlConfigClient, Model::ListClustersRequest,
                                      Pagination::ListClustersPaginationTraits<Route53RecoveryControlConfigClient>>;
using ListControlPanelsPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryControlConfigClient, Model::ListControlPanelsRequest,
                                      Pagination::ListControlPanelsPaginationTraits<Route53RecoveryControlConfigClient>>;
using ListRoutingControlsPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryControlConfigClient, Model::ListRoutingControlsRequest,
                                      Pagination::ListRoutingControlsPaginationTraits<Route53RecoveryControlConfigClient>>;
using ListSafetyRulesPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryControlConfigClient, Model::ListSafetyRulesRequest,
                                      Pagination::ListSafetyRulesPaginationTraits<Route53RecoveryControlConfigClient>>;

}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
