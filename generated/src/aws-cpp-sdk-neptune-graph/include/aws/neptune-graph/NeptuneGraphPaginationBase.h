/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/neptune-graph/model/ListExportTasksPaginationTraits.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsPaginationTraits.h>
#include <aws/neptune-graph/model/ListGraphsPaginationTraits.h>
#include <aws/neptune-graph/model/ListImportTasksPaginationTraits.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace NeptuneGraph {

class NeptuneGraphClient;

template <typename DerivedClient>
class NeptuneGraphPaginationBase {
 public:
  /**
   * Create a paginator for ListExportTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportTasksRequest,
                                    Pagination::ListExportTasksPaginationTraits<DerivedClient>>
  ListExportTasksPaginator(const Model::ListExportTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportTasksRequest,
                                             Pagination::ListExportTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListGraphs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphsRequest, Pagination::ListGraphsPaginationTraits<DerivedClient>>
  ListGraphsPaginator(const Model::ListGraphsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphsRequest,
                                             Pagination::ListGraphsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListGraphSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphSnapshotsRequest,
                                    Pagination::ListGraphSnapshotsPaginationTraits<DerivedClient>>
  ListGraphSnapshotsPaginator(const Model::ListGraphSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphSnapshotsRequest,
                                             Pagination::ListGraphSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImportTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportTasksRequest,
                                    Pagination::ListImportTasksPaginationTraits<DerivedClient>>
  ListImportTasksPaginator(const Model::ListImportTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportTasksRequest,
                                             Pagination::ListImportTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPrivateGraphEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivateGraphEndpointsRequest,
                                    Pagination::ListPrivateGraphEndpointsPaginationTraits<DerivedClient>>
  ListPrivateGraphEndpointsPaginator(const Model::ListPrivateGraphEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivateGraphEndpointsRequest,
                                             Pagination::ListPrivateGraphEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace NeptuneGraph
}  // namespace Aws
