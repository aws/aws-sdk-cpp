/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/osis/OSISClient.h>
#include <aws/osis/model/ListPipelineEndpointConnectionsPaginationTraits.h>
#include <aws/osis/model/ListPipelineEndpointsPaginationTraits.h>
#include <aws/osis/model/ListPipelinesPaginationTraits.h>

namespace Aws {
namespace OSIS {

using ListPipelineEndpointConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<OSISClient, Model::ListPipelineEndpointConnectionsRequest,
                                      Pagination::ListPipelineEndpointConnectionsPaginationTraits<OSISClient>>;
using ListPipelineEndpointsPaginator = Aws::Utils::Pagination::Paginator<OSISClient, Model::ListPipelineEndpointsRequest,
                                                                         Pagination::ListPipelineEndpointsPaginationTraits<OSISClient>>;
using ListPipelinesPaginator =
    Aws::Utils::Pagination::Paginator<OSISClient, Model::ListPipelinesRequest, Pagination::ListPipelinesPaginationTraits<OSISClient>>;

}  // namespace OSIS
}  // namespace Aws
