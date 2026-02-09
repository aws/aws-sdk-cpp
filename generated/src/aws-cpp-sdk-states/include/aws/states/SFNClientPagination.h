/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/states/SFNClient.h>
#include <aws/states/model/GetExecutionHistoryPaginationTraits.h>
#include <aws/states/model/ListActivitiesPaginationTraits.h>
#include <aws/states/model/ListExecutionsPaginationTraits.h>
#include <aws/states/model/ListMapRunsPaginationTraits.h>
#include <aws/states/model/ListStateMachinesPaginationTraits.h>

namespace Aws {
namespace SFN {

using GetExecutionHistoryPaginator = Aws::Utils::Pagination::Paginator<SFNClient, Model::GetExecutionHistoryRequest,
                                                                       Pagination::GetExecutionHistoryPaginationTraits<SFNClient>>;
using ListActivitiesPaginator =
    Aws::Utils::Pagination::Paginator<SFNClient, Model::ListActivitiesRequest, Pagination::ListActivitiesPaginationTraits<SFNClient>>;
using ListExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SFNClient, Model::ListExecutionsRequest, Pagination::ListExecutionsPaginationTraits<SFNClient>>;
using ListMapRunsPaginator =
    Aws::Utils::Pagination::Paginator<SFNClient, Model::ListMapRunsRequest, Pagination::ListMapRunsPaginationTraits<SFNClient>>;
using ListStateMachinesPaginator =
    Aws::Utils::Pagination::Paginator<SFNClient, Model::ListStateMachinesRequest, Pagination::ListStateMachinesPaginationTraits<SFNClient>>;

}  // namespace SFN
}  // namespace Aws
