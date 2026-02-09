/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/neptune-graph/NeptuneGraphClient.h>
#include <aws/neptune-graph/model/ListExportTasksPaginationTraits.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsPaginationTraits.h>
#include <aws/neptune-graph/model/ListGraphsPaginationTraits.h>
#include <aws/neptune-graph/model/ListImportTasksPaginationTraits.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsPaginationTraits.h>

namespace Aws {
namespace NeptuneGraph {

using ListExportTasksPaginator = Aws::Utils::Pagination::Paginator<NeptuneGraphClient, Model::ListExportTasksRequest,
                                                                   Pagination::ListExportTasksPaginationTraits<NeptuneGraphClient>>;
using ListGraphsPaginator = Aws::Utils::Pagination::Paginator<NeptuneGraphClient, Model::ListGraphsRequest,
                                                              Pagination::ListGraphsPaginationTraits<NeptuneGraphClient>>;
using ListGraphSnapshotsPaginator = Aws::Utils::Pagination::Paginator<NeptuneGraphClient, Model::ListGraphSnapshotsRequest,
                                                                      Pagination::ListGraphSnapshotsPaginationTraits<NeptuneGraphClient>>;
using ListImportTasksPaginator = Aws::Utils::Pagination::Paginator<NeptuneGraphClient, Model::ListImportTasksRequest,
                                                                   Pagination::ListImportTasksPaginationTraits<NeptuneGraphClient>>;
using ListPrivateGraphEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneGraphClient, Model::ListPrivateGraphEndpointsRequest,
                                      Pagination::ListPrivateGraphEndpointsPaginationTraits<NeptuneGraphClient>>;

}  // namespace NeptuneGraph
}  // namespace Aws
