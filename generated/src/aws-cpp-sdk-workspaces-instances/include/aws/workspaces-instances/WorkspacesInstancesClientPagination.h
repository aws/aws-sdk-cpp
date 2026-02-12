/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces-instances/WorkspacesInstancesClient.h>
#include <aws/workspaces-instances/model/ListInstanceTypesPaginationTraits.h>
#include <aws/workspaces-instances/model/ListRegionsPaginationTraits.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesPaginationTraits.h>

namespace Aws {
namespace WorkspacesInstances {

using ListInstanceTypesPaginator =
    Aws::Utils::Pagination::Paginator<WorkspacesInstancesClient, Model::ListInstanceTypesRequest,
                                      Pagination::ListInstanceTypesPaginationTraits<WorkspacesInstancesClient>>;
using ListRegionsPaginator = Aws::Utils::Pagination::Paginator<WorkspacesInstancesClient, Model::ListRegionsRequest,
                                                               Pagination::ListRegionsPaginationTraits<WorkspacesInstancesClient>>;
using ListWorkspaceInstancesPaginator =
    Aws::Utils::Pagination::Paginator<WorkspacesInstancesClient, Model::ListWorkspaceInstancesRequest,
                                      Pagination::ListWorkspaceInstancesPaginationTraits<WorkspacesInstancesClient>>;

}  // namespace WorkspacesInstances
}  // namespace Aws
