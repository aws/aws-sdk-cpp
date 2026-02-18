/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/simspaceweaver/model/ListAppsPaginationTraits.h>
#include <aws/simspaceweaver/model/ListSimulationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SimSpaceWeaver {

class SimSpaceWeaverClient;

template <typename DerivedClient>
class SimSpaceWeaverPaginationBase {
 public:
  /**
   * Create a paginator for ListApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>
  ListAppsPaginator(const Model::ListAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSimulations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSimulationsRequest,
                                    Pagination::ListSimulationsPaginationTraits<DerivedClient>>
  ListSimulationsPaginator(const Model::ListSimulationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSimulationsRequest,
                                             Pagination::ListSimulationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace SimSpaceWeaver
}  // namespace Aws
