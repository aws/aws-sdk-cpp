/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterClient.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsPaginationTraits.h>

namespace Aws {
namespace Route53RecoveryCluster {

using ListRoutingControlsPaginator =
    Aws::Utils::Pagination::Paginator<Route53RecoveryClusterClient, Model::ListRoutingControlsRequest,
                                      Pagination::ListRoutingControlsPaginationTraits<Route53RecoveryClusterClient>>;

}  // namespace Route53RecoveryCluster
}  // namespace Aws
