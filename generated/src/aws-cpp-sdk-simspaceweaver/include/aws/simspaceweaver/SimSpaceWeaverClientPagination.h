/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/simspaceweaver/SimSpaceWeaverClient.h>
#include <aws/simspaceweaver/model/ListAppsPaginationTraits.h>
#include <aws/simspaceweaver/model/ListSimulationsPaginationTraits.h>

namespace Aws {
namespace SimSpaceWeaver {

using ListAppsPaginator = Aws::Utils::Pagination::Paginator<SimSpaceWeaverClient, Model::ListAppsRequest,
                                                            Pagination::ListAppsPaginationTraits<SimSpaceWeaverClient>>;
using ListSimulationsPaginator = Aws::Utils::Pagination::Paginator<SimSpaceWeaverClient, Model::ListSimulationsRequest,
                                                                   Pagination::ListSimulationsPaginationTraits<SimSpaceWeaverClient>>;

}  // namespace SimSpaceWeaver
}  // namespace Aws
