/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pcs/PCSClient.h>
#include <aws/pcs/model/ListClustersPaginationTraits.h>
#include <aws/pcs/model/ListComputeNodeGroupsPaginationTraits.h>
#include <aws/pcs/model/ListQueuesPaginationTraits.h>

namespace Aws {
namespace PCS {

using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<PCSClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<PCSClient>>;
using ListComputeNodeGroupsPaginator = Aws::Utils::Pagination::Paginator<PCSClient, Model::ListComputeNodeGroupsRequest,
                                                                         Pagination::ListComputeNodeGroupsPaginationTraits<PCSClient>>;
using ListQueuesPaginator =
    Aws::Utils::Pagination::Paginator<PCSClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<PCSClient>>;

}  // namespace PCS
}  // namespace Aws
