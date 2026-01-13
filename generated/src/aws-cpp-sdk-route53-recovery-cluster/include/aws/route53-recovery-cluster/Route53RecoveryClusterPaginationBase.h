/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterClient;

template <typename DerivedClient>
class Route53RecoveryClusterPaginationBase {
 public:
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
};
}  // namespace Route53RecoveryCluster
}  // namespace Aws
