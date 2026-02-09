/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pipes/PipesClient.h>
#include <aws/pipes/model/ListPipesPaginationTraits.h>

namespace Aws {
namespace Pipes {

using ListPipesPaginator =
    Aws::Utils::Pagination::Paginator<PipesClient, Model::ListPipesRequest, Pagination::ListPipesPaginationTraits<PipesClient>>;

}  // namespace Pipes
}  // namespace Aws
